// 函数: sub_14186c6f0
// 地址: 0x14186c6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
int32_t rax = 0

if (0 == *(arg1 + 0xd0))
    *(arg1 + 0xd0) = 0
else
    rax = *(arg1 + 0xd0)

if (rax s>= *(arg1 + 0x10))
    int32_t i
    
    do
        sub_140b73230(zx.o(0))
        i = 0
        
        if (0 == *(arg1 + 0xd0))
            *(arg1 + 0xd0) = 0
        else
            i = *(arg1 + 0xd0)
    while (i s>= *(arg1 + 0x10))

*(arg1 + 0xd0) += 1
int64_t rsi = *arg2
*arg2 = 0
int32_t rbp = arg2[1].d
int32_t r15 = *(arg2 + 0xc)
arg2[1] = 0
zmm6 = *arg3
int64_t rbx_1 = *arg4
int128_t zmm7 = *arg5
int32_t r12_1 = arg5[1].d
int64_t var_88 = rsi
int128_t var_60 = zmm7
int32_t var_80 = rbp
int32_t var_7c = r15
int128_t var_78 = zmm6
int64_t var_68 = rbx_1
int32_t var_50 = r12_1
int64_t* result = j_sub_140a82f30(0x48)
int64_t* result_1 = result

if (result != 0)
    *result = 0
    result[1] = rsi
    result[2].d = rbp
    *(result + 0x14) = r15
    *(result + 0x30) = zmm7
    result[8].d = r12_1
    *(result + 0x18) = zmm6
    result[5] = rbx_1
    result = *(arg1 + 0xc0)
    int64_t var_88_1 = 0
    var_80.q = 0
    *(arg1 + 0xc0) = result_1
    *result = result_1
else if (rsi != 0)
    result = sub_140a74f90(rsi)

int64_t rcx_1 = *arg2

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1)
