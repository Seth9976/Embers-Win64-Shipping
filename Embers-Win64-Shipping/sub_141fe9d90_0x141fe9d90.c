// 函数: sub_141fe9d90
// 地址: 0x141fe9d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg1[0x2e].d
int32_t rbx = arg6[1].d
int64_t r13
r13.b = sub_141dc37c0(arg4, arg3) != 0
*(arg4 + 0x181) &= 0xf7
char rax_1 = 0

if (r12 s> 0)
    rax_1 = 8

*(arg4 + 0x181) |= rax_1
int64_t* rcx_1 = arg1[0x2c]
(*(*rcx_1 + 0x2c0))(rcx_1, arg2, arg3, arg4, arg5, arg6)
int64_t rcx_2 = sx.q(arg6[1].d)
uint64_t result = zx.q(rbx + 1)

if (rcx_2.d == result.d)
    result = *arg6
    int64_t rdx_2 = *(result + (rcx_2 << 3) - 8)
    
    if (rdx_2 != 0 && r13.b == 0 && (*(arg4 + 0x181) & 4) != 0 && r12 s> 0)
        int32_t zmm0 = *(arg4 + 0x1fc)
        void* var_40_1 = &arg1[0x2d]
        int64_t var_68 = *(arg4 + 0x28)
        int64_t var_60_1 = *(arg4 + 8)
        int32_t var_50_1 = zmm0
        int64_t var_58_1 = rdx_2
        (*(*arg1 + 0x288))(arg1)
        char var_48
        char var_48_1 = var_48 & 0xfc
        int32_t var_4c_1 = zmm0
        int32_t var_38_1 = *(arg4 + 0x19c)
        return sub_1423b3be0(&var_68)

return result
