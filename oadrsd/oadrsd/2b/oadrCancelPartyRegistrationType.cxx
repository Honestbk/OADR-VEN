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

#include "oadrCancelPartyRegistrationType.hxx"

#include "UidType.hxx"

#include "schemaVersionType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrCancelPartyRegistrationType
    // 

    const oadrCancelPartyRegistrationType::requestID_type& oadrCancelPartyRegistrationType::
    requestID () const
    {
      return this->requestID_.get ();
    }

    oadrCancelPartyRegistrationType::requestID_type& oadrCancelPartyRegistrationType::
    requestID ()
    {
      return this->requestID_.get ();
    }

    void oadrCancelPartyRegistrationType::
    requestID (const requestID_type& x)
    {
      this->requestID_.set (x);
    }

    void oadrCancelPartyRegistrationType::
    requestID (::std::unique_ptr< requestID_type > x)
    {
      this->requestID_.set (std::move (x));
    }

    const oadrCancelPartyRegistrationType::registrationID_type& oadrCancelPartyRegistrationType::
    registrationID () const
    {
      return this->registrationID_.get ();
    }

    oadrCancelPartyRegistrationType::registrationID_type& oadrCancelPartyRegistrationType::
    registrationID ()
    {
      return this->registrationID_.get ();
    }

    void oadrCancelPartyRegistrationType::
    registrationID (const registrationID_type& x)
    {
      this->registrationID_.set (x);
    }

    void oadrCancelPartyRegistrationType::
    registrationID (::std::unique_ptr< registrationID_type > x)
    {
      this->registrationID_.set (std::move (x));
    }

    const oadrCancelPartyRegistrationType::venID_optional& oadrCancelPartyRegistrationType::
    venID () const
    {
      return this->venID_;
    }

    oadrCancelPartyRegistrationType::venID_optional& oadrCancelPartyRegistrationType::
    venID ()
    {
      return this->venID_;
    }

    void oadrCancelPartyRegistrationType::
    venID (const venID_type& x)
    {
      this->venID_.set (x);
    }

    void oadrCancelPartyRegistrationType::
    venID (const venID_optional& x)
    {
      this->venID_ = x;
    }

    void oadrCancelPartyRegistrationType::
    venID (::std::unique_ptr< venID_type > x)
    {
      this->venID_.set (std::move (x));
    }

    const oadrCancelPartyRegistrationType::schemaVersion_optional& oadrCancelPartyRegistrationType::
    schemaVersion () const
    {
      return this->schemaVersion_;
    }

    oadrCancelPartyRegistrationType::schemaVersion_optional& oadrCancelPartyRegistrationType::
    schemaVersion ()
    {
      return this->schemaVersion_;
    }

    void oadrCancelPartyRegistrationType::
    schemaVersion (const schemaVersion_type& x)
    {
      this->schemaVersion_.set (x);
    }

    void oadrCancelPartyRegistrationType::
    schemaVersion (const schemaVersion_optional& x)
    {
      this->schemaVersion_ = x;
    }

    void oadrCancelPartyRegistrationType::
    schemaVersion (::std::unique_ptr< schemaVersion_type > x)
    {
      this->schemaVersion_.set (std::move (x));
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
    // oadrCancelPartyRegistrationType
    //

    oadrCancelPartyRegistrationType::
    oadrCancelPartyRegistrationType (const requestID_type& requestID,
                                     const registrationID_type& registrationID)
    : ::xml_schema::type (),
      requestID_ (requestID, this),
      registrationID_ (registrationID, this),
      venID_ (this),
      schemaVersion_ (this)
    {
    }

    oadrCancelPartyRegistrationType::
    oadrCancelPartyRegistrationType (const requestID_type& requestID,
                                     ::std::unique_ptr< registrationID_type > registrationID)
    : ::xml_schema::type (),
      requestID_ (requestID, this),
      registrationID_ (std::move (registrationID), this),
      venID_ (this),
      schemaVersion_ (this)
    {
    }

    oadrCancelPartyRegistrationType::
    oadrCancelPartyRegistrationType (const oadrCancelPartyRegistrationType& x,
                                     ::xml_schema::flags f,
                                     ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      requestID_ (x.requestID_, f, this),
      registrationID_ (x.registrationID_, f, this),
      venID_ (x.venID_, f, this),
      schemaVersion_ (x.schemaVersion_, f, this)
    {
    }

    oadrCancelPartyRegistrationType::
    oadrCancelPartyRegistrationType (const ::xercesc::DOMElement& e,
                                     ::xml_schema::flags f,
                                     ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      requestID_ (this),
      registrationID_ (this),
      venID_ (this),
      schemaVersion_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void oadrCancelPartyRegistrationType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // requestID
        //
        if (n.name () == "requestID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110/payloads")
        {
          ::std::unique_ptr< requestID_type > r (
            requestID_traits::create (i, f, this));

          if (!requestID_.present ())
          {
            this->requestID_.set (::std::move (r));
            continue;
          }
        }

        // registrationID
        //
        {
          ::std::unique_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "registrationID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< registrationID_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!registrationID_.present ())
            {
              ::std::unique_ptr< registrationID_type > r (
                dynamic_cast< registrationID_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->registrationID_.set (::std::move (r));
              continue;
            }
          }
        }

        // venID
        //
        if (n.name () == "venID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< venID_type > r (
            venID_traits::create (i, f, this));

          if (!this->venID_)
          {
            this->venID_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!requestID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "requestID",
          "http://docs.oasis-open.org/ns/energyinterop/201110/payloads");
      }

      if (!registrationID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "registrationID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "schemaVersion" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          this->schemaVersion_.set (schemaVersion_traits::create (i, f, this));
          continue;
        }
      }
    }

    oadrCancelPartyRegistrationType* oadrCancelPartyRegistrationType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrCancelPartyRegistrationType (*this, f, c);
    }

    oadrCancelPartyRegistrationType& oadrCancelPartyRegistrationType::
    operator= (const oadrCancelPartyRegistrationType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->requestID_ = x.requestID_;
        this->registrationID_ = x.registrationID_;
        this->venID_ = x.venID_;
        this->schemaVersion_ = x.schemaVersion_;
      }

      return *this;
    }

    oadrCancelPartyRegistrationType::
    ~oadrCancelPartyRegistrationType ()
    {
    }
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
    operator<< (::xercesc::DOMElement& e, const oadrCancelPartyRegistrationType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // requestID
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "requestID",
            "http://docs.oasis-open.org/ns/energyinterop/201110/payloads",
            e));

        s << i.requestID ();
      }

      // registrationID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrCancelPartyRegistrationType::registrationID_type& x (i.registrationID ());
        if (typeid (oadrCancelPartyRegistrationType::registrationID_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "registrationID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "registrationID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            true, true, e, x);
      }

      // venID
      //
      if (i.venID ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "venID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *i.venID ();
      }

      // schemaVersion
      //
      if (i.schemaVersion ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "schemaVersion",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        a << *i.schemaVersion ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

