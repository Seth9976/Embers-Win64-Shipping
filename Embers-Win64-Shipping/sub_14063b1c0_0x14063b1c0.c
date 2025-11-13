// 函数: sub_14063b1c0
// 地址: 0x14063b1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
int32_t arg_8
int32_t rax_1
int64_t zmm0

if (*sub_14062d6e0(arg1 + 0x1a0, &arg_8, arg3) != 0xffffffff)
    *arg4 = 1
    sub_14062d6e0(arg1 + 0x1a0, &arg_8, arg3)
    int64_t rax_2 = sx.q(arg_8)
    void* const rcx_2
    
    if (rax_2.d == 0xffffffff)
        rcx_2 = nullptr
    else
        rcx_2 = *(arg1 + 0x1a0) + rax_2 * 0x28
    
    zmm0 = *(rcx_2 + 0x10)
    rax_1 = *(rcx_2 + 0x18)
else
    zmm0 = data_143dbb1f8.q
    rax_1 = data_143dbb200

int64_t rcx_3 = *arg3
*arg2 = zmm0
arg2[1].d = rax_1

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return arg2
