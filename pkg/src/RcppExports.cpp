// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// capTradeDurationInterface
Rcpp::NumericVector capTradeDurationInterface(SEXP indicatorIn, int shortDurationCap, int longDurationCap);
RcppExport SEXP btutils_capTradeDurationInterface(SEXP indicatorInSEXP, SEXP shortDurationCapSEXP, SEXP longDurationCapSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type indicatorIn(indicatorInSEXP );
        Rcpp::traits::input_parameter< int >::type shortDurationCap(shortDurationCapSEXP );
        Rcpp::traits::input_parameter< int >::type longDurationCap(longDurationCapSEXP );
        Rcpp::NumericVector __result = capTradeDurationInterface(indicatorIn, shortDurationCap, longDurationCap);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// constructIndicatorInterface
Rcpp::NumericVector constructIndicatorInterface(SEXP longEntriesIn, SEXP longExitsIn, SEXP shortEntriesIn, SEXP shortExitsIn);
RcppExport SEXP btutils_constructIndicatorInterface(SEXP longEntriesInSEXP, SEXP longExitsInSEXP, SEXP shortEntriesInSEXP, SEXP shortExitsInSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type longEntriesIn(longEntriesInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type longExitsIn(longExitsInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type shortEntriesIn(shortEntriesInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type shortExitsIn(shortExitsInSEXP );
        Rcpp::NumericVector __result = constructIndicatorInterface(longEntriesIn, longExitsIn, shortEntriesIn, shortExitsIn);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// processTradeInterface
Rcpp::List processTradeInterface(SEXP opIn, SEXP hiIn, SEXP loIn, SEXP clIn, int ibeg, int iend, int pos, double stopLoss, double stopTrailing, double profitTarget, int maxDays, double tickSize);
RcppExport SEXP btutils_processTradeInterface(SEXP opInSEXP, SEXP hiInSEXP, SEXP loInSEXP, SEXP clInSEXP, SEXP ibegSEXP, SEXP iendSEXP, SEXP posSEXP, SEXP stopLossSEXP, SEXP stopTrailingSEXP, SEXP profitTargetSEXP, SEXP maxDaysSEXP, SEXP tickSizeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type opIn(opInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type hiIn(hiInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type loIn(loInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type clIn(clInSEXP );
        Rcpp::traits::input_parameter< int >::type ibeg(ibegSEXP );
        Rcpp::traits::input_parameter< int >::type iend(iendSEXP );
        Rcpp::traits::input_parameter< int >::type pos(posSEXP );
        Rcpp::traits::input_parameter< double >::type stopLoss(stopLossSEXP );
        Rcpp::traits::input_parameter< double >::type stopTrailing(stopTrailingSEXP );
        Rcpp::traits::input_parameter< double >::type profitTarget(profitTargetSEXP );
        Rcpp::traits::input_parameter< int >::type maxDays(maxDaysSEXP );
        Rcpp::traits::input_parameter< double >::type tickSize(tickSizeSEXP );
        Rcpp::List __result = processTradeInterface(opIn, hiIn, loIn, clIn, ibeg, iend, pos, stopLoss, stopTrailing, profitTarget, maxDays, tickSize);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// processTradesInterface
Rcpp::List processTradesInterface(SEXP ohlcIn, SEXP ibegsIn, SEXP iendsIn, SEXP positionIn, SEXP stopLossIn, SEXP stopTrailingIn, SEXP profitTargetIn, SEXP maxDaysIn, double tickSize);
RcppExport SEXP btutils_processTradesInterface(SEXP ohlcInSEXP, SEXP ibegsInSEXP, SEXP iendsInSEXP, SEXP positionInSEXP, SEXP stopLossInSEXP, SEXP stopTrailingInSEXP, SEXP profitTargetInSEXP, SEXP maxDaysInSEXP, SEXP tickSizeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type ohlcIn(ohlcInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ibegsIn(ibegsInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type iendsIn(iendsInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type positionIn(positionInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type stopLossIn(stopLossInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type stopTrailingIn(stopTrailingInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type profitTargetIn(profitTargetInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type maxDaysIn(maxDaysInSEXP );
        Rcpp::traits::input_parameter< double >::type tickSize(tickSizeSEXP );
        Rcpp::List __result = processTradesInterface(ohlcIn, ibegsIn, iendsIn, positionIn, stopLossIn, stopTrailingIn, profitTargetIn, maxDaysIn, tickSize);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tradesFromIndicatorInterface
Rcpp::List tradesFromIndicatorInterface(SEXP indicatorIn);
RcppExport SEXP btutils_tradesFromIndicatorInterface(SEXP indicatorInSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type indicatorIn(indicatorInSEXP );
        Rcpp::List __result = tradesFromIndicatorInterface(indicatorIn);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calculateReturnsInterface
Rcpp::NumericVector calculateReturnsInterface(SEXP clIn, SEXP ibegIn, SEXP iendIn, SEXP positionIn, SEXP exitPriceIn);
RcppExport SEXP btutils_calculateReturnsInterface(SEXP clInSEXP, SEXP ibegInSEXP, SEXP iendInSEXP, SEXP positionInSEXP, SEXP exitPriceInSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type clIn(clInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ibegIn(ibegInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type iendIn(iendInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type positionIn(positionInSEXP );
        Rcpp::traits::input_parameter< SEXP >::type exitPriceIn(exitPriceInSEXP );
        Rcpp::NumericVector __result = calculateReturnsInterface(clIn, ibegIn, iendIn, positionIn, exitPriceIn);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// locfInterface
Rcpp::NumericVector locfInterface(SEXP vin, double value);
RcppExport SEXP btutils_locfInterface(SEXP vinSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vin(vinSEXP );
        Rcpp::traits::input_parameter< double >::type value(valueSEXP );
        Rcpp::NumericVector __result = locfInterface(vin, value);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// leadingNAs
double leadingNAs(SEXP vin);
RcppExport SEXP btutils_leadingNAs(SEXP vinSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vin(vinSEXP );
        double __result = leadingNAs(vin);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// laguerreFilterInterface
Rcpp::NumericVector laguerreFilterInterface(SEXP vin, double gamma);
RcppExport SEXP btutils_laguerreFilterInterface(SEXP vinSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vin(vinSEXP );
        Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP );
        Rcpp::NumericVector __result = laguerreFilterInterface(vin, gamma);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// laguerreRSIInterface
Rcpp::NumericVector laguerreRSIInterface(SEXP vin, double gamma);
RcppExport SEXP btutils_laguerreRSIInterface(SEXP vinSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vin(vinSEXP );
        Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP );
        Rcpp::NumericVector __result = laguerreRSIInterface(vin, gamma);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
