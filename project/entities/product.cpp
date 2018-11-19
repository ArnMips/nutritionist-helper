#include "entities/product.h"

ProductEntity::ProductEntity()
    :m_id(-1)
    ,m_name("Unknown")
    ,m_description("none")
    ,m_proteins(0)
    ,m_fats(0)
    ,m_carbohydrates(0)
    ,m_kilocalories(0)
    ,m_units(UnitsType::UNDEF)
{
}

ProductEntity::ProductEntity(int id
                            , QString name
                            , QString description
                            , unsigned proteins
                            , unsigned fats
                            , unsigned carbohydrates
                            , unsigned kilocalories
                            , UnitsType units)
    :m_id(id)
    ,m_name(name)
    ,m_description(description)
    ,m_proteins(proteins)
    ,m_fats(fats)
    ,m_carbohydrates(carbohydrates)
    ,m_kilocalories(kilocalories)
    ,m_units(units)
{
}

QString ProductEntity::name() const
{
    return m_name;
}

QString ProductEntity::description() const
{
    return m_description;
}

unsigned ProductEntity::proteins() const
{
    return m_proteins;
}

unsigned ProductEntity::fats() const
{
    return m_fats;
}

unsigned ProductEntity::carbohydrates() const
{
    return m_carbohydrates;
}

unsigned ProductEntity::kilocalories() const
{
    return m_kilocalories;
}

int ProductEntity::id() const
{
    return m_id;
}

void ProductEntity::setId(const int &id)
{
    m_id = id;
}

ProductEntity::UnitsType ProductEntity::units() const
{
    return m_units;
}

WeightedProduct::WeightedProduct(ProductEntity product, int amound)
    :m_product(product)
    ,m_amound(amound)
{
}

ProductEntity WeightedProduct::product() const
{
    return m_product;
}

int WeightedProduct::amound() const
{
    return m_amound;
}
