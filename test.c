(?<typename>[(]
						(?<typesandqualifiersfacet>\bint\b|\bchar\b|\bshort\b|\blong\b|\bsigned\b|\bunsigned\b|\bfloat\b|\bdouble\b|(?<qualifiers>\bconst\b|\brestrict\b|\bvolatile\b))++
						((?<abstdecl>(?<abstrptrrev>(?<abstrptr>[*]((?&qualifiers))*+)(?!(?&abstrptrrev)(?C11))
						(?<abstrrest>(?<abstrmostoutter>[(](?&abstdecl)[)])?+(?<abstrsubs>\[(?&primexpr)\])*+(?C11))|
						(?&abstrptr))(?<abstdeclinside>(?&abstrptr)*+([(](?&abstdeclinside)[)])?+(\[(?&primexprfacet)\])*+))|(?&abstrmostoutter)?+(?&abstrsubs)*+)[)])

(?<typenamerev>(?&typenamefacet)
						(?!(?&primexpr))|(?&typename)(?&primexprfacet))

(?<typenamefacet>[(](?&typesandqualifiersfacet)++(?&abstdeclinside)[)])

(?<typenamerevfacet>(?&typenamefacet)(?&primexprfacet))