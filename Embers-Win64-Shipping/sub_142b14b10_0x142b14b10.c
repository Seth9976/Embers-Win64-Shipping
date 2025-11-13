// 函数: sub_142b14b10
// 地址: 0x142b14b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg3

if (arg4 == 0)
    while (true)
        int16_t rdx_4 = *(rdi - 2)
        rdi -= 2
        bool cond:0_1
        
        if (rdx_4 u<= 0xff)
            cond:0_1 = *(zx.q(rdx_4) + arg1 + 8) != 0
        label_142b14f80:
            
            if (cond:0_1)
                break
        else if (rdx_4 u> 0x7ff)
            int64_t i_9
            int32_t i_13
            
            if (0x2800 + rdx_4 u> 0x7ff)
                uint32_t r10_6 = zx.d(rdx_4)
                uint64_t r9_14 = zx.q(r10_6 u>> 0xc)
                int32_t rdx_7 =
                    *(arg1 + ((zx.q(zx.d(rdx_4) u>> 6) & 0x3f) << 2) + 0x20c) u>> r9_14.b & 0x10001
                
                if (rdx_7 u<= 1)
                    cond:0_1 = rdx_7 != 0
                    goto label_142b14f80
                
                i_9 = sx.q(*(arg1 + (r9_14 << 2) + 0x30c))
                int64_t r9_15 = *(arg1 + 0x358)
                i_13 = *(arg1 + (zx.q((r9_14 + 1).d) << 2) + 0x30c)
                
                if (r10_6 s< *(r9_15 + (i_9 << 2)))
                    goto label_142b14f7d
                
                if (i_9.d s< i_13 && r10_6 s< *(r9_15 + (sx.q(i_13 - 1) << 2)))
                    for (int32_t i = (i_9.d + i_13) s>> 1; i != i_9.d; i = (i_9.d + i_13) s>> 1)
                        if (r10_6 s>= *(r9_15 + (sx.q(i) << 2)))
                            i_9 = zx.q(i)
                        else
                            i_13 = i
                
            label_142b14f7a:
                i_9 = zx.q(i_13)
            label_142b14f7d:
                cond:0_1 = (i_9.b & 1) != 0
                goto label_142b14f80
            
            int16_t rcx_14
            
            if (rdx_4 u>= 0xdc00 && arg2 != rdi)
                rcx_14 = *(rdi - 2)
            
            if (rdx_4 u< 0xdc00 || arg2 == rdi || 0x2800 + rcx_14 u> 0x3ff)
                int64_t r9_12 = *(arg1 + 0x358)
                i_13 = *(arg1 + 0x344)
                uint32_t r10_5 = zx.d(rdx_4)
                i_9 = sx.q(*(arg1 + 0x340))
                
                if (r10_5 s< *(r9_12 + (i_9 << 2)))
                    goto label_142b14f7d
                
                if (i_9.d s< i_13 && r10_5 s< *(r9_12 + (sx.q(i_13 - 1) << 2)))
                    for (int32_t i_1 = (i_9.d + i_13) s>> 1; i_1 != i_9.d; 
                            i_1 = (i_9.d + i_13) s>> 1)
                        if (r10_5 s>= *(r9_12 + (sx.q(i_1) << 2)))
                            i_9 = zx.q(i_1)
                        else
                            i_13 = i_1
                
                goto label_142b14f7a
            
            int64_t r10_4 = *(arg1 + 0x358)
            int32_t i_12 = *(arg1 + 0x350)
            int64_t i_8 = sx.q(*(arg1 + 0x34c))
            int32_t r9_11 = ((zx.d(rcx_14) - 0xd7f7) << 0xa) + zx.d(rdx_4)
            
            if (r9_11 s>= *(r10_4 + (i_8 << 2)))
                if (i_8.d s< i_12 && r9_11 s< *(r10_4 + (sx.q(i_12 - 1) << 2)))
                    for (int32_t i_2 = (i_8.d + i_12) s>> 1; i_2 != i_8.d; 
                            i_2 = (i_8.d + i_12) s>> 1)
                        if (r9_11 s>= *(r10_4 + (sx.q(i_2) << 2)))
                            i_8 = zx.q(i_2)
                        else
                            i_12 = i_2
                
                i_8 = zx.q(i_12)
            
            if ((i_8.b & 1) != 0)
                break
            
            rdi -= 2
        else if (test_bit(*(arg1 + ((zx.q(rdx_4) & 0x3f) << 2) + 0x10c), 
                zx.d((zx.d(rdx_4) u>> 6).b)))
            break
        
        if (arg2 == rdi)
            return arg2
