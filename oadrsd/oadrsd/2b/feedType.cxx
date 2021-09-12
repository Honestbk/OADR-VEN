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

#include "feedType.hxx"

#include "personType.hxx"

#include "categoryType.hxx"

#include "generatorType.hxx"

#include "iconType.hxx"

#include "idType.hxx"

#include "linkType.hxx"

#include "logoType.hxx"

#include "textType.hxx"

#include "dateTimeType1.hxx"

#include "entryType.hxx"

namespace Atom
{
  // feedType
  // 

  const feedType::author_sequence& feedType::
  author () const
  {
    return this->author_;
  }

  feedType::author_sequence& feedType::
  author ()
  {
    return this->author_;
  }

  void feedType::
  author (const author_sequence& s)
  {
    this->author_ = s;
  }

  const feedType::category_sequence& feedType::
  category () const
  {
    return this->category_;
  }

  feedType::category_sequence& feedType::
  category ()
  {
    return this->category_;
  }

  void feedType::
  category (const category_sequence& s)
  {
    this->category_ = s;
  }

  const feedType::contributor_sequence& feedType::
  contributor () const
  {
    return this->contributor_;
  }

  feedType::contributor_sequence& feedType::
  contributor ()
  {
    return this->contributor_;
  }

  void feedType::
  contributor (const contributor_sequence& s)
  {
    this->contributor_ = s;
  }

  const feedType::generator_sequence& feedType::
  generator () const
  {
    return this->generator_;
  }

  feedType::generator_sequence& feedType::
  generator ()
  {
    return this->generator_;
  }

  void feedType::
  generator (const generator_sequence& s)
  {
    this->generator_ = s;
  }

  const feedType::icon_sequence& feedType::
  icon () const
  {
    return this->icon_;
  }

  feedType::icon_sequence& feedType::
  icon ()
  {
    return this->icon_;
  }

  void feedType::
  icon (const icon_sequence& s)
  {
    this->icon_ = s;
  }

  const feedType::id_sequence& feedType::
  id () const
  {
    return this->id_;
  }

  feedType::id_sequence& feedType::
  id ()
  {
    return this->id_;
  }

  void feedType::
  id (const id_sequence& s)
  {
    this->id_ = s;
  }

  const feedType::link_sequence& feedType::
  link () const
  {
    return this->link_;
  }

  feedType::link_sequence& feedType::
  link ()
  {
    return this->link_;
  }

  void feedType::
  link (const link_sequence& s)
  {
    this->link_ = s;
  }

  const feedType::logo_sequence& feedType::
  logo () const
  {
    return this->logo_;
  }

  feedType::logo_sequence& feedType::
  logo ()
  {
    return this->logo_;
  }

  void feedType::
  logo (const logo_sequence& s)
  {
    this->logo_ = s;
  }

  const feedType::rights_sequence& feedType::
  rights () const
  {
    return this->rights_;
  }

  feedType::rights_sequence& feedType::
  rights ()
  {
    return this->rights_;
  }

  void feedType::
  rights (const rights_sequence& s)
  {
    this->rights_ = s;
  }

  const feedType::subtitle_sequence& feedType::
  subtitle () const
  {
    return this->subtitle_;
  }

  feedType::subtitle_sequence& feedType::
  subtitle ()
  {
    return this->subtitle_;
  }

  void feedType::
  subtitle (const subtitle_sequence& s)
  {
    this->subtitle_ = s;
  }

  const feedType::title_sequence& feedType::
  title () const
  {
    return this->title_;
  }

  feedType::title_sequence& feedType::
  title ()
  {
    return this->title_;
  }

  void feedType::
  title (const title_sequence& s)
  {
    this->title_ = s;
  }

  const feedType::updated_sequence& feedType::
  updated () const
  {
    return this->updated_;
  }

  feedType::updated_sequence& feedType::
  updated ()
  {
    return this->updated_;
  }

