// 函数: sub_14093ce40
// 地址: 0x14093ce40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) == 0)
    int64_t rcx = sx.q(*(arg1 + 0xc))
    
    if ((rcx + 4).d s<= *(arg1 + 8))
        char* rcx_1 = rcx + *arg1
        *arg2 = ((zx.d(rcx_1[1]) | zx.d(*rcx_1) << 8) << 8 | zx.d(rcx_1[2])) << 8 | zx.d(rcx_1[3])
        bool cond:1_1 = *(arg1 + 0x10) != 0
        int64_t rcx_2 = sx.q(*(arg1 + 0xc))
        int32_t rax_6 = (rcx_2 + 4).d
        *(arg1 + 0xc) = rax_6
        
        if (not(cond:1_1) && rax_6 + 4 s<= *(arg1 + 8))
            void* rdx_7 = rcx_2 + *arg1
            arg2[1] =
                ((zx.d(*(rdx_7 + 5)) | zx.d(*(rdx_7 + 4)) << 8) << 8 | zx.d(*(rdx_7 + 6))) << 8
                | zx.d(*(rdx_7 + 7))
            bool cond:2_1 = *(arg1 + 0x10) != 0
            int64_t rcx_9 = sx.q(*(arg1 + 0xc))
            int32_t rax_12 = (rcx_9 + 4).d
            *(arg1 + 0xc) = rax_12
            
            if (not(cond:2_1) && rax_12 + 4 s<= *(arg1 + 8))
                void* rdx_9 = rcx_9 + *arg1
                arg2[2] =
                    ((zx.d(*(rdx_9 + 5)) | zx.d(*(rdx_9 + 4)) << 8) << 8 | zx.d(*(rdx_9 + 6))) << 8
                    | zx.d(*(rdx_9 + 7))
                bool cond:3_1 = *(arg1 + 0x10) != 0
                int64_t rcx_16 = sx.q(*(arg1 + 0xc))
                int32_t rax_18 = (rcx_16 + 4).d
                *(arg1 + 0xc) = rax_18
                
                if (not(cond:3_1) && rax_18 + 4 s<= *(arg1 + 8))
                    void* rdx_11 = rcx_16 + *arg1
                    arg2[3] = ((zx.d(*(rdx_11 + 4)) << 8 | zx.d(*(rdx_11 + 5))) << 8
                        | zx.d(*(rdx_11 + 6))) << 8 | zx.d(*(rdx_11 + 7))
                    *(arg1 + 0xc) += 4
                    return arg1

*(arg1 + 0x10) = 1
return arg1
