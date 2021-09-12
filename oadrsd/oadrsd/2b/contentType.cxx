// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "contentType.hxx"

namespace Atom
{
  // contentType
  // 

  const contentType::type_optional& contentType::
  type () const
  {
    return this->type_;
  }

  contentType::type_optional& contentType::
  type ()
  {
    return this->type_;
  }

  void contentType::
  type (const type_type& x)
  {
    this->type_.set (x);
  }

  void contentType::
  type (const type_optional& x)
  {
    this->type_ = x;
  }

  void contentType::
  type (::std::unique_ptr< type_type > x)
  {
    this->type_.set (std::move (x));
  }

  const contentType::src_optional& contentType::
  src () const
  {
    return this->src_;
  }

  contentType::src_optional& contentType::
  src ()
  {
    return this->src_;
  }

  void contentType::
  src (const src_type& x)
  {
    this->src_.set (x);
  }

  void contentType::
  src (const src_optional& x)
  {
    this->src_ = x;
  }

  void contentType::
  src (::std::unique_ptr< src_type > x)
  {
    this->src_.set (std::move (x));
  }

  const contentType::base_optional& contentType::
  base () const
  {
    return this->base_;
  }

  contentType::base_optional& contentType::
  base ()
  {
    return this->base_;
  }

  void contentType::
  base (const base_type& x)
  {
    this->base_.set (x);
  }

  void contentType::
  base (const base_optional& x)
  {
    this->base_ = x;
  }

  void contentType::
  base (::std::unique_ptr< base_type > x)
  {
    this->base_.set (std::move (x));
  }

  const contentType::lang_optional& contentType::
  lang () const
  {
    return this->lang_;
  }

  contentType::lang_optional& contentType::
  lang ()
  {
    return this->lang_;
  }

  void contentType::
  lang (const lang_type& x)
  {
    this->lang_.set (x);
  }

  void contentType::
  lang (const lang_optional& x)
  {
    this->lang_ = x;
  }

  void contentType::
  lang (::std::unique_ptr< lang_type > x)
  {
    this->lang_.set (std::move (x));
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace Atom
{
  // contentType
  //

  contentType::
  contentType ()
  : ::xml_schema::type (),
    type_ (this),
    src_ (this),
    base_ (this),
    lang_ (this)
  {
  }

  contentType::
  contentType (const contentType& x,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    type_ (x.type_, f, this),
    src_ (x.src_, f, this),
    base_ (x.base_, f, this),
    lang_ (x.lang_, f, this)
  {
  }

  contentType::
  contentType (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    type_ (this),
    src_ (this),
    base_ (this),
    lang_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
      this->parse (p, f);
    }
  }

  void contentType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      break;
    }

    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "type" && n.namespace_ ().empty ())
      {
        this->type_.set (type_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "src" && n.namespace_ ().empty ())
      {
        this->src_.set (src_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "base" && n.namespace_ () == "http://www.w3.org/XML/1998/namespace")
      {
        this->base_.set (base_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "lang" && n.namespace_ () == "http://www.w3.org/XML/1998/namespace")
      {
        this->lang_.set (lang_traits::create (i, f, this));
        continue;
      }
    }
  }

  contentType* contentType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class contentType (*this, f, c);
  }

  contentType& contentType::
  operator= (const contentType& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->type_ = x.type_;
      this->src_ = x.src_;
      this->base_ = x.base_;
      this->lang_ = x.lang_;
    }

    return *this;
  }

  contentType::
  ~contentType ()
  {
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace Atom
{
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace Atom
{
  void
  operator<< (::xercesc::DOMElement& e, const contentType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // type
    //
    if (i.type ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "type",
          e));

      a << *i.type ();
    }

    // src
    //
    if (i.src ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "src",
          e));

      a << *i.src ();
    }

    // base
    //
    if (i.base ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "base",
          "http://www.w3.org/XML/1998/namespace",
          e));

      a << *i.base ();
    }

    // lang
    //
    if (i.lang ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "lang",
          "http://www.w3.org/XML/1998/namespace",
          e));

      a << *i.lang ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

