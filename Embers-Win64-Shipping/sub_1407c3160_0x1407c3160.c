// 函数: sub_1407c3160
// 地址: 0x1407c3160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_5

if (*(arg1 + 0xd0) == *(arg1 + 0xfc))
label_1407c31e4:
    rcx_5 = nullptr
else
    int64_t r8 = *(arg3 + 0x18)
    void* r10_1 = arg1 + 0x100
    void* r9_1 = *(r10_1 + 8)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t rax_5 =
        *(r10_1 + ((sx.q((r8 u>> 0x20).d * 0x17 + r8.d) & (sx.q(*(arg1 + 0x110)) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1407c31e4_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_5) * 0x50 + *(arg1 + 0xc8)
            
            if (*rcx_5 == r8)
                break
            
            rax_5 = rcx_5[9].d
            
            if (rax_5 == 0xffffffff)
                goto label_1407c31e4_2
        
        if (rax_5 == 0xffffffff)
        label_1407c31e4_2:
            rcx_5 = nullptr

void* result = &rcx_5[1]

if (rcx_5 == 0)
    result = nullptr

if (result != 0)
    void** i = *(result + 0x20)
    result = sx.q(*(result + 0x28))
    
    for (void* r14_1 = &i[result]; i != r14_1; i = &i[1])
        result = *i
        
        if (result != 0)
            int64_t rcx_6 = *(result + 8)
            int64_t* rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_6 = &rdi_3[1]
            
            if (rax_6 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x10)
                rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_6 = &rdi_3[1]
            
            *(arg2 + 0x30) = rax_6
            *rdi_3 = rcx_6
            void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_7 = &rcx_10[6]
            
            if (rax_7 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x38)
                rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_7 = &rcx_10[6]
            
            *(arg2 + 0x30) = rax_7
            *(arg2 + 0x14) += 1
            **(arg2 + 8) = rcx_10
            *(arg2 + 8) = &rcx_10[1]
            *rcx_10 = &data_142da7798
            rcx_10[2].d = 1
            rcx_10[3] = rdi_3
            rcx_10[4].d = 2
            *(rcx_10 + 0x24) = 3
            rcx_10[5] = 0
            rcx_10[1] = 0
            void*** rcx_16 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            int64_t rdi_6 = *(*i + 8)
            void* rax_11 = &rcx_16[6]
            
            if (rax_11 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x40)
                rcx_16 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                rax_11 = &rcx_16[6]
            
            *(arg2 + 0x30) = rax_11
            *(arg2 + 0x14) += 1
            **(arg2 + 8) = rcx_16
            *(arg2 + 8) = &rcx_16[1]
            rcx_16[2] = rdi_6
            rcx_16[1] = 0
            *rcx_16 = &data_142da7778
            *(rcx_16 + 0x20) = zx.o(0)
            int64_t* rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rcx_20 = *(*i + 8)
            void* rax_15 = &rdi_9[1]
            
            if (rax_15 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x10)
                rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_15 = &rdi_9[1]
            
            *(arg2 + 0x30) = rax_15
            *rdi_9 = rcx_20
            void*** rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_16 = &rcx_24[6]
            
            if (rax_16 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x38)
                rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_16 = &rcx_24[6]
            
            *(arg2 + 0x30) = rax_16
            void**** rax_17 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_17 = rcx_24
            result = &rcx_24[1]
            *(arg2 + 8) = result
            *result = 0
            *rcx_24 = &data_142da7798
            rcx_24[2].d = 1
            rcx_24[3] = rdi_9
            rcx_24[4].d = 2
            *(rcx_24 + 0x24) = 3
            rcx_24[5] = 0

return result
