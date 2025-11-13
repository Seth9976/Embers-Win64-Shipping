// 函数: sub_1414db970
// 地址: 0x1414db970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x8c)
int32_t rax = arg2[0x15b].d

if (rbx != rax)
    bool cond:0_1 = *(arg1 + 0x14) u> 0
    *(arg1 + 0x8c) = rax
    
    if (cond:0_1)
        void*** rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rdx_2[3]
        
        if (rax_1 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x20)
            rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rdx_2[3]
        
        *(arg1 + 0x30) = rax_1
        int64_t* rax_2 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_2 = rdx_2
        int32_t rax_3 = *(arg1 + 0x8c)
        *(arg1 + 8) = &rdx_2[1]
        rdx_2[1] = 0
        *rdx_2 = &data_142f11588
        rdx_2[2].d = rax_3
    else
        *(arg1 + 0x90) = rax

uint64_t rdx_5 = 0x12

if (arg4 == 0)
    rdx_5 = 8
else if (arg4 == 1)
    rdx_5 = 9
else if (arg4 == 2)
    rdx_5 = 0xa
else if (arg4 == 3)
    rdx_5 = zx.q(arg4 + 8)

int32_t result = sub_141267530(&arg2[0x4e8 + rdx_5 * 0x3a], arg5, arg1)

if (arg4 == 3 || arg4 == 0)
    sub_1422e1d40(&arg2[0x3ba], arg1, arg3, arg2, 2, 0)
    int32_t var_170_1 = 1
    int32_t var_178_1 = 2
    result = sub_1422e1d40(&arg2[0x3ba], arg1, arg3, arg2, 2, 1)
    
    if ((*(arg2 + 0x497c) & 4) != 0)
        if (arg5 != 0)
            var_178_1.b = 0
            sub_141395b30(&data_143ec4c60, arg1, arg2, arg5[2], 0)
        
        int64_t var_158
        __builtin_memset(&var_158, 0, 0x14)
        sub_141095f70(&var_158, 0)
        int64_t var_140 = 0
        int64_t var_138_1 = 0
        void var_108
        sub_14108b090(&var_108)
        int32_t rdi_1 = arg2[0x2a9].d
        void** const var_130 = &data_142f11938
        int64_t* var_128_1 = &var_158
        int64_t* var_120_1 = &var_140
        void* var_118_1 = &var_108
        void arg_20
        void* var_110_1 = &arg_20
        int64_t* rcx_12 = *(*arg2 + 0x20)
        var_170_1.q = &var_130
        var_178_1.q = arg3
        void** var_b8
        sub_14108b590(&var_b8, (*(*rcx_12 + 0x248))(rcx_12), rdi_1, arg2, var_178_1, var_170_1, 1, 
            arg4)
        void** rdi_2 = nullptr
        int32_t i = 0
        
        if (arg2[0x3a9].d s> 0)
            do
                var_178_1 = 0xffffffff
                sub_14108e980(&var_b8, *(rdi_2 + arg2[0x3a8]), -1, nullptr, 0xffffffff)
                i += 1
                rdi_2 = &rdi_2[1]
            while (i s< arg2[0x3a9].d)
        
        int32_t rcx_16
        rcx_16.b = sub_1422eb5d0(arg2) != 0
        var_170_1.q = &arg_20
        var_178_1.q = &var_108
        sub_1412680e0(arg2, arg1, &var_140, &var_158, var_178_1, var_170_1, rcx_16 + 1)
        var_130 = &data_142d56fa0
        int64_t var_d8
        
        if (var_d8 != 0)
            sub_140a74f90(var_d8)
        
        int64_t var_e8
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)
        
        sub_14108ca30(&var_108)
        sub_141095f70(&var_158, 0)
        int64_t rcx_23 = var_158
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        __builtin_memset(&var_158, 0, 0x14)
        sub_141095f70(&var_158, 0)
        var_140 = 0
        int64_t var_138_2 = 0
        sub_14108b090(&var_108)
        int32_t rdi_3 = arg2[0x2a9].d
        var_130 = &data_142f11938
        int64_t* var_128_2 = &var_158
        int64_t* var_120_2 = &var_140
        void* var_118_2 = &var_108
        void* var_110_2 = &arg_20
        int64_t* rcx_26 = *(*arg2 + 0x20)
        var_170_1.q = &var_130
        var_178_1.q = arg3
        sub_14108b590(&var_b8, (*(*rcx_26 + 0x248))(rcx_26), rdi_3, arg2, var_178_1, var_170_1, 1, 
            arg4)
        int32_t i_1 = 0
        
        if (arg2[0x3ab].d s> 0)
            void** rdi_4 = nullptr
            
            do
                var_178_1 = 0xffffffff
                sub_14108e980(&var_b8, *(rdi_4 + arg2[0x3aa]), -1, nullptr, 0xffffffff)
                i_1 += 1
                rdi_4 = &rdi_4[1]
            while (i_1 s< arg2[0x3ab].d)
        
        int32_t rcx_30
        rcx_30.b = sub_1422eb5d0(arg2) != 0
        var_170_1.q = &arg_20
        var_178_1.q = &var_108
        sub_1412680e0(arg2, arg1, &var_140, &var_158, var_178_1, var_170_1, rcx_30 + 1)
        var_130 = &data_142d56fa0
        
        if (var_d8 != 0)
            sub_140a74f90(var_d8)
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)
        
        sub_14108ca30(&var_108)
        result = sub_141095f70(&var_158, 0)
        int64_t rcx_37 = var_158
        
        if (rcx_37 != 0)
            result = sub_140a74f90(rcx_37)
        
        if (arg5 != 0)
            result = sub_141096650(arg1)

if (*(arg1 + 0x8c) != rbx)
    bool cond:1_1 = *(arg1 + 0x14) u> 0
    *(arg1 + 0x8c) = rbx
    
    if (not(cond:1_1))
        *(arg1 + 0x90) = rbx
        return result
    
    void*** rdx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rdx_20[3]
    
    if (rax_14 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x20)
        rdx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rdx_20[3]
    
    *(arg1 + 0x30) = rax_14
    int64_t* rax_15 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_15 = rdx_20
    result = *(arg1 + 0x8c)
    *(arg1 + 8) = &rdx_20[1]
    rdx_20[1] = 0
    *rdx_20 = &data_142f11588
    rdx_20[2].d = result

return result