else
    while (true)
        int16_t rdx = *(rdi - 2)
        rdi -= 2
        bool cond:1_1
        
        if (rdx u<= 0xff)
            cond:1_1 = *(zx.q(rdx) + arg1 + 8) == 0
        label_142b14d70:
            
            if (cond:1_1)
                break
        else if (rdx u> 0x7ff)
            int64_t i_7
            int32_t i_11
            
            if (0x2800 + rdx u> 0x7ff)
                uint32_t r10_3 = zx.d(rdx)
                uint64_t r9_6 = zx.q(r10_3 u>> 0xc)
                int32_t rdx_3 =
                    *(arg1 + ((zx.q(zx.d(rdx) u>> 6) & 0x3f) << 2) + 0x20c) u>> r9_6.b & 0x10001
                
                if (rdx_3 u<= 1)
                    cond:1_1 = rdx_3 == 0
                    goto label_142b14d70
                
                i_7 = sx.q(*(arg1 + (r9_6 << 2) + 0x30c))
                int64_t r9_7 = *(arg1 + 0x358)
                i_11 = *(arg1 + (zx.q((r9_6 + 1).d) << 2) + 0x30c)
                
                if (r10_3 s< *(r9_7 + (i_7 << 2)))
                    goto label_142b14d6d
                
                if (i_7.d s< i_11 && r10_3 s< *(r9_7 + (sx.q(i_11 - 1) << 2)))
                    for (int32_t i_3 = (i_7.d + i_11) s>> 1; i_3 != i_7.d; 
                            i_3 = (i_7.d + i_11) s>> 1)
                        if (r10_3 s>= *(r9_7 + (sx.q(i_3) << 2)))
                            i_7 = zx.q(i_3)
                        else
                            i_11 = i_3
                
            label_142b14d6a:
                i_7 = zx.q(i_11)
            label_142b14d6d:
                cond:1_1 = (i_7.b & 1) == 0
                goto label_142b14d70
            
            int16_t rcx_1
            
            if (rdx u>= 0xdc00 && arg2 != rdi)
                rcx_1 = *(rdi - 2)
            
            if (rdx u< 0xdc00 || arg2 == rdi || 0x2800 + rcx_1 u> 0x3ff)
                int64_t r9_4 = *(arg1 + 0x358)
                i_11 = *(arg1 + 0x344)
                uint32_t r10_2 = zx.d(rdx)
                i_7 = sx.q(*(arg1 + 0x340))
                
                if (r10_2 s< *(r9_4 + (i_7 << 2)))
                    goto label_142b14d6d
                
                if (i_7.d s< i_11 && r10_2 s< *(r9_4 + (sx.q(i_11 - 1) << 2)))
                    for (int32_t i_4 = (i_7.d + i_11) s>> 1; i_4 != i_7.d; 
                            i_4 = (i_7.d + i_11) s>> 1)
                        if (r10_2 s>= *(r9_4 + (sx.q(i_4) << 2)))
                            i_7 = zx.q(i_4)
                        else
                            i_11 = i_4
                
                goto label_142b14d6a
            
            int64_t r10_1 = *(arg1 + 0x358)
            int32_t i_10 = *(arg1 + 0x350)
            int64_t i_6 = sx.q(*(arg1 + 0x34c))
            int32_t r9_3 = ((zx.d(rcx_1) - 0xd7f7) << 0xa) + zx.d(rdx)
            
            if (r9_3 s>= *(r10_1 + (i_6 << 2)))
                if (i_6.d s< i_10 && r9_3 s< *(r10_1 + (sx.q(i_10 - 1) << 2)))
                    for (int32_t i_5 = (i_6.d + i_10) s>> 1; i_5 != i_6.d; 
                            i_5 = (i_6.d + i_10) s>> 1)
                        if (r9_3 s>= *(r10_1 + (sx.q(i_5) << 2)))
                            i_6 = zx.q(i_5)
                        else
                            i_10 = i_5
                
                i_6 = zx.q(i_10)
            
            if ((i_6.b & 1) == 0)
                break
            
            rdi -= 2
        else if (not(test_bit(*(arg1 + ((zx.q(rdx) & 0x3f) << 2) + 0x10c), 
                zx.d((zx.d(rdx) u>> 6).b))))
            break
        
        if (arg2 == rdi)
            return arg2

return rdi + 2
