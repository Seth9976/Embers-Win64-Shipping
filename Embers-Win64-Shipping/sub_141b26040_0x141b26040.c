// 函数: sub_141b26040
// 地址: 0x141b26040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* result
int128_t zmm0
result, zmm0 = sub_141aef5e0(arg4, arg5)

if (result != 0)
    int64_t* result_1 = result
    int64_t var_78_1 = arg2
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t rdi_1 = 0
    void* var_80_1 = arg1
    int64_t var_70_1 = 0
    int64_t var_64_1 = 0
    uint64_t rsi_2 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
    int32_t var_58_1 = 0
    char var_4c_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        rsi_2 = 0
    
    void var_68
    int512_t zmm2
    
    if (rsi_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_4 = rbx_1
            int64_t* var_98_1 = &result_1
            zmm2.o = *(rdx_1 + 0x24)
            
            if ((rdx_1[1].b & 2) == 0)
                rax_4 = rdx_1
            
            int64_t* rcx_1 = *rax_4
            (*(*rcx_1 + 8))(rcx_1, &var_68, &result_1, zmm2, zx.q(rdx_1[5].b))
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != rsi_2)
    
    zmm2.o = sub_141af3fd0(&var_68, &result_1, zmm0)
    result = (*(*result + 0x18))(result, arg3, zmm2, arg1, arg6)

__security_check_cookie(rax_1 ^ &var_b8)
return result
