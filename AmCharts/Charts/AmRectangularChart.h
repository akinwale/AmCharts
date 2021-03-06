// 
//  AmRectangularChart.h
//  AmCharts
// 
//  Created by Andrew on 4/28/14.
//  Copyright (c) 2014 Chimp Studios. All rights reserved.
// 

#import "AmCoordinateChart.h"

@class AmChartCursor;
@class AmChartScrollbar;

@interface AmRectangularChart : AmCoordinateChart

/**
 The angle of the 3D part of plot area. This creates a 3D effect (if the "depth3D" is &gt; 0).
 */
@property(strong) NSNumber * angle;

/**
 Space left from axis labels/title to the chart's outside border, if autoMargins set to true.
 */
@property(strong) NSNumber * autoMarginOffset;

/**
 Specifies if margins of a chart should be calculated automatically so that labels of axes would fit. The chart will adjust only margins with axes. Other margins will use values set with marginRight, marginTop, marginLeft and marginBottom properties.
 */
@property(strong) NSNumber * autoMargins;

/**
 Cursor of a chart.
 */
@property(strong) AmChartCursor * chartCursor;

/**
 Chart's scrollbar.
 */
@property(strong) AmChartScrollbar * chartScrollbar;

/**
 The depth of the 3D part of plot area. This creates a 3D effect (if the "angle" is &gt; 0).
 */
@property(strong) NSNumber * depth3D;

/**
 Number of pixels between the container's bottom border and plot area. This space can be used for bottom axis' values. If autoMargin is true and bottom side has axis, this property is ignored.
 */
@property(strong) NSNumber * marginBottom;

/**
 Number of pixels between the container's left border and plot area. This space can be used for left axis' values. If autoMargin is true and left side has axis, this property is ignored.
 */
@property(strong) NSNumber * marginLeft;

/**
 Number of pixels between the container's right border and plot area. This space can be used for Right axis' values. If autoMargin is true and right side has axis, this property is ignored.
 */
@property(strong) NSNumber * marginRight;

/**
 Flag which should be set to false if you need margins to be recalculated on next chart.validateNow() call.
 */
@property(strong) NSNumber * marginsUpdated;

/**
 Number of pixels between the container's top border and plot area. This space can be used for top axis' values. If autoMargin is true and top side has axis, this property is ignored.
 */
@property(strong) NSNumber * marginTop;

/**
 The opacity of plot area's border. Value range is 0 - 1.
 */
@property(strong) NSNumber * plotAreaBorderAlpha;

/**
 The color of the plot area's border. Note, the it is invisible by default, as plotAreaBorderAlpha default value is 0. Set it to a value higher than 0 to make it visible.
 */
@property(strong) NSString * plotAreaBorderColor;

/**
 Opacity of plot area. Plural form is used to keep the same property names as our Flex charts'. Flex charts can accept array of numbers to generate gradients. Although you can set array here, only first value of this array will be used.
 */
@property(strong) NSNumber * plotAreaFillAlphas;

/**
 You can set both one color if you need a solid color or array of colors to generate gradients, for example: ["#000000", "#0000CC"]
 */
@property(strong) NSString * plotAreaFillColors;

/**
 If you are using gradients to fill the plot area, you can use this property to set gradient angle. The only allowed values are horizontal and vertical: 0, 90, 180, 270.
 */
@property(strong) NSNumber * plotAreaGradientAngle;

/**
 Array of trend lines added to a chart. You can add trend lines to a chart using this array or access already existing trend lines
 */
@property(strong) NSMutableArray * trendLines;

/**
 Opacity of zoom-out button background.
 */
@property(strong) NSNumber * zoomOutButtonAlpha;

/**
 Zoom-out button background color.
 */
@property(strong) NSString * zoomOutButtonColor;

/**
 Name of zoom-out button image. In the images folder there is another lens image, called lensWhite.png. You might want to have white lens when background is dark. Or you can simply use your own image.
 */
@property(strong) NSString * zoomOutButtonImage;

/**
 Size of zoom-out button image
 */
@property(strong) NSNumber * zoomOutButtonImageSize;

/**
 Padding around the text and image.
 */
@property(strong) NSNumber * zoomOutButtonPadding;

/**
 Opacity of zoom-out button background when mouse is over it.
 */
@property(strong) NSNumber * zoomOutButtonRollOverAlpha;

/**
 Text in the zoom-out button.
 */
@property(strong) NSString * zoomOutText;

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)javascriptRepresentation;

@end
