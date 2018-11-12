#include "recipe.h"

RecipeEntity::RecipeEntity(int id, QString name, QVector<WeightedProduct> products, QStringList cookingPoints)
    :m_id(id)
    ,m_name(name)
    ,m_products(products)
    ,m_cookingPoints(cookingPoints)
{
}

int RecipeEntity::id() const
{
    return m_id;
}

QString RecipeEntity::name() const
{
    return m_name;
}

QVector<WeightedProduct> RecipeEntity::products() const
{
    return m_products;
}

QStringList RecipeEntity::cookingPoints() const
{
    return m_cookingPoints;
}