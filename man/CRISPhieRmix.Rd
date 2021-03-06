% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/CRISPhieRmix.R
\name{CRISPhieRmix}
\alias{CRISPhieRmix}
\title{CRISPhieRmix}
\usage{
CRISPhieRmix(x, geneIds, negCtrl = NULL, max_iter = 100, tol = 1e-10,
  pq = 0.1, mu = -4, sigma = 1, nMesh = 100, BIMODAL = FALSE,
  VERBOSE = FALSE, PLOT = FALSE, screenType = "GOF")
}
\arguments{
\item{x}{log2 fold changes of guides targeting genes (required)}

\item{geneIds}{gene ids corresponding to x (required)}

\item{negCtrl}{log2 fold changes of negative control guides}

\item{max_iter}{maximum number of iterations for EM algorithm, default = 100}

\item{tol}{tolerance for convergence of EM algorithm, default = 1e-10}

\item{pq}{initial value of p*q, default = 0.1}

\item{mu}{initial value of mu for the interesting genes, default = -4}

\item{sigma}{initial value of sigma for the interesting genes, default = 1}

\item{nMesh}{the number of points to use in numerical integration of posterior probabilities, default = 100}

\item{BIMODAL}{boolean variable to fit a bimodal alternative distribution for the case when both directions are of interest}

\item{VERBOSE}{boolean variable for VERBOSE mode, default = FALSE}

\item{PLOT}{boolean variable to produce plots, default = FALSE}

\item{screenType}{acceptable options are "GOF" for gain of function screens (mu > 0) or "LOF" for loss of function screens, default = "LOF"}
}
\value{
a list containing genes, the corresponding posterior probabilities of being non-null,
and the mixture fit
\subsection{(return)}{
  \describe{
    \item{genes}{vector of gene names}
    \item{locfdr}{posterior null probabilites of genes}
    \item{genePosteriors}{posterior non-null probabilities of genes}
    \item{FDR}{estimated global FDR of genes}
    \item{mixFit}{a list containing the estimated mixture fit}
  }
}
}
\description{
A tool for identifying interesting genes in large pooled CRISPRi and CRISPRa screen
using hierarchical mixture models

a hierarchical mixture model for analysing large-scale CRISPRi/a pooled screen
}
\examples{
Rosenbluh2017CRISPRi.sim.DESeq.log2fc.CRISPhieRmix =
CRISPhieRmix(x = Rosenbluh2017CRISPRiSim$x, geneIds = Rosenbluh2017CRISPRiSim$geneIds,
negCtrl = Rosenbluh2017CRISPRiSim$negCtrl, mu = -2, sigma = 0.5, nMesh = 200)

}
\author{
Timothy Daley, \email{tdaley@stanford.edu}
}