  void feedType::
  updated (const updated_sequence& s)
  {
    this->updated_ = s;
  }

  const feedType::entry_sequence& feedType::
  entry () const
  {
    return this->entry_;
  }

  feedType::entry_sequence& feedType::
  entry ()
  {
    return this->entry_;
  }

  void feedType::
  entry (const entry_sequence& s)
  {
    this->entry_ = s;
  }

  const feedType::base_optional& feedType::
  base () const
  {
    return this->base_;
  }

  feedType::base_optional& feedType::
  base ()
  {
    return this->base_;
  }

  void feedType::
  base (const base_type& x)
  {
    this->base_.set (x);
  }

  void feedType::
  base (const base_optional& x)
  {
    this->base_ = x;
  }

  void feedType::
  base (::std::unique_ptr< base_type > x)
  {
    this->base_.set (std::move (x));
  }

  const feedType::lang_optional& feedType::
  lang () const
  {
    return this->lang_;
  }

  feedType::lang_optional& feedType::
  lang ()
  {
    return this->lang_;
  }

  void feedType::
  lang (const lang_type& x)
  {
    this->lang_.set (x);
  }

  void feedType::
  lang (const lang_optional& x)
  {
    this->lang_ = x;
  }

  void feedType::
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
  // feedType
  //

  feedType::
  feedType ()
  : ::xml_schema::type (),
    author_ (this),
    category_ (this),
    contributor_ (this),
    generator_ (this),
    icon_ (this),
    id_ (this),
    link_ (this),
    logo_ (this),
    rights_ (this),
    subtitle_ (this),
    title_ (this),
    updated_ (this),
    entry_ (this),
    base_ (this),
    lang_ (this)
  {
  }

