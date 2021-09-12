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

#include "BaseUnitType.hxx"

#include "SiScaleCodeType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // BaseUnitType
    // 

    const BaseUnitType::itemDescription_type& BaseUnitType::
    itemDescription () const
    {
      return this->itemDescription_.get ();
    }

    BaseUnitType::itemDescription_type& BaseUnitType::
    itemDescription ()
    {
      return this->itemDescription_.get ();
    }

    void BaseUnitType::
    itemDescription (const itemDescription_type& x)
    {
      this->itemDescription_.set (x);
    }

    void BaseUnitType::
    itemDescription (::std::unique_ptr< itemDescription_type > x)
    {
      this->itemDescription_.set (std::move (x));
    }

    const BaseUnitType::itemUnits_type& BaseUnitType::
    itemUnits () const
    {
      return this->itemUnits_.get ();
    }

    BaseUnitType::itemUnits_type& BaseUnitType::
    itemUnits ()
    {
      return this->itemUnits_.get ();
    }

    void BaseUnitType::
    itemUnits (const itemUnits_type& x)
    {
      this->itemUnits_.set (x);
    }

    void BaseUnitType::
    itemUnits (::std::unique_ptr< itemUnits_type > x)
    {
      this->itemUnits_.set (std::move (x));
    }

    const BaseUnitType::siScaleCode_type& BaseUnitType::
    siScaleCode () const
    {
      return this->siScaleCode_.get ();
    }

    BaseUnitType::siScaleCode_type& BaseUnitType::
    siScaleCode ()
    {
      return this->siScaleCode_.get ();
    }

    void BaseUnitType::
    siScaleCode (const siScaleCode_type& x)
    {
      this->siScaleCode_.set (x);
    }

    void BaseUnitType::
    siScaleCode (::std::unique_ptr< siScaleCode_type > x)
    {
      this->siScaleCode_.set (std::move (x));
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
  namespace oadr
  {
    // BaseUnitType
    //

    BaseUnitType::
    BaseUnitType (const itemDescription_type& itemDescription,
                  const itemUnits_type& itemUnits,
                  const siScaleCode_type& siScaleCode)
    : ::oadr2b::emix::ItemBaseType (),
      itemDescription_ (itemDescription, this),
      itemUnits_ (itemUnits, this),
      siScaleCode_ (siScaleCode, this)
    {
    }

    BaseUnitType::
    BaseUnitType (const BaseUnitType& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::oadr2b::emix::ItemBaseType (x, f, c),
      itemDescription_ (x.itemDescription_, f, this),
      itemUnits_ (x.itemUnits_, f, this),
      siScaleCode_ (x.siScaleCode_, f, this)
    {
    }

    BaseUnitType::
    BaseUnitType (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::oadr2b::emix::ItemBaseType (e, f | ::xml_schema::flags::base, c),
      itemDescription_ (this),
      itemUnits_ (this),
      siScaleCode_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void BaseUnitType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // itemDescription
        //
        if (n.name () == "itemDescription" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< itemDescription_type > r (
            itemDescription_traits::create (i, f, this));

          if (!itemDescription_.present ())
          {
            this->itemDescription_.set (::std::move (r));
            continue;
          }
        }

        // itemUnits
        //
        if (n.name () == "itemUnits" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< itemUnits_type > r (
            itemUnits_traits::create (i, f, this));

          if (!itemUnits_.present ())
          {
            this->itemUnits_.set (::std::move (r));
            continue;
          }
        }

        // siScaleCode
        //
        if (n.name () == "siScaleCode" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/siscale")
        {
          ::std::unique_ptr< siScaleCode_type > r (
            siScaleCode_traits::create (i, f, this));

          if (!siScaleCode_.present ())
          {
            this->siScaleCode_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!itemDescription_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "itemDescription",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!itemUnits_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "itemUnits",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!siScaleCode_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "siScaleCode",
          "http://docs.oasis-open.org/ns/emix/2011/06/siscale");
      }
    }

    BaseUnitType* BaseUnitType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class BaseUnitType (*this, f, c);
    }

    BaseUnitType& BaseUnitType::
    operator= (const BaseUnitType& x)
    {
      if (this != &x)
      {
        static_cast< ::oadr2b::emix::ItemBaseType& > (*this) = x;
        this->itemDescription_ = x.itemDescription_;
        this->itemUnits_ = x.itemUnits_;
        this->siScaleCode_ = x.siScaleCode_;
      }

      return *this;
    }

    BaseUnitType::
    ~BaseUnitType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, BaseUnitType >
    _xsd_BaseUnitType_type_factory_init (
      "BaseUnitType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace oadr
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
  namespace oadr
  {
    void
    operator<< (::xercesc::DOMElement& e, const BaseUnitType& i)
    {
      e << static_cast< const ::oadr2b::emix::ItemBaseType& > (i);

      // itemDescription
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "itemDescription",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.itemDescription ();
      }

      // itemUnits
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "itemUnits",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.itemUnits ();
      }

      // siScaleCode
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "siScaleCode",
            "http://docs.oasis-open.org/ns/emix/2011/06/siscale",
            e));

        s << i.siScaleCode ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, BaseUnitType >
    _xsd_BaseUnitType_type_serializer_init (
      "BaseUnitType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

