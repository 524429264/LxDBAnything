# LxDBAnything
    Print log without any format control symbol! Change debug habit thoroughly!

### Installation
    You only need drag LxDBAnything.h to your project.

### Support
    Minimum support iOS version: iOS 6.0

### Usage

    #import "LxDBAnything.h"

    - (void)viewDidLoad
    {
        [super viewDidLoad];

        id obj = self.view;
        LxDBAnyVar(obj);

        CGPoint point = CGPointMake(12.34, 56.78);
        LxDBAnyVar(point);

        CGSize size = CGSizeMake(87.6, 5.43);
        LxDBAnyVar(size);

        CGRect rect = CGRectMake(2.3, 4.5, 5.6, 7.8);
        LxDBAnyVar(rect);

        NSRange range = NSMakeRange(3, 56);
        LxDBAnyVar(range);

        CGAffineTransform affineTransform = CGAffineTransformMake(1, 2, 3, 4, 5, 6);
        LxDBAnyVar(affineTransform);

        UIEdgeInsets edgeInsets = UIEdgeInsetsMake(3, 4, 5, 6);
        LxDBAnyVar(edgeInsets);

        SEL sel = @selector(viewDidLoad);
        LxDBAnyVar(sel);

        Class class = [UIBarButtonItem class];
        LxDBAnyVar(class);

        NSInteger i = 231;
        LxDBAnyVar(i);

        CGFloat f = M_E;
        LxDBAnyVar(f);

        BOOL b = YES;
        LxDBAnyVar(b);

        char c = 'S';
        LxDBAnyVar(c);

        LxPrintAnyMark(You can use macro LxPrintAnyMark print any without quotation as you want!);

        LxPrintf(@"Print format string you customed: %@", LxBox(affineTransform));

        NSLog(@"Even use normal NSLog function to print: %@", LxBox(edgeInsets));

        ......
    }

    // Run your application and you'll see:

    🎈-[ViewController viewDidLoad] + 23📍 obj = <UIView: 0x7f9b4a608f30; frame = (0 0; 414 736); autoresize = W+H; layer = <CALayer: 0x7f9b4a60f560>>
    🎈-[ViewController viewDidLoad] + 26📍 point = NSPoint: {12.34, 56.780000000000001}
    🎈-[ViewController viewDidLoad] + 29📍 size = NSSize: {87.599999999999994, 5.4299999999999997}
    🎈-[ViewController viewDidLoad] + 32📍 rect = NSRect: {{2.2999999999999998, 4.5}, {5.5999999999999996, 7.7999999999999998}}
    🎈-[ViewController viewDidLoad] + 35📍 range = NSRange: {3, 56}
    🎈-[ViewController viewDidLoad] + 38📍 affineTransform = CGAffineTransform: {{1, 2, 3, 4}, {5, 6}}
    🎈-[ViewController viewDidLoad] + 41📍 edgeInsets = UIEdgeInsets: {3, 4, 5, 6}
    🎈-[ViewController viewDidLoad] + 44📍 sel = viewDidLoad
    🎈-[ViewController viewDidLoad] + 47📍 class = UIBarButtonItem
    🎈-[ViewController viewDidLoad] + 50📍 i = 231
    🎈-[ViewController viewDidLoad] + 53📍 f = 2.718281828459045
    🎈-[ViewController viewDidLoad] + 56📍 b = YES
    🎈-[ViewController viewDidLoad] + 59📍 c = S
    🎈-[ViewController viewDidLoad] + 61📍 You can use macro LxPrintAnySymbol print any without quotation as you want!
    🎈-[ViewController viewDidLoad] + 63📍 Print format string you customed: CGAffineTransform: {{1, 2, 3, 4}, {5, 6}}
    2015-10-25 00:20:04.056 LxDBAnythingDemo[515:7310] Even use normal NSLog function to print: UIEdgeInsets: {3, 4, 5, 6}

    //  Different debug log experience!

### License
    LxDBAnything is available under the MIT License. See the LICENSE file for more info.