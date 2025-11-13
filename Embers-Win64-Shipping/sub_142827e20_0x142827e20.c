// 函数: sub_142827e20
// 地址: 0x142827e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x110) != 0)
    return 0

int32_t* rax_1 = j_sub_140a82f30(0x18)
int32_t* rbx_1 = rax_1
int32_t* arg_8 = rax_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    *rax_1 = arg2
    rax_1[1] = arg3
    rax_1[2] = 0
    *(rax_1 + 0x10) = 0

int32_t* rcx = rbx_1
arg_8 = rbx_1
void* var_28_1 = arg1 + 0xb0
int64_t r9_3 = *(arg1 + 0xd0) - 1 + *(arg1 + 0xc8)
int32_t* rax_5 =
    *(*(*(arg1 + 0xb8) + (((*(arg1 + 0xc0) - 1) & r9_3 u>> 1) << 3)) + ((zx.q(r9_3.d) & 1) << 3))
int32_t rdx_2 = *rax_5
int32_t temp0_1 = *rbx_1
int64_t result

if (temp0_1 s< rdx_2 || (temp0_1 == rdx_2 && (rbx_1[1] != 1 || rax_5[1] != 0)))
    result = 0
else
    sub_1428278a4(arg1, arg3)
    *(rbx_1 + 0x10) = sub_142827f54(arg1)
    int32_t* arg_20 = rbx_1
    sub_142826ca0(arg1 + 0xb0, &arg_20)
    int64_t* rdx_6 = *(arg1 + 0xe0)
    
    if (rdx_6 == *(arg1 + 0xe8))
        sub_142826df4(arg1 + 0xd8, rdx_6, &arg_8)
        rcx = arg_8
    else
        rcx = nullptr
        *rdx_6 = rbx_1
        *(arg1 + 0xe0) += 8
    
    result = *(*(arg1 + 0xe0) - 8)

if (rcx != 0)
    j_sub_140a74f90(rcx)

return result
