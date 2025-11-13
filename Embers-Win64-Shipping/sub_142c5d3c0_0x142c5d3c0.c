// 函数: sub_142c5d3c0
// 地址: 0x142c5d3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
char** rsi = arg3
int64_t rdi_1

if (arg2 s<= 0xd2)
    if (arg2 == 0xd2)
        *(arg1 + 0x830) = *arg3
        return zx.q(rbp)
    
    if (arg2 - 3 u> 0xcc)
        return 0x30
    
    uint64_t rax_2
    
    switch (arg2)
        case 3
            *(arg1 + 0x298) = *arg3
            return zx.q(rbp)
        case 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xf, 0x10, 0x11, 0x12, 0x16, 0x17, 0x18, 0x19, 0x1a, 
                0x1c, 0x1d, 0x1e, 0x1f, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x31, 0x37, 0x38, 0x39, 
                0x3e, 0x3f, 0x41, 0x42, 0x43, 0x46, 0x48, 0x49, 0x4c, 0x4d, 0x4f, 0x52, 0x53, 0x56, 
                0x57, 0x58, 0x59, 0x5d, 0x5e, 0x5f, 0x61, 0x64, 0x66, 0x67, 0x68, 0x6c, 0x6d, 0x73, 
                0x74, 0x75, 0x76, 0x78, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x82, 0x83, 0x84, 
                0x85, 0x86, 0x87, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x97, 0x98, 0x99, 
                0xa2, 0xa3, 0xa4, 0xa5, 0xa7, 0xa8, 0xa9, 0xaa, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb3, 
                0xb4, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbe, 0xbf, 0xc0, 0xc3, 0xc4, 0xc6, 0xc7, 0xc8, 
                0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce
            return 0x30
        case 0xd
            *(arg1 + 0x380) = *arg3 * 0x3e8
            return zx.q(rbp)
        case 0xe
            *(arg1 + 0x398) = sx.q(*arg3)
            return zx.q(rbp)
        case 0x13
            *(arg1 + 0x3a0) = *arg3
            return zx.q(rbp)
        case 0x14
            *(arg1 + 0x3a4) = *arg3
            return zx.q(rbp)
        case 0x15
            *(arg1 + 0x3b8) = sx.q(*arg3)
            return zx.q(rbp)
        case 0x1b
            rax_2.b = *arg3 != 0
            *(arg1 + 0x3da) = rax_2.b
            return zx.q(rbp)
        case 0x20
            int32_t rcx_4 = *arg3
            *(arg1 + 0x44c) = rcx_4 & 0xffff0000
            *(arg1 + 0x448) = zx.d(rcx_4.w)
            return zx.q(rbp)
        case 0x21
            *(arg1 + 0x428) = *arg3
            return zx.q(rbp)
        case 0x22
            *(arg1 + 0x430) = sx.q(*arg3)
            return zx.q(rbp)
        case 0x29
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5f0) = rax_2.b
            return zx.q(rbp)
        case 0x2a
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5e5) = rax_2.b
            return zx.q(rbp)
        case 0x2b
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5df) = rax_2.b
            
            if (rax_2.b == 0)
                *(arg1 + 0x8f0) &= 0xffffffef
            else
                *(arg1 + 0x8f0) |= 0x10
            
            return zx.q(rbp)
        case 0x2c
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5e8) = rax_2.b
            return zx.q(rbp)
        case 0x2d
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5e0) = rax_2.b
            return zx.q(rbp)
        case 0x2e, 0x36
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5e9) = rax_2.b
            
            if (rax_2.b == 0)
                *(arg1 + 0x438) = 1
                return zx.q(rbp)
            
            *(arg1 + 0x438) = 4
            *(arg1 + 0x5e8) = 0
            return zx.q(rbp)
        case 0x2f
            if (*arg3 == 0)
                *(arg1 + 0x438) = 1
                return zx.q(rbp)
            
            *(arg1 + 0x438) = 2
            *(arg1 + 0x5e8) = 0
            return zx.q(rbp)
        case 0x30
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5dd) = rax_2.b
            return zx.q(rbp)
        case 0x32
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5dc) = rax_2.b
            return zx.q(rbp)
        case 0x33
            *(arg1 + 0x5ec) = *arg3
            return zx.q(rbp)
        case 0x34
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5e2) = rax_2.b
            return zx.q(rbp)
        case 0x35
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5db) = rax_2.b
            return zx.q(rbp)
        case 0x3a
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5e7) = rax_2.b
            return zx.q(rbp)
        case 0x3b
            *(arg1 + 0x270) = *arg3
            return zx.q(rbp)
        case 0x3c
            rdi_1 = sx.q(*arg3)
            
            if (*(arg1 + 0x2c8) s< rdi_1)
                int64_t rax_15 = *(arg1 + 0x7e0)
                
                if (*(arg1 + 0x2b8) == rax_15)
                    data_143ccb8a0(rax_15)
                    *(arg1 + 0x7e0) = 0
                    *(arg1 + 0x2b8) = 0
            
            *(arg1 + 0x2c8) = rdi_1
            return zx.q(rbp)
        case 0x3d
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5da) = rax_2.b
            return zx.q(rbp)
        case 0x40
            rax_2.b = *arg3 != 0
            *(arg1 + 0x450) = rax_2.b
            return zx.q(rbp)
        case 0x44
            *(arg1 + 0x2ac) = *arg3
            return zx.q(rbp)
        case 0x45
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5d9) = rax_2.b
            return zx.q(rbp)
        case 0x47
            *(arg1 + 0x848) = sx.q(*arg3)
            return zx.q(rbp)
        case 0x4a
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5f3) = rax_2.b
            return zx.q(rbp)
        case 0x4b
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5f2) = rax_2.b
            return zx.q(rbp)
        case 0x4e
            *(arg1 + 0x384) = *arg3 * 0x3e8
            return zx.q(rbp)
        case 0x50
            if (*arg3 != 0)
                *(arg1 + 0x5e8) = 0
                *(arg1 + 0x438) = 1
            
            return zx.q(rbp)
        case 0x51
            int32_t rax_38 = *arg3
            
            if (rax_38 == 1)
                sub_142c64760(arg1, "CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!", arg3, 
                    arg4)
                return 0x2b
            
            rax_38.b = rax_38 != 0
            *(arg1 + 0x451) = rax_38.b
            return zx.q(rbp)
        case 0x54
            int32_t rax_16 = *arg3
            
            if (rax_16 s>= 3)
                return 1
            
            *(arg1 + 0x43c) = rax_16
            return zx.q(rbp)
        case 0x55
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5f4) = rax_2.b
            return zx.q(rbp)
        case 0x5a
            j_sub_140592360()
            return 0
        case 0x5b
            rax_2.b = *arg3 != 0
            *(arg1 + 0x605) = rax_2.b
            return zx.q(rbp)
        case 0x5c
            *(arg1 + 0x594) = *arg3
            return zx.q(rbp)
        case 0x60
            rax_2.b = *arg3 != 0
            *(arg1 + 0x3d9) = rax_2.b
            return zx.q(rbp)
        case 0x62
            int32_t rax_39 = *arg3
            int32_t rdi_2 = 0x80000
            
            if (rax_39 s<= 0x80000)
                if (rax_39 s>= 1)
                    rdi_2 = rax_39
                    
                    if (rax_39 s< 0x400)
                        rdi_2 = 0x400
                else
                    rdi_2 = 0x4000
            
            if (rdi_2 == *(arg1 + 0x598))
                *(arg1 + 0x598) = rdi_2
            else
                int64_t rax_41 = data_143ccb8a8(*(arg1 + 0xa80), sx.q(rdi_2 + 1))
                
                if (rax_41 != 0)
                    *(arg1 + 0xa80) = rax_41
                    *(arg1 + 0x598) = rdi_2
                else
                    rbp = (rax_41 + 0x1b).d
                    *(arg1 + 0x598) = rdi_2
            
            return zx.q(rbp)
        case 0x63
            rax_2.b = *arg3 != 0
            *(arg1 + 0x604) = rax_2.b
            return zx.q(rbp)
        case 0x65
            *(arg1 + 0x590) = *arg3
            return zx.q(rbp)
        case 0x69
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5e4) = rax_2.b
            return zx.q(rbp)
        case 0x6a
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5f5) = rax_2.b
            return zx.q(rbp)
        case 0x6b
            int32_t rdx_1 = *arg3
            
            if (rdx_1 != 0)
                *(arg1 + 0x4bae) = (rdx_1 u>> 4).b & 1
                
                if ((rdx_1.b & 0x10) != 0)
                    rdx_1 = (rdx_1 & 0xffffffef) | 2
                
                int32_t rdx_3 = rdx_1 & 0xffffffdb
                int32_t rcx_7 = 0
                
                while (true)
                    int32_t rax_20 = rcx_7
                    rcx_7 += 1
                    
                    if (test_bit(rdx_3, rax_20))
                        break
                    
                    if (rcx_7 s>= 0x1f)
                        return 4
                
                *(arg1 + 0x29c) = rdx_3
            else
                *(arg1 + 0x29c) = 0
            
            return zx.q(rbp)
        case 0x6e
            int32_t rcx_2 = *arg3
            
            if (rcx_2 == 0)
                *(arg1 + 0x5c4) = 0
                return zx.q(rbp)
            
            if (rcx_2 == 1)
                *(arg1 + 0x5c4) = 1
                return zx.q(rbp)
            
            if (rcx_2 != 2)
                return 0x30
            
            *(arg1 + 0x5c4) = 2
            return zx.q(rbp)
        case 0x6f
            int32_t rdx_4 = *arg3
            
            if (rdx_4 != 0)
                *(arg1 + 0x4bbe) = (rdx_4 u>> 4).b & 1
                
                if ((rdx_4.b & 0x10) != 0)
                    rdx_4 = (rdx_4 & 0xffffffef) | 2
                
                int32_t rdx_6 = rdx_4 & 0xffffffdb
                int32_t rcx_8 = 0
                
                while (true)
                    int32_t rax_24 = rcx_8
                    rcx_8 += 1
                    
                    if (test_bit(rdx_6, rax_24))
                        *(arg1 + 0x2a0) = rdx_6
                        break
                    
                    if (rcx_8 s>= 0x1f)
                        return 4
            else
                *(arg1 + 0x2a0) = 0
            
            return zx.q(rbp)
        case 0x70
            *(arg1 + 0x38c) = *arg3 * 0x3e8
            return zx.q(rbp)
        case 0x71
            *(arg1 + 0x5b0) = *arg3
            return zx.q(rbp)
        case 0x72
            *(arg1 + 0x5b8) = sx.q(*arg3)
            return zx.q(rbp)
        case 0x77
            *(arg1 + 0x5f8) = *arg3
            return zx.q(rbp)
        case 0x79
            rax_2.b = *arg3 != 0
            *(arg1 + 0x606) = rax_2.b
            return zx.q(rbp)
        case 0x81
            *(arg1 + 0x5fc) = *arg3
            return zx.q(rbp)
        case 0x88
            rax_2.b = *arg3 != 0
            *(arg1 + 0x607) = rax_2.b
            return zx.q(rbp)
        case 0x89
            rax_2.b = *arg3 != 0
            *(arg1 + 0x608) = rax_2.b
            return zx.q(rbp)
        case 0x8a
            *(arg1 + 0x5c0) = *arg3
            return zx.q(rbp)
        case 0x8b
            int32_t rcx_11 = *arg3
            
            if (rcx_11 u> 0xffff)
                return 0x2b
            
            *(arg1 + 0x2d0) = sub_142c56210(rcx_11.w)
            return zx.q(rbp)
        case 0x8c
            int32_t rcx_12 = *arg3
            
            if (rcx_12 u> 0xffff)
                return 0x2b
            
            *(arg1 + 0x2d4) = sub_142c56200(rcx_12)
            return zx.q(rbp)
        case 0x8d
            rax_2.b = *arg3 != 0
            *(arg1 + 0x609) = rax_2.b
            return zx.q(rbp)
        case 0x96
            rax_2.b = *arg3 != 0
            *(arg1 + 0x488) = rax_2.b
            *(arg1 + 0x528) = rax_2.b
            return zx.q(rbp)
        case 0x9a
            *(arg1 + 0x600) = *arg3
            return zx.q(rbp)
        case 0x9b
            *(arg1 + 0x380) = *arg3
            return zx.q(rbp)
        case 0x9c
            *(arg1 + 0x384) = *arg3
            return zx.q(rbp)
        case 0x9d
            rax_2.b = *arg3 == 0
            *(arg1 + 0x610) = rax_2.b
            return zx.q(rbp)
        case 0x9e
            rax_2.b = *arg3 == 0
            *(arg1 + 0x611) = rax_2.b
            return zx.q(rbp)
        case 0x9f
            *(arg1 + 0x614) = *arg3
            return zx.q(rbp)
        case 0xa0
            *(arg1 + 0x618) = *arg3
            return zx.q(rbp)
        case 0xa1
            *(arg1 + 0x2b0) = *arg3 & 7
            return zx.q(rbp)
        case 0xa6
            int32_t rcx_9 = *arg3
            
            if (rcx_9 == 0)
                *(arg1 + 0x61c) = 0
                return zx.q(rbp)
            
            if (rcx_9 != 1)
                return 0x30
            
            *(arg1 + 0x61c) = rcx_9.b
            return zx.q(rbp)
        case 0xab
            int32_t rcx_15 = *arg3
            
            if (rcx_15 u> 0xf)
                return 0x2b
            
            *(arg1 + 0x7e8) = sub_1428a1f20(rcx_15)
            return zx.q(rbp)
        case 0xac
            rax_2.b = *arg3 != 0
            *(arg1 + 0x4b8) = rax_2.b
            return zx.q(rbp)
        case 0xb2
            *(arg1 + 0x390) = *arg3
            return zx.q(rbp)
        case 0xb5
            *(arg1 + 0x7ec) = *arg3
            return zx.q(rbp)
        case 0xb6
            *(arg1 + 0x7f0) = *arg3
            return zx.q(rbp)
        case 0xbc
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5f6) = rax_2.b
            return zx.q(rbp)
        case 0xbd
            int32_t rax_52 = *arg3 - 1
            
            if (rax_52 u> 0xa)
                *(arg1 + 0x804) = 0
            else
                switch (rax_52)
                    case 0
                        *(arg1 + 0x804) = 1
                    case 1
                        *(arg1 + 0x804) = 2
                    case 2
                        *(arg1 + 0x804) = 3
                    case 3
                        *(arg1 + 0x804) = 4
                    case 4
                        *(arg1 + 0x804) = 5
                    case 5
                        *(arg1 + 0x804) = 6
                    case 6
                        *(arg1 + 0x804) = 7
                    case 7
                        *(arg1 + 0x804) = 8
                    case 8
                        *(arg1 + 0x804) = 9
                    case 9
                        *(arg1 + 0x804) = 0xa
                    case 0xa
                        *(arg1 + 0x804) = 0xb
            
            return zx.q(rbp)
        case 0xc1, 0xc2
            *(arg1 + 0x4e58) = *arg3
            return zx.q(rbp)
        case 0xc5
            rax_2.b = *arg3 != 0
            *(arg1 + 0x80c) = rax_2.b
            return zx.q(rbp)
        case 0xcf
            rax_2.b = *arg3 != 0
            *(arg1 + 0x5e3) = rax_2.b
            return zx.q(rbp)
