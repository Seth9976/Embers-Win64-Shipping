// 函数: sub_141b26e30
// 地址: 0x141b26e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* result = sub_141aefe20(arg4, arg5)

if (result != 0)
    int64_t* result_1 = result
    int64_t var_78_1 = 0
    int32_t var_70_1 = 0
    int64_t var_a8_1 = arg2
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t rdi_1 = 0
    void* var_b0_1 = arg1
    int64_t var_a0_1 = 0
    int32_t var_7c_1 = 0
    uint64_t rsi_2 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
    int32_t var_60_1 = 0
    char var_4c_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        rsi_2 = 0
    
    void var_88
    
    if (rsi_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_4 = rbx_1
            int64_t* var_c8_1 = &result_1
            int512_t zmm2
            zmm2.o = *(rdx_1 + 0x2c)
            
            if ((rdx_1[2].b & 2) == 0)
                rax_4 = rdx_1
            
            int64_t* rcx_1 = *rax_4
            (*(*rcx_1 + 8))(rcx_1, &var_88, &result_1, zmm2, zx.q(rdx_1[6].b))
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != rsi_2)
    
    int64_t var_98[0x2]
    sub_141af56f0(&var_88, &var_98, &result_1)
    result = (*(*result + 0x18))(result, arg3, &var_98, arg1, arg6)

__security_check_cookie(rax_1 ^ &var_e8)
return result
