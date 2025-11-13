// 函数: sub_142281410
// 地址: 0x142281410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg2

if (rdx == 0)
    return 

int64_t var_38
int64_t var_28
int32_t arg_10
char rax_1
int512_t zmm1_1
int128_t zmm6_1
rax_1, zmm1_1, zmm6_1 = sub_142568fe0(arg1, rdx, &var_38, &var_28, &arg_10)

if (rax_1 != 0)
    arg2[2] = var_38
    *(arg2 + 0x1c) = var_28
    int32_t var_30
    arg2[3].d = var_30
    arg2[5].d = arg_10.d
    int32_t var_20
    *(arg2 + 0x24) = var_20
    return 

int64_t* rcx = *arg2
zmm1_1.o = zmm6_1
(*(*rcx + 0x5b0))(rcx, zmm1_1, &arg2[2])