else if (arg2 s<= 0x2711)
    if (arg2 == 0x2711)
        *(arg1 + 0x278) = *arg3
        return zx.q(rbp)
    
    if (arg2 - 0xd4 u> 0x37)
        return 0x30
    
    uint64_t rax_57
    
    switch (arg2)
        case 0xd4
            *(arg1 + 0x388) = *arg3
            return zx.q(rbp)
        case 0xd5
            rax_57.b = *arg3 != 0
            *(arg1 + 0x834) = rax_57.b
            return zx.q(rbp)
        case 0xd6
            *(arg1 + 0x838) = *arg3
            return zx.q(rbp)
        case 0xd7
            *(arg1 + 0x83c) = *arg3
            return zx.q(rbp)
        case 0xd8
            int32_t rcx_22 = *arg3
            *(arg1 + 0x490) = rcx_22.b & 1
            *(arg1 + 0x491) = (rcx_22 u>> 1).b & 1
            return zx.q(rbp)
        case 0xd9, 0xdb, 0xdc, 0xdd, 0xde, 0xdf, 0xe0, 0xe4, 0xe6, 0xe7, 0xeb, 0xec, 0xee, 0xf0, 
                0xf1, 0xf3, 0xf6, 0xf7, 0xfb, 0xfc, 0xfd, 0xfe, 0xff, 0x100, 0x101, 0x102, 0x103, 
                0x104, 0x106, 0x107, 0x108, 0x10a
            return 0x30
        case 0xda
            rax_57.b = *arg3 != 0
            *(arg1 + 0x800) = rax_57.b
            return zx.q(rbp)
        case 0xe1
            rax_57.b = *arg3 != 0
            *(arg1 + 0x850) = rax_57.b
            return zx.q(rbp)
        case 0xe2
            rax_57.b = *arg3 != 0
            *(arg1 + 0x851) = rax_57.b
            return zx.q(rbp)
        case 0xe3
            *(arg1 + 0x854) = *arg3
            return zx.q(rbp)
        case 0xe5
            *(arg1 + 0x3d8) = *arg3 & 1
            return zx.q(rbp)
        case 0xe8
            if (j_sub_14058f640() != 0)
                *(arg1 + 0x452) = *rsi != 0
                return zx.q(rbp)
            
            return 4
        case 0xe9
            if (sub_140592380() == 0)
                return 4
            
            *(arg1 + 0x4b9) = *rsi != 0
            return zx.q(rbp)
        case 0xea
            rax_57.b = *arg3 != 0
            *(arg1 + 0x852) = rax_57.b
            return zx.q(rbp)
        case 0xed
            rax_57.b = *arg3 != 0
            *(arg1 + 0x853) = rax_57.b
            return zx.q(rbp)
        case 0xef
            return 4
        case 0xf2
            rax_57.b = *arg3 != 0
            *(arg1 + 0x394) = rax_57.b
            return zx.q(rbp)
        case 0xf4
            return 4
        case 0xf5
            rax_57.b = *arg3 != 0
            *(arg1 + 0x5e1) = rax_57.b
            return zx.q(rbp)
        case 0xf8
            rax_57.b = *arg3 != 0
            *(arg1 + 0x4f0) = rax_57.b
            return zx.q(rbp)
        case 0xf9
            int32_t rax_67 = *arg3
            
            if (rax_67 == 1)
                sub_142c64760(arg1, "CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!", arg3, 
                    arg4)
                return 0x2b
            
            rax_67.b = rax_67 != 0
            *(arg1 + 0x4f1) = rax_67.b
            return zx.q(rbp)
        case 0xfa
            int32_t rcx_20 = *arg3
            *(arg1 + 0x4ec) = rcx_20 & 0xffff0000
            *(arg1 + 0x4e8) = zx.d(rcx_20.w)
            return zx.q(rbp)
        case 0x105
            int32_t rcx_24 = *arg3
            *(arg1 + 0x530) = rcx_24.b & 1
            *(arg1 + 0x531) = (rcx_24 u>> 1).b & 1
            return zx.q(rbp)
        case 0x109
            rax_57.b = *arg3 != 0
            *(arg1 + 0x858) = rax_57.b
            return zx.q(rbp)
        case 0x10b
            int32_t rax_61 = *arg3
            *(arg1 + 0x2a4) = rax_61
            int32_t rax_62 = rax_61 & 0xfffffffa
            int32_t rax_63 = neg.d(rax_62)
            return zx.q(sbb.d(rax_63, rax_63, rax_62 != 0)) & 4
