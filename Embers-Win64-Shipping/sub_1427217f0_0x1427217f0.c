// 函数: sub_1427217f0
// 地址: 0x1427217f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
*(arg1 + 0x68) = arg2
*(arg1 + 0x90) = *arg3
*(arg1 + 0x98) = arg3[1]
*(arg1 + 0xa0) = arg3[2].d
*(arg1 + 0xa8) = arg3[3]
*(arg1 + 0xb0) ^= (*(arg1 + 0xb0) ^ arg3[4].d) & 1
int32_t rax_8 = *(arg1 + 0xb0)
int32_t rcx_3 = ((rax_8 ^ arg3[4].d) & 2) ^ rax_8
*(arg1 + 0xb0) = rcx_3
int32_t rax_12 = ((rcx_3 ^ arg3[4].d) & 4) ^ rcx_3
*(arg1 + 0xb0) = rax_12
int32_t rcx_7 = ((rax_12 ^ arg3[4].d) & 8) ^ rax_12
*(arg1 + 0xb0) = rcx_7
int32_t rax_16 = ((rcx_7 ^ arg3[4].d) & 0x10) ^ rcx_7
*(arg1 + 0xb0) = rax_16
int32_t rcx_11 = ((rax_16 ^ arg3[4].d) & 0x20) ^ rax_16
*(arg1 + 0xb0) = rcx_11
int32_t rdx_3 = ((rcx_11 ^ arg3[4].d) & 0x40) ^ rcx_11
*(arg1 + 0xb0) = rdx_3
*(arg1 + 0xb0) = ((rdx_3 ^ arg3[4].d) & 0x80) ^ rdx_3
*(arg1 + 0xb4) = *(arg3 + 0x24)
int64_t* rcx_12 = arg3[6]
int64_t var_38 = arg3[5]
int64_t* var_30 = rcx_12

if (rcx_12 != 0)
    rcx_12[1].d += 1
    rcx_12 = var_30

if (&var_38 != arg1 + 0xb8)
    uint128_t zmm1 = var_38.o
    uint128_t var_28_1 = zmm1
    var_38.o = *(arg1 + 0xb8)
    rcx_12 = var_30
    *(arg1 + 0xb8) = zmm1

int32_t result

if (rcx_12 == 0)
    result = arg3[7].d
else
    rcx_12[1].d -= 1
    
    if (rcx_12[1].d != 1)
        result = arg3[7].d
    else
        (**var_30)(var_30)
        int32_t rdi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rdi_1))
        
        result = arg3[7].d

*(arg1 + 0xc8) = result
__security_check_cookie(rax_1 ^ &var_58)
return result
