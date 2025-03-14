//
// Created by andyl on 2025/3/8.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

#include "Util/GameObject.hpp"
#include "Util/Animation.hpp"

class Character : public Util::GameObject {
public:
    enum class MoveState {
        IDLE,
        JUMP,
        RUN,
        SHOOT,
    };
    explicit Character(const std::string& ImagePath);

    Character(const Character&) = delete;

    Character(Character&&) = delete;

    Character& operator=(const Character&) = delete;

    Character& operator=(Character&&) = delete;

    [[nodiscard]] const std::string& GetImagePath() const { return m_ImagePath; }

    [[nodiscard]] const glm::vec2& GetPosition() const { return m_Transform.translation; }

    [[nodiscard]] bool GetVisibility() const { return m_Visible; }

    void SetImage(const std::string& ImagePath);

    void SetPosition(const glm::vec2& Position) { m_Transform.translation = Position; }

    void shoot(glm::vec2 playerPosition) {

    }


private:
    void ResetPosition() { m_Transform.translation = {0, 0}; }

    std::string m_ImagePath;

};



#endif //CHARACTER_HPP
