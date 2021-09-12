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

#include "AvailableType.hxx"

#include "properties.hxx"

namespace icalendar_2_0
{
  // AvailableType
  // 

  const AvailableType::properties_type& AvailableType::
  properties () const
  {
    return this->properties_.get ();
  }

  AvailableType::properties_type& AvailableType::
  properties ()
  {
    return this->properties_.get ();
  }

  void AvailableType::
  properties (const properties_type& x)
  {
    this->properties_.set (x);
  }

  void AvailableType::
  properties (::std::unique_ptr< properties_type > x)
  {
    this->properties_.set (std::move (x));
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

namespace icalendar_2_0
{
  // AvailableType
  //

  AvailableType::
  AvailableType (const properties_type& properties)
  : ::xml_schema::type (),
    properties_ (properties, this)
  {
  }

  AvailableType::
  AvailableType (::std::unique_ptr< properties_type > properties)
  : ::xml_schema::type (),
    properties_ (std::move (properties), this)
  {
  }

  AvailableType::
  AvailableType (const AvailableType& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    properties_ (x.properties_, f, this)
  {
  }

  AvailableType::
  AvailableType (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    properties_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void AvailableType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // properties
      //
      if (n.name () == "properties" && n.namespace_ () == "urn:ietf:params:xml:ns:icalendar-2.0")
      {
        ::std::unique_ptr< properties_type > r (
          properties_traits::create (i, f, this));

        if (!properties_.present ())
        {
          this->properties_.set (::std::move (r));
          continue;
        }
      }

      break;
    }

    if (!properties_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "properties",
        "urn:ietf:params:xml:ns:icalendar-2.0");
    }
  }

  AvailableType* AvailableType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class AvailableType (*this, f, c);
  }

  AvailableType& AvailableType::
  operator= (const AvailableType& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->properties_ = x.properties_;
    }

    return *this;
  }

  AvailableType::
  ~AvailableType ()
  {
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace icalendar_2_0
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

namespace icalendar_2_0
{
  void
  operator<< (::xercesc::DOMElement& e, const AvailableType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // properties
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "properties",
          "urn:ietf:params:xml:ns:icalendar-2.0",
          e));

      s << i.properties ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

