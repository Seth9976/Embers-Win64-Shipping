// 函数: sub_14085b1b0
// 地址: 0x14085b1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
(*(*arg2 + 0x1d8))(arg2, &data_1439a94d8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)
uint64_t result = zx.q(arg2[5].b)
int32_t var_1c8

if ((result.b & 2) != 0)
    int64_t r8 = arg2[0xe]
    int64_t rbx_1 = 0
    var_1c8 = 0
    int64_t* r14_1 = nullptr
    
    if (r8 != 0)
        int32_t var_1c4
        sub_1405ba560(arg1, &var_1c4, r8)
        int64_t rax_6 = sx.q(var_1c4)
        void* const rcx_7
        
        if (rax_6.d == 0xffffffff)
            rcx_7 = nullptr
        else
            rcx_7 = (rax_6 << 5) + *arg1
        
        r14_1 = rcx_7 + 8
        
        if (rcx_7 == 0)
            r14_1 = nullptr
        
        if (r14_1 != 0)
            var_1c8 = r14_1[1].d
    
    int64_t* rcx_8 = arg2[1]
    int32_t* rdx_1 = *rcx_8
    
    if (&rdx_1[1] u> rcx_8[1])
        int32_t* rdx_2 = &var_1c8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_2, arg4)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_2, 4)
    else
        result = zx.q(*rdx_1)
        var_1c8 = result.d
        *rcx_8 += 4
    
    if (r14_1 != 0)
        void** rsi_1 = *r14_1
        result = &rsi_1[r14_1[1]]
        uint64_t r14_3 = sx.q(r14_1[1].d) << 3 u>> 3
        
        if (rsi_1 u> result)
            r14_3 = 0
        
        if (r14_3 != 0)
            do
                result, arg4, arg5 = sub_140888eb0(*rsi_1, arg2, arg5, arg4)
                rbx_1 += 1
                rsi_1 = &rsi_1[1]
            while (rbx_1 != r14_3)
else if ((result.b & 1) != 0)
    int64_t* rcx_11 = arg2[1]
    var_1c8 = 0
    int32_t* rdx_4 = *rcx_11
    
    if (&rdx_4[1] u> rcx_11[1])
        int32_t* rdx_5 = &var_1c8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_5, arg4)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_5, 4)
    else
        result = zx.q(*rdx_4)
        var_1c8 = result.d
        *rcx_11 += 4
    
    int32_t r15_1 = 0
    
    if (var_1c8 s> 0)
        do
            int32_t rax_13 = data_1439c7a08
            int32_t var_e0 = var_e0 & 0xfffffffc
            int32_t var_e8_1 = rax_13
            int32_t var_c8_1 = rax_13
            void** var_1b8 = &data_142ddadd8
            int64_t var_1b0
            __builtin_memset(&var_1b0, 0, 0x78)
            char var_138_1 = 1
            int64_t var_130
            __builtin_memset(&var_130, 0, 0x30)
            int64_t var_f8_1 = 0
            int32_t var_f0_1 = 0
            int32_t var_ec_1 = 1
            int32_t var_e4_1 = 0x31
            int64_t var_d8_1 = 0
            int64_t var_d0_1 = 0
            int64_t var_c4_1 = 0
            int64_t var_bc_1 = 0
            int64_t var_b0
            __builtin_memset(&var_b0, 0, 0x24)
            int64_t var_88_1 = 0
            int64_t var_80_1 = 0
            int32_t var_74_1 = 0
            int32_t var_78_1 = 0xffffffff
            char var_70_1 = 1
            int64_t var_68
            __builtin_memset(&var_68, 0, 0x20)
            arg5 = sub_140888eb0(&var_1b8, arg2, arg5, arg4)
            int64_t r14_4 = sx.q(arg3[1].d)
            int32_t rax_14 = (r14_4 + 1).d
            arg3[1].d = rax_14
            
            if (rax_14 s> *(arg3 + 0xc))
                sub_14085a600(arg3)
            
            sub_140843340(r14_4 * 0x170 + *arg3, &var_1b8)
            result, arg4 = sub_140883050(&var_1b8)
            r15_1 += 1
        while (r15_1 s< var_1c8)
__security_check_cookie(rax_1 ^ &var_1e8)
return result
