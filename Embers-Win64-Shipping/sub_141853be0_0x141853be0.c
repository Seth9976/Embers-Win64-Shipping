// 函数: sub_141853be0
// 地址: 0x141853be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
*arg1 = &data_142fe6b80
void*** var_90 = arg1
int64_t var_88 = 0
int64_t* var_98 = &var_88
int128_t zmm0 = var_98.o
void** const var_58 = &data_142e86ed0
__builtin_memset(&arg1[1], 0, 0x14)
int64_t (* var_78)(int64_t* arg1, void* arg2) = j_sub_141869ad0
int64_t rax_2 = *arg2
void*** var_68 = nullptr
var_98 = nullptr
int32_t var_90_1 = 0
int128_t var_50 = zmm0
(*(rax_2 + 0x1a0))(arg2, &var_98)
int64_t* rbx = var_98
int64_t rdi = sx.q(var_90_1)
void* r15_2 = &rbx[rdi * 2]

if (rbx != r15_2)
    do
        int64_t rax_4 = (*(*arg2 + 0x1c8))(arg2, rbx)
        void** const* rcx_2 = &var_58
        
        if (var_68 != 0)
            rcx_2 = var_68
        
        var_78((*rcx_2)[1](rcx_2), rax_4)
        rbx = &rbx[2]
    while (rbx != r15_2)
    
    rdi = zx.q(var_90_1)
    rbx = var_98

if (rdi.d != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx = &rbx[2]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)
    rbx = var_98

if (rbx != 0)
    sub_140a74f90(rbx)

if (var_78 != 0)
    void** const* rcx_6 = &var_58
    
    if (var_68 != 0)
        rcx_6 = var_68
    
    void** const rdx_4 = *rcx_6
    rdx_4[2](rcx_6, rdx_4)

void* rcx_7 = arg1[1]
arg1[4] = rcx_7
arg1[5] = *(rcx_7 + 0x20)
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
