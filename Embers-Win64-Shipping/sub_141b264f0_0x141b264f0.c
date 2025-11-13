// 函数: sub_141b264f0
// 地址: 0x141b264f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* result = sub_141aef8f0(arg4, arg5)

if (result != 0)
    int32_t zmm2 = 0xbf800000
    char r9 = 0
    int32_t rcx_1 = data_143f2c430
    char r8 = 0
    char r10_1 = 0
    int32_t zmm3 = -0x40800000
    int64_t var_f8_1 = arg2
    int32_t zmm4_1 = -0x40800000
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t rsi_1 = sx.q(*(arg1 + 0x18)) << 3
    int64_t rdi_1 = 0
    int64_t* result_1 = result
    int32_t rax_2 = -1
    int32_t var_e8 = rcx_1
    uint64_t rsi_2 = rsi_1 u>> 3
    int32_t rcx_2 = -1
    int32_t var_cc_1 = 0xbf800000
    int32_t var_c4_1 = 0xbf800000
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        rsi_2 = 0
    
    int32_t var_9c_1 = 0xbf800000
    void* var_100_1 = arg1
    int64_t var_f0_1 = 0
    char var_e4_1 = 1
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    int32_t var_d0_1 = 0xffffffff
    char var_c7_1 = 0
    char var_bf_1 = 0
    char var_bc_1 = 0
    char var_b4_1 = 1
    int64_t var_b0_1 = 0
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0xffffffff
    
    if (rsi_2 != 0)
        do
            int64_t* rdx_3 = *rbx_1
            int64_t* rax_3 = rbx_1
            
            if ((rdx_3[0xa].b & 2) == 0)
                rax_3 = rdx_3
            
            int64_t* rcx_3 = *rax_3
            (*(*rcx_3 + 8))(rcx_3, &var_e8, &result_1, zx.q(rdx_3[0xe].b), &result_1)
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != rsi_2)
        
        zmm4_1 = var_9c_1
        rcx_2 = var_a0_1
        r10_1 = var_bc_1
        r8 = var_bf_1
        zmm3 = var_c4_1
        r9 = var_c7_1
        zmm2 = var_cc_1
        rax_2 = var_d0_1
    
    int128_t var_98 = var_e8.o
    int64_t var_88_1 = var_d8_1
    int32_t var_7c_1 = zmm2
    int32_t var_80_1 = rax_2
    char var_77_1 = 0
    
    if (r9 != 0)
        char var_c8
        char var_78_1 = var_c8
        char var_77_2 = 1
    
    int32_t var_74_1 = zmm3
    char var_6f_1 = 0
    
    if (r8 != 0)
        char var_c0
        char var_70_1 = var_c0
        char var_6f_2 = 1
    
    int32_t var_50_1 = rcx_2
    int128_t var_68_1 = rcx_1.o
    int64_t var_58_1 = var_a8_1
    int32_t var_4c_1 = zmm4_1
    char var_6c_1 = r10_1
    result = (*(*result + 0x18))(result, arg3, &var_98, arg1, arg6)

__security_check_cookie(rax_1 ^ &var_138)
return result
