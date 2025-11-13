// 函数: sub_141ca3e30
// 地址: 0x141ca3e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
sub_141cb6cc0(arg1)
int64_t* rbx = *arg2
void* rcx = nullptr
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
void* r14 = &rbx[sx.q(arg2[1].d)]
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
void* var_68 = nullptr
int32_t var_60 = 0
int64_t var_a0_1
int64_t var_98

if (rbx != r14)
    do
        sub_141ca3ff0(arg1, *rbx, arg4, &var_a8, arg1 + 0x3f0, arg3)
        
        if (var_a0_1.d != var_74)
            int32_t rax_4 = var_a0_1:4.d
            var_a0_1.d = 0
            
            if (rax_4 s< 0 && rax_4 != 0)
                sub_1405a5410(&var_a8, 0)
            
            int32_t var_78_1 = 0xffffffff
            var_74 = 0
            sub_140774790(&var_98)
            int64_t rcx_4 = sx.q(var_60)
            
            if (rcx_4 s> 0)
                void var_70
                void* rdi_1 = &var_70
                
                if (var_68 != 0)
                    rdi_1 = var_68
                
                __builtin_memset(rdi_1, 0xffffffff, rcx_4 << 2)
        
        rbx = &rbx[1]
    while (rbx != r14)
    
    rcx = var_68

if (*(arg1 + 0x440) == 0)
    sub_141c9c3e0(arg1 + 0x3a0, 0)
    sub_141c9c500(arg1 + 0x3f0, 0)
    rcx = var_68

int32_t var_60_1 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = var_a0_1:4.d == 0
var_a0_1.d = 0

if (not(cond:0))
    sub_1405a5410(&var_a8, 0)

int32_t var_78_2 = 0xffffffff
int32_t var_74_1 = 0
void* result = sub_14059a8e0(&var_98, 0)
int64_t var_88

if (var_88 != 0)
    result = sub_140a74f90(var_88)

int64_t rcx_10 = var_a8

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_d8)
return result
