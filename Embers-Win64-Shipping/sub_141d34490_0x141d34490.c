// 函数: sub_141d34490
// 地址: 0x141d34490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_90 = arg2
int64_t rdi = arg2
int32_t var_98
sub_140ba6ab0(arg1 + 0x368, &var_98, arg2)
int64_t rax_2 = sx.q(var_98)
void* rbx = nullptr
int64_t rdx_3

if (rax_2.d == 0xffffffff)
    rdx_3 = 0
else
    rdx_3 = rax_2 * 0x60 + *(arg1 + 0x368)

int64_t rax_3 = rdx_3 + 8

if (rdx_3 == 0)
    rax_3 = 0

if (rax_3 == 0)
    uint64_t var_78 = 0
    int64_t* var_88 = &var_90
    int64_t var_70
    __builtin_memset(&var_70, 0, 0x24)
    uint64_t* var_80_1 = &var_78
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    int32_t var_44_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    sub_141d2be70(arg1 + 0x368, &var_98, &var_88, nullptr)
    int32_t var_30_2 = 0
    
    if (var_38_1 != 0)
        sub_140a74f90(var_38_1)
    
    var_70.d = 0
    int32_t var_48_2 = 0xffffffff
    int32_t var_44_2 = 0
    int64_t var_68
    sub_14059a8e0(&var_68, 0)
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    uint64_t rcx_6 = var_78
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    rdi = var_90

sub_140ba6ab0(arg1 + 0x368, &var_98, rdi)
int64_t rax_4 = sx.q(var_98)

if (rax_4.d != 0xffffffff)
    rbx = rax_4 * 0x60 + *(arg1 + 0x368)

int32_t* result = sub_140946410(rbx + 8, &var_98, &arg_18, nullptr)
__security_check_cookie(rax_1 ^ &var_b8)
return result