else if (arg2 s<= 0x27b4)
    if (arg2 == 0x27b4)
        *(arg1 + 0x338) = *arg3
        return zx.q(rbp)
    
    if (arg2 - 0x2712 u> 0x93)
        return 0x30
    
    switch (arg2)
        case 0x2712
            if (*(arg1 + 0x888) != 0)
                data_143ccb8a0(*(arg1 + 0x880), &__dos_header)
                *(arg1 + 0x880) = 0
                *(arg1 + 0x888) = 0
            
            rbp = sub_142c63060(arg1 + 0x6e8, *rsi)
            *(arg1 + 0x880) = *(arg1 + 0x6e8)
            return zx.q(rbp)
        case 0x2713, 0x2718, 0x271b, 0x271c, 0x271d, 0x271e, 0x2723, 0x2724, 0x2725, 0x272b, 
                0x272e, 0x2730, 0x2731, 0x2732, 0x2733, 0x2736, 0x2738, 0x2739, 0x273a, 0x273b, 
                0x273c, 0x273d, 0x273e, 0x273f, 0x2740, 0x2741, 0x2742, 0x2743, 0x2744, 0x2745, 
                0x2746, 0x2747, 0x2748, 0x274a, 0x274b, 0x274c, 0x274d, 0x2750, 0x2752, 0x2753, 
                0x2754, 0x2755, 0x2757, 0x2758, 0x2759, 0x275a, 0x275b, 0x275e, 0x275f, 0x2760, 
                0x2761, 0x2764, 0x2765, 0x276a, 0x276b, 0x276c, 0x276e, 0x2770, 0x2772, 0x2773, 
                0x2775, 0x2779, 0x277a, 0x277b, 0x277c, 0x277e, 0x277f, 0x2780, 0x2781, 0x2782, 
                0x2783, 0x2784, 0x2785, 0x2787, 0x2788, 0x2789, 0x278a, 0x278b, 0x278c, 0x278d, 
                0x278e, 0x278f, 0x2790, 0x2791, 0x2792, 0x2794, 0x2795, 0x2798, 0x2799, 0x279a, 
                0x279b, 0x279c, 0x279d, 0x279e, 0x279f, 0x27a0, 0x27a1, 0x27a2, 0x27a4
            return 0x30
        case 0x2714
            return zx.q(sub_142c63060(arg1 + 0x6c8, *arg3))
        case 0x2715
            return zx.q(sub_142c630c0(*rsi, arg1 + 0x768, arg1 + 0x770))
        case 0x2716
            return zx.q(sub_142c630c0(*rsi, arg1 + 0x780, arg1 + 0x788))
        case 0x2717
            return zx.q(sub_142c63060(arg1 + 0x6d8, *arg3))
        case 0x2719
            *(arg1 + 0x280) = *arg3
            return zx.q(rbp)
        case 0x271a
            *(arg1 + 0x268) = *arg3
            return zx.q(rbp)
        case 0x271f
            *(arg1 + 0x2b8) = *arg3
            data_143ccb8a0(*(arg1 + 0x7e0), &__dos_header)
            *(arg1 + 0x7e0) = 0
            *(arg1 + 0x438) = 2
            return zx.q(rbp)
        case 0x2720
            if (*(arg1 + 0x898) != 0)
                data_143ccb8a0(*(arg1 + 0x890), &__dos_header)
                *(arg1 + 0x890) = 0
                *(arg1 + 0x898) = 0
            
            rbp = sub_142c63060(arg1 + 0x6e0, *rsi)
            *(arg1 + 0x890) = *(arg1 + 0x6e0)
            return zx.q(rbp)
        case 0x2721
            rbp = sub_142c63060(arg1 + 0x680, *arg3)
            int32_t rax_104
            rax_104.b = *(arg1 + 0x680) != 0
            *(arg1 + 0x5de) = rax_104.b
            return zx.q(rbp)
        case 0x2722
            return zx.q(sub_142c63060(arg1 + 0x740, *arg3))
        case 0x2726
            return zx.q(sub_142c63060(arg1 + 0x640, *arg3))
        case 0x2727
            *(arg1 + 0x3c0) = *arg3
            return zx.q(rbp)
        case 0x2728
            *(arg1 + 0x3d0) = *arg3
            *(arg1 + 0x438) = 3
            *(arg1 + 0x5e8) = 0
            return zx.q(rbp)
        case 0x2729
            return zx.q(sub_142c63060(arg1 + 0x620, *arg3))
        case 0x272a
            return zx.q(sub_142c63060(arg1 + 0x698, *arg3))
        case 0x272c
            *(arg1 + 0x3e0) = *arg3
            return zx.q(rbp)
        case 0x272d
            *(arg1 + 0x288) = *arg3
            return zx.q(rbp)
        case 0x272f
            int64_t rdx_18 = *arg3
            
            if (rdx_18 != 0)
                int64_t* rax_90 = sub_142c52470(*(arg1 + 0x8a0), rdx_18)
                
                if (rax_90 == 0)
                    sub_142c524d0(*(arg1 + 0x8a0))
                    *(arg1 + 0x8a0) = 0
                    return 0x1b
                
                *(arg1 + 0x8a0) = rax_90
            
            return zx.q(rbp)
        case 0x2734
            return zx.q(sub_142c63060(arg1 + 0x650, *arg3))
        case 0x2735
            int64_t rax_116 = *arg3
            *(arg1 + 0x258) = rax_116
            
            if (rax_116 == 0)
                *(arg1 + 0x258) = __acrt_iob_func((rax_116 + 2).d)
            
            return zx.q(rbp)
        case 0x2737
            *(arg1 + 0x3e8) = *arg3
            return zx.q(rbp)
        case 0x2749
            *(arg1 + 0x370) = *arg3
            return zx.q(rbp)
        case 0x274e
            return zx.q(sub_142c63060(arg1 + 0x660, *arg3))
        case 0x274f
            rbp = sub_142c63060(arg1 + 0x6b8, *arg3)
            int32_t rax_125
            rax_125.b = *(arg1 + 0x6b8) != 0
            *(arg1 + 0x5f1) = rax_125.b
            return zx.q(rbp)
        case 0x2751
            return zx.q(sub_142c63060(arg1 + 0x700, *arg3))
        case 0x2756
            *(arg1 + 0x410) = *arg3
            return zx.q(rbp)
        case 0x275c
            return zx.q(sub_142c63060(arg1 + 0x738, *arg3))
        case 0x275d
            return zx.q(sub_142c63060(arg1 + 0x730, *arg3))
        case 0x2762
            rbp = sub_142c63060(arg1 + 0x648, *arg3)
            int64_t* rax_92 = sub_142c586c0(arg1, nullptr, *(arg1 + 0x8b0), *(arg1 + 0x3d9), arg4)
            *(arg1 + 0x8b0) = rax_92
            
            if (rax_92 == 0)
                rbp = 0x1b
            
            return zx.q(rbp)
        case 0x2763
            return zx.q(sub_142c63060(arg1 + 0x720, *arg3))
        case 0x2766
            return zx.q(sub_142c63060(arg1 + 0x630, *arg3))
        case 0x2767
            return zx.q(sub_142c63060(arg1 + 0x688, *arg3))
        case 0x2768
            return zx.q(sub_142c63060(arg1 + 0x6a8, *arg3))
        case 0x2769
            char* rdx_34 = *arg3
            
            if (rdx_34 != 0 && *rdx_34 != 0)
                j_sub_142c72050(arg1)
                rbp = 0x35
            
            return zx.q(rbp)
        case 0x276d
            *(arg1 + 0x3f0) = *arg3
            return zx.q(rbp)
        case 0x276f
            *(arg1 + 0x260) = *arg3
            return zx.q(rbp)
        case 0x2771
            return zx.q(sub_142c63060(arg1 + 0x6f0, *arg3))
        case 0x2774
            int64_t rsi_1 = *arg3
            
            if (*(arg1 + 0xd0) != 0)
                sub_142c52530(arg1, 1, 2)
                
                if (*(arg1 + 0xb8) == 3)
                    *(arg1 + 0xb0) = 0
                    *(arg1 + 0xb8) = 0
                
                if (*(*(arg1 + 0xd0) + 0x50) == *(arg1 + 0x8b0))
                    *(arg1 + 0x8b0) = 0
                
                if (*(*(arg1 + 0xd0) + 0x58) == *(arg1 + 0x4ab0))
                    *(arg1 + 0x4ab0) = 0
                
                *(*(arg1 + 0xd0) + 4) -= 1
                sub_142c52570(arg1, 1)
                *(arg1 + 0xd0) = 0
            
            *(arg1 + 0xd0) = rsi_1
            
            if (rsi_1 != 0)
                sub_142c52530(arg1, 1, 2)
                *(*(arg1 + 0xd0) + 4) += 1
                char* rax_136 = *(arg1 + 0xd0)
                
                if ((*rax_136 & 8) != 0)
                    *(arg1 + 0xb0) = &rax_136[0x20]
                    *(arg1 + 0xb8) = 3
                
                if (*(*(arg1 + 0xd0) + 0x50) != 0)
                    sub_142c58370(*(arg1 + 0x8b0))
                    *(arg1 + 0x8b0) = *(*(arg1 + 0xd0) + 0x50)
                
                void* rax_140 = *(arg1 + 0xd0)
                
                if (*(rax_140 + 0x58) != 0)
                    *(arg1 + 0x588) = *(rax_140 + 0x60)
                    *(arg1 + 0x4ab0) = *(*(arg1 + 0xd0) + 0x58)
                
                sub_142c52570(arg1, 1)
            
            return zx.q(rbp)
        case 0x2776
            char* rdx_14 = *arg3
            
            if (rdx_14 != 0 && *rdx_14 == 0)
                rdx_14 = "deflate, gzip"
            
            return zx.q(sub_142c63060(arg1 + 0x668, rdx_14))
        case 0x2777
            *(arg1 + 0x5a0) = *arg3
            return zx.q(rbp)
        case 0x2778
            *(arg1 + 0x5a8) = *arg3
            return zx.q(rbp)
        case 0x277d
            *(arg1 + 0x4b0) = *arg3
            return zx.q(rbp)
        case 0x2786
            return zx.q(sub_142c63060(arg1 + 0x6c0, *arg3))
        case 0x2793
            *(arg1 + 0x378) = *arg3
            return zx.q(rbp)
        case 0x2796
            return zx.q(sub_142c63060(arg1 + 0x670, *arg3))
        case 0x2797
            char* rdi_4 = *arg3
            
            if (rdi_4 != 0)
                if (sub_142c70460(rdi_4, "ALL") == 0)
                    if (sub_142c70460(rdi_4, "SESS") == 0)
                        if (sub_142c70460(rdi_4, "FLUSH") == 0)
                            if (sub_142c70460(rdi_4, "RELOAD") == 0)
                                if (*(arg1 + 0x8b0) == 0)
                                    int64_t* rax_97
                                    rax_97, arg4 = sub_142c586c0(arg1, nullptr, nullptr, 1, arg4)
                                    *(arg1 + 0x8b0) = rax_97
                                
                                char* rax_98 = data_143ccb8b0(rdi_4)
                                
                                if (rax_98 == 0 || *(arg1 + 0x8b0) == 0)
                                    rbp = 0x1b
                                    data_143ccb8a0(rax_98)
                                else
                                    sub_142c52530(arg1, 2, 2)
                                    char r8_1
                                    char* r9_3
                                    
                                    if (j_sub_142c704d0("Set-Cookie:", rax_98, 0xb) == 0)
                                        r9_3 = rax_98
                                        r8_1 = 0
                                    else
                                        r9_3 = &rax_98[0xb]
                                        r8_1 = 1
                                    
                                    DBI1::OpenModW(arg1, *(arg1 + 0x8b0), r8_1, r9_3, arg4, 
                                        nullptr, nullptr)
                                    sub_142c52570(arg1, 2)
                                    data_143ccb8a0(rax_98)
                            else
                                sub_142c58990(arg1)
                        else
                            sub_142c58c40(arg1, 0)
                    else
                        sub_142c52530(arg1, 2, 2)
                        sub_142c583d0(*(arg1 + 0x8b0))
                        sub_142c52570(arg1, 2)
                else
                    sub_142c52530(arg1, 2, 2)
                    sub_142c583a0(*(arg1 + 0x8b0))
                    sub_142c52570(arg1, 2)
            
            return zx.q(rbp)
        case 0x27a3
            return zx.q(sub_142c63060(arg1 + 0x678, *arg3))
        case 0x27a5
            *(arg1 + 0x328) = *arg3
            return zx.q(rbp)
