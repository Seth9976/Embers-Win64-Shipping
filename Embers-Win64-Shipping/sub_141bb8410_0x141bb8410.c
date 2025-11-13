// 函数: sub_141bb8410
// 地址: 0x141bb8410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x3a0)

if (result != 0)
    int32_t rax = *(result + 0xc)
    void* const rax_7
    
    if (rax s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_2
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
    
    if (((*(rax_7 + 8) u>> 0x1c).b & 1) == 0)
        char arg_8 = 0
        char* var_10_1 = &arg_8
        void*** (* var_18)() = sub_140884c50
        
        if (*(sub_140a756e0(&var_18, &data_14397f5f0) + 0x20) == 0)
            jump(*(**(arg1 + 0x3a0) + 0x340))

result.b = 0
return result
