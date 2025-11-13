// 函数: sub_141bc59d0
// 地址: 0x141bc59d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x3a0)

if (rax == 0)
label_141bc5a90:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int32_t rax_1 = *(rax + 0xc)
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
    
    if (((*(rax_8 + 8) u>> 0x1c).b & 1) != 0)
        goto label_141bc5a90
    
    char arg_8 = 0
    char* var_20_1 = &arg_8
    void*** (* var_28)() = sub_140884c50
    
    if (*(sub_140a756e0(&var_28, &data_14397f5f0) + 0x20) != 0)
        goto label_141bc5a90
    
    int64_t* rcx_5 = *(arg1 + 0x3a0)
    (*(*rcx_5 + 0x440))(rcx_5, arg2, arg3, arg4)

return arg2