else if (arg2 s> 0x4e2b)
    if (arg2 s> 0x75a3)
        if (arg2 == 0x75a4)
            *(arg1 + 0x3b8) = *arg3
            return zx.q(rbp)
        
        if (arg2 == 0x75a5)
            *(arg1 + 0x5b8) = *arg3
            return zx.q(rbp)
        
        if (arg2 != 0x75a8)
            if (arg2 == 0x75c1)
                *(arg1 + 0x3a8) = *arg3
                return zx.q(rbp)
            
            if (arg2 == 0x75c2)
                *(arg1 + 0x3b0) = *arg3
                return zx.q(rbp)
            
            return 0x30
        
        rdi_1 = *arg3
        
        if (*(arg1 + 0x2c8) s>= rdi_1)
            *(arg1 + 0x2c8) = rdi_1
            return zx.q(rbp)
        
        int64_t rax_217 = *(arg1 + 0x7e0)
        
        if (*(arg1 + 0x2b8) != rax_217)
            *(arg1 + 0x2c8) = rdi_1
            return zx.q(rbp)
        
        data_143ccb8a0(rax_217)
        *(arg1 + 0x7e0) = 0
        *(arg1 + 0x2b8) = 0
        *(arg1 + 0x2c8) = rdi_1
        return zx.q(rbp)
    
    if (arg2 == 0x75a3)
        *(arg1 + 0x398) = *arg3
        return zx.q(rbp)
    
    if (arg2 - 0x4e2c u> 0xcf)
        return 0x30
    
    switch (arg2)
        case 0x4e2c
            int64_t rax_200 = *arg3
            *(arg1 + 0x2f0) = rax_200
            
            if (rax_200 != 0)
                *(arg1 + 0x2f8) = 1
            else
                *(arg1 + 0x2f8) = 0
                *(arg1 + 0x2f0) = fread
            
            return zx.q(rbp)
        case 0x4e2d, 0x4e2e, 0x4e2f, 0x4e30, 0x4e31, 0x4e32, 0x4e33, 0x4e34, 0x4e35, 0x4e36, 
                0x4e37, 0x4e38, 0x4e39, 0x4e3a, 0x4e3b, 0x4e3c, 0x4e3d, 0x4e3e, 0x4e3f, 0x4e40, 
                0x4e41, 0x4e42, 0x4e43, 0x4e44, 0x4e45, 0x4e46, 0x4e47, 0x4e48, 0x4e49, 0x4e4a, 
                0x4e4b, 0x4e4c, 0x4e4d, 0x4e4e, 0x4e4f, 0x4e50, 0x4e51, 0x4e52, 0x4e53, 0x4e54, 
                0x4e55, 0x4e56, 0x4e57, 0x4e59, 0x4e5a, 0x4e5b, 0x4e5c, 0x4e5d, 0x4e5e, 0x4e5f, 
                0x4e60, 0x4e61, 0x4e62, 0x4e63, 0x4e64, 0x4e65, 0x4e66, 0x4e67, 0x4e68, 0x4e69, 
                0x4e6a, 0x4e6b, 0x4e6c, 0x4e6d, 0x4e6e, 0x4e70, 0x4e71, 0x4e72, 0x4e73, 0x4e74, 
                0x4e75, 0x4e76, 0x4e77, 0x4e78, 0x4e79, 0x4e7a, 0x4e7b, 0x4e7c, 0x4e7d, 0x4e7f, 
                0x4e80, 0x4e81, 0x4e82, 0x4e83, 0x4e84, 0x4e85, 0x4e86, 0x4e87, 0x4e88, 0x4e89, 
                0x4e8a, 0x4e8b, 0x4e8d, 0x4e8e, 0x4e8f, 0x4e90, 0x4e91, 0x4e92, 0x4e93, 0x4e94, 
                0x4e95, 0x4e96, 0x4e97, 0x4e98, 0x4e99, 0x4e9a, 0x4e9b, 0x4e9c, 0x4e9d, 0x4e9e, 
                0x4e9f, 0x4ea0, 0x4ea1, 0x4ea3, 0x4ea4, 0x4ea5, 0x4ea6, 0x4ea7, 0x4ea8, 0x4ea9, 
                0x4eaa, 0x4eab, 0x4eac, 0x4ead, 0x4eb1, 0x4eb2, 0x4eb3, 0x4eb5, 0x4eb6, 0x4eb7, 
                0x4eb8, 0x4eb9, 0x4eba, 0x4ebb, 0x4ebc, 0x4ebd, 0x4ebe, 0x4ebf, 0x4ec0, 0x4ec1, 
                0x4ec2, 0x4ec4, 0x4ec5, 0x4ec6, 0x4ec8, 0x4ec9, 0x4eca, 0x4ecb, 0x4ecc, 0x4ecd, 
                0x4ece, 0x4ecf, 0x4ed0, 0x4ed1, 0x4ed2, 0x4ed3, 0x4ed4, 0x4ed5, 0x4ed6, 0x4ed7, 
                0x4ed8, 0x4ed9, 0x4eda, 0x4edb, 0x4edc, 0x4edd, 0x4ede, 0x4edf, 0x4ee0, 0x4ee1, 
                0x4ee2, 0x4ee3, 0x4ee5, 0x4ee9, 0x4eea, 0x4eeb, 0x4eec, 0x4eed, 0x4eee, 0x4eef, 
                0x4ef1, 0x4ef2, 0x4ef3, 0x4ef4, 0x4ef5, 0x4ef6, 0x4ef7, 0x4ef8, 0x4ef9, 0x4efa
            return 0x30
        case 0x4e58
            int64_t rax_196 = *arg3
            *(arg1 + 0x300) = rax_196
            rax_196.b = rax_196 != 0
            *(arg1 + 0x8e8) = rax_196.b
            return zx.q(rbp)
        case 0x4e6f
            *(arg1 + 0x2e0) = *arg3
            return zx.q(rbp)
        case 0x4e7e
            *(arg1 + 0x310) = *arg3
            return zx.q(rbp)
        case 0x4e8c
            *(arg1 + 0x4a8) = *arg3
            return zx.q(rbp)
        case 0x4ea2
            *(arg1 + 0x318) = *arg3
            return zx.q(rbp)
        case 0x4eae
            *(arg1 + 0x358) = *arg3
            return zx.q(rbp)
        case 0x4eaf
            *(arg1 + 0x360) = *arg3
            return zx.q(rbp)
        case 0x4eb0
            *(arg1 + 0x368) = *arg3
            return zx.q(rbp)
        case 0x4eb4
            *(arg1 + 0x320) = *arg3
            return zx.q(rbp)
        case 0x4ec3
            *(arg1 + 0x330) = *arg3
            return zx.q(rbp)
        case 0x4ec7
            *(arg1 + 0x2c0) = *arg3
            return zx.q(rbp)
        case 0x4ee4
            *(arg1 + 0x2e8) = *arg3
            return zx.q(rbp)
        case 0x4ee6
            *(arg1 + 0x810) = *arg3
            return zx.q(rbp)
        case 0x4ee7
            *(arg1 + 0x818) = *arg3
            return zx.q(rbp)
        case 0x4ee8
            *(arg1 + 0x820) = *arg3
            return zx.q(rbp)
        case 0x4ef0
            *(arg1 + 0x340) = *arg3
            return zx.q(rbp)
        case 0x4efb
            int64_t rax_197 = *arg3
            *(arg1 + 0x308) = rax_197
            rax_197.b = rax_197 != 0
            *(arg1 + 0x8e8) = rax_197.b
            return zx.q(rbp)
