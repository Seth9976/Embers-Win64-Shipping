// 函数: sub_141bc36b0
// 地址: 0x141bc36b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = sub_140e1e7e0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
void* rax_2 = arg1[0x74]

if (rax_2 != 0)
    int32_t rax_3 = *(rax_2 + 0xc)
    void* const rax_10
    
    if (rax_3 s>= data_143e1d9b4)
        rax_10 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_3)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_5 = temp1_1 + rdx_1
        rax_10 =
            *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
    
    if (((*(rax_10 + 8) u>> 0x1c).b & 1) == 0)
        char arg_8 = 0
        char* var_30_1 = &arg_8
        void*** (* var_38)() = sub_140884c50
        
        if (*(sub_140a756e0(&var_38, &data_14397f5f0) + 0x20) == 0)
            int64_t* rcx_5 = arg1[0x74]
            return (*(*rcx_5 + 0x330))(rcx_5, arg2, arg3, arg4, arg5, rax_1, arg7, arg8)

return zx.q(rax_1)
