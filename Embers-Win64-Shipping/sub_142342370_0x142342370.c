// 函数: sub_142342370
// 地址: 0x142342370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 - 0x98)
char rax_3

if (rcx != 0)
    void* rdx = arg1 - 0xc8
    
    if (arg1 == 0xd0)
        rdx = nullptr
    
    (*(*rcx + 0xe0))(rcx, rdx)
    int64_t* rcx_1 = *(arg1 - 0x98)
    rax_3 = (*(*rcx_1 + 0xf0))(rcx_1)

if (rcx == 0 || *arg3 != 0 || (*(arg1 + 0x1b5) == 0 && rax_3 == 0))
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    void arg_20
    int64_t rdx_2 = *(*(*(arg1 - 0xc8) + 0x18))(arg1 - 0xc8, &arg_20)
    int64_t arg_8 = rdx_2
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdx_2.d)
    arg_8.d = (temp1_1 - temp0_1) s>> 1
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(arg_8:4.d)
    arg_8:4.d = (temp3_1 - temp2_1) s>> 1
    sub_14232f2c0(arg1 - 0xd0, arg2, arg_8, 5)

return arg2
