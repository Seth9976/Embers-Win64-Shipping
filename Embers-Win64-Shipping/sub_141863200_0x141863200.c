// 函数: sub_141863200
// 地址: 0x141863200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*arg1 = &data_142fe7948
sub_140596d10(&arg1[1], arg2)
sub_140596d10(&arg1[3], &arg2[2])
sub_140596d10(&arg1[5], &arg2[4])
*(arg1 + 0x38) = *arg3
InitializeCriticalSection(&arg1[9])
SetCriticalSectionSpinCount(&arg1[9], 0xfa0)
arg1[0xe].d = 0x6400000
int64_t rax_2 = j_sub_140a82f30(0x6400000)
uint64_t count = zx.q(arg1[0xe].d)
arg1[0xf] = rax_2
memset(rax_2, 0, count)
__builtin_memset(&arg1[0x10], 0, 0x14)
InitializeCriticalSection(&arg1[0x13])
SetCriticalSectionSpinCount(&arg1[0x13], 0xfa0)
arg1[0x18] = 0
void* rcx_8 = &arg1[0x1a]
arg1[0x19] = 0
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_3 = *(rcx_8 + 0x10)

if (rax_3 != 0)
    rcx_8 = rax_3

*rcx_8 = 0
*(rcx_8 + 8) = 0
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
InitializeCriticalSection(&arg1[0x22])
SetCriticalSectionSpinCount(&arg1[0x22], 0xfa0)
__builtin_memset(&arg1[0x27], 0, 0x20)
void* rcx_11 = &arg1[0x2b]
*(rcx_11 + 0x10) = 0
*(rcx_11 + 0x18) = 0
*(rcx_11 + 0x1c) = 0x80
void* rax_4 = *(rcx_11 + 0x10)

if (rax_4 != 0)
    rcx_11 = rax_4

*rcx_11 = 0
*(rcx_11 + 8) = 0
arg1[0x2f].d = 0xffffffff
*(arg1 + 0x17c) = 0
arg1[0x31] = 0
arg1[0x32].d = 0
sub_140b2f110(&arg1[0x33])
arg1[0x4c] = 0
arg1[0x4d] = 0
arg1[0x4e].d = 0
*(arg1 + 0x274) = 0
sub_140b39010(&arg1[0x33])
void*** var_60 = arg1
void*** var_78 = nullptr
void** const var_68 = &data_142da2668
int64_t var_c8[0x2]
var_c8[0] = 0
int64_t (* var_88)(int64_t* arg1) = sub_14187ada0
int64_t var_b8 = 0
void* var_d8
int64_t* rax_5 = sub_141858e10(&var_d8, 2, &var_88, &var_c8, arg5, arg4)

if (&arg1[0x4c] != rax_5)
    arg1[0x4c] = *rax_5
    *rax_5 = 0
    sub_1405aeff0(&arg1[0x4d], &rax_5[1])

int64_t* var_d0

if (var_d0 != 0)
    var_d0[1].d -= 1
    
    if (var_d0[1].d == 1)
        (**var_d0)(var_d0)
        int32_t rdi_1 = *(var_d0 + 0xc)
        *(var_d0 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_d0 + 8))(var_d0, zx.q(rdi_1))

if (var_88 != 0)
    void** const* rcx_18 = &var_68
    
    if (var_78 != 0)
        rcx_18 = var_78
    
    (*rcx_18)[2](rcx_18)

int64_t rcx_19 = arg2[4]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg2[2]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = *arg2

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
