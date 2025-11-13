// 函数: sub_1405e43c0
// 地址: 0x1405e43c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint32_t result = zx.d(arg2[5].b)
uint32_t result_1

if ((result.b & 2) != 0)
    int64_t r8 = arg2[0xe]
    int32_t rbx_1 = 0
    result_1 = 0
    int64_t* r14_1 = nullptr
    
    if (r8 != 0)
        int32_t var_104
        sub_1405ba560(arg1, &var_104, r8)
        int64_t rax_2 = sx.q(var_104)
        void* const rcx_2
        
        if (rax_2.d == 0xffffffff)
            rcx_2 = nullptr
        else
            rcx_2 = (rax_2 << 5) + *arg1
        
        r14_1 = rcx_2 + 8
        
        if (rcx_2 == 0)
            r14_1 = nullptr
        
        if (r14_1 != 0)
            result_1 = r14_1[1].d
    
    int64_t* rcx_3 = arg2[1]
    uint32_t* rdx_1 = *rcx_3
    
    if (&rdx_1[1] u> rcx_3[1])
        uint32_t* rdx_2 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_2, arg4)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_2, 4)
    else
        result = *rdx_1
        result_1 = result
        *rcx_3 += 4
    
    if (r14_1 != 0 && result_1 s> 0)
        void** rsi_1 = nullptr
        
        do
            result, arg4, arg5 = sub_1405e4630(*(rsi_1 + *r14_1), arg2, arg5, arg4)
            rbx_1 += 1
            rsi_1 = &rsi_1[1]
        while (rbx_1 s< result_1)
else if ((result.b & 1) != 0)
    int64_t* rcx_7 = arg2[1]
    result_1 = 0
    uint32_t* rdx_4 = *rcx_7
    
    if (&rdx_4[1] u> rcx_7[1])
        uint32_t* rdx_5 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_5, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_5, 4)
    else
        result_1 = *rdx_4
        *rcx_7 += 4
    
    int512_t zmm1
    int512_t zmm2
    result, zmm1, zmm2 = sub_1405e1a60(arg3, result_1)
    int32_t r15_1 = 0
    
    if (result_1 s> 0)
        do
            int32_t var_94 = var_94 & 0xfffffffc
            void** var_f8 = &data_142d5a4e0
            int64_t var_f0
            __builtin_memset(&var_f0, 0, 0x40)
            int64_t var_a8_1 = 0
            int32_t var_a0_1 = 0
            int32_t var_9c_1 = 1
            int32_t var_98_1 = 3
            int32_t var_90_1 = 3
            int64_t var_88
            __builtin_memset(&var_88, 0, 0x20)
            int32_t var_64
            __builtin_memset(&var_64, 0, 0x14)
            int32_t var_68_1 = 0xffffffff
            sub_1405e4630(&var_f8, arg2, zmm2, zmm1)
            int64_t r14_2 = sx.q(arg3[1].d)
            int32_t rax_9 = (r14_2 + 1).d
            arg3[1].d = rax_9
            
            if (rax_9 s> *(arg3 + 0xc))
                sub_1405e3f90(arg3)
            
            sub_1405de590(r14_2 * 0xa8 + *arg3, &var_f8)
            result, zmm1, zmm2 = sub_1405df6f0(&var_f8)
            r15_1 += 1
        while (r15_1 s< result_1)
__security_check_cookie(rax_1 ^ &var_128)
return result
