// 函数: sub_140aaca20
// 地址: 0x140aaca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int32_t var_4c = 0x80
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int64_t var_38 = 0
int32_t var_30 = 0
sub_140a998a0(&var_78, arg3)
sub_140aad1b0(arg1, arg2, &var_78, 0, 0)
int32_t var_30_1 = 0

if (var_38 != 0)
    sub_140a74f90(var_38)

sub_140aa9190(&var_78, 0)
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t rcx_5 = var_78

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_2 = *rbx_1
        (*rdx_2)(rbx_1, rdx_2)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_1 = *rbx_1
            (*(r8_1 + 8))(rbx_1, zx.q(rdi_1), r8_1)

__security_check_cookie(rax_1 ^ &var_a8)
return arg1
