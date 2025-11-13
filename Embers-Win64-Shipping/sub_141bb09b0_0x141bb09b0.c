// 函数: sub_141bb09b0
// 地址: 0x141bb09b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141bb2670(arg1 - 0x108)

if (rax == 0)
    void* rcx_4 = *(arg1 + 0xa0)
    
    if (rcx_4 != 0)
        uint64_t* arg_8 = arg2
        uint64_t** var_10_1 = &arg_8
        void (* var_18)(int64_t* arg1, int64_t* arg2) = sub_141b97270
        return sub_141ba8580(rcx_4, &var_18)
else
    int64_t rdi_1 = sx.q(rax[0x6c].d)
    
    if (rdi_1.d != 0)
        int32_t rax_1 = arg2[1].d
        int32_t rdx = rax_1 + rdi_1.d
        
        if (rdx s> *(arg2 + 0xc))
            sub_140638c50(arg2, rdx)
            rax_1 = arg2[1].d
        
        int64_t rax_3 = memcpy(*arg2 + (sx.q(rax_1) << 3), rax[0x6b], (rdi_1 << 3).d)
        arg2[1].d += rdi_1.d
        return rax_3

return rax
