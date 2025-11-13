// 函数: sub_141f0a700
// 地址: 0x141f0a700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rdi = &arg7[4]
int64_t r15 = sx.q(*(rdi + 0x28))
void* r12 = *(rdi + 0x20)
int64_t var_c8 = *arg7
int64_t var_c0 = arg7[1]
char var_b8 = arg7[2].b
char var_b7 = *(arg7 + 0x11)
char var_b6 = *(arg7 + 0x12)
char var_b5 = *(arg7 + 0x13)
char var_b4 = *(arg7 + 0x14)
char var_b3 = *(arg7 + 0x15)
int32_t var_b0 = arg7[3].d
char var_ac = *(arg7 + 0x1c)
char var_aa = *(arg7 + 0x1e)
void* var_88 = nullptr
int32_t var_80 = r15.d

if (r15.d != 0)
    void var_a8
    sub_140775110(&var_a8, r15.d, 0)
    void* rcx_1 = &var_a8
    
    if (r12 != 0)
        rdi = r12
    
    if (var_88 != 0)
        rcx_1 = var_88
    
    memcpy(rcx_1, rdi, (r15 << 2).d)
else
    int32_t var_7c_1 = 8

int64_t rdi_1 = sx.q(arg7[0xd].d)
void* rbx_1 = &arg7[0xa]
void* var_68 = nullptr
int32_t var_60 = rdi_1.d
void* r15_1 = *(rbx_1 + 0x10)

if (rdi_1.d != 0)
    void var_78
    sub_140775080(&var_78, rdi_1.d, 0)
    void* rcx_3 = &var_78
    
    if (r15_1 != 0)
        rbx_1 = r15_1
    
    if (var_68 != 0)
        rcx_3 = var_68
    
    memcpy(rcx_3, rbx_1, (rdi_1 << 2).d)
else
    int32_t var_5c_1 = 4

sub_141eb8c90(&var_c8, arg1)
arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405a5130(arg2, 0)

int128_t* rax_18 = (*(*arg1 + 0x4b0))(arg1)
int128_t var_f0
sub_142259c00(&var_f0)
int64_t var_110 = arg8
int128_t* var_118 = &var_f0
int64_t* var_120 = &var_c8
var_f0 = *rax_18
int128_t var_e0 = rax_18[1]
char rax_23 = sub_14221cdb0(&arg1[0x55], arg2, arg3, nullptr, arg4, arg5, arg6, var_120, var_118)

if (var_68 != 0)
    sub_140a74f90(var_68)

if (var_88 != 0)
    sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_158)
return zx.q(rax_23)
