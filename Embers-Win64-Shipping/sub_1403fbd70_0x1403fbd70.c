// 函数: sub_1403fbd70
// 地址: 0x1403fbd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t r9
int64_t arg_20 = r9

if (arg2 s> 0x2712)
    if (arg2 - 0x2718 u> 0x12)
        return 0xfffffffb
    
    switch (arg2)
        case 0x2718
            int32_t rcx_16 = arg3.d
            
            if (rcx_16 - 1 u> 1)
                return 0xffffffff
            
            arg1[2].d = rcx_16
            return 0
        case 0x2719, 0x271b, 0x271d, 0x271e, 0x2721, 0x2722, 0x2723, 0x2724, 0x2725, 0x2727, 0x2729
            return 0xfffffffb
        case 0x271a
            int32_t rcx_14 = arg3.d
            
            if (rcx_14 s< 0 || rcx_14 s>= *(*arg1 + 8))
                return 0xffffffff
            
            arg1[5].d = rcx_14
            return 0
        case 0x271c
            int32_t rcx_15 = arg3.d
            
            if (rcx_15 s< 1 || rcx_15 s> *(*arg1 + 8))
                return 0xffffffff
            
            *(arg1 + 0x2c) = rcx_15
            return 0
        case 0x271f
            if (arg3 == 0)
                return 0xffffffff
            
            *arg3 = *arg1
            return 0
        case 0x2720
            arg1[7].d = arg3.d
            return 0
        case 0x2726
            if (arg3 == 0)
                return 0
            
            arg1[0x10].d = *arg3
            *(arg1 + 0x84) = arg3[1]
            arg1[0x11].d = arg3[2]
            *(arg1 + 0x8c) = arg3[3]
            arg1[0x12].d = arg3[4]
            *(arg1 + 0x94) = arg3[5]
            arg1[0x13].d = arg3[6]
            return 0
        case 0x2728
            *(arg1 + 0x4c) = arg3.d
            return 0
        case 0x272a
            arg1[0x19] = arg3
            return 0
else
    if (arg2 == 0x2712)
        int32_t rcx_13 = arg3.d
        
        if (rcx_13 u> 2)
            return 0xffffffff
        
        int32_t rax_36
        rax_36.b = rcx_13 s<= 1
        int32_t r8_3
        r8_3.b = rcx_13 == 0
        *(arg1 + 0x1c) = rax_36
        *(arg1 + 0x14) = r8_3
        return 0
    
    if (arg2 - 0xfa2 u> 0x26)
        return 0xfffffffb
    
    switch (arg2)
        case 0xfa2
            int32_t rcx_2 = arg3.d
            
            if (rcx_2 s<= 0x1f4 && rcx_2 != 0xffffffff)
                return 0xffffffff
            
            int32_t rax_12 = *(arg1 + 0xc) * 0x3f7a0
            
            if (rcx_2 s>= rax_12)
                rcx_2 = rax_12
            
            arg1[6].d = rcx_2
            return 0
        case 0xfa3, 0xfa4, 0xfa5, 0xfa7, 0xfa8, 0xfa9, 0xfab, 0xfac, 0xfad, 0xfaf, 0xfb0, 0xfb1, 
                0xfb2, 0xfb3, 0xfb5, 0xfb6, 0xfb7, 0xfb8, 0xfb9, 0xfba, 0xfbb, 0xfbd, 0xfbe, 0xfc0, 
                0xfc1, 0xfc2, 0xfc3, 0xfc6, 0xfc7
            return 0xfffffffb
        case 0xfa6
            *(arg1 + 0x34) = arg3.d
            return 0
        case 0xfaa
            int32_t rax_3 = arg3.d
            
            if (rax_3 u> 0xa)
                return 0xffffffff
            
            arg1[4].d = rax_3
            return 0
        case 0xfae
            int32_t rax_5 = arg3.d
            
            if (rax_5 u> 0x64)
                return 0xffffffff
            
            arg1[8].d = rax_5
            return 0
        case 0xfb4
            *(arg1 + 0x3c) = arg3.d
            return 0
        case 0xfbc
            void* r8 = *arg1
            int32_t rdx_1 = *(arg1 + 0xc)
            int64_t rcx_5 = sx.q(*(r8 + 8) * rdx_1)
            void* rdi_3 = arg1 + ((sx.q((arg1[1].d + 0x400) * rdx_1) + 0x35 + rcx_5) << 2)
            memset(arg1 + 0x54, 0, 
                sx.q(((zx.q((*(r8 + 4) + 0x400 + *(r8 + 8) * 3) * rdx_1) << 2) + 0xd4).d) - 0x54)
            int32_t i = 0
            
            if (*(*arg1 + 8) * *(arg1 + 0xc) s> 0)
                do
                    *((rcx_5 << 2) + rdi_3) = 0xc1e00000
                    *rdi_3 = 0xc1e00000
                    i += 1
                    rdi_3 += 4
                while (i s< *(*arg1 + 8) * *(arg1 + 0xc))
            
            *(arg1 + 0xb4) = 0
            *(arg1 + 0x5c) = 0x3f800000
            arg1[0xb].d = 2
            arg1[0xc].d = 0x100
            arg1[0xd] = 0
            return 0
        case 0xfbf
            if (arg3 == 0)
                return 0xffffffff
            
            *arg3 = *(arg1 + 0x54)
            return 0
        case 0xfc4
            int32_t rcx_3 = arg3.d
            
            if (rcx_3 - 8 u> 0x10)
                return 0xffffffff
            
            *(arg1 + 0x44) = rcx_3
            return 0
        case 0xfc5
            *arg3 = *(arg1 + 0x44)
            return 0
        case 0xfc8
            arg1[9].d = arg3.d
            return 0
