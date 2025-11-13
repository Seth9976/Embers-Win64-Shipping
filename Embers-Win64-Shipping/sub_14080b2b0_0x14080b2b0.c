// 函数: sub_14080b2b0
// 地址: 0x14080b2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
int32_t rax_1

if ((arg2[5].b & 1) != 0)
    rax_1, zmm1 = sub_140b4e7c0(arg2, &data_14396e7c0)

if ((arg2[5].b & 1) == 0 || rax_1 s>= 0x27)
    int64_t var_18 = 0
    int64_t var_10_1 = 0
    sub_1407e5270(arg2, &var_18, zmm1)
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

jump(*(*arg2 + 0x1d8))
