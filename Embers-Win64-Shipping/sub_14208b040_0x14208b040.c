// 函数: sub_14208b040
// 地址: 0x14208b040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int32_t rax_1 = *(arg2 + 0xc)
    int32_t i = 0
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0 && *(arg1 + 0x268) s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            int64_t* rcx_4 = *(rdi_1 + *(arg1 + 0x260))
            
            if ((*(*rcx_4 + 0x278))(rcx_4, arg2) != 0)
                return *(*(arg1 + 0x260) + (sx.q(i) << 3))
            
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< *(arg1 + 0x268))

return 0
