#include "resiprocate/GenericContents.hxx"

using namespace resip;

GenericContents::GenericContents()
   : PlainContents()
{}

GenericContents::GenericContents(const Data& text)
   : PlainContents(text)
{}

GenericContents::GenericContents(HeaderFieldValue* hfv, const Mime& contentType)
   : PlainContents(hfv, contentType)
{}

GenericContents::GenericContents(const Data& data, const Mime& contentType)
   : PlainContents(data, contentType)
{}

GenericContents::GenericContents(const GenericContents& rhs)
   : PlainContents(rhs)
{}

GenericContents::~GenericContents()
{}

GenericContents& 
GenericContents::operator=(const GenericContents& rhs)
{
   this->PlainContents::operator=(rhs);
}

Contents* 
GenericContents::clone() const
{
   return new GenericContents(*this);
}
