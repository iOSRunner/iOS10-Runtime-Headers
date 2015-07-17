/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLAvailabilityTile : PBCodable <NSCopying> {
    double _availabilityZScoreConfidenceInterval;
    struct { 
        unsigned int availabilityZScoreConfidenceInterval : 1; 
        unsigned int locationOfInterestMergeRadiusKM : 1; 
        unsigned int preferPredictionWithinNActivityCycles : 1; 
        unsigned int prefetchMaxFloorCount : 1; 
        unsigned int prefetchRadiusKM : 1; 
    } _has;
    unsigned int _locationOfInterestMergeRadiusKM;
    LocalizerParameters *_parameterOverrides;
    unsigned int _preferPredictionWithinNActivityCycles;
    unsigned int _prefetchMaxFloorCount;
    unsigned int _prefetchRadiusKM;
    NSMutableArray *_venues;
}

@property (nonatomic) double availabilityZScoreConfidenceInterval;
@property (nonatomic) BOOL hasAvailabilityZScoreConfidenceInterval;
@property (nonatomic) BOOL hasLocationOfInterestMergeRadiusKM;
@property (nonatomic, readonly) BOOL hasParameterOverrides;
@property (nonatomic) BOOL hasPreferPredictionWithinNActivityCycles;
@property (nonatomic) BOOL hasPrefetchMaxFloorCount;
@property (nonatomic) BOOL hasPrefetchRadiusKM;
@property (nonatomic) unsigned int locationOfInterestMergeRadiusKM;
@property (nonatomic, retain) LocalizerParameters *parameterOverrides;
@property (nonatomic) unsigned int preferPredictionWithinNActivityCycles;
@property (nonatomic) unsigned int prefetchMaxFloorCount;
@property (nonatomic) unsigned int prefetchRadiusKM;
@property (nonatomic, retain) NSMutableArray *venues;

- (void).cxx_destruct;
- (void)addVenues:(id)arg1;
- (double)availabilityZScoreConfidenceInterval;
- (void)clearVenues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAvailabilityZScoreConfidenceInterval;
- (BOOL)hasLocationOfInterestMergeRadiusKM;
- (BOOL)hasParameterOverrides;
- (BOOL)hasPreferPredictionWithinNActivityCycles;
- (BOOL)hasPrefetchMaxFloorCount;
- (BOOL)hasPrefetchRadiusKM;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)locationOfInterestMergeRadiusKM;
- (void)mergeFrom:(id)arg1;
- (id)parameterOverrides;
- (unsigned int)preferPredictionWithinNActivityCycles;
- (unsigned int)prefetchMaxFloorCount;
- (unsigned int)prefetchRadiusKM;
- (BOOL)readFrom:(id)arg1;
- (void)setAvailabilityZScoreConfidenceInterval:(double)arg1;
- (void)setHasAvailabilityZScoreConfidenceInterval:(BOOL)arg1;
- (void)setHasLocationOfInterestMergeRadiusKM:(BOOL)arg1;
- (void)setHasPreferPredictionWithinNActivityCycles:(BOOL)arg1;
- (void)setHasPrefetchMaxFloorCount:(BOOL)arg1;
- (void)setHasPrefetchRadiusKM:(BOOL)arg1;
- (void)setLocationOfInterestMergeRadiusKM:(unsigned int)arg1;
- (void)setParameterOverrides:(id)arg1;
- (void)setPreferPredictionWithinNActivityCycles:(unsigned int)arg1;
- (void)setPrefetchMaxFloorCount:(unsigned int)arg1;
- (void)setPrefetchRadiusKM:(unsigned int)arg1;
- (void)setVenues:(id)arg1;
- (id)venues;
- (id)venuesAtIndex:(unsigned int)arg1;
- (unsigned int)venuesCount;
- (void)writeTo:(id)arg1;

@end