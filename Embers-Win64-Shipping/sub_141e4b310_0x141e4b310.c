// 函数: sub_141e4b310
// 地址: 0x141e4b310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = &arg2[2]
int32_t r9

if (*arg2 != 0xfffffffe)
    r9 = *rbx

int32_t* var_50

if (*arg2 == 0xfffffffe || r9 == 0xfffffffe)
    int32_t* rdx = rbx
    int32_t rcx
    rcx.b = sub_140b5b8a0(*(arg3 + 0x10), 0) == 0
    int32_t rcx_1
    
    if ((*(arg3 + 0x14) != 0 | rcx.b) != 0)
        rdx = rbx
        rcx_1.b = sub_140b5b8a0(*(arg3 + 0x18), 0) == 0
    
    bool rax_1
    
    if ((*(arg3 + 0x14) != 0 | rcx.b) == 0 || (*(arg3 + 0x1c) != 0 | rcx_1.b) == 0)
        rax_1 = false
        rbx = rdx
    else
        rax_1 = true
    
    int64_t r10_1 = *arg1
    uint64_t r8 = zx.q(arg7)
    int32_t var_58
    
    if (rax_1 == 0)
        var_50 = rbx
        var_58.q = arg2
        (*(r10_1 + 0x2e8))(arg1, rdx, r8, *(arg3 + 0x38), var_58, var_50)
    else
        var_50 = arg4
        var_58.q = rbx
        (*(r10_1 + 0x2f8))(arg1, arg3 + 0x10, r8, arg2, var_58, var_50)
    r9 = *rbx

void var_38
int128_t* rax_3 = (*(*arg1 + 0x2f0))(arg1, &var_38, zx.q(*arg2), r9, (*arg4).d, var_50)
int512_t zmm2
zmm2.o = arg6
*(arg3 + 0x10) = *rax_3
*(arg3 + 0x20) = rax_3[1].d
int32_t var_58_1
var_58_1.q = arg4
*arg5 = *arg4
(*(*arg1 + 0x2d8))(arg1, zx.q(arg7), zmm2, *(arg3 + 0x38), var_58_1, arg2, rbx, arg3)
int128_t* rax_8 = (*(*arg1 + 0x2f0))(arg1, &var_38, zx.q(*arg2), zx.q(*rbx), (*arg4).d)
*(arg3 + 0x24) = *rax_8
int32_t result = rax_8[1].d
*(arg3 + 0x34) = result
return result