  feedType::
  feedType (const feedType& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    author_ (x.author_, f, this),
    category_ (x.category_, f, this),
    contributor_ (x.contributor_, f, this),
    generator_ (x.generator_, f, this),
    icon_ (x.icon_, f, this),
    id_ (x.id_, f, this),
    link_ (x.link_, f, this),
    logo_ (x.logo_, f, this),
    rights_ (x.rights_, f, this),
    subtitle_ (x.subtitle_, f, this),
    title_ (x.title_, f, this),
    updated_ (x.updated_, f, this),
    entry_ (x.entry_, f, this),
    base_ (x.base_, f, this),
    lang_ (x.lang_, f, this)
  {
  }

  feedType::
  feedType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    author_ (this),
    category_ (this),
    contributor_ (this),
    generator_ (this),
    icon_ (this),
    id_ (this),
    link_ (this),
    logo_ (this),
    rights_ (this),
    subtitle_ (this),
    title_ (this),
    updated_ (this),
    entry_ (this),
    base_ (this),
    lang_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
      this->parse (p, f);
    }
  }

  void feedType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // author
      //
      if (n.name () == "author" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< author_type > r (
          author_traits::create (i, f, this));

        this->author_.push_back (::std::move (r));
        continue;
      }

      // category
      //
      if (n.name () == "category" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< category_type > r (
          category_traits::create (i, f, this));

        this->category_.push_back (::std::move (r));
        continue;
      }

      // contributor
      //
      if (n.name () == "contributor" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< contributor_type > r (
          contributor_traits::create (i, f, this));

        this->contributor_.push_back (::std::move (r));
        continue;
      }

      // generator
      //
      if (n.name () == "generator" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< generator_type > r (
          generator_traits::create (i, f, this));

        this->generator_.push_back (::std::move (r));
        continue;
      }

      // icon
      //
      if (n.name () == "icon" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< icon_type > r (
          icon_traits::create (i, f, this));

        this->icon_.push_back (::std::move (r));
        continue;
      }

      // id
      //
      if (n.name () == "id" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< id_type > r (
          id_traits::create (i, f, this));

        this->id_.push_back (::std::move (r));
        continue;
      }

      // link
      //
      if (n.name () == "link" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< link_type > r (
          link_traits::create (i, f, this));

        this->link_.push_back (::std::move (r));
        continue;
      }

      // logo
      //
      if (n.name () == "logo" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< logo_type > r (
          logo_traits::create (i, f, this));

        this->logo_.push_back (::std::move (r));
        continue;
      }

      // rights
      //
      if (n.name () == "rights" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< rights_type > r (
          rights_traits::create (i, f, this));

        this->rights_.push_back (::std::move (r));
        continue;
      }

      // subtitle
      //
      if (n.name () == "subtitle" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< subtitle_type > r (
          subtitle_traits::create (i, f, this));

        this->subtitle_.push_back (::std::move (r));
        continue;
      }

      // title
      //
      if (n.name () == "title" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< title_type > r (
          title_traits::create (i, f, this));

        this->title_.push_back (::std::move (r));
        continue;
      }

      // updated
      //
      if (n.name () == "updated" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< updated_type > r (
          updated_traits::create (i, f, this));

        this->updated_.push_back (::std::move (r));
        continue;
      }

      // entry
      //
      if (n.name () == "entry" && n.namespace_ () == "http://www.w3.org/2005/Atom")
      {
        ::std::unique_ptr< entry_type > r (
          entry_traits::create (i, f, this));

        this->entry_.push_back (::std::move (r));
        continue;
      }

      break;
    }

    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

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

  feedType* feedType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class feedType (*this, f, c);
  }

  feedType& feedType::
  operator= (const feedType& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->author_ = x.author_;
      this->category_ = x.category_;
      this->contributor_ = x.contributor_;
      this->generator_ = x.generator_;
      this->icon_ = x.icon_;
      this->id_ = x.id_;
      this->link_ = x.link_;
      this->logo_ = x.logo_;
      this->rights_ = x.rights_;
      this->subtitle_ = x.subtitle_;
      this->title_ = x.title_;
      this->updated_ = x.updated_;
      this->entry_ = x.entry_;
      this->base_ = x.base_;
      this->lang_ = x.lang_;
    }

    return *this;
  }

  feedType::
  ~feedType ()
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
  operator<< (::xercesc::DOMElement& e, const feedType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // author
    //
    for (feedType::author_const_iterator
         b (i.author ().begin ()), n (i.author ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "author",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // category
    //
    for (feedType::category_const_iterator
         b (i.category ().begin ()), n (i.category ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "category",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // contributor
    //
    for (feedType::contributor_const_iterator
         b (i.contributor ().begin ()), n (i.contributor ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "contributor",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // generator
    //
    for (feedType::generator_const_iterator
         b (i.generator ().begin ()), n (i.generator ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "generator",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // icon
    //
    for (feedType::icon_const_iterator
         b (i.icon ().begin ()), n (i.icon ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "icon",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // id
    //
    for (feedType::id_const_iterator
         b (i.id ().begin ()), n (i.id ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "id",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // link
    //
    for (feedType::link_const_iterator
         b (i.link ().begin ()), n (i.link ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "link",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // logo
    //
    for (feedType::logo_const_iterator
         b (i.logo ().begin ()), n (i.logo ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "logo",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // rights
    //
    for (feedType::rights_const_iterator
         b (i.rights ().begin ()), n (i.rights ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "rights",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // subtitle
    //
    for (feedType::subtitle_const_iterator
         b (i.subtitle ().begin ()), n (i.subtitle ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "subtitle",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // title
    //
    for (feedType::title_const_iterator
         b (i.title ().begin ()), n (i.title ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "title",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // updated
    //
    for (feedType::updated_const_iterator
         b (i.updated ().begin ()), n (i.updated ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "updated",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
    }

    // entry
    //
    for (feedType::entry_const_iterator
         b (i.entry ().begin ()), n (i.entry ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "entry",
          "http://www.w3.org/2005/Atom",
          e));

      s << *b;
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

