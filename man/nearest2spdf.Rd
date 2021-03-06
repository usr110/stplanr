% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/osrmfunctions.R
\name{nearest2spdf}
\alias{nearest2spdf}
\title{Return SpatialPointsDataFrame with nearest street from OSRM nearest service}
\usage{
nearest2spdf(lat, lng = NA, osrmurl = "http://router.project-osrm.org")
}
\arguments{
\item{lat}{Numeric vector containing latitude coordinate for each coordinate
to map. Also accepts dataframe with latitude in the first column and
longitude in the second column.}

\item{lng}{Numeric vector containing longitude coordinate for each
coordinate to map.}

\item{osrmurl}{Base URL of the OSRM service}
}
\description{
Return SpatialPointsDataFrame with nearest street from OSRM nearest service
}
\section{Details}{

Retrieve coordinates and name of the node(s) on the network mapped from
coordinates passed to functions.
}
\examples{
\dontrun{
 nearest2spdf(
   lat = c(50.3, 50.2),
   lng = c(13.2, 13.1)
 )
}

}

