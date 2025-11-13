// 函数: sub_141b26720
// 地址: 0x141b26720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* result = sub_141aefa10(arg4, arg5)

if (result != 0)
    int64_t* result_1 = result
    int64_t var_118_1 = arg2
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t rdi_1 = 0
    int64_t rsi_1 = sx.q(*(arg1 + 0x18)) << 3
    void* var_120_1 = arg1
    int64_t var_110_1 = 0
    int32_t var_bc
    __builtin_memset(&var_bc, 0, 0x28)
    uint64_t rsi_2 = rsi_1 u>> 3
    int32_t var_70_1 = 0
    char var_44_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        rsi_2 = 0
    
    void var_e0
    
    if (rsi_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_4 = rbx_1
            int64_t* var_138_1 = &result_1
            int512_t zmm2
            zmm2.o = *(rdx_1 + 0x44)
            
            if ((rdx_1[5].b & 2) == 0)
                rax_4 = rdx_1
            
            int64_t* rcx_1 = *rax_4
            (*(*rcx_1 + 8))(rcx_1, &var_e0, &result_1, zmm2, zx.q(rdx_1[9].b))
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != rsi_2)
    
    uint128_t var_108[0x2]
    sub_141af4580(&var_e0, &var_108, &result_1)
    result = (*(*result + 0x18))(result, arg3, &var_108, arg1, arg6)

__security_check_cookie(rax_1 ^ &var_158)
return result