else
    if (arg2 == 0x4e2b)
        int64_t rax_193 = *arg3
        *(arg1 + 0x2d8) = rax_193
        
        if (rax_193 != 0)
            *(arg1 + 0x2fc) = 1
        else
            *(arg1 + 0x2fc) = 0
            *(arg1 + 0x2d8) = fwrite
        
        return zx.q(rbp)
    
    if (arg2 - 0x27b5 u> 0x65)
        return 0x30
    
    switch (arg2)
        case 0x27b5
            int64_t rsi_2 = *arg3
            int64_t rax_152
            
            if (rsi_2 != 0)
                rax_152 = *(arg1 + 0x2c8)
            
            if (rsi_2 == 0 || rax_152 == -1)
                rbp = sub_142c63060(arg1 + 0x7e0, rsi_2)
            else
                int64_t rax_154
                
                if (rax_152 s>= 0)
                    data_143ccb8a0(*(arg1 + 0x7e0))
                    *(arg1 + 0x7e0) = 0
                    int64_t rcx_100 = 1
                    int64_t rax_153 = *(arg1 + 0x2c8)
                    
                    if (rax_153 != 0)
                        rcx_100 = rax_153
                    
                    rax_154 = data_143ccb898(rcx_100)
                
                if (rax_152 s>= 0 && rax_154 != 0)
                    int64_t r8_4 = *(arg1 + 0x2c8)
                    
                    if (r8_4 != 0)
                        memcpy(rax_154, rsi_2, r8_4.d)
                    
                    *(arg1 + 0x7e0) = rax_154
                else
                    rbp = 0x1b
            
            *(arg1 + 0x2b8) = *(arg1 + 0x7e0)
            *(arg1 + 0x438) = 2
            return zx.q(rbp)
        case 0x27b6, 0x27b7, 0x27bb, 0x27bc, 0x27c2, 0x27c3, 0x27c4, 0x27c5, 0x27c6, 0x27c7, 
                0x27c8, 0x27c9, 0x27cc, 0x27cd, 0x27d1, 0x27d2, 0x27d4, 0x27d5, 0x27d6, 0x27d7, 
                0x27d8, 0x27dc, 0x27dd, 0x27de, 0x27df, 0x27e0, 0x27e2, 0x27e4, 0x27e5, 0x27e6, 
                0x27e7, 0x27e8, 0x27ea, 0x27eb, 0x27f1, 0x27f2, 0x27f3, 0x27f5, 0x27f7, 0x27f8, 
                0x27f9, 0x27fa, 0x27fb, 0x27fd, 0x27ff, 0x2802, 0x2804, 0x2805, 0x2808, 0x2809, 
                0x280a, 0x280b, 0x280c, 0x280d, 0x2815, 0x2818, 0x2819
            return 0x30
        case 0x27b8
            *(arg1 + 0x350) = *arg3
            return zx.q(rbp)
        case 0x27b9
            return zx.q(sub_142c63060(arg1 + 0x748, *arg3))
        case 0x27ba
            return zx.q(sub_142c63060(arg1 + 0x758, *arg3))
        case 0x27bd
            return zx.q(sub_142c63060(arg1 + 0x768, *arg3))
        case 0x27be
            return zx.q(sub_142c63060(arg1 + 0x770, *arg3))
        case 0x27bf
            return zx.q(sub_142c63060(arg1 + 0x780, *arg3))
        case 0x27c0
            return zx.q(sub_142c63060(arg1 + 0x788, *arg3))
        case 0x27c1
            return zx.q(sub_142c63060(arg1 + 0x790, *arg3))
        case 0x27ca
            return zx.q(sub_142c63060(arg1 + 0x7b8, *arg3))
        case 0x27cb
            *(arg1 + 0x7f8) = *arg3
            return zx.q(rbp)
        case 0x27ce
            return zx.q(sub_142c63060(arg1 + 0x798, *arg3))
        case 0x27cf
            return zx.q(sub_142c63060(arg1 + 0x7a0, *arg3))
        case 0x27d0
            return zx.q(sub_142c63060(arg1 + 0x7a8, *arg3))
        case 0x27d3
            *(arg1 + 0x290) = *arg3
            return zx.q(rbp)
        case 0x27d9
            *(arg1 + 0x4ee8) = *arg3
            return zx.q(rbp)
        case 0x27da
            *(arg1 + 0x828) = *arg3
            return zx.q(rbp)
        case 0x27db
            int64_t rax_164 = *arg3
            *(arg1 + 0x418) = rax_164
            *(arg1 + 0x8a8) = rax_164
            return zx.q(rbp)
        case 0x27e1
            *(arg1 + 0x348) = *arg3
            return zx.q(rbp)
        case 0x27e3
            *arg3
            return 4
        case 0x27e9
            return zx.q(sub_142c63060(arg1 + 0x7c0, *arg3))
        case 0x27ec
            return zx.q(sub_142c63060(arg1 + 0x7c8, *arg3))
        case 0x27ed
            *arg3
            return 4
        case 0x27ee
            *arg3
            return 4
        case 0x27ef
            *arg3
            return 4
        case 0x27f0
            return zx.q(sub_142c63060(arg1 + 0x778, *arg3))
        case 0x27f4
            *(arg1 + 0x3c8) = *arg3
            return zx.q(rbp)
        case 0x27f6
            return zx.q(sub_142c63060(arg1 + 0x710, *arg3))
        case 0x27fc
            return zx.q(sub_142c63060(arg1 + 0x7b0, *arg3))
        case 0x27fe
            return zx.q(sub_142c63060(arg1 + 0x658, *arg3))
        case 0x2800, 0x2801
            return 4
        case 0x2803
            *(arg1 + 0x420) = *arg3
            return zx.q(rbp)
        case 0x2806
            return zx.q(sub_142c63060(arg1 + 0x708, *arg3))
        case 0x2807
            return zx.q(sub_142c63060(arg1 + 0x6f8, *arg3))
        case 0x280e
            return zx.q(sub_142c63060(arg1 + 0x628, *arg3))
        case 0x280f
            return zx.q(sub_142c63060(arg1 + 0x638, *arg3))
        case 0x2810
            return zx.q(sub_142c63060(arg1 + 0x690, *arg3))
        case 0x2811
            return zx.q(sub_142c63060(arg1 + 0x6b0, *arg3))
        case 0x2812
            return zx.q(sub_142c63060(arg1 + 0x6a0, *arg3))
        case 0x2813
            return zx.q(sub_142c63060(arg1 + 0x728, *arg3))
        case 0x2814
            return zx.q(sub_142c63060(arg1 + 0x750, *arg3))
        case 0x2816
            return zx.q(sub_142c63060(arg1 + 0x6d0, *arg3))
        case 0x2817
            return zx.q(sub_142c63060(arg1 + 0x718, *arg3))
        case 0x281a
            return zx.q(sub_142c63060(arg1 + 0x7d0, *arg3))
