// 函数: sub_14219f400
// 地址: 0x14219f400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t* rax = nullptr
int32_t* rbx_1 = nullptr

if ((*(arg2 + 0xe0) & 0x100) != 0)
    if (*(arg2 + 0x1f0) != 0)
        rax = sx.q(*(arg2 + 0x1f8)) + arg4
    
    if (*(arg2 + 0x200) != 0)
        rbx_1 = sx.q(*(arg2 + 0x208)) + arg4

if (*(arg1 + 0x30) == 0)
    rbx_1 = rax

if (rbx_1 == 0)
    return 

*rbx_1 ^= (*rbx_1 ^ *(arg1 + 0x34)) & 1
int32_t rax_5 = *rbx_1
int32_t var_28
int64_t var_20
void var_18

if ((*(arg1 + 0x34) & 1) != 0)
    var_20 = 0
    var_28 = 0
    int64_t* rax_6
    rax_6, arg3 =
        sub_141fe56b0(arg1 + 0x38, &var_18, *(arg2 + 0x12c), arg3, (*(arg2 + 0x18)).d, nullptr)
    *(rbx_1 + 4) = *rax_6
    rbx_1[3] = rax_6[1].d
    *rbx_1 ^= (*rbx_1 ^ *(arg1 + 0x34)) & 2
    rax_5 = *rbx_1

int32_t rcx_6 = ((*(arg1 + 0x80) << 2 ^ rax_5) & 4) ^ rax_5
*rbx_1 = rcx_6

if ((*(arg1 + 0x80) & 1) != 0)
    var_20 = 0
    var_28 = 0
    int64_t* rax_11 =
        sub_141fe56b0(arg1 + 0x88, &var_18, *(arg2 + 0x12c), arg3, (*(arg2 + 0x18)).d, nullptr)
    *(rbx_1 + 0x10) = *rax_11
    rbx_1[6] = rax_11[1].d
    *rbx_1 ^= (*(arg1 + 0x80) << 2 ^ *rbx_1) & 8
    rcx_6 = *rbx_1

*rbx_1 = ((*(arg1 + 0xd4) << 4 ^ rcx_6) & 0x10) ^ rcx_6

if ((*(arg1 + 0xd4) & 1) != 0)
    rbx_1[7] = sub_141fe5610(arg1 + 0xd8, *(arg2 + 0x12c), *(arg2 + 0x18), nullptr, var_28, var_20)
    *rbx_1 ^= (*(arg1 + 0xd4) << 4 ^ *rbx_1) & 0x20
