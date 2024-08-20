#include "Entity.hpp"

namespace RedatamLib
{

Entity::Entity() : 
    m_name(""),
    m_parentName(""),
    m_description(""),
    m_indexFilename(""),
    m_child(nullptr),
    m_variables(),
    m_bounds({0, 0})
{}

Entity::Entity(string name,
                string parentName,
                string description,
                string idxFileName,
                pair<size_t, size_t> bounds) :
    m_name(name),
    m_parentName(parentName),
    m_description(description),
    m_indexFilename(idxFileName),
    m_child(nullptr),
    m_variables(),
    m_bounds(bounds)
{}

string Entity::GetName() const
{
    return m_name;
}

string Entity::GetParentName() const
{
    return m_parentName;
}

pair<size_t, size_t> Entity::GetBounds() const
{
    return m_bounds;
}

void Entity::AttachChild(Entity* child)
{
    m_child = child;
}

void Entity::AttachVariables(vector<Variable> variables)
{
    m_variables = variables;
}

} // namespace RedatamLib
