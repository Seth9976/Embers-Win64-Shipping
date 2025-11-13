// 函数: sub_14123bc90
// 地址: 0x14123bc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x188)
uint32_t result = sub_141080be0(arg1, arg2, r12, *(arg3 + 0x10))

if (arg4 != 0)
    if (*(arg1 + 0x120) u> 0)
        void* rax = *(arg4 + 0x98)
        
        if (rax != 0)
            int64_t r14_1 = *(rax + 0x10)
            
            if (*(arg1 + 0x120) u> 0)
                uint32_t r15_1 = zx.d(*(arg1 + 0x11e))
                void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_1 = &rcx_2[5]
                
                if (rax_1 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_1 = &rcx_2[5]
                
                *(arg2 + 0x30) = rax_1
                void**** rax_2 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_2 = rcx_2
                *(arg2 + 8) = &rcx_2[1]
                rcx_2[1] = 0
                *rcx_2 = &data_142d5a070
                rcx_2[2] = r12
                rcx_2[3].d = r15_1
                rcx_2[4] = r14_1
    
    uint64_t rsi_1 = zx.q(*(arg1 + 0x11c))
    result = 8
    
    if (rsi_1.d u>= 8)
        rsi_1 = 8
    
    if (rsi_1.d != 0)
        uint32_t result_1 = zx.d(*(arg1 + 0x118))
        uint32_t r13_1 = zx.d(*(arg1 + 0x11a))
        int64_t rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        int64_t rax_4 = rsi_1 + rdi_3
        
        if (rax_4 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, (rsi_1 + 0x10).d)
            rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_4 = rsi_1 + rdi_3
        
        *(arg2 + 0x30) = rax_4
        memcpy(rdi_3, arg4 + 0xd4, rsi_1.d)
        void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_5 = &rcx_10[6]
        
        if (rax_5 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_5 = &rcx_10[6]
        
        *(arg2 + 0x30) = rax_5
        void**** rax_6 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_6 = rcx_10
        *(arg2 + 8) = &rcx_10[1]
        rcx_10[1] = 0
        *rcx_10 = &data_142d549d8
        result = result_1
        *(rcx_10 + 0x24) = r13_1
        rcx_10[4].d = result
        rcx_10[2] = r12
        rcx_10[3] = rdi_3
        rcx_10[5].d = rsi_1.d

return result
