// 函数: sub_141a3ae20
// 地址: 0x141a3ae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* r14 = arg3
void* rcx_6

if (*(arg1 + 0xa8) == *(arg1 + 0xd4))
labelid_10:
    rcx_6 = nullptr
else
    void* rdx = *(arg1 + 0xe0)
    arg3 = arg1 + 0xd8
    int64_t r9 = sx.q(*arg2)
    
    if (rdx != 0)
        arg3 = rdx
    
    int32_t rax_3 = *(arg3 + (((sx.q(*(arg1 + 0xe8)) - 1) & r9) << 2))
    
    if (rax_3 == 0xffffffff)
    label_141a3aeb5:
        rcx_6 = nullptr
    else
        arg3 = *(arg1 + 0xa0)
        
        while (true)
            rcx_6 = sx.q(rax_3) * 0xc0 + arg3
            
            if (*rcx_6 == r9.d)
                break
            
            rax_3 = *(rcx_6 + 0xb8)
            
            if (rax_3 == 0xffffffff)
                goto label_141a3aeb5_1
        
        if (rax_3 == 0xffffffff)
        label_141a3aeb5_1:
            rcx_6 = nullptr

void* rbx = rcx_6 + 8

if (rcx_6 == 0)
    rbx = nullptr

if (rbx == 0)
    int32_t var_f8 = 0xffffffff
    int32_t var_ec
    __builtin_memset(&var_ec, 0, 0x30)
    int32_t* var_108_1 = &var_f8
    int32_t var_f4_1 = 0
    int32_t var_f0_1 = 0xffffffff
    int32_t var_bc_1 = 0x80
    int32_t var_b8_1 = 0xffffffff
    int32_t var_b4
    __builtin_memset(&var_b4, 0, 0x48)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64
    __builtin_memset(&var_64, 0, 0x1c)
    int32_t* var_110 = arg2
    int32_t var_118
    sub_141a29da0(arg1 + 0xa0, &var_118, &var_110, nullptr)
    int64_t var_50
    var_50.d = 0
    rbx = *(arg1 + 0xa0) + sx.q(var_118) * 0xc0 + 8
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t var_98
    sub_141a32530(&var_98)
    int64_t var_a0
    var_a0.d = 0
    int64_t var_a8
    
    if (var_a8 != 0)
        sub_140a74f90(var_a8)
    
    int64_t var_e8
    arg3 = sub_141a32460(&var_e8)

if (sub_1406ee470(rbx, r14, arg3.d) != 0)
    sub_141a630b0(rbx + 0x10)
    sub_141a63190(rbx + 0x60)
    (*(*arg4 + 0x70))(arg4)

sub_140d3a3a0(rbx, r14)
int32_t result = *arg2
*(rbx + 8) = result
__security_check_cookie(rax_1 ^ &var_138)
return result
