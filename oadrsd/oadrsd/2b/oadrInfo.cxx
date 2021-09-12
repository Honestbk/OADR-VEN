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

#include "oadrInfo.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrInfo
    // 

    const oadrInfo::oadrKey_type& oadrInfo::
    oadrKey () const
    {
      return this->oadrKey_.get ();
    }

    oadrInfo::oadrKey_type& oadrInfo::
    oadrKey ()
    {
      return this->oadrKey_.get ();
    }

    void oadrInfo::
    oadrKey (const oadrKey_type& x)
    {
      this->oadrKey_.set (x);
    }

    void oadrInfo::
    oadrKey (::std::unique_ptr< oadrKey_type > x)
    {
      this->oadrKey_.set (std::move (x));
    }

    const oadrInfo::oadrValue_type& oadrInfo::
    oadrValue () const
    {
      return this->oadrValue_.get ();
    }

    oadrInfo::oadrValue_type& oadrInfo::
    oadrValue ()
    {
      return this->oadrValue_.get ();
    }

    void oadrInfo::
    oadrValue (const oadrValue_type& x)
    {
      this->oadrValue_.set (x);
    }

    void oadrInfo::
    oadrValue (::std::unique_ptr< oadrValue_type > x)
    {
      this->oadrValue_.set (std::move (x));
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
    // oadrInfo
    //

    oadrInfo::
    oadrInfo (const oadrKey_type& oadrKey,
              const oadrValue_type& oadrValue)
    : ::xml_schema::type (),
      oadrKey_ (oadrKey, this),
      oadrValue_ (oadrValue, this)
    {
    }

    oadrInfo::
    oadrInfo (const oadrInfo& x,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      oadrKey_ (x.oadrKey_, f, this),
      oadrValue_ (x.oadrValue_, f, this)
    {
    }

    oadrInfo::
    oadrInfo (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      oadrKey_ (this),
      oadrValue_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void oadrInfo::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // oadrKey
        //
        if (n.name () == "oadrKey" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrKey_type > r (
            oadrKey_traits::create (i, f, this));

          if (!oadrKey_.present ())
          {
            this->oadrKey_.set (::std::move (r));
            continue;
          }
        }

        // oadrValue
        //
        if (n.name () == "oadrValue" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrValue_type > r (
            oadrValue_traits::create (i, f, this));

          if (!oadrValue_.present ())
          {
            this->oadrValue_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!oadrKey_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrKey",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!oadrValue_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrValue",
          "http://openadr.org/oadr-2.0b/2012/07");
      }
    }

    oadrInfo* oadrInfo::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrInfo (*this, f, c);
    }

    oadrInfo& oadrInfo::
    operator= (const oadrInfo& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->oadrKey_ = x.oadrKey_;
        this->oadrValue_ = x.oadrValue_;
      }

      return *this;
    }

    oadrInfo::
    ~oadrInfo ()
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
    operator<< (::xercesc::DOMElement& e, const oadrInfo& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // oadrKey
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrKey",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrKey ();
      }

      // oadrValue
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrValue",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrValue ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

