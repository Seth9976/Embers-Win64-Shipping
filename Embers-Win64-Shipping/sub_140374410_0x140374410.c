// 函数: sub_140374410
// 地址: 0x140374410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(arg1.w)
uint32_t rax_1 = arg1 u>> 0x10
uint32_t rax_3
uint32_t rcx_1

if (arg3 != 1)
    if (arg2 == 0)
        return 1
    
    if (arg3 u>= 0x10)
        if (arg3 u< 0x15b0)
        label_14037466c:
            int32_t i = arg3
            int32_t r8_1 = i - 0x10
            char* rcx_13 = arg2
            
            do
                i -= 0x10
                uint32_t rsi_25 = zx.d(*rcx_13) + r9
                uint32_t r9_20 = zx.d(rcx_13[1]) + rsi_25
                uint32_t rsi_27 = zx.d(rcx_13[2]) + r9_20
                uint32_t r9_22 = zx.d(rcx_13[3]) + rsi_27
                uint32_t rsi_29 = zx.d(rcx_13[4]) + r9_22
                uint32_t r9_24 = zx.d(rcx_13[5]) + rsi_29
                uint32_t rsi_31 = zx.d(rcx_13[6]) + r9_24
                uint32_t r9_26 = zx.d(rcx_13[7]) + rsi_31
                uint32_t rsi_33 = zx.d(rcx_13[8]) + r9_26
                uint32_t r9_28 = zx.d(rcx_13[9]) + rsi_33
                uint32_t rsi_35 = zx.d(rcx_13[0xa]) + r9_28
                uint32_t r9_30 = zx.d(rcx_13[0xb]) + rsi_35
                uint32_t rsi_37 = zx.d(rcx_13[0xc]) + r9_30
                uint32_t r9_32 = zx.d(rcx_13[0xd]) + rsi_37
                uint32_t rsi_39 = zx.d(rcx_13[0xe]) + r9_32
                r9 = zx.d(rcx_13[0xf]) + rsi_39
                rax_1 = rax_1 + rsi_25 + r9_20 + rsi_27 + r9_22 + rsi_29 + r9_24 + rsi_31 + r9_26
                    + rsi_33 + r9_28 + rsi_35 + r9_30 + rsi_37 + r9_32 + rsi_39 + r9
                rcx_13 = &rcx_13[0x10]
            while (i u> 0xf)
            
            arg3 = r8_1 & 0xf
            
            if (arg3 == 0)
                r9 = r9 u% 0xfff1
                rax_1 = rax_1 u% 0xfff1
            else
                arg2 = &arg2[(zx.q(r8_1) & 0xfffffff0) + 0x10]
            label_14037474e:
                int32_t r10_5 = arg3 - 1
                
                if ((arg3.b & 3) != 0)
                    int64_t rcx_14 = 0
                    
                    do
                        r9 += zx.d(arg2[rcx_14])
                        rax_1 += r9
                        rcx_14 += 1
                    while ((arg3 & 3) != rcx_14.d)
                    
                    arg2 = &arg2[rcx_14]
                    arg3 -= rcx_14.d
                
                if (r10_5 u>= 3)
                    int64_t rcx_15 = 0
                    
                    do
                        uint32_t rsi_42 = zx.d(arg2[rcx_15]) + r9
                        uint32_t r9_35 = zx.d(arg2[rcx_15 + 1]) + rsi_42
                        uint32_t rsi_44 = zx.d(arg2[rcx_15 + 2]) + r9_35
                        r9 = zx.d(arg2[rcx_15 + 3]) + rsi_44
                        rax_1 = rax_1 + rsi_42 + r9_35 + rsi_44 + r9
                        rcx_15 += 4
                    while (arg3 != rcx_15.d)
                
                r9 = r9 u% 0xfff1
                rax_1 = rax_1 u% 0xfff1
        else
            do
                arg3 -= 0x15b0
                int64_t rcx_4 = 0
                
                do
                    uint32_t rsi_9 = zx.d(arg2[rcx_4]) + r9
                    uint32_t r9_5 = zx.d(arg2[rcx_4 + 1]) + rsi_9
                    uint32_t rsi_11 = zx.d(arg2[rcx_4 + 2]) + r9_5
                    uint32_t r9_7 = zx.d(arg2[rcx_4 + 3]) + rsi_11
                    uint32_t rsi_13 = zx.d(arg2[rcx_4 + 4]) + r9_7
                    uint32_t r9_9 = zx.d(arg2[rcx_4 + 5]) + rsi_13
                    uint32_t rsi_15 = zx.d(arg2[rcx_4 + 6]) + r9_9
                    uint32_t r9_11 = zx.d(arg2[rcx_4 + 7]) + rsi_15
                    uint32_t rsi_17 = zx.d(arg2[rcx_4 + 8]) + r9_11
                    uint32_t r9_13 = zx.d(arg2[rcx_4 + 9]) + rsi_17
                    uint32_t rsi_19 = zx.d(arg2[rcx_4 + 0xa]) + r9_13
                    uint32_t r9_15 = zx.d(arg2[rcx_4 + 0xb]) + rsi_19
                    uint32_t rsi_21 = zx.d(arg2[rcx_4 + 0xc]) + r9_15
                    uint32_t r9_17 = zx.d(arg2[rcx_4 + 0xd]) + rsi_21
                    uint32_t rsi_23 = zx.d(arg2[rcx_4 + 0xe]) + r9_17
                    r9 = zx.d(arg2[rcx_4 + 0xf]) + rsi_23
                    rax_1 = rax_1 + rsi_9 + r9_5 + rsi_11 + r9_7 + rsi_13 + r9_9 + rsi_15 + r9_11
                        + rsi_17 + r9_13 + rsi_19 + r9_15 + rsi_21 + r9_17 + rsi_23 + r9
                    rcx_4 += 0x10
                while (rcx_4.d != 0x15b0)
                
                arg2 = &arg2[0x15b0]
                r9 = r9 u% 0xfff1
                rax_1 = rax_1 u% 0xfff1
            while (arg3 u> 0x15af)
            
            if (arg3 != 0)
                if (arg3 u< 0x10)
                    goto label_14037474e
                
                goto label_14037466c
        
        return zx.q(rax_1 << 0x10) | zx.q(r9)
    
    if (arg3 != 0)
        int32_t r10_1 = arg3 - 1
        
        if ((arg3.b & 3) != 0)
            int64_t rcx_2 = 0
            
            do
                r9 += zx.d(arg2[rcx_2])
                rax_1 += r9
                rcx_2 += 1
            while ((arg3 & 3) != rcx_2.d)
            
            arg2 = &arg2[rcx_2]
            arg3 -= rcx_2.d
        
        if (r10_1 u>= 3)
            int64_t rcx_3 = 0
            
            do
                uint32_t rsi_3 = zx.d(arg2[rcx_3]) + r9
                uint32_t r9_2 = zx.d(arg2[rcx_3 + 1]) + rsi_3
                uint32_t rsi_5 = zx.d(arg2[rcx_3 + 2]) + r9_2
                r9 = zx.d(arg2[rcx_3 + 3]) + rsi_5
                rax_1 = rax_1 + rsi_3 + r9_2 + rsi_5 + r9
                rcx_3 += 4
            while (arg3 != rcx_3.d)
    
    rcx_1 = r9 - 0xfff1
    
    if (r9 u<= 0xfff0)
        rcx_1 = r9
    
    rax_3 = (rax_1 u% 0xfff1) << 0x10
else
    uint32_t rcx = zx.d(*arg2)
    uint32_t rdx = r9 + rcx
    rcx_1 = r9 + rcx - 0xfff1
    
    if (rdx u<= 0xfff0)
        rcx_1 = rdx
    
    uint32_t rax_2 = rax_1 + rcx_1
    uint32_t rdx_2 = rax_2 << 0x10
    rax_3 = rdx_2 + 0xf0000
    
    if (rax_2 u<= 0xfff0)
        rax_3 = rdx_2

return zx.q(rax_3) | zx.q(rcx_1)
