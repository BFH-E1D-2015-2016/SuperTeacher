#pragma once

#include <string>
#include <memory>
#include <unordered_map>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "JSON.h"


/**
 * # Ressource Manager
 *
 * This class is used to get assets data like image, or music.
 *
 * ## Functionality
 *
 * - Find a file on the filesystem
 * - Automaticaly create corresponding SFML object
 * - Caching file in memory or caching SFML object when needed
 */
class ResourceManager {
public:
    std::shared_ptr<sf::Music> get_music(std::string id);

    /**
     * Get a sf::Texture from an image file
     */
    std::shared_ptr<sf::Texture> get_texture(std::string key);
    std::shared_ptr<const sf::Font> get_font(std::string id);
    std::shared_ptr<const json> get_json(std::string id);
private:
    std::unordered_map<std::string, std::shared_ptr<const json>> m_json_cache;
    std::unordered_map<std::string, std::shared_ptr<sf::Texture>> m_texture_cache;
    std::unordered_map<std::string, std::shared_ptr<const sf::Font>> m_font_cache;
};
