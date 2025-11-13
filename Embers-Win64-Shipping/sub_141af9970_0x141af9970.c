// 函数: sub_141af9970
// 地址: 0x141af9970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
*arg1 = &data_143058e60
arg1[0x1c] = &data_143032190
__builtin_memset(&arg1[0x1d], 0, 0x12)
__builtin_memset(&arg1[0x20], 0, 0x18)
memset(&arg1[0x24], 0, 0x58)
__builtin_memset(&arg1[0x23], 0, 0x20)
void* rcx_1 = &arg1[0x27]
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x2b].d = 0xffffffff
*(arg1 + 0x15c) = 0
arg1[0x2d] = 0
arg1[0x2e].d = 0
int128_t var_18 = data_1439a9488
int32_t rax_1

if (sub_140cdd5d0(arg1, &var_18) s>= 4)
    var_18 = data_1439a9488
    rax_1.b = sub_140cdd5d0(arg1, &var_18) s>= 6
    rax_1.b += 1
else
    rax_1.b = 0

arg1[0xa].b = 1
*(arg1 + 0x51) = rax_1.b
arg1[0x19].b = 1
void*** rax_2 = sub_141af2ce0(&arg1[0x1c])

if (rax_2 == -0x10)
label_141af9af1:
    
    if (rax_2 != 0)
        rax_2[1].d += 1
else
    void* rax_3
    
    if (rax_2[2] != 0)
        rax_3 = rax_2[3]
    
    if (rax_2[2] != 0 && rax_3 != 0 && *(rax_3 + 8) s> 0)
        goto label_141af9af1
    
    if (rax_2 != 0)
        rax_2[1].d += 1
    
    rax_2[2] = &rax_2[2]
    int64_t* rcx_5 = rax_2[3]
    
    if (rax_2 != rcx_5)
        if (rax_2 != 0)
            *(rax_2 + 0xc) += 1
            rcx_5 = rax_2[3]
        
        if (rcx_5 != 0)
            int32_t temp7_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_5 + 8))(rcx_5, 1)
        
        rax_2[3] = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp6_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_2)[1](rax_2, 1)
        
        goto label_141af9af1

void** rax_9
void*** rcx_9

if (&arg1[0x1a] != &var_18)
    arg1[0x1a] = &rax_2[2]
    void*** rdi_1 = arg1[0x1b]
    
    if (rax_2 == rdi_1)
        goto label_141af9b3b
    
    arg1[0x1b] = rax_2
    
    if (rdi_1 == 0)
        goto label_141af9b62
    
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d != 1)
        goto label_141af9b62
    
    (**rdi_1)(rdi_1)
    int32_t temp5_1 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141af9b62
    
    rax_9 = *rdi_1
    rcx_9 = rdi_1
    goto label_141af9b5f

label_141af9b3b:

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d != 1)
        goto label_141af9b62
    
    (**rax_2)(rax_2)
    int32_t temp1_1 = *(rax_2 + 0xc)
    *(rax_2 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141af9b62
    
    rax_9 = *rax_2
    rcx_9 = rax_2
label_141af9b5f:
    rax_9[1](rcx_9, 1)
label_141af9b62:
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp8_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_2)[1](rax_2, 1)

return arg1
