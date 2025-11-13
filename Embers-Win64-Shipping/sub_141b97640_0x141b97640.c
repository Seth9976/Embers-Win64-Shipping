// 函数: sub_141b97640
// 地址: 0x141b97640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (*(arg2 + 0xb4) == 1)
    rax = sub_140be0b10(arg2)
    
    if (rax != 0 && ((zx.q(*(*(rax + 8) + 0x10)) u>> 0x10).b & 1) != 0 && *(rax + 0x3c) == 8)
        int32_t rax_1 = *(arg1 + 0xc)
        void* const rax_8
        
        if (rax_1 s>= data_143e1d9b4)
            rax_8 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_1)
            uint32_t rdx_1 = zx.d(temp0_1)
            int32_t rax_3 = temp1_1 + rdx_1
            rax_8 =
                *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
        
        if (((*(rax_8 + 8) u>> 0x1c).b & 1) == 0)
            (*(*arg1 + 0x210))(arg1, arg2, arg3)
            int64_t rax_11
            rax_11.b = 1
            return rax_11

rax.b = 0
return rax
