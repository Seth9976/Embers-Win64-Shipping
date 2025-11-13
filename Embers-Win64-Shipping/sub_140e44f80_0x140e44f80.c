// 函数: sub_140e44f80
// 地址: 0x140e44f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rbx = *arg1
int64_t var_98
int64_t* rax_2 = sub_140e50b60(&var_98)
int64_t* rcx_1 = &arg2[3]
*arg2 = *rbx
arg2[1] = 0
arg2[2] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_4 = rcx_1[2]

if (rax_4 != 0)
    rcx_1 = rax_4

*rcx_1 = 0
rcx_1[1] = 0
arg2[7].d = 0xffffffff
*(arg2 + 0x3c) = 0
arg2[9] = 0
arg2[0xa].d = 0
sub_140d16650(&arg2[1], rax_2)

if (rax_2[8] == 0)
    memmove(&arg2[8], &rax_2[7], 4)

int64_t rcx_4 = arg2[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg2[9] = rax_2[8]
rax_2[8] = 0
arg2[0xa].d = rax_2[9].d
rax_2[9].d = 0
arg2[0xb] = 0
arg2[0xb] = rax_2[0xa]
__builtin_memset(&rax_2[0xa], 0, 0x20)
arg2[0xc].d = rax_2[0xb].d
*(arg2 + 0x64) = *(rax_2 + 0x5c)
arg2[0xd] = rax_2[0xc]
arg2[0xe] = rax_2[0xd]
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

void var_48
sub_140e52f80(&var_48)
int32_t var_50 = 0
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_1407ece30(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_11 = var_98

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

__security_check_cookie(rax_1 ^ &var_b8)
return arg2
