// 函数: sub_141860890
// 地址: 0x141860890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*arg1 = &data_142fe7f28
arg1[1] = &data_142fe7f50
void**** rax_2 = j_sub_140a82f30(8)
void**** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    *rax_2 = arg1

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142ecd2e8
    *(rax_3 + 0xc) = 1
    rax_3[2] = rbx

arg1[2] = rbx
arg1[3] = rax_3
arg1[4] = 0
arg1[4] = *arg2
*arg2 = 0
arg1[5].d = arg2[1].d
*(arg1 + 0x2c) = *(arg2 + 0xc)
arg2[1] = 0
arg1[6].d = arg2[2].d
*(arg1 + 0x34) = *(arg2 + 0x14)
arg1[7].d = arg2[3].d
arg1[8] = 0
arg1[8] = arg2[4]
__builtin_memset(&arg2[4], 0, 0x20)
arg1[9].d = arg2[5].d
*(arg1 + 0x4c) = *(arg2 + 0x2c)
arg1[0xa] = 0
arg1[0xa] = arg2[6]
arg1[0xb].d = arg2[7].d
*(arg1 + 0x5c) = *(arg2 + 0x3c)
arg1[0xc].d = arg2[8].d
*(arg1 + 0x64) = *(arg2 + 0x44)
arg1[0xd].d = arg2[9].d
arg1[0x10] = arg7
arg1[0x11] = arg8
arg1[0x12] = arg9
arg1[0x13] = arg10
arg1[0x14] = arg11
arg1[0x15] = arg13
arg1[0x16] = arg14
arg1[0xe] = arg3
arg1[0xf] = arg4
sub_14077e140(&arg1[0x17], arg15)
arg1[0x21] = 0
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x24].d = 0
int64_t* rbx_1 = arg1[3]
int64_t r13 = arg1[2]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void*** rax_26 = sub_1405978f0(0x30, &arg1[0x23])

if (rax_26 != 0)
    *rax_26 = &data_142fe81f8
    rax_26[1] = r13
    rax_26[2] = rbx_1
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
    
    rax_26[3] = sub_14188c9b0
    rax_26[5] = sub_140a387b0()
    *rax_26 = &data_142fe8250

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_30 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_30 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

arg1[0x25] = 0
arg1[0x26].d = 0
int64_t* rbx_2 = arg1[3]
int64_t r13_1 = arg1[2]

if (rbx_2 != 0)
    rbx_2[1].d += 1

void*** rax_32 = sub_1405978f0(0x30, &arg1[0x25])

if (rax_32 != 0)
    *rax_32 = &data_142fe81f8
    rax_32[1] = r13_1
    rax_32[2] = rbx_2
    
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
    
    rax_32[3] = sub_14188c940
    rax_32[5] = sub_140a387b0()
    *rax_32 = &data_142fe8250

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_36 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_36 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

arg1[0x27] = 0
arg1[0x28].d = 0
*(arg1 + 0x144) = 0
InitializeCriticalSection(&arg1[0x29])
SetCriticalSectionSpinCount(&arg1[0x29], 0xfa0)
void* rcx_8 = &arg1[0x30]
arg1[0x32] = 0
arg1[0x33] = 0
__builtin_memset(&arg1[0x34], 0, 0x20)
__builtin_memset(&arg1[0x2e], 0, 0x2c)
*(rcx_8 + 0x1c) = 0x80
void* rax_38 = *(rcx_8 + 0x10)

if (rax_38 != 0)
    rcx_8 = rax_38

*rcx_8 = 0
*(rcx_8 + 8) = 0
arg1[0x34].d = 0xffffffff
*(arg1 + 0x1a4) = 0
arg1[0x36] = 0
arg1[0x37].d = 0
InitializeCriticalSection(&arg1[0x38])
SetCriticalSectionSpinCount(&arg1[0x38], 0xfa0)
arg1[0x3d] = 0
arg1[0x3e] = 0
void* rax_39 = j_sub_140a82f30(0x58)
void* const rdx_4 = rax_39

if (rax_39 == 0)
    rdx_4 = nullptr
else
    __builtin_memset(rax_39, 0, 0x18)
    int64_t* rcx_11 = rax_39 + 0x18
    rcx_11[2] = 0
    rcx_11[3].d = 0
    *(rcx_11 + 0x1c) = 0x80
    int64_t* rax_40 = rcx_11[2]
    
    if (rax_40 != 0)
        rcx_11 = rax_40
    
    *rcx_11 = 0
    rcx_11[1] = 0
    *(rdx_4 + 0x38) = 0xffffffff
    *(rdx_4 + 0x3c) = 0
    *(rdx_4 + 0x48) = 0
    *(rdx_4 + 0x50) = 0

arg1[0x41] = rdx_4
arg1[0x40] = rdx_4
int64_t rax_41 = j_sub_140a82f30(0x18)

if (rax_41 == 0)
    rax_41 = 0
else
    __builtin_memset(rax_41, 0, 0x18)

arg1[0x43] = rax_41
arg1[0x42] = rax_41
arg1[0x44] = arg12
void*** var_78 = nullptr
void** const var_68 = &data_142da2668
int64_t (* var_88)(int64_t* arg1) = sub_14187af50
void*** var_60 = arg1
int64_t var_c8[0x2]
var_c8[0] = 0
int64_t var_b8 = 0
void* var_d8
int64_t* rax_43 = sub_141858e10(&var_d8, 2, &var_88, &var_c8, arg5, arg6)

if (&arg1[0x21] != rax_43)
    arg1[0x21] = *rax_43
    *rax_43 = 0
    sub_1405aeff0(&arg1[0x22], &rax_43[1])

int64_t* var_d0

if (var_d0 != 0)
    var_d0[1].d -= 1
    
    if (var_d0[1].d == 1)
        (**var_d0)(var_d0)
        int32_t rax_47 = *(var_d0 + 0xc)
        *(var_d0 + 0xc) -= 1
        
        if (rax_47 == 1)
            (*(*var_d0 + 8))(var_d0, 1)

if (var_88 != 0)
    void** const* rcx_16 = &var_68
    
    if (var_78 != 0)
        rcx_16 = var_78
    
    (*rcx_16)[2](rcx_16)

sub_141822a10(arg2)
arg15[9].d = 0
int64_t rcx_18 = arg15[8]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

arg15[1].d = 0

if (*(arg15 + 0xc) != 0)
    sub_1405a5130(arg15, 0)

arg15[6].d = 0xffffffff
*(arg15 + 0x34) = 0
sub_14059a8e0(&arg15[2], 0)
int64_t rcx_21 = arg15[4]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = *arg15

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
