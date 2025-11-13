// 函数: sub_141bc2c50
// 地址: 0x141bc2c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dc1680(arg1, arg2, arg3)
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
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_1
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
    
    result = zx.q(*(rax_7 + 8) u>> 0x1c)
    
    if ((result.b & 1) == 0)
        char arg_8 = 0
        char* var_10_1 = &arg_8
        void*** (* var_18)() = sub_140884c50
        result = sub_140a756e0(&var_18, &data_14397f5f0)
        
        if (*(result + 0x20) == 0)
            int64_t* rcx_5 = *(arg1 + 0x3a0)
            return (*(*rcx_5 + 0x3d8))(rcx_5, arg2, arg3)

return result
