// 函数: sub_141b7fb30
// 地址: 0x141b7fb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_141a31a40(arg1, arg2)
int64_t* rcx = &arg1[0x27]
*arg1 = &data_14306e020
arg1[0x1c] = &data_142d4c350
arg1[0x1d].w = 0x404
__builtin_memset(&arg1[0x1e], 0, 0x25)
__builtin_memset(&arg1[0x23], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_2 = rcx[2]

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
rcx[1] = 0
int64_t* rcx_1 = &arg1[0x3b]
arg1[0x2b].d = 0xffffffff
*(arg1 + 0x15c) = 0
arg1[0x2d] = 0
arg1[0x2e].d = 0
arg1[0x2f].d = 0xea60
*(arg1 + 0x17c) = 1
arg1[0x30] = &data_142d4c350
arg1[0x31].w = 0x404
__builtin_memset(&arg1[0x32], 0, 0x25)
__builtin_memset(&arg1[0x37], 0, 0x20)
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_3 = rcx_1[2]

if (rax_3 != 0)
    rcx_1 = rax_3

*rcx_1 = 0
rcx_1[1] = 0
int64_t* rcx_2 = &arg1[0x4f]
arg1[0x3f].d = 0xffffffff
*(arg1 + 0x1fc) = 0
arg1[0x41] = 0
arg1[0x42].d = 0
arg1[0x43].d = 0xea60
*(arg1 + 0x21c) = 1
arg1[0x44] = &data_142d4c350
arg1[0x45].w = 0x404
__builtin_memset(&arg1[0x46], 0, 0x25)
__builtin_memset(&arg1[0x4b], 0, 0x20)
rcx_2[2] = 0
rcx_2[3].d = 0
*(rcx_2 + 0x1c) = 0x80
int64_t* rax_4 = rcx_2[2]

if (rax_4 != 0)
    rcx_2 = rax_4

*rcx_2 = 0
rcx_2[1] = 0
void* rcx_3 = &arg1[0x63]
arg1[0x53].d = 0xffffffff
*(arg1 + 0x29c) = 0
arg1[0x55] = 0
arg1[0x56].d = 0
arg1[0x57].d = 0xea60
*(arg1 + 0x2bc) = 1
arg1[0x58] = &data_142d4c350
arg1[0x59].w = 0x404
__builtin_memset(&arg1[0x5a], 0, 0x25)
__builtin_memset(&arg1[0x5f], 0, 0x20)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_5 = *(rcx_3 + 0x10)

if (rax_5 != 0)
    rcx_3 = rax_5

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x67].d = 0xffffffff
*(arg1 + 0x33c) = 0
arg1[0x69] = 0
arg1[0x6a].d = 0
arg1[0x6b].d = 0xea60
*(arg1 + 0x35c) = 1
arg1[0xa].w = 0x201
*(arg1 + 0xc9) = 0x101
arg1[0x19].b = 1
int64_t var_30 = 0
int32_t var_28 = 0
int32_t var_24 = 1
void var_48
sub_1405a6cb0(&var_48, &arg1[0x30])
sub_1405a6cb0(&var_48, &arg1[0x1c])
sub_1405a6cb0(&var_48, &arg1[0x44])
sub_1405a6cb0(&var_48, &arg1[0x58])
void*** rax_6 = j_sub_140a82f30(0x48)
void*** rbx_1 = rax_6

if (rax_6 == 0)
    rbx_1 = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rbx_1 = &data_142d4caa0
    rbx_1[2] = 0
    rbx_1[3] = 0
    rbx_1[7] = 0
    
    if (var_30 == 0)
        memmove(&rbx_1[4], &var_48, 0x18)
    
    int64_t rcx_9 = rbx_1[7]
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    rbx_1[7] = var_30
    int64_t var_30_1 = 0
    rbx_1[8].d = var_28
    *(rbx_1 + 0x44) = var_24
    int32_t var_28_1 = 0
    int32_t var_24_1 = 1

if (rbx_1 == -0x10)
label_141b7fee4:
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
else
    void* rax_10
    
    if (rbx_1[2] != 0)
        rax_10 = rbx_1[3]
    
    if (rbx_1[2] != 0 && rax_10 != 0 && *(rax_10 + 8) s> 0)
        goto label_141b7fee4
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rbx_1[2] = &rbx_1[2]
    int64_t* rcx_10 = rbx_1[3]
    
    if (rbx_1 != rcx_10)
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
            rcx_10 = rbx_1[3]
        
        if (rcx_10 != 0)
            int32_t temp7_1 = *(rcx_10 + 0xc)
            *(rcx_10 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_10 + 8))(rcx_10, 1)
        
        rbx_1[3] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
        
        goto label_141b7fee4

void var_58
void** rax_16
void*** rcx_14

if (&arg1[0x1a] != &var_58)
    arg1[0x1a] = &rbx_1[2]
    void*** rdi_2 = arg1[0x1b]
    
    if (rbx_1 == rdi_2)
        goto label_141b7ff2e
    
    arg1[0x1b] = rbx_1
    
    if (rdi_2 == 0)
        goto label_141b7ff55
    
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d != 1)
        goto label_141b7ff55
    
    (**rdi_2)(rdi_2)
    int32_t temp5_1 = *(rdi_2 + 0xc)
    *(rdi_2 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141b7ff55
    
    rax_16 = *rdi_2
    rcx_14 = rdi_2
    goto label_141b7ff52

label_141b7ff2e:

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d != 1)
        goto label_141b7ff55
    
    (**rbx_1)(rbx_1)
    int32_t temp1_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141b7ff55
    
    rax_16 = *rbx_1
    rcx_14 = rbx_1
label_141b7ff52:
    rax_16[1](rcx_14, 1)
label_141b7ff55:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp8_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                void** r8_2 = *rbx_1
                r8_2[1](rbx_1, 1, r8_2)

sub_1405ade00(&var_48)
__security_check_cookie(rax_1 ^ &var_78)
return arg1
