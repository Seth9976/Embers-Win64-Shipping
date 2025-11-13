// 函数: sub_141a695e0
// 地址: 0x141a695e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* r8 = *(arg1 + 8)
*(arg1 + 0x10) = arg3
sub_141a68120(arg1 + 0x158, arg3, r8 + 0xd0)
void** const var_b8
void* rbx_1

if (arg3 != data_143f29fb0)
    int64_t* rcx_1 = *(arg1 + 0x148)
    rbx_1 = (*(*rcx_1 + 8))(rcx_1, arg2)
    void* rax_4 = sub_141a4c440(*(arg1 + 8) + 0xd0, &arg_18)
    
    if (rax_4 != 0)
        int32_t var_e8
        sub_141a34030(arg4, sub_141a6a820(arg4, &var_b8, rax_4 + 0x18, *(rax_4 + 0x38), var_e8))
        int64_t var_80
        
        if (var_80 != 0)
            sub_140a74f90(var_80)
else
    rbx_1 = *(arg1 + 8)

int64_t result

if (rbx_1 == 0)
    result = 0
else
    int32_t rcx_11 = (*(rbx_1 + 0x17c) ^ *(arg2 + 0x34)) | (*(rbx_1 + 0x178) ^ arg2[3].d)
        | (*(rbx_1 + 0x174) ^ *(arg2 + 0x2c)) | (*(arg2 + 0x28) ^ *(rbx_1 + 0x170))
    
    if (rcx_11 != 0)
        int128_t* var_b0_1 = arg2
        var_b8 = &data_14302e078
        void* var_a8_1 = rbx_1
        int64_t var_a0
        __builtin_memset(&var_a0, 0, 0x2c)
        int32_t var_74_1 = 0x80
        int32_t var_70_1 = 0xffffffff
        int32_t var_6c_1 = 0
        int64_t var_60_1 = 0
        int32_t var_58_1 = 0
        sub_141a4f930(&var_b8)
        int32_t var_58_2 = 0
        
        if (var_60_1 != 0)
            sub_140a74f90(var_60_1)
        
        int64_t var_98
        var_98.d = 0
        int32_t var_70_2 = 0xffffffff
        int32_t var_6c_2 = 0
        int64_t var_90
        sub_14059a8e0(&var_90, 0)
        int64_t var_80_1
        
        if (var_80_1 != 0)
            sub_140a74f90(var_80_1)
        
        int64_t rcx_17 = var_a0
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
    
    int32_t rax_12 = *(arg4 + 8)
    int64_t var_d8 = *arg4
    bool cond:0_1 = var_d8.b == 2
    int32_t var_c4_1 = 0
    int32_t var_bc_1 = 0
    char var_c8 = 2
    char var_c0_1 = 2
    int32_t var_d0_1 = rax_12
    
    if (not(cond:0_1))
        var_d8:4.d = *(arg4 + 4)
        var_d8.b = 1
        var_c8.q = var_d8
    
    char rax_15 = (*(arg4 + 0x14)).b
    var_d8 = *(arg4 + 0xc)
    
    if (var_d8.b != 2)
        var_d8.b = 0
        var_d8:4.d = arg4[1].d + 1
        var_c0_1.q = var_d8
    
    sub_141a409b0(rbx_1 + 0xa0, &var_d8, &var_c8, arg2, *(arg1 + 0x148))
    char r8_4 = var_d8.b
    int32_t rax_20 = var_d8:4.d
    int32_t var_cc
    
    if (r8_4 == 2 || rax_15 == 2
            || (rax_20 s<= var_cc && (rax_20 != var_cc || (r8_4 != 0 && rax_15 != 0))))
        if (arg4[2].d == 0)
            rax_20 = var_cc - 1
        
        if (rax_20 == 0xffffffff)
            result = 0
        else
            int64_t rbx_2 = sx.q(rax_20)
            sub_141a34240(arg1 + 0xd8, rbx_2 * 0x70 + *(rbx_1 + 0xc0))
            result = (rbx_2 << 5) + *(rbx_1 + 0xb0)
    else
        result = 0

__security_check_cookie(rax_1 ^ &var_108)
return result
