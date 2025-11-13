// 函数: sub_1422d13c0
// 地址: 0x1422d13c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a94c8)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_1439a94c8)

if (rax_1 s< 5)
    return rax_1

int64_t* rcx_2 = arg2[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg1 + 0x38) = *r8_1
    int64_t* rax_4 = arg2[1]
    *rax_4 += 4
    return rax_4

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x38, zmm1)

jump(*(*arg2 + 0x150))
