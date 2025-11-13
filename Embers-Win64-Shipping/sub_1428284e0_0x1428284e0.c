// 函数: sub_1428284e0
// 地址: 0x1428284e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x80) = 1
*(arg1 + 0x82) = 1
int32_t* rax = j_sub_140a82f30(0x18)
int32_t* arg_8 = rax

if (rax != 0)
    *rax = 0xffffffff
    rax[1] = 2
    rax[2] = 0
    *(rax + 0x10) = 0

arg_8 = rax
int32_t** rdx = *(arg1 + 0xe0)
int32_t* rbx

if (rdx == *(arg1 + 0xe8))
    sub_142826df4(arg1 + 0xd8, rdx, &arg_8)
    rbx = arg_8
else
    rbx = nullptr
    arg_8 = nullptr
    *rdx = rax
    *(arg1 + 0xe0) += 8

int64_t arg_10 = *(*(arg1 + 0xe0) - 8)
int64_t result = sub_142826ca0(arg1 + 0xb0, &arg_10)

if (rbx == 0)
    return result

return j_sub_140a74f90(rbx)
