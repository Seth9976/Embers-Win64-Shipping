// 函数: sub_142be97d0
// 地址: 0x142be97d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[6].d
int32_t r9 = arg2
int64_t rbp = arg1[3]

if (arg2 u< rdi)
    int32_t r8_1 = rdi * 2
    uint64_t rsi_1 = zx.q(r8_1)
    int32_t rbx_1 = arg2 * 2
    
    do
        char* r10_2 = rbp + 0xe + zx.q(rbx_1)
        void* r10_3 = &r10_2[zx.q(r8_1 + 2)]
        uint32_t r8_4 = zx.d(*r10_2) << 8 | zx.d(r10_2[1])
        *(arg1 + 0x3c) = r8_4
        void* r10_4 = r10_3 + rsi_1
        uint32_t rdx_2 = zx.d(*r10_3) << 8 | zx.d(*(r10_3 + 1))
        arg1[7].d = rdx_2
        void* r10_5 = r10_4 + rsi_1
        arg1[8].d = sx.d(zx.w(*r10_4) << 8) | zx.d(*(r10_4 + 1))
        uint32_t rax_8 = zx.d(*r10_5) << 8 | zx.d(*(r10_5 + 1))
        void* rcx_3
        
        if (r9 u>= rdi - 1 && rdx_2 == 0xffff && r8_4 == rdx_2)
            rcx_3 = *arg1
        
        if (r9 u>= rdi - 1 && rdx_2 == 0xffff && r8_4 == rdx_2 && rax_8 != 0
                && zx.q(rax_8) + 2 + r10_5 u> zx.q(*(rcx_3 + 0x298)) + *(rcx_3 + 0x290))
            arg1[8].d = 1
        label_142be98dd:
            *(arg1 + 0x34) = r9
            arg1[9] = 0
            return 0
        
        if (rax_8 != 0xffff)
            if (rax_8 == 0)
                goto label_142be98dd
            
            *(arg1 + 0x34) = r9
            arg1[9] = zx.q(rax_8) + r10_5
            return 0
        
        r9 += 1
        rbx_1 += 2
    while (r9 u< rdi)

return 0xffffffff
