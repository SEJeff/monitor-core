#ifndef DTD_H
#define DTD_H 1

#define DTD "\
<?xml version=\"1.0\" encoding=\"ISO-8859-1\" standalone=\"yes\"?>\n\
<!DOCTYPE GANGLIA_XML [\n\
   <!ELEMENT GANGLIA_XML (CLUSTER)*>\n\
      <!ATTLIST GANGLIA_XML VERSION CDATA #REQUIRED>\n\
      <!ATTLIST GANGLIA_XML SOURCE CDATA #REQUIRED>\n\
   <!ELEMENT CLUSTER (HOST)*>\n\
      <!ATTLIST CLUSTER NAME CDATA #REQUIRED>\n\
      <!ATTLIST CLUSTER OWNER CDATA #REQUIRED>\n\
      <!ATTLIST CLUSTER LATLONG CDATA #REQUIRED>\n\
      <!ATTLIST CLUSTER URL CDATA #REQUIRED>\n\
      <!ATTLIST CLUSTER LOCALTIME CDATA #REQUIRED>\n\
   <!ELEMENT HOST (METRIC)*>\n\
      <!ATTLIST HOST NAME CDATA #REQUIRED>\n\
      <!ATTLIST HOST IP CDATA #REQUIRED>\n\
      <!ATTLIST HOST LOCATION CDATA #REQUIRED>\n\
      <!ATTLIST HOST REPORTED CDATA #REQUIRED>\n\
      <!ATTLIST HOST TN CDATA #REQUIRED>\n\
      <!ATTLIST HOST TMAX CDATA #REQUIRED>\n\
      <!ATTLIST HOST DMAX CDATA #REQUIRED>\n\
      <!ATTLIST HOST GMOND_STARTED CDATA #REQUIRED>\n\
   <!ELEMENT METRIC EMPTY>\n\
      <!ATTLIST METRIC NAME CDATA #REQUIRED>\n\
      <!ATTLIST METRIC VAL CDATA #REQUIRED>\n\
      <!ATTLIST METRIC TYPE (string | int8 | uint8 | int16 | uint16 | int32 | uint32 | float | double | timestamp) #REQUIRED>\n\
      <!ATTLIST METRIC UNITS CDATA #IMPLIED>\n\
      <!ATTLIST METRIC TN CDATA #REQUIRED>\n\
      <!ATTLIST METRIC TMAX CDATA #REQUIRED>\n\
      <!ATTLIST METRIC DMAX CDATA #REQUIRED>\n\
      <!ATTLIST METRIC SLOPE (zero | positive | negative | both) #REQUIRED>\n\
      <!ATTLIST METRIC SOURCE (gmond | gmetric) #REQUIRED>\n\
]>\n"

#endif