//
//  SwiftTest.swift
//  Exp
//
//  Created by Alice Kondratieva on 09.01.15.
//  Copyright (c) 2015 Alice Kondratieva. All rights reserved.
//

import Cocoa
import Foundation

@NSApplicationMain
class AppDelegate: NSObject, NSApplicationDelegate {
    
    @IBOutlet weak var window: NSWindow!
    
    func applicationDidFinishLaunching(aNotification: NSNotification) {
        let haystack  : NSString = "hoola hoola girls like hooligans"
        let needle  : NSString = "hooligan"
        var wrapper: Wrapper = Wrapper()
        wrapper.string = haystack
        println(wrapper.bmIndex(needle))
        println(wrapper.bfIndex(needle))
    }
    
    func applicationWillTerminate(aNotification: NSNotification) {
    }
    
    
}
