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

#include "ReferenceType.hxx"

#include "TransformsType.hxx"

#include "DigestMethodType.hxx"

#include "DigestValueType.hxx"

namespace oadr2b
{
  namespace sig
  {
    // ReferenceType
    // 

    const ReferenceType::Transforms_optional& ReferenceType::
    Transforms () const
    {
      return this->Transforms_;
    }

    ReferenceType::Transforms_optional& ReferenceType::
    Transforms ()
    {
      return this->Transforms_;
    }

    void ReferenceType::
    Transforms (const Transforms_type& x)
    {
      this->Transforms_.set (x);
    }

    void ReferenceType::
    Transforms (const Transforms_optional& x)
    {
      this->Transforms_ = x;
    }

    void ReferenceType::
    Transforms (::std::unique_ptr< Transforms_type > x)
    {
      this->Transforms_.set (std::move (x));
    }

    const ReferenceType::DigestMethod_type& ReferenceType::
    DigestMethod () const
    {
      return this->DigestMethod_.get ();
    }

    ReferenceType::DigestMethod_type& ReferenceType::
    DigestMethod ()
    {
      return this->DigestMethod_.get ();
    }

    void ReferenceType::
    DigestMethod (const DigestMethod_type& x)
    {
      this->DigestMethod_.set (x);
    }

    void ReferenceType::
    DigestMethod (::std::unique_ptr< DigestMethod_type > x)
    {
      this->DigestMethod_.set (std::move (x));
    }

    const ReferenceType::DigestValue_type& ReferenceType::
    DigestValue () const
    {
      return this->DigestValue_.get ();
    }

    ReferenceType::DigestValue_type& ReferenceType::
    DigestValue ()
    {
      return this->DigestValue_.get ();
    }

    void ReferenceType::
    DigestValue (const DigestValue_type& x)
    {
      this->DigestValue_.set (x);
    }

    void ReferenceType::
    DigestValue (::std::unique_ptr< DigestValue_type > x)
    {
      this->DigestValue_.set (std::move (x));
    }

    const ReferenceType::Id_optional& ReferenceType::
    Id () const
    {
      return this->Id_;
    }

    ReferenceType::Id_optional& ReferenceType::
    Id ()
    {
      return this->Id_;
    }

    void ReferenceType::
    Id (const Id_type& x)
    {
      this->Id_.set (x);
    }

    void ReferenceType::
    Id (const Id_optional& x)
    {
      this->Id_ = x;
    }

    void ReferenceType::
    Id (::std::unique_ptr< Id_type > x)
    {
      this->Id_.set (std::move (x));
    }

    const ReferenceType::URI_optional& ReferenceType::
    URI () const
    {
      return this->URI_;
    }

    ReferenceType::URI_optional& ReferenceType::
    URI ()
    {
      return this->URI_;
    }

    void ReferenceType::
    URI (const URI_type& x)
    {
      this->URI_.set (x);
    }

    void ReferenceType::
    URI (const URI_optional& x)
    {
      this->URI_ = x;
    }

    void ReferenceType::
    URI (::std::unique_ptr< URI_type > x)
    {
      this->URI_.set (std::move (x));
    }

    const ReferenceType::Type_optional& ReferenceType::
    Type () const
    {
      return this->Type_;
    }

    ReferenceType::Type_optional& ReferenceType::
    Type ()
    {
      return this->Type_;
    }

    void ReferenceType::
    Type (const Type_type& x)
    {
      this->Type_.set (x);
    }

    void ReferenceType::
    Type (const Type_optional& x)
    {
      this->Type_ = x;
    }

    void ReferenceType::
    Type (::std::unique_ptr< Type_type > x)
    {
      this->Type_.set (std::move (x));
    }
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

namespace oadr2b
{
  namespace sig
  {
    // ReferenceType
    //

