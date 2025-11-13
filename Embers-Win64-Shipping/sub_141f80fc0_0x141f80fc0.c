// 函数: sub_141f80fc0
// 地址: 0x141f80fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = *(arg1 + 0x28)
int64_t* rdi_1 = result[0xd] + 0x320

if (rdi_1[1].d s<= 0)
    return result

void** var_128
int512_t zmm1_1 = sub_141f79b40(&var_128, arg2)
(*(*arg2 + 0x98))(arg2)
int64_t* rcx_2 = arg2[1]
int16_t arg_8 = rdi_1[1].w
int16_t* rdx = *rcx_2

if (&rdx[1] u> rcx_2[1])
    int16_t* rdx_1 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54000(arg2, rdx_1, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 2)
else
    arg_8 = *rdx
    *rcx_2 += 2

int32_t i = 0

if (rdi_1[1].d s> 0)
    do
        int64_t r8_1 = *arg2
        (*(r8_1 + 0x168))(arg2, *rdi_1 + (sx.q(i) << 2), r8_1)
        i += 1
    while (i s< rdi_1[1].d)

int64_t var_98
int64_t var_88
(*(*arg2 + 0x158))(arg2, var_98, var_88)
*(arg2 + 0xf1) |= 4
rdi_1[1].d = 0

if (*(rdi_1 + 0xc) != 0)
    sub_1405dadb0(rdi_1, 0)

var_128 = &data_143286b38
int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

if (var_98 != 0)
    sub_140a74f90(var_98)

return sub_140b4cb40(&var_128)
