#include "product.h"

ProductEntity::ProductEntity()
    :m_id(-1)
    ,m_name("Unknown")
    ,m_description("none")
    ,m_proteins(0)
    ,m_fats(0)
    ,m_carbohydrates(0)
    ,m_kilocalories(0)
{
}

ProductEntity::ProductEntity(int id
                            ,QString name
                            ,QString description
                            ,unsigned proteins
                            ,unsigned fats
                            ,unsigned carbohydrates
                            ,unsigned kilocalories)
    :m_id(id)
    ,m_name(name)
    ,m_description(description)
    ,m_proteins(proteins)
    ,m_fats(fats)
    ,m_carbohydrates(carbohydrates)
    ,m_kilocalories(kilocalories)
{
}

QString ProductEntity::name() const
{
    return m_name;
}

void ProductEntity::setName(const QString &name)
{
    m_name = name;
}

QString ProductEntity::description() const
{
    return m_description;
}

void ProductEntity::setDescription(const QString &description)
{
    m_description = description;
}

unsigned ProductEntity::proteins() const
{
    return m_proteins;
}

void ProductEntity::setProteins(const unsigned &proteins)
{
    m_proteins = proteins;
}

unsigned ProductEntity::fats() const
{
    return m_fats;
}

void ProductEntity::setFats(const unsigned &fats)
{
    m_fats = fats;
}

unsigned ProductEntity::carbohydrates() const
{
    return m_carbohydrates;
}

void ProductEntity::setCarbohydrates(const unsigned &carbohydrates)
{
    m_carbohydrates = carbohydrates;
}

unsigned ProductEntity::kilocalories() const
{
    return m_kilocalories;
}

void ProductEntity::setKilocalories(const unsigned &kilocalories)
{
    m_kilocalories = kilocalories;
}

int ProductEntity::id() const
{
    return m_id;
}

void ProductEntity::setId(const int &id)
{
    m_id = id;
}

ProductEntity WeightedProduct::product() const
{
    return m_product;
}

int WeightedProduct::amound() const
{
    return m_amound;
}

UnitsType WeightedProduct::units() const
{
    return m_units;
}