    ReferenceType::
    ReferenceType (const DigestMethod_type& DigestMethod,
                   const DigestValue_type& DigestValue)
    : ::xml_schema::type (),
      Transforms_ (this),
      DigestMethod_ (DigestMethod, this),
      DigestValue_ (DigestValue, this),
      Id_ (this),
      URI_ (this),
      Type_ (this)
    {
    }

    ReferenceType::
    ReferenceType (::std::unique_ptr< DigestMethod_type > DigestMethod,
                   const DigestValue_type& DigestValue)
    : ::xml_schema::type (),
      Transforms_ (this),
      DigestMethod_ (std::move (DigestMethod), this),
      DigestValue_ (DigestValue, this),
      Id_ (this),
      URI_ (this),
      Type_ (this)
    {
    }

    ReferenceType::
    ReferenceType (const ReferenceType& x,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      Transforms_ (x.Transforms_, f, this),
      DigestMethod_ (x.DigestMethod_, f, this),
      DigestValue_ (x.DigestValue_, f, this),
      Id_ (x.Id_, f, this),
      URI_ (x.URI_, f, this),
      Type_ (x.Type_, f, this)
    {
    }

    ReferenceType::
    ReferenceType (const ::xercesc::DOMElement& e,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      Transforms_ (this),
      DigestMethod_ (this),
      DigestValue_ (this),
      Id_ (this),
      URI_ (this),
      Type_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void ReferenceType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // Transforms
        //
        if (n.name () == "Transforms" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< Transforms_type > r (
            Transforms_traits::create (i, f, this));

          if (!this->Transforms_)
          {
            this->Transforms_.set (::std::move (r));
            continue;
          }
        }

        // DigestMethod
        //
        if (n.name () == "DigestMethod" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< DigestMethod_type > r (
            DigestMethod_traits::create (i, f, this));

          if (!DigestMethod_.present ())
          {
            this->DigestMethod_.set (::std::move (r));
            continue;
          }
        }

        // DigestValue
        //
        if (n.name () == "DigestValue" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< DigestValue_type > r (
            DigestValue_traits::create (i, f, this));

          if (!DigestValue_.present ())
          {
            this->DigestValue_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!DigestMethod_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "DigestMethod",
          "http://www.w3.org/2000/09/xmldsig#");
      }

      if (!DigestValue_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "DigestValue",
          "http://www.w3.org/2000/09/xmldsig#");
      }

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "Id" && n.namespace_ ().empty ())
        {
          this->Id_.set (Id_traits::create (i, f, this));
          continue;
        }

        if (n.name () == "URI" && n.namespace_ ().empty ())
        {
          this->URI_.set (URI_traits::create (i, f, this));
          continue;
        }

        if (n.name () == "Type" && n.namespace_ ().empty ())
        {
          this->Type_.set (Type_traits::create (i, f, this));
          continue;
        }
      }
    }

    ReferenceType* ReferenceType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class ReferenceType (*this, f, c);
    }

    ReferenceType& ReferenceType::
    operator= (const ReferenceType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->Transforms_ = x.Transforms_;
        this->DigestMethod_ = x.DigestMethod_;
        this->DigestValue_ = x.DigestValue_;
        this->Id_ = x.Id_;
        this->URI_ = x.URI_;
        this->Type_ = x.Type_;
      }

      return *this;
    }

    ReferenceType::
    ~ReferenceType ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace sig
  {
  }
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

namespace oadr2b
{
  namespace sig
  {
    void
    operator<< (::xercesc::DOMElement& e, const ReferenceType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // Transforms
      //
      if (i.Transforms ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "Transforms",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.Transforms ();
      }

      // DigestMethod
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "DigestMethod",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << i.DigestMethod ();
      }

      // DigestValue
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "DigestValue",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << i.DigestValue ();
      }

      // Id
      //
      if (i.Id ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "Id",
            e));

        a << *i.Id ();
      }

      // URI
      //
      if (i.URI ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "URI",
            e));

        a << *i.URI ();
      }

      // Type
      //
      if (i.Type ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "Type",
            e));

        a << *i.Type ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

