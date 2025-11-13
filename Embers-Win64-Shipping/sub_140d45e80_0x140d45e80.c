// 函数: sub_140d45e80
// 地址: 0x140d45e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1520)
void var_1548
int64_t var_48 = __security_cookie ^ &var_1548
int64_t i_1 = 0
int64_t* r15 = arg2
uint64_t result

if (arg1 == 0 || arg2 == 0 || arg3 == 0)
    result = 0
else
    *arg1 = 1
    
    if (*arg2 != u"LeftMouseButton")
        arg2[1].d = 0
        int32_t rdx = 0
        
        if (*(r15 + 0xc) != 0x10)
            sub_1405947f0(r15, 0x10)
            rdx = r15[1].d
        
        r15[1].d = rdx + 0x10
        
        if (rdx + 0x10 s> *(r15 + 0xc))
            sub_140594770(r15)
        
        __builtin_memcpy(*r15, u"LeftMouseButton", 0x20)
    
    int32_t result_1 = 1
    
    if (arg3 u> 1)
        arg1[1] = 2
        
        if (r15[2] != u"RightMouseButton")
            int32_t rdx_1 = 0
            r15[3].d = 0
            
            if (*(r15 + 0x1c) != 0x11)
                sub_1405947f0(&r15[2], 0x11)
                rdx_1 = r15[3].d
            
            r15[3].d = rdx_1 + 0x11
            
            if (rdx_1 + 0x11 s> *(r15 + 0x1c))
                sub_140594770(&r15[2])
            
            __builtin_wcscpy(r15[2], u"RightMouseButton")
        
        result_1 = 2
        
        if (arg3 u> 2)
            arg1[2] = 4
            
            if (r15[4] != u"MiddleMouseButton")
                int32_t rdx_2 = 0
                r15[5].d = 0
                
                if (*(r15 + 0x2c) != 0x12)
                    sub_1405947f0(&r15[4], 0x12)
                    rdx_2 = r15[5].d
                
                r15[5].d = rdx_2 + 0x12
                
                if (rdx_2 + 0x12 s> *(r15 + 0x2c))
                    sub_140594770(&r15[4])
                
                __builtin_memcpy(r15[4], u"MiddleMouseButton", 0x24)
            
            result_1 = 3
            
            if (arg3 u> 3)
                arg1[3] = 5
                
                if (r15[6] != u"ThumbMouseButton")
                    int32_t rdx_3 = 0
                    r15[7].d = 0
                    
                    if (*(r15 + 0x3c) != 0x11)
                        sub_1405947f0(&r15[6], 0x11)
                        rdx_3 = r15[7].d
                    
                    r15[7].d = rdx_3 + 0x11
                    
                    if (rdx_3 + 0x11 s> *(r15 + 0x3c))
                        sub_140594770(&r15[6])
                    
                    __builtin_wcscpy(r15[6], u"ThumbMouseButton")
                
                result_1 = 4
                
                if (arg3 u> 4)
                    arg1[4] = 6
                    
                    if (r15[8] != u"ThumbMouseButton2")
                        int32_t rdx_4 = 0
                        r15[9].d = 0
                        
                        if (*(r15 + 0x4c) != 0x12)
                            sub_1405947f0(&r15[8], 0x12)
                            rdx_4 = r15[9].d
                        
                        r15[9].d = rdx_4 + 0x12
                        
                        if (rdx_4 + 0x12 s> *(r15 + 0x4c))
                            sub_140594770(&r15[8])
                        
                        __builtin_memcpy(r15[8], u"ThumbMouseButton2", 0x24)
                    
                    result_1 = 5
                    
                    if (arg3 u> 5)
                        arg1[5] = 8
                        
                        if (r15[0xa] != u"BackSpace")
                            int32_t rdx_5 = 0
                            r15[0xb].d = 0
                            
                            if (*(r15 + 0x5c) != 0xa)
                                sub_1405947f0(&r15[0xa], 0xa)
                                rdx_5 = r15[0xb].d
                            
                            r15[0xb].d = rdx_5 + 0xa
                            
                            if (rdx_5 + 0xa s> *(r15 + 0x5c))
                                sub_140594770(&r15[0xa])
                            
                            __builtin_memcpy(r15[0xa], u"BackSpace", 0x14)
                        
                        result_1 = 6
                        
                        if (arg3 u> 6)
                            arg1[6] = 9
                            
                            if (r15[0xc] != &data_142eb6548)
                                int32_t rdx_6 = 0
                                r15[0xd].d = 0
                                
                                if (*(r15 + 0x6c) != 4)
                                    sub_1405947f0(&r15[0xc], 4)
                                    rdx_6 = r15[0xd].d
                                
                                r15[0xd].d = rdx_6 + 4
                                
                                if (rdx_6 + 4 s> *(r15 + 0x6c))
                                    sub_140594770(&r15[0xc])
                                
                                *r15[0xc] = 0x6200610054
                            
                            result_1 = 7
                            
                            if (arg3 u> 7)
                                arg1[7] = 0xd
                                
                                if (r15[0xe] != u"Enter")
                                    int32_t rdx_7 = 0
                                    r15[0xf].d = 0
                                    
                                    if (*(r15 + 0x7c) != 6)
                                        sub_1405947f0(&r15[0xe], 6)
                                        rdx_7 = r15[0xf].d
                                    
                                    r15[0xf].d = rdx_7 + 6
                                    
                                    if (rdx_7 + 6 s> *(r15 + 0x7c))
                                        sub_140594770(&r15[0xe])
                                    
                                    uint64_t* rcx_21 = r15[0xe]
                                    *rcx_21 = 0x650074006e0045
                                    rcx_21[1].d = 0x72
                                
                                result_1 = 8
                                
                                if (arg3 u> 8)
                                    arg1[8] = 0x13
                                    
                                    if (r15[0x10] != u"Pause")
                                        int32_t rdx_8 = 0
                                        r15[0x11].d = 0
                                        
                                        if (*(r15 + 0x8c) != 6)
                                            sub_1405947f0(&r15[0x10], 6)
                                            rdx_8 = r15[0x11].d
                                        
                                        r15[0x11].d = rdx_8 + 6
                                        
                                        if (rdx_8 + 6 s> *(r15 + 0x8c))
                                            sub_140594770(&r15[0x10])
                                        
                                        uint64_t* rcx_24 = r15[0x10]
                                        *rcx_24 = 0x73007500610050
                                        rcx_24[1].d = 0x65
                                    
                                    result_1 = 9
                                    
                                    if (arg3 u> 9)
                                        arg1[9] = 0x14
                                        
                                        if (r15[0x12] != u"CapsLock")
                                            int32_t rdx_9 = 0
                                            r15[0x13].d = 0
                                            
                                            if (*(r15 + 0x9c) != 9)
                                                sub_1405947f0(&r15[0x12], 9)
                                                rdx_9 = r15[0x13].d
                                            
                                            r15[0x13].d = rdx_9 + 9
                                            
                                            if (rdx_9 + 9 s> *(r15 + 0x9c))
                                                sub_140594770(&r15[0x12])
                                            
                                            __builtin_wcscpy(r15[0x12], u"CapsLock")
                                        
                                        result_1 = 0xa
                                        
                                        if (arg3 u> 0xa)
                                            arg1[0xa] = 0x1b
                                            
                                            if (r15[0x14] != u"Escape")
                                                int32_t rdx_10 = 0
                                                r15[0x15].d = 0
                                                
                                                if (*(r15 + 0xac) != 7)
                                                    sub_1405947f0(&r15[0x14], 7)
                                                    rdx_10 = r15[0x15].d
                                                
                                                r15[0x15].d = rdx_10 + 7
                                                
                                                if (rdx_10 + 7 s> *(r15 + 0xac))
                                                    sub_140594770(&r15[0x14])
                                                
                                                uint64_t* rcx_30 = r15[0x14]
                                                *rcx_30 = 0x61006300730045
                                                rcx_30[1].d = 0x650070
                                                *(rcx_30 + 0xc) = 0
                                            
                                            result_1 = 0xb
                                            
                                            if (arg3 u> 0xb)
                                                arg1[0xb] = 0x20
                                                
                                                if (r15[0x16] != u"SpaceBar")
                                                    int32_t rdx_11 = 0
                                                    r15[0x17].d = 0
                                                    
                                                    if (*(r15 + 0xbc) != 9)
                                                        sub_1405947f0(&r15[0x16], 9)
                                                        rdx_11 = r15[0x17].d
                                                    
                                                    r15[0x17].d = rdx_11 + 9
                                                    
                                                    if (rdx_11 + 9 s> *(r15 + 0xbc))
                                                        sub_140594770(&r15[0x16])
                                                    
                                                    __builtin_wcscpy(r15[0x16], u"SpaceBar")
                                                
                                                result_1 = 0xc
                                                
                                                if (arg3 u> 0xc)
                                                    arg1[0xc] = 0x21
                                                    
                                                    if (r15[0x18] != u"PageUp")
                                                        int32_t rdx_12 = 0
                                                        r15[0x19].d = 0
                                                        
                                                        if (*(r15 + 0xcc) != 7)
                                                            sub_1405947f0(&r15[0x18], 7)
                                                            rdx_12 = r15[0x19].d
                                                        
                                                        r15[0x19].d = rdx_12 + 7
                                                        
                                                        if (rdx_12 + 7 s> *(r15 + 0xcc))
                                                            sub_140594770(&r15[0x18])
                                                        
                                                        uint64_t* rcx_36 = r15[0x18]
                                                        *rcx_36 = 0x65006700610050
                                                        rcx_36[1].d = 0x700055
                                                        *(rcx_36 + 0xc) = 0
                                                    
                                                    result_1 = 0xd
                                                    
                                                    if (arg3 u> 0xd)
                                                        arg1[0xd] = 0x22
                                                        
                                                        if (r15[0x1a] != u"PageDown")
                                                            int32_t rdx_13 = 0
                                                            r15[0x1b].d = 0
                                                            
                                                            if (*(r15 + 0xdc) != 9)
                                                                sub_1405947f0(&r15[0x1a], 9)
                                                                rdx_13 = r15[0x1b].d
                                                            
                                                            r15[0x1b].d = rdx_13 + 9
                                                            
                                                            if (rdx_13 + 9 s> *(r15 + 0xdc))
                                                                sub_140594770(&r15[0x1a])
                                                            
                                                            __builtin_wcscpy(r15[0x1a], u"PageDown")
                                                        
                                                        result_1 = 0xe
                                                        
                                                        if (arg3 u> 0xe)
                                                            arg1[0xe] = 0x23
                                                            
                                                            if (r15[0x1c] != &data_142e3ff98)
                                                                int32_t rdx_14 = 0
                                                                r15[0x1d].d = 0
                                                                
                                                                if (*(r15 + 0xec) != 4)
                                                                    sub_1405947f0(&r15[0x1c], 4)
                                                                    rdx_14 = r15[0x1d].d
                                                                
                                                                r15[0x1d].d = rdx_14 + 4
                                                                
                                                                if (rdx_14 + 4 s> *(r15 + 0xec))
                                                                    sub_140594770(&r15[0x1c])
                                                                
                                                                *r15[0x1c] = 0x64006e0045
                                                            
                                                            result_1 = 0xf
                                                            
                                                            if (arg3 u> 0xf)
                                                                arg1[0xf] = 0x24
                                                                
                                                                if (r15[0x1e] != u"Home")
                                                                    int32_t rdx_15 = 0
                                                                    r15[0x1f].d = 0
                                                                    
                                                                    if (*(r15 + 0xfc) != 5)
                                                                        sub_1405947f0(&r15[0x1e], 5)
                                                                        rdx_15 = r15[0x1f].d
                                                                    
                                                                    r15[0x1f].d = rdx_15 + 5
                                                                    
                                                                    if (rdx_15 + 5 s> *(r15 + 0xfc))
                                                                        sub_140594770(&r15[0x1e])
                                                                    
                                                                    uint64_t* rcx_44 = r15[0x1e]
                                                                    *rcx_44 = 0x65006d006f0048
                                                                    rcx_44[1].w = 0
                                                                
                                                                result_1 = 0x10
                                                                
                                                                if (arg3 u> 0x10)
                                                                    arg1[0x10] = 0x25
                                                                    
                                                                    if (r15[0x20] != u"Left")
                                                                        int32_t rdx_16 = 0
                                                                        r15[0x21].d = 0
                                                                        
                                                                        if (*(r15 + 0x10c) != 5)
                                                                            sub_1405947f0(&r15[0x20], 5)
                                                                            rdx_16 = r15[0x21].d
                                                                        
                                                                        r15[0x21].d = rdx_16 + 5
                                                                        
                                                                        if (rdx_16 + 5 s> *(r15 + 0x10c))
                                                                            sub_140594770(&r15[0x20])
                                                                        
                                                                        uint64_t* rcx_47 = r15[0x20]
                                                                        *rcx_47 = 0x7400660065004c
                                                                        rcx_47[1].w = 0
                                                                    
                                                                    result_1 = 0x11
                                                                    
                                                                    if (arg3 u> 0x11)
                                                                        arg1[0x11] = 0x26
                                                                        
                                                                        if (r15[0x22] != &data_142eb66fc)
                                                                            int32_t rdx_17 = 0
                                                                            r15[0x23].d = 0
                                                                            
                                                                            if (*(r15 + 0x11c) != 3)
                                                                                sub_1405947f0(&r15[0x22], 3)
                                                                                rdx_17 = r15[0x23].d
                                                                            
                                                                            r15[0x23].d = rdx_17 + 3
                                                                            
                                                                            if (rdx_17 + 3 s> *(r15 + 0x11c))
                                                                                sub_140594770(&r15[0x22])
                                                                            
                                                                            int32_t* rcx_50 = r15[0x22]
                                                                            *rcx_50 = 0x700055
                                                                            rcx_50[1].w = 0
                                                                        
                                                                        result_1 = 0x12
                                                                        
                                                                        if (arg3 u> 0x12)
                                                                            arg1[0x12] = 0x27
                                                                            
                                                                            if (r15[0x24] != u"Right")
                                                                                int32_t rdx_18 = 0
                                                                                r15[0x25].d = 0
                                                                                
                                                                                if (*(r15 + 0x12c) != 6)
                                                                                    sub_1405947f0(&r15[0x24], 6)
                                                                                    rdx_18 = r15[0x25].d
                                                                                
                                                                                r15[0x25].d = rdx_18 + 6
                                                                                
                                                                                if (rdx_18 + 6 s> *(r15 + 0x12c))
                                                                                    sub_140594770(&r15[0x24])
                                                                                
                                                                                uint64_t* rcx_53 = r15[0x24]
                                                                                *rcx_53 = 0x68006700690052
                                                                                rcx_53[1].d = 0x74
                                                                            
                                                                            result_1 = 0x13
                                                                            
                                                                            if (arg3 u> 0x13)
                                                                                arg1[0x13] = 0x28
                                                                                
                                                                                if (r15[0x26] != u"Down")
                                                                                    int32_t rdx_19 = 0
                                                                                    r15[0x27].d = 0
                                                                                    
                                                                                    if (*(r15 + 0x13c) != 5)
                                                                                        sub_1405947f0(&r15[0x26], 5)
                                                                                        rdx_19 = r15[0x27].d
                                                                                    
                                                                                    r15[0x27].d = rdx_19 + 5
                                                                                    
                                                                                    if (rdx_19 + 5 s> *(r15 + 0x13c))
                                                                                        sub_140594770(&r15[0x26])
                                                                                    
                                                                                    uint64_t* rcx_56 = r15[0x26]
                                                                                    *rcx_56 = 0x6e0077006f0044
                                                                                    rcx_56[1].w = 0
                                                                                
                                                                                result_1 = 0x14
                                                                                
                                                                                if (arg3 u> 0x14)
                                                                                    arg1[0x14] = 0x2d
                                                                                    
                                                                                    if (r15[0x28] != u"Insert")
                                                                                        int32_t rdx_20 = 0
                                                                                        r15[0x29].d = 0
                                                                                        
                                                                                        if (*(r15 + 0x14c) != 7)
                                                                                            sub_1405947f0(&r15[0x28], 7)
                                                                                            rdx_20 = r15[0x29].d
                                                                                        
                                                                                        r15[0x29].d = rdx_20 + 7
                                                                                        
                                                                                        if (rdx_20 + 7 s> *(r15 + 0x14c))
                                                                                            sub_140594770(&r15[0x28])
                                                                                        
                                                                                        uint64_t* rcx_59 = r15[0x28]
                                                                                        *rcx_59 = 0x650073006e0049
                                                                                        rcx_59[1].d = 0x740072
                                                                                        *(rcx_59 + 0xc) = 0
                                                                                    
                                                                                    result_1 = 0x15
                                                                                    
                                                                                    if (arg3 u> 0x15)
                                                                                        arg1[0x15] = 0x2e
                                                                                        
                                                                                        if (r15[0x2a] != u"Delete")
                                                                                            int32_t rdx_21 = 0
                                                                                            r15[0x2b].d = 0
                                                                                            
                                                                                            if (*(r15 + 0x15c) != 7)
                                                                                                sub_1405947f0(&r15[0x2a], 7)
                                                                                                rdx_21 = r15[0x2b].d
                                                                                            
                                                                                            r15[0x2b].d = rdx_21 + 7
                                                                                            
                                                                                            if (rdx_21 + 7 s> *(r15 + 0x15c))
                                                                                                sub_140594770(&r15[0x2a])
                                                                                            
                                                                                            uint64_t* rcx_62 = r15[0x2a]
                                                                                            *rcx_62 = 0x65006c00650044
                                                                                            rcx_62[1].d = 0x650074
                                                                                            *(rcx_62 + 0xc) = 0
                                                                                        
                                                                                        result_1 = 0x16
                                                                                        
                                                                                        if (arg3 u> 0x16)
                                                                                            arg1[0x16] = 0x60
                                                                                            
                                                                                            if (r15[0x2c] != u"NumPadZero")
                                                                                                int32_t rdx_22 = 0
                                                                                                r15[0x2d].d = 0
                                                                                                
                                                                                                if (*(r15 + 0x16c) != 0xb)
                                                                                                    sub_1405947f0(&r15[0x2c], 0xb)
                                                                                                    rdx_22 = r15[0x2d].d
                                                                                                
                                                                                                r15[0x2d].d = rdx_22 + 0xb
                                                                                                
                                                                                                if (rdx_22 + 0xb s> *(r15 + 0x16c))
                                                                                                    sub_140594770(&r15[0x2c])
                                                                                                
                                                                                                __builtin_wcscpy(r15[0x2c], NumPadZero")
                                                                                            
                                                                                            result_1 = 0x17
                                                                                            
                                                                                            if (arg3 u> 0x17)
                                                                                                arg1[0x17] = 0x61
                                                                                                
                                                                                                if (r15[0x2e] != u"NumPadOne")
                                                                                                    int32_t rdx_23 = 0
                                                                                                    r15[0x2f].d = 0
                                                                                                    
                                                                                                    if (*(r15 + 0x17c) != 0xa)
                                                                                                        sub_1405947f0(&r15[0x2e], 0xa)
                                                                                                        rdx_23 = r15[0x2f].d
                                                                                                    
                                                                                                    r15[0x2f].d = rdx_23 + 0xa
                                                                                                    
                                                                                                    if (rdx_23 + 0xa s> *(r15 + 0x17c))
                                                                                                        sub_140594770(&r15[0x2e])
                                                                                                    
                                                                                                    __builtin_memcpy(r15[0x2e], NumPadOne", 
                                                                                                        0x14)
                                                                                                
                                                                                                result_1 = 0x18
                                                                                                
                                                                                                if (arg3 u> 0x18)
                                                                                                    arg1[0x18] = 0x62
                                                                                                    
                                                                                                    if (r15[0x30] != u"NumPadTwo")
                                                                                                        int32_t rdx_24 = 0
                                                                                                        r15[0x31].d = 0
                                                                                                        
                                                                                                        if (*(r15 + 0x18c) != 0xa)
                                                                                                            sub_1405947f0(&r15[0x30], 0xa)
                                                                                                            rdx_24 = r15[0x31].d
                                                                                                        
                                                                                                        r15[0x31].d = rdx_24 + 0xa
                                                                                                        
                                                                                                        if (rdx_24 + 0xa s> *(r15 + 0x18c))
                                                                                                            sub_140594770(&r15[0x30])
                                                                                                        
                                                                                                        __builtin_memcpy(r15[0x30], NumPadTwo", 
                                                                                                            0x14)
                                                                                                    
                                                                                                    result_1 = 0x19
                                                                                                    
                                                                                                    if (arg3 u> 0x19)
                                                                                                        arg1[0x19] = 0x63
                                                                                                        
                                                                                                        if (r15[0x32] != u"NumPadThree")
                                                                                                            int32_t rdx_25 = 0
                                                                                                            r15[0x33].d = 0
                                                                                                            
                                                                                                            if (*(r15 + 0x19c) != 0xc)
                                                                                                                sub_1405947f0(&r15[0x32], 0xc)
                                                                                                                rdx_25 = r15[0x33].d
                                                                                                            
                                                                                                            r15[0x33].d = rdx_25 + 0xc
                                                                                                            
                                                                                                            if (rdx_25 + 0xc s> *(r15 + 0x19c))
                                                                                                                sub_140594770(&r15[0x32])
                                                                                                            
                                                                                                            uint128_t* rax_31 = r15[0x32]
                                                                                                            *rax_31 = (*u"NumPadThree")[0].o
                                                                                                            rax_31[1].q = 0x6500650072
                                                                                                        
                                                                                                        result_1 = 0x1a
                                                                                                        
                                                                                                        if (arg3 u> 0x1a)
                                                                                                            arg1[0x1a] = 0x64
                                                                                                            
                                                                                                            if (r15[0x34] != u"NumPadFour")
                                                                                                                int32_t rdx_26 = 0
                                                                                                                r15[0x35].d = 0
                                                                                                                
                                                                                                                if (*(r15 + 0x1ac) != 0xb)
                                                                                                                    sub_1405947f0(&r15[0x34], 0xb)
                                                                                                                    rdx_26 = r15[0x35].d
                                                                                                                
                                                                                                                r15[0x35].d = rdx_26 + 0xb
                                                                                                                
                                                                                                                if (rdx_26 + 0xb s> *(r15 + 0x1ac))
                                                                                                                    sub_140594770(&r15[0x34])
                                                                                                                
                                                                                                                __builtin_wcscpy(r15[0x34], NumPadFour")
                                                                                                            
                                                                                                            result_1 = 0x1b
                                                                                                            
                                                                                                            if (arg3 u> 0x1b)
                                                                                                                arg1[0x1b] = 0x65
                                                                                                                
                                                                                                                if (r15[0x36] != u"NumPadFive")
                                                                                                                    int32_t rdx_27 = 0
                                                                                                                    r15[0x37].d = 0
                                                                                                                    
                                                                                                                    if (*(r15 + 0x1bc) != 0xb)
                                                                                                                        sub_1405947f0(&r15[0x36], 0xb)
                                                                                                                        rdx_27 = r15[0x37].d
                                                                                                                    
                                                                                                                    r15[0x37].d = rdx_27 + 0xb
                                                                                                                    
                                                                                                                    if (rdx_27 + 0xb s> *(r15 + 0x1bc))
                                                                                                                        sub_140594770(&r15[0x36])
                                                                                                                    
                                                                                                                    __builtin_wcscpy(r15[0x36], NumPadFive")
                                                                                                                
                                                                                                                result_1 = 0x1c
                                                                                                                
                                                                                                                if (arg3 u> 0x1c)
                                                                                                                    arg1[0x1c] = 0x66
                                                                                                                    
                                                                                                                    if (r15[0x38] != u"NumPadSix")
                                                                                                                        int32_t rdx_28 = 0
                                                                                                                        r15[0x39].d = 0
                                                                                                                        
                                                                                                                        if (*(r15 + 0x1cc) != 0xa)
                                                                                                                            sub_1405947f0(&r15[0x38], 0xa)
                                                                                                                            rdx_28 = r15[0x39].d
                                                                                                                        
                                                                                                                        r15[0x39].d = rdx_28 + 0xa
                                                                                                                        
                                                                                                                        if (rdx_28 + 0xa s> *(r15 + 0x1cc))
                                                                                                                            sub_140594770(&r15[0x38])
                                                                                                                        
                                                                                                                        __builtin_memcpy(r15[0x38], NumPadSix", 
                                                                                                                            0x14)
                                                                                                                    
                                                                                                                    result_1 = 0x1d
                                                                                                                    
                                                                                                                    if (arg3 u> 0x1d)
                                                                                                                        arg1[0x1d] = 0x67
                                                                                                                        
                                                                                                                        if (r15[0x3a] != u"NumPadSeven")
                                                                                                                            int32_t rdx_29 = 0
                                                                                                                            r15[0x3b].d = 0
                                                                                                                            
                                                                                                                            if (*(r15 + 0x1dc) != 0xc)
                                                                                                                                sub_1405947f0(&r15[0x3a], 0xc)
                                                                                                                                rdx_29 = r15[0x3b].d
                                                                                                                            
                                                                                                                            r15[0x3b].d = rdx_29 + 0xc
                                                                                                                            
                                                                                                                            if (rdx_29 + 0xc s> *(r15 + 0x1dc))
                                                                                                                                sub_140594770(&r15[0x3a])
                                                                                                                            
                                                                                                                            uint128_t* rax_36 = r15[0x3a]
                                                                                                                            *rax_36 = (*u"NumPadSeven")[0].o
                                                                                                                            rax_36[1].q = 0x6e00650076
                                                                                                                        
                                                                                                                        result_1 = 0x1e
                                                                                                                        
                                                                                                                        if (arg3 u> 0x1e)
                                                                                                                            arg1[0x1e] = 0x68
                                                                                                                            
                                                                                                                            if (r15[0x3c] != u"NumPadEight")
                                                                                                                                int32_t rdx_30 = 0
                                                                                                                                r15[0x3d].d = 0
                                                                                                                                
                                                                                                                                if (*(r15 + 0x1ec) != 0xc)
                                                                                                                                    sub_1405947f0(&r15[0x3c], 0xc)
                                                                                                                                    rdx_30 = r15[0x3d].d
                                                                                                                                
                                                                                                                                r15[0x3d].d = rdx_30 + 0xc
                                                                                                                                
                                                                                                                                if (rdx_30 + 0xc s> *(r15 + 0x1ec))
                                                                                                                                    sub_140594770(&r15[0x3c])
                                                                                                                                
                                                                                                                                uint128_t* rax_38 = r15[0x3c]
                                                                                                                                *rax_38 = (*u"NumPadEight")[0].o
                                                                                                                                rax_38[1].q = 0x7400680067
                                                                                                                            
                                                                                                                            result_1 = 0x1f
                                                                                                                            
                                                                                                                            if (arg3 u> 0x1f)
                                                                                                                                arg1[0x1f] = 0x69
                                                                                                                                
                                                                                                                                if (r15[0x3e] != u"NumPadNine")
                                                                                                                                    int32_t rdx_31 = 0
                                                                                                                                    r15[0x3f].d = 0
                                                                                                                                    
                                                                                                                                    if (*(r15 + 0x1fc) != 0xb)
                                                                                                                                        sub_1405947f0(&r15[0x3e], 0xb)
                                                                                                                                        rdx_31 = r15[0x3f].d
                                                                                                                                    
                                                                                                                                    r15[0x3f].d = rdx_31 + 0xb
                                                                                                                                    
                                                                                                                                    if (rdx_31 + 0xb s> *(r15 + 0x1fc))
                                                                                                                                        sub_140594770(&r15[0x3e])
                                                                                                                                    
                                                                                                                                    __builtin_wcscpy(r15[0x3e], NumPadNine")
                                                                                                                                
                                                                                                                                result_1 = 0x20
                                                                                                                                
                                                                                                                                if (arg3 u> 0x20)
                                                                                                                                    arg1[0x20] = 0x6a
                                                                                                                                    
                                                                                                                                    if (r15[0x40] != u"Multiply")
                                                                                                                                        int32_t rdx_32 = 0
                                                                                                                                        r15[0x41].d = 0
                                                                                                                                        
                                                                                                                                        if (*(r15 + 0x20c) != 9)
                                                                                                                                            sub_1405947f0(&r15[0x40], 9)
                                                                                                                                            rdx_32 = r15[0x41].d
                                                                                                                                        
                                                                                                                                        r15[0x41].d = rdx_32 + 9
                                                                                                                                        
                                                                                                                                        if (rdx_32 + 9 s> *(r15 + 0x20c))
                                                                                                                                            sub_140594770(&r15[0x40])
                                                                                                                                        
                                                                                                                                        __builtin_wcscpy(r15[0x40], u"Multiply")
                                                                                                                                    
                                                                                                                                    result_1 = 0x21
                                                                                                                                    
                                                                                                                                    if (arg3 u> 0x21)
                                                                                                                                        arg1[0x21] = 0x6b
                                                                                                                                        
                                                                                                                                        if (r15[0x42] != &data_142ea6568)
                                                                                                                                            int32_t rdx_33 = 0
                                                                                                                                            r15[0x43].d = 0
                                                                                                                                            
                                                                                                                                            if (*(r15 + 0x21c) != 4)
                                                                                                                                                sub_1405947f0(&r15[0x42], 4)
                                                                                                                                                rdx_33 = r15[0x43].d
                                                                                                                                            
                                                                                                                                            r15[0x43].d = rdx_33 + 4
                                                                                                                                            
                                                                                                                                            if (rdx_33 + 4 s> *(r15 + 0x21c))
                                                                                                                                                sub_140594770(&r15[0x42])
                                                                                                                                            
                                                                                                                                            *r15[0x42] = 0x6400640041
                                                                                                                                        
                                                                                                                                        result_1 = 0x22
                                                                                                                                        
                                                                                                                                        if (arg3 u> 0x22)
                                                                                                                                            arg1[0x22] = 0x6d
                                                                                                                                            
                                                                                                                                            if (r15[0x44] != u"Subtract")
                                                                                                                                                int32_t rdx_34 = 0
                                                                                                                                                r15[0x45].d = 0
                                                                                                                                                
                                                                                                                                                if (*(r15 + 0x22c) != 9)
                                                                                                                                                    sub_1405947f0(&r15[0x44], 9)
                                                                                                                                                    rdx_34 = r15[0x45].d
                                                                                                                                                
                                                                                                                                                r15[0x45].d = rdx_34 + 9
                                                                                                                                                
                                                                                                                                                if (rdx_34 + 9 s> *(r15 + 0x22c))
                                                                                                                                                    sub_140594770(&r15[0x44])
                                                                                                                                                
                                                                                                                                                __builtin_wcscpy(r15[0x44], u"Subtract")
                                                                                                                                            
                                                                                                                                            result_1 = 0x23
                                                                                                                                            
                                                                                                                                            if (arg3 u> 0x23)
                                                                                                                                                arg1[0x23] = 0x6e
                                                                                                                                                
                                                                                                                                                if (r15[0x46] != u"Decimal")
                                                                                                                                                    int32_t rdx_35 = 0
                                                                                                                                                    r15[0x47].d = 0
                                                                                                                                                    
                                                                                                                                                    if (*(r15 + 0x23c) != 8)
                                                                                                                                                        sub_1405947f0(&r15[0x46], 8)
                                                                                                                                                        rdx_35 = r15[0x47].d
                                                                                                                                                    
                                                                                                                                                    r15[0x47].d = rdx_35 + 8
                                                                                                                                                    
                                                                                                                                                    if (rdx_35 + 8 s> *(r15 + 0x23c))
                                                                                                                                                        sub_140594770(&r15[0x46])
                                                                                                                                                    
                                                                                                                                                    *r15[0x46] = *u"Decimal"
                                                                                                                                                
                                                                                                                                                result_1 = 0x24
                                                                                                                                                
                                                                                                                                                if (arg3 u> 0x24)
                                                                                                                                                    arg1[0x24] = 0x6f
                                                                                                                                                    
                                                                                                                                                    if (r15[0x48] != u"Divide")
                                                                                                                                                        int32_t rdx_36 = 0
                                                                                                                                                        r15[0x49].d = 0
                                                                                                                                                        
                                                                                                                                                        if (*(r15 + 0x24c) != 7)
                                                                                                                                                            sub_1405947f0(&r15[0x48], 7)
                                                                                                                                                            rdx_36 = r15[0x49].d
                                                                                                                                                        
                                                                                                                                                        r15[0x49].d = rdx_36 + 7
                                                                                                                                                        
                                                                                                                                                        if (rdx_36 + 7 s> *(r15 + 0x24c))
                                                                                                                                                            sub_140594770(&r15[0x48])
                                                                                                                                                        
                                                                                                                                                        uint64_t* rcx_102 = r15[0x48]
                                                                                                                                                        *rcx_102 = 0x69007600690044
                                                                                                                                                        rcx_102[1].d = 0x650064
                                                                                                                                                        *(rcx_102 + 0xc) = 0
                                                                                                                                                    
                                                                                                                                                    result_1 = 0x25
                                                                                                                                                    
                                                                                                                                                    if (arg3 u> 0x25)
                                                                                                                                                        arg1[0x25] = 0x70
                                                                                                                                                        
                                                                                                                                                        if (r15[0x4a] != &data_142eb69e4)
                                                                                                                                                            int32_t rdx_37 = 0
                                                                                                                                                            r15[0x4b].d = 0
                                                                                                                                                            
                                                                                                                                                            if (*(r15 + 0x25c) != 3)
                                                                                                                                                                sub_1405947f0(&r15[0x4a], 3)
                                                                                                                                                                rdx_37 = r15[0x4b].d
                                                                                                                                                            
                                                                                                                                                            r15[0x4b].d = rdx_37 + 3
                                                                                                                                                            
                                                                                                                                                            if (rdx_37 + 3 s> *(r15 + 0x25c))
                                                                                                                                                                sub_140594770(&r15[0x4a])
                                                                                                                                                            
                                                                                                                                                            int32_t* rcx_105 = r15[0x4a]
                                                                                                                                                            *rcx_105 = 0x310046
                                                                                                                                                            rcx_105[1].w = 0
                                                                                                                                                        
                                                                                                                                                        result_1 = 0x26
                                                                                                                                                        
                                                                                                                                                        if (arg3 u> 0x26)
                                                                                                                                                            arg1[0x26] = 0x71
                                                                                                                                                            
                                                                                                                                                            if (r15[0x4c] != &data_142eb69ec)
                                                                                                                                                                int32_t rdx_38 = 0
                                                                                                                                                                r15[0x4d].d = 0
                                                                                                                                                                
                                                                                                                                                                if (*(r15 + 0x26c) != 3)
                                                                                                                                                                    sub_1405947f0(&r15[0x4c], 3)
                                                                                                                                                                    rdx_38 = r15[0x4d].d
                                                                                                                                                                
                                                                                                                                                                r15[0x4d].d = rdx_38 + 3
                                                                                                                                                                
                                                                                                                                                                if (rdx_38 + 3 s> *(r15 + 0x26c))
                                                                                                                                                                    sub_140594770(&r15[0x4c])
                                                                                                                                                                
                                                                                                                                                                int32_t* rcx_108 = r15[0x4c]
                                                                                                                                                                *rcx_108 = 0x320046
                                                                                                                                                                rcx_108[1].w = 0
                                                                                                                                                            
                                                                                                                                                            result_1 = 0x27
                                                                                                                                                            
                                                                                                                                                            if (arg3 u> 0x27)
                                                                                                                                                                arg1[0x27] = 0x72
                                                                                                                                                                
                                                                                                                                                                if (r15[0x4e] != &data_142eb69f4)
                                                                                                                                                                    int32_t rdx_39 = 0
                                                                                                                                                                    r15[0x4f].d = 0
                                                                                                                                                                    
                                                                                                                                                                    if (*(r15 + 0x27c) != 3)
                                                                                                                                                                        sub_1405947f0(&r15[0x4e], 3)
                                                                                                                                                                        rdx_39 = r15[0x4f].d
                                                                                                                                                                    
                                                                                                                                                                    r15[0x4f].d = rdx_39 + 3
                                                                                                                                                                    
                                                                                                                                                                    if (rdx_39 + 3 s> *(r15 + 0x27c))
                                                                                                                                                                        sub_140594770(&r15[0x4e])
                                                                                                                                                                    
                                                                                                                                                                    int32_t* rcx_111 = r15[0x4e]
                                                                                                                                                                    *rcx_111 = 0x330046
                                                                                                                                                                    rcx_111[1].w = 0
                                                                                                                                                                
                                                                                                                                                                result_1 = 0x28
                                                                                                                                                                
                                                                                                                                                                if (arg3 u> 0x28)
                                                                                                                                                                    arg1[0x28] = 0x73
                                                                                                                                                                    
                                                                                                                                                                    if (r15[0x50] != &data_142eb69fc)
                                                                                                                                                                        int32_t rdx_40 = 0
                                                                                                                                                                        r15[0x51].d = 0
                                                                                                                                                                        
                                                                                                                                                                        if (*(r15 + 0x28c) != 3)
                                                                                                                                                                            sub_1405947f0(&r15[0x50], 3)
                                                                                                                                                                            rdx_40 = r15[0x51].d
                                                                                                                                                                        
                                                                                                                                                                        r15[0x51].d = rdx_40 + 3
                                                                                                                                                                        
                                                                                                                                                                        if (rdx_40 + 3 s> *(r15 + 0x28c))
                                                                                                                                                                            sub_140594770(&r15[0x50])
                                                                                                                                                                        
                                                                                                                                                                        int32_t* rcx_114 = r15[0x50]
                                                                                                                                                                        *rcx_114 = 0x340046
                                                                                                                                                                        rcx_114[1].w = 0
                                                                                                                                                                    
                                                                                                                                                                    result_1 = 0x29
                                                                                                                                                                    
                                                                                                                                                                    if (arg3 u> 0x29)
                                                                                                                                                                        arg1[0x29] = 0x74
                                                                                                                                                                        
                                                                                                                                                                        if (r15[0x52] != &data_142eb6a04)
                                                                                                                                                                            int32_t rdx_41 = 0
                                                                                                                                                                            r15[0x53].d = 0
                                                                                                                                                                            
                                                                                                                                                                            if (*(r15 + 0x29c) != 3)
                                                                                                                                                                                sub_1405947f0(&r15[0x52], 3)
                                                                                                                                                                                rdx_41 = r15[0x53].d
                                                                                                                                                                            
                                                                                                                                                                            r15[0x53].d = rdx_41 + 3
                                                                                                                                                                            
                                                                                                                                                                            if (rdx_41 + 3 s> *(r15 + 0x29c))
                                                                                                                                                                                sub_140594770(&r15[0x52])
                                                                                                                                                                            
                                                                                                                                                                            int32_t* rcx_117 = r15[0x52]
                                                                                                                                                                            *rcx_117 = 0x350046
                                                                                                                                                                            rcx_117[1].w = 0
                                                                                                                                                                        
                                                                                                                                                                        result_1 = 0x2a
                                                                                                                                                                        
                                                                                                                                                                        if (arg3 u> 0x2a)
                                                                                                                                                                            arg1[0x2a] = 0x75
                                                                                                                                                                            
                                                                                                                                                                            if (r15[0x54] != &data_142eb6a0c)
                                                                                                                                                                                int32_t rdx_42 = 0
                                                                                                                                                                                r15[0x55].d = 0
                                                                                                                                                                                
                                                                                                                                                                                if (*(r15 + 0x2ac) != 3)
                                                                                                                                                                                    sub_1405947f0(&r15[0x54], 3)
                                                                                                                                                                                    rdx_42 = r15[0x55].d
                                                                                                                                                                                
                                                                                                                                                                                r15[0x55].d = rdx_42 + 3
                                                                                                                                                                                
                                                                                                                                                                                if (rdx_42 + 3 s> *(r15 + 0x2ac))
                                                                                                                                                                                    sub_140594770(&r15[0x54])
                                                                                                                                                                                
                                                                                                                                                                                int32_t* rcx_120 = r15[0x54]
                                                                                                                                                                                *rcx_120 = 0x360046
                                                                                                                                                                                rcx_120[1].w = 0
                                                                                                                                                                            
                                                                                                                                                                            result_1 = 0x2b
                                                                                                                                                                            
                                                                                                                                                                            if (arg3 u> 0x2b)
                                                                                                                                                                                arg1[0x2b] = 0x76
                                                                                                                                                                                
                                                                                                                                                                                if (r15[0x56] != &data_142eb6a14)
                                                                                                                                                                                    int32_t rdx_43 = 0
                                                                                                                                                                                    r15[0x57].d = 0
                                                                                                                                                                                    
                                                                                                                                                                                    if (*(r15 + 0x2bc) != 3)
                                                                                                                                                                                        sub_1405947f0(&r15[0x56], 3)
                                                                                                                                                                                        rdx_43 = r15[0x57].d
                                                                                                                                                                                    
                                                                                                                                                                                    r15[0x57].d = rdx_43 + 3
                                                                                                                                                                                    
                                                                                                                                                                                    if (rdx_43 + 3 s> *(r15 + 0x2bc))
                                                                                                                                                                                        sub_140594770(&r15[0x56])
                                                                                                                                                                                    
                                                                                                                                                                                    int32_t* rcx_123 = r15[0x56]
                                                                                                                                                                                    *rcx_123 = 0x370046
                                                                                                                                                                                    rcx_123[1].w = 0
                                                                                                                                                                                
                                                                                                                                                                                result_1 = 0x2c
                                                                                                                                                                                
                                                                                                                                                                                if (arg3 u> 0x2c)
                                                                                                                                                                                    arg1[0x2c] = 0x77
                                                                                                                                                                                    
                                                                                                                                                                                    if (r15[0x58] != &data_142eb6a1c)
                                                                                                                                                                                        int32_t rdx_44 = 0
                                                                                                                                                                                        r15[0x59].d = 0
                                                                                                                                                                                        
                                                                                                                                                                                        if (*(r15 + 0x2cc) != 3)
                                                                                                                                                                                            sub_1405947f0(&r15[0x58], 3)
                                                                                                                                                                                            rdx_44 = r15[0x59].d
                                                                                                                                                                                        
                                                                                                                                                                                        r15[0x59].d = rdx_44 + 3
                                                                                                                                                                                        
                                                                                                                                                                                        if (rdx_44 + 3 s> *(r15 + 0x2cc))
                                                                                                                                                                                            sub_140594770(&r15[0x58])
                                                                                                                                                                                        
                                                                                                                                                                                        int32_t* rcx_126 = r15[0x58]
                                                                                                                                                                                        *rcx_126 = 0x380046
                                                                                                                                                                                        rcx_126[1].w = 0
                                                                                                                                                                                    
                                                                                                                                                                                    result_1 = 0x2d
                                                                                                                                                                                    
                                                                                                                                                                                    if (arg3 u> 0x2d)
                                                                                                                                                                                        arg1[0x2d] = 0x78
                                                                                                                                                                                        
                                                                                                                                                                                        if (r15[0x5a] != &data_142eb6a24)
                                                                                                                                                                                            int32_t rdx_45 = 0
                                                                                                                                                                                            r15[0x5b].d = 0
                                                                                                                                                                                            
                                                                                                                                                                                            if (*(r15 + 0x2dc) != 3)
                                                                                                                                                                                                sub_1405947f0(&r15[0x5a], 3)
                                                                                                                                                                                                rdx_45 = r15[0x5b].d
                                                                                                                                                                                            
                                                                                                                                                                                            r15[0x5b].d = rdx_45 + 3
                                                                                                                                                                                            
                                                                                                                                                                                            if (rdx_45 + 3 s> *(r15 + 0x2dc))
                                                                                                                                                                                                sub_140594770(&r15[0x5a])
                                                                                                                                                                                            
                                                                                                                                                                                            int32_t* rcx_129 = r15[0x5a]
                                                                                                                                                                                            *rcx_129 = 0x390046
                                                                                                                                                                                            rcx_129[1].w = 0
                                                                                                                                                                                        
                                                                                                                                                                                        result_1 = 0x2e
                                                                                                                                                                                        
                                                                                                                                                                                        if (arg3 u> 0x2e)
                                                                                                                                                                                            arg1[0x2e] = 0x79
                                                                                                                                                                                            
                                                                                                                                                                                            if (r15[0x5c] != &data_142eb6a30)
                                                                                                                                                                                                int32_t rdx_46 = 0
                                                                                                                                                                                                r15[0x5d].d = 0
                                                                                                                                                                                                
                                                                                                                                                                                                if (*(r15 + 0x2ec) != 4)
                                                                                                                                                                                                    sub_1405947f0(&r15[0x5c], 4)
                                                                                                                                                                                                    rdx_46 = r15[0x5d].d
                                                                                                                                                                                                
                                                                                                                                                                                                r15[0x5d].d = rdx_46 + 4
                                                                                                                                                                                                
                                                                                                                                                                                                if (rdx_46 + 4 s> *(r15 + 0x2ec))
                                                                                                                                                                                                    sub_140594770(&r15[0x5c])
                                                                                                                                                                                                
                                                                                                                                                                                                *r15[0x5c] = 0x3000310046
                                                                                                                                                                                            
                                                                                                                                                                                            result_1 = 0x2f
                                                                                                                                                                                            
                                                                                                                                                                                            if (arg3 u> 0x2f)
                                                                                                                                                                                                arg1[0x2f] = 0x7a
                                                                                                                                                                                                
                                                                                                                                                                                                if (r15[0x5e] != &data_142eb6a38)
                                                                                                                                                                                                    int32_t rdx_47 = 0
                                                                                                                                                                                                    r15[0x5f].d = 0
                                                                                                                                                                                                    
                                                                                                                                                                                                    if (*(r15 + 0x2fc) != 4)
                                                                                                                                                                                                        sub_1405947f0(&r15[0x5e], 4)
                                                                                                                                                                                                        rdx_47 = r15[0x5f].d
                                                                                                                                                                                                    
                                                                                                                                                                                                    r15[0x5f].d = rdx_47 + 4
                                                                                                                                                                                                    
                                                                                                                                                                                                    if (rdx_47 + 4 s> *(r15 + 0x2fc))
                                                                                                                                                                                                        sub_140594770(&r15[0x5e])
                                                                                                                                                                                                    
                                                                                                                                                                                                    *r15[0x5e] = 0x3100310046
                                                                                                                                                                                                
                                                                                                                                                                                                result_1 = 0x30
                                                                                                                                                                                                
                                                                                                                                                                                                if (arg3 u> 0x30)
                                                                                                                                                                                                    arg1[0x30] = 0x7b
                                                                                                                                                                                                    
                                                                                                                                                                                                    if (r15[0x60] != &data_142eb6a40)
                                                                                                                                                                                                        int32_t rdx_48 = 0
                                                                                                                                                                                                        r15[0x61].d = 0
                                                                                                                                                                                                        
                                                                                                                                                                                                        if (*(r15 + 0x30c) != 4)
                                                                                                                                                                                                            sub_1405947f0(&r15[0x60], 4)
                                                                                                                                                                                                            rdx_48 = r15[0x61].d
                                                                                                                                                                                                        
                                                                                                                                                                                                        r15[0x61].d = rdx_48 + 4
                                                                                                                                                                                                        
                                                                                                                                                                                                        if (rdx_48 + 4 s> *(r15 + 0x30c))
                                                                                                                                                                                                            sub_140594770(&r15[0x60])
                                                                                                                                                                                                        
                                                                                                                                                                                                        *r15[0x60] = 0x3200310046
                                                                                                                                                                                                    
                                                                                                                                                                                                    result_1 = 0x31
                                                                                                                                                                                                    
                                                                                                                                                                                                    if (arg3 u> 0x31)
                                                                                                                                                                                                        arg1[0x31] = 0x90
                                                                                                                                                                                                        
                                                                                                                                                                                                        if (r15[0x62] != u"NumLock")
                                                                                                                                                                                                            int32_t rdx_49 = 0
                                                                                                                                                                                                            r15[0x63].d = 0
                                                                                                                                                                                                            
                                                                                                                                                                                                            if (*(r15 + 0x31c) != 8)
                                                                                                                                                                                                                sub_1405947f0(&r15[0x62], 8)
                                                                                                                                                                                                                rdx_49 = r15[0x63].d
                                                                                                                                                                                                            
                                                                                                                                                                                                            r15[0x63].d = rdx_49 + 8
                                                                                                                                                                                                            
                                                                                                                                                                                                            if (rdx_49 + 8 s> *(r15 + 0x31c))
                                                                                                                                                                                                                sub_140594770(&r15[0x62])
                                                                                                                                                                                                            
                                                                                                                                                                                                            *r15[0x62] = *u"NumLock"
                                                                                                                                                                                                        
                                                                                                                                                                                                        result_1 = 0x32
                                                                                                                                                                                                        
                                                                                                                                                                                                        if (arg3 u> 0x32)
                                                                                                                                                                                                            arg1[0x32] = 0x91
                                                                                                                                                                                                            
                                                                                                                                                                                                            if (r15[0x64] != u"ScrollLock")
                                                                                                                                                                                                                int32_t rdx_50 = 0
                                                                                                                                                                                                                r15[0x65].d = 0
                                                                                                                                                                                                                
                                                                                                                                                                                                                if (*(r15 + 0x32c) != 0xb)
                                                                                                                                                                                                                    sub_1405947f0(&r15[0x64], 0xb)
                                                                                                                                                                                                                    rdx_50 = r15[0x65].d
                                                                                                                                                                                                                
                                                                                                                                                                                                                r15[0x65].d = rdx_50 + 0xb
                                                                                                                                                                                                                
                                                                                                                                                                                                                if (rdx_50 + 0xb s> *(r15 + 0x32c))
                                                                                                                                                                                                                    sub_140594770(&r15[0x64])
                                                                                                                                                                                                                
                                                                                                                                                                                                                __builtin_wcscpy(r15[0x64], ScrollLock")
                                                                                                                                                                                                            
                                                                                                                                                                                                            result_1 = 0x33
                                                                                                                                                                                                            
                                                                                                                                                                                                            if (arg3 u> 0x33)
                                                                                                                                                                                                                arg1[0x33] = 0xa0
                                                                                                                                                                                                                
                                                                                                                                                                                                                if (r15[0x66] != u"LeftShift")
                                                                                                                                                                                                                    int32_t rdx_51 = 0
                                                                                                                                                                                                                    r15[0x67].d = 0
                                                                                                                                                                                                                    
                                                                                                                                                                                                                    if (*(r15 + 0x33c) != 0xa)
                                                                                                                                                                                                                        sub_1405947f0(&r15[0x66], 0xa)
                                                                                                                                                                                                                        rdx_51 = r15[0x67].d
                                                                                                                                                                                                                    
                                                                                                                                                                                                                    r15[0x67].d = rdx_51 + 0xa
                                                                                                                                                                                                                    
                                                                                                                                                                                                                    if (rdx_51 + 0xa s> *(r15 + 0x33c))
                                                                                                                                                                                                                        sub_140594770(&r15[0x66])
                                                                                                                                                                                                                    
                                                                                                                                                                                                                    __builtin_memcpy(r15[0x66], LeftShift", 
                                                                                                                                                                                                                        0x14)
                                                                                                                                                                                                                
                                                                                                                                                                                                                result_1 = 0x34
                                                                                                                                                                                                                
                                                                                                                                                                                                                if (arg3 u> 0x34)
                                                                                                                                                                                                                    arg1[0x34] = 0xa1
                                                                                                                                                                                                                    
                                                                                                                                                                                                                    if (r15[0x68] != u"RightShift")
                                                                                                                                                                                                                        int32_t rdx_52 = 0
                                                                                                                                                                                                                        r15[0x69].d = 0
                                                                                                                                                                                                                        
                                                                                                                                                                                                                        if (*(r15 + 0x34c) != 0xb)
                                                                                                                                                                                                                            sub_1405947f0(&r15[0x68], 0xb)
                                                                                                                                                                                                                            rdx_52 = r15[0x69].d
                                                                                                                                                                                                                        
                                                                                                                                                                                                                        r15[0x69].d = rdx_52 + 0xb
                                                                                                                                                                                                                        
                                                                                                                                                                                                                        if (rdx_52 + 0xb s> *(r15 + 0x34c))
                                                                                                                                                                                                                            sub_140594770(&r15[0x68])
                                                                                                                                                                                                                        
                                                                                                                                                                                                                        __builtin_wcscpy(r15[0x68], RightShift")
                                                                                                                                                                                                                    
                                                                                                                                                                                                                    result_1 = 0x35
                                                                                                                                                                                                                    
                                                                                                                                                                                                                    if (arg3 u> 0x35)
                                                                                                                                                                                                                        arg1[0x35] = 0xa2
                                                                                                                                                                                                                        
                                                                                                                                                                                                                        if (r15[0x6a] != u"LeftControl")
                                                                                                                                                                                                                            int32_t rdx_53 = 0
                                                                                                                                                                                                                            r15[0x6b].d = 0
                                                                                                                                                                                                                            
                                                                                                                                                                                                                            if (*(r15 + 0x35c) != 0xc)
                                                                                                                                                                                                                                sub_1405947f0(&r15[0x6a], 0xc)
                                                                                                                                                                                                                                rdx_53 = r15[0x6b].d
                                                                                                                                                                                                                            
                                                                                                                                                                                                                            r15[0x6b].d = rdx_53 + 0xc
                                                                                                                                                                                                                            
                                                                                                                                                                                                                            if (rdx_53 + 0xc s> *(r15 + 0x35c))
                                                                                                                                                                                                                                sub_140594770(&r15[0x6a])
                                                                                                                                                                                                                            
                                                                                                                                                                                                                            uint128_t* rax_68 = r15[0x6a]
                                                                                                                                                                                                                            *rax_68 = (*u"LeftControl")[0].o
                                                                                                                                                                                                                            rax_68[1].q = 0x6c006f0072
                                                                                                                                                                                                                        
                                                                                                                                                                                                                        result_1 = 0x36
                                                                                                                                                                                                                        
                                                                                                                                                                                                                        if (arg3 u> 0x36)
                                                                                                                                                                                                                            arg1[0x36] = 0xa3
                                                                                                                                                                                                                            
                                                                                                                                                                                                                            if (r15[0x6c] != u"RightControl")
                                                                                                                                                                                                                                int32_t rdx_54 = 0
                                                                                                                                                                                                                                r15[0x6d].d = 0
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                if (*(r15 + 0x36c) != 0xd)
                                                                                                                                                                                                                                    sub_1405947f0(&r15[0x6c], 0xd)
                                                                                                                                                                                                                                    rdx_54 = r15[0x6d].d
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                r15[0x6d].d = rdx_54 + 0xd
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                if (rdx_54 + 0xd s> *(r15 + 0x36c))
                                                                                                                                                                                                                                    sub_140594770(&r15[0x6c])
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                uint128_t* rcx_151 = r15[0x6c]
                                                                                                                                                                                                                                *rcx_151 = (*u"RightControl")[0].o
                                                                                                                                                                                                                                rcx_151[1].q = 0x6c006f00720074
                                                                                                                                                                                                                                *(rcx_151 + 0x18) = 0
                                                                                                                                                                                                                            
                                                                                                                                                                                                                            result_1 = 0x37
                                                                                                                                                                                                                            
                                                                                                                                                                                                                            if (arg3 u> 0x37)
                                                                                                                                                                                                                                arg1[0x37] = 0xa4
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                if (r15[0x6e] != u"LeftAlt")
                                                                                                                                                                                                                                    int32_t rdx_55 = 0
                                                                                                                                                                                                                                    r15[0x6f].d = 0
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                    if (*(r15 + 0x37c) != 8)
                                                                                                                                                                                                                                        sub_1405947f0(&r15[0x6e], 8)
                                                                                                                                                                                                                                        rdx_55 = r15[0x6f].d
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                    r15[0x6f].d = rdx_55 + 8
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                    if (rdx_55 + 8 s> *(r15 + 0x37c))
                                                                                                                                                                                                                                        sub_140594770(&r15[0x6e])
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                    *r15[0x6e] = *u"LeftAlt"
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                result_1 = 0x38
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                if (arg3 u> 0x38)
                                                                                                                                                                                                                                    arg1[0x38] = 0xa5
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                    if (r15[0x70] != u"RightAlt")
                                                                                                                                                                                                                                        int32_t rdx_56 = 0
                                                                                                                                                                                                                                        r15[0x71].d = 0
                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                        if (*(r15 + 0x38c) != 9)
                                                                                                                                                                                                                                            sub_1405947f0(&r15[0x70], 9)
                                                                                                                                                                                                                                            rdx_56 = r15[0x71].d
                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                        r15[0x71].d = rdx_56 + 9
                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                        if (rdx_56 + 9 s> *(r15 + 0x38c))
                                                                                                                                                                                                                                            sub_140594770(&r15[0x70])
                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                        __builtin_wcscpy(r15[0x70], u"RightAlt")
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                    result_1 = 0x39
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                    if (arg3 u> 0x39)
                                                                                                                                                                                                                                        arg1[0x39] = 0x5b
                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                        if (r15[0x72] != u"LeftCommand")
                                                                                                                                                                                                                                            int32_t rdx_57 = 0
                                                                                                                                                                                                                                            r15[0x73].d = 0
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            if (*(r15 + 0x39c) != 0xc)
                                                                                                                                                                                                                                                sub_1405947f0(&r15[0x72], 0xc)
                                                                                                                                                                                                                                                rdx_57 = r15[0x73].d
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            r15[0x73].d = rdx_57 + 0xc
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            if (rdx_57 + 0xc s> *(r15 + 0x39c))
                                                                                                                                                                                                                                                sub_140594770(&r15[0x72])
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            uint128_t* rax_74 = r15[0x72]
                                                                                                                                                                                                                                            *rax_74 = (*u"LeftCommand")[0].o
                                                                                                                                                                                                                                            rax_74[1].q = 0x64006e0061
                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                        result_1 = 0x3a
                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                        if (arg3 u> 0x3a)
                                                                                                                                                                                                                                            arg1[0x3a] = 0x5c
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            if (r15[0x74] != u"RightCommand")
                                                                                                                                                                                                                                                int32_t rdx_58 = 0
                                                                                                                                                                                                                                                r15[0x75].d = 0
                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                if (*(r15 + 0x3ac) != 0xd)
                                                                                                                                                                                                                                                    sub_1405947f0(&r15[0x74], 0xd)
                                                                                                                                                                                                                                                    rdx_58 = r15[0x75].d
                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                r15[0x75].d = rdx_58 + 0xd
                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                if (rdx_58 + 0xd s> *(r15 + 0x3ac))
                                                                                                                                                                                                                                                    sub_140594770(&r15[0x74])
                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                uint128_t* rcx_161 = r15[0x74]
                                                                                                                                                                                                                                                *rcx_161 = (*u"RightCommand")[0].o
                                                                                                                                                                                                                                                rcx_161[1].q = 0x64006e0061006d
                                                                                                                                                                                                                                                *(rcx_161 + 0x18) = 0
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            result_1 = 0x3b
    
    int64_t var_1498
    __builtin_memset(&var_1498, 0, 0x2c)
    int32_t var_146c_1 = 0x80
    int32_t var_1468_1 = 0xffffffff
    int32_t var_1464_1 = 0
    int64_t var_1458_1 = 0
    int32_t var_1450_1 = 0
    uint32_t rax_76 = MapVirtualKeyW(0xba, MAPVK_VK_TO_CHAR)
    uint32_t var_1514 = rax_76
    uint32_t var_1518
    
    if (rax_76 != 0)
        var_1518 = 0xba
        sub_140d42420(&var_1498, &var_1514, &var_1518)
    
    uint32_t rax_77 = MapVirtualKeyW(0xbf, MAPVK_VK_TO_CHAR)
    var_1518 = rax_77
    
    if (rax_77 != 0)
        var_1514 = 0xbf
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_78 = MapVirtualKeyW(0xc0, MAPVK_VK_TO_CHAR)
    var_1518 = rax_78
    
    if (rax_78 != 0)
        var_1514 = 0xc0
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_79 = MapVirtualKeyW(0xdb, MAPVK_VK_TO_CHAR)
    var_1518 = rax_79
    
    if (rax_79 != 0)
        var_1514 = 0xdb
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_80 = MapVirtualKeyW(0xdc, MAPVK_VK_TO_CHAR)
    var_1518 = rax_80
    
    if (rax_80 != 0)
        var_1514 = 0xdc
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_81 = MapVirtualKeyW(0xdd, MAPVK_VK_TO_CHAR)
    var_1518 = rax_81
    
    if (rax_81 != 0)
        var_1514 = 0xdd
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_82 = MapVirtualKeyW(0xde, MAPVK_VK_TO_CHAR)
    var_1518 = rax_82
    
    if (rax_82 != 0)
        var_1514 = 0xde
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_83 = MapVirtualKeyW(0xdf, MAPVK_VK_TO_CHAR)
    var_1518 = rax_83
    
    if (rax_83 != 0)
        var_1514 = 0xdf
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_84 = MapVirtualKeyW(0xbb, MAPVK_VK_TO_CHAR)
    var_1518 = rax_84
    
    if (rax_84 != 0)
        var_1514 = 0xbb
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_85 = MapVirtualKeyW(0xbc, MAPVK_VK_TO_CHAR)
    var_1518 = rax_85
    
    if (rax_85 != 0)
        var_1514 = 0xbc
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_86 = MapVirtualKeyW(0xbd, MAPVK_VK_TO_CHAR)
    var_1518 = rax_86
    
    if (rax_86 != 0)
        var_1514 = 0xbd
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_87 = MapVirtualKeyW(0xbe, MAPVK_VK_TO_CHAR)
    var_1518 = rax_87
    
    if (rax_87 != 0)
        var_1514 = 0xbe
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    uint32_t rax_88 = MapVirtualKeyW(0xe2, MAPVK_VK_TO_CHAR)
    var_1518 = rax_88
    
    if (rax_88 != 0)
        var_1514 = 0xe2
        sub_140d42420(&var_1498, &var_1518, &var_1514)
    
    int64_t i_3 = 0x100
    void var_103c
    void* rax_89 = &var_103c
    int64_t i_4 = 0x100
    int64_t i
    
    do
        *(rax_89 - 0xc) = 0
        *(rax_89 - 4) = 0
        rax_89 += 0x10
        i = i_4
        i_4 -= 1
    while (i != 1)
    int32_t var_1448[0x100]
    int64_t var_1048
    int32_t rax_90 = sub_140d47dd0(&var_1448, &var_1048, 0x100, 1, 0)
    
    if (rax_90 s> 0)
        do
            sub_140d6dfe0(&var_1498, var_1448[i_1])
            i_1 += 1
        while (i_1 s< sx.q(rax_90))
    
    int64_t var_1488
    int64_t* rcx_177 = &var_1488
    int64_t* var_1508_1 = &var_1488
    int32_t var_1510 = 0
    int32_t var_150c_1 = 1
    int32_t var_1500_1 = 0xffffffff
    int64_t var_14fc_1 = 0
    int32_t var_1470
    
    if (var_1470 != 0)
        sub_14059bdd0(&var_1510)
        rcx_177 = var_1508_1
    
    double zmm2[0x2] = var_1500_1.o
    double var_14c0_1[0x2] = var_1510.o
    uint32_t rax_92 = (zmm2[0] u>> 0x20).d
    double var_14b0_1[0x2] = zmm2
    double var_14f0[0x2] = (&var_1498).o
    int64_t var_14d0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    
    if (rax_92 s< rcx_177[3].d)
        int32_t i_2 = var_14c0_1[1]:4.d
        
        do
            if (result_1 u< arg3)
                double r8_13 = var_14f0[0]
                int64_t rdx_75 = sx.q(i_2) * 2
                uint64_t result_2 = zx.q(result_1)
                arg1[result_2] = *(*r8_13 + (rdx_75 << 3) + 4)
                int64_t* rax_95 = sub_140a22250(&var_1510, *(*r8_13 + (rdx_75 << 3)))
                void* rdi_1 = &r15[result_2 * 2]
                
                if (rdi_1 != rax_95)
                    int64_t rcx_181 = *rdi_1
                    
                    if (rcx_181 != 0)
                        sub_140a74f90(rcx_181)
                    
                    *rdi_1 = *rax_95
                    *rax_95 = 0
                    *(rdi_1 + 8) = rax_95[1].d
                    *(rdi_1 + 0xc) = *(rax_95 + 0xc)
                    rax_95[1] = 0
                
                int64_t rcx_182 = var_1510.q
                
                if (rcx_182 != 0)
                    sub_140a74f90(rcx_182)
                
                result_1 += 1
            
            var_14c0_1[1].d &= not.d(var_14f0[1]:4.d)
            sub_14059bdd0(&var_14f0[1])
            i_2 = var_14c0_1[1]:4.d
        while (i_2 s< *(var_14c0_1[0] i+ 0x18))
    
    int64_t* rdi_2 = &var_48
    
    do
        int64_t rcx_184 = rdi_2[-2]
        rdi_2 = &rdi_2[-2]
        i_3 -= 1
        
        if (rcx_184 != 0)
            sub_140a74f90(rcx_184)
    while (i_3 != 0)
    
    sub_1405ae180(&var_1498)
    result = zx.q(result_1)

__security_check_cookie(var_48 ^ &var_1548)
return result
