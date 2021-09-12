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

#include "SpecifierPayloadType.hxx"

#include "ItemBaseType.hxx"

#include "ReadingTypeType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // SpecifierPayloadType
    // 

    const SpecifierPayloadType::rID_type& SpecifierPayloadType::
    rID () const
    {
      return this->rID_.get ();
    }

    SpecifierPayloadType::rID_type& SpecifierPayloadType::
    rID ()
    {
      return this->rID_.get ();
    }

    void SpecifierPayloadType::
    rID (const rID_type& x)
    {
      this->rID_.set (x);
    }

    void SpecifierPayloadType::
    rID (::std::unique_ptr< rID_type > x)
    {
      this->rID_.set (std::move (x));
    }

    const SpecifierPayloadType::itemBase_optional& SpecifierPayloadType::
    itemBase () const
    {
      return this->itemBase_;
    }

    SpecifierPayloadType::itemBase_optional& SpecifierPayloadType::
    itemBase ()
    {
      return this->itemBase_;
    }

    void SpecifierPayloadType::
    itemBase (const itemBase_type& x)
    {
      this->itemBase_.set (x);
    }

    void SpecifierPayloadType::
    itemBase (const itemBase_optional& x)
    {
      this->itemBase_ = x;
    }

    void SpecifierPayloadType::
    itemBase (::std::unique_ptr< itemBase_type > x)
    {
      this->itemBase_.set (std::move (x));
    }

    const SpecifierPayloadType::readingType_type& SpecifierPayloadType::
    readingType () const
    {
      return this->readingType_.get ();
    }

    SpecifierPayloadType::readingType_type& SpecifierPayloadType::
    readingType ()
    {
      return this->readingType_.get ();
    }

    void SpecifierPayloadType::
    readingType (const readingType_type& x)
    {
      this->readingType_.set (x);
    }

    void SpecifierPayloadType::
    readingType (::std::unique_ptr< readingType_type > x)
    {
      this->readingType_.set (std::move (x));
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
  namespace ei
  {
    // SpecifierPayloadType
    //

    SpecifierPayloadType::
    SpecifierPayloadType (const rID_type& rID,
                          const readingType_type& readingType)
    : ::xml_schema::type (),
      rID_ (rID, this),
      itemBase_ (this),
      readingType_ (readingType, this)
    {
    }

    SpecifierPayloadType::
    SpecifierPayloadType (const SpecifierPayloadType& x,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      rID_ (x.rID_, f, this),
      itemBase_ (x.itemBase_, f, this),
      readingType_ (x.readingType_, f, this)
    {
    }

    SpecifierPayloadType::
    SpecifierPayloadType (const ::xercesc::DOMElement& e,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      rID_ (this),
      itemBase_ (this),
      readingType_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void SpecifierPayloadType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // rID
        //
        if (n.name () == "rID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< rID_type > r (
            rID_traits::create (i, f, this));

          if (!rID_.present ())
          {
            this->rID_.set (::std::move (r));
            continue;
          }
        }

        // itemBase
        //
        {
          ::std::unique_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "itemBase",
              "http://docs.oasis-open.org/ns/emix/2011/06",
              &::xsd::cxx::tree::factory_impl< itemBase_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!this->itemBase_)
            {
              ::std::unique_ptr< itemBase_type > r (
                dynamic_cast< itemBase_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->itemBase_.set (::std::move (r));
              continue;
            }
          }
        }

        // readingType
        //
        if (n.name () == "readingType" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< readingType_type > r (
            readingType_traits::create (i, f, this));

          if (!readingType_.present ())
          {
            this->readingType_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!rID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "rID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!readingType_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "readingType",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }
    }

    SpecifierPayloadType* SpecifierPayloadType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class SpecifierPayloadType (*this, f, c);
    }

    SpecifierPayloadType& SpecifierPayloadType::
    operator= (const SpecifierPayloadType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->rID_ = x.rID_;
        this->itemBase_ = x.itemBase_;
        this->readingType_ = x.readingType_;
      }

      return *this;
    }

    SpecifierPayloadType::
    ~SpecifierPayloadType ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace ei
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
  namespace ei
  {
    void
    operator<< (::xercesc::DOMElement& e, const SpecifierPayloadType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // rID
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "rID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.rID ();
      }

      // itemBase
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        if (i.itemBase ())
        {
          const SpecifierPayloadType::itemBase_type& x (*i.itemBase ());
          if (typeid (SpecifierPayloadType::itemBase_type) == typeid (x))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "itemBase",
                "http://docs.oasis-open.org/ns/emix/2011/06",
                e));

            s << x;
          }
          else
            tsm.serialize (
              "itemBase",
              "http://docs.oasis-open.org/ns/emix/2011/06",
              true, true, e, x);
        }
      }

      // readingType
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "readingType",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.readingType ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

