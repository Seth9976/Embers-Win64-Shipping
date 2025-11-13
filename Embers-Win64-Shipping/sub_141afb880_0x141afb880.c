// 函数: sub_141afb880
// 地址: 0x141afb880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
*arg1 = &data_143059778
sub_141af7d00(&arg1[0x1c])
arg1[0x3b] = 0
*(arg1 + 0x1d4) &= 0xfffffffe
__builtin_memset(&arg1[0x37], 0, 0x18)
arg1[0x3a].d = 0x3f800000
arg1[0x3b] = data_143f2c5a8
*(arg1 + 0xc9) = 0x101
int128_t var_18 = data_1439a9488
bool cond:0 = sub_140cdd5d0(arg1, &var_18) s>= 6
arg1[0xa].b = 1
int32_t rax_1
rax_1.b = cond:0
rax_1.b += 1
*(arg1 + 0x51) = rax_1.b
void*** rax_2 = sub_141af2fe0(&arg1[0x21])

if (rax_2 == -0x10)
label_141afb9a9:
    
    if (rax_2 != 0)
        rax_2[1].d += 1
else
    void* rax_3
    
    if (rax_2[2] != 0)
        rax_3 = rax_2[3]
    
    if (rax_2[2] != 0 && rax_3 != 0 && *(rax_3 + 8) s> 0)
        goto label_141afb9a9
    
    if (rax_2 != 0)
        rax_2[1].d += 1
    
    rax_2[2] = &rax_2[2]
    int64_t* rcx_3 = rax_2[3]
    
    if (rax_2 != rcx_3)
        if (rax_2 != 0)
            *(rax_2 + 0xc) += 1
            rcx_3 = rax_2[3]
        
        if (rcx_3 != 0)
            int32_t temp7_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        rax_2[3] = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp6_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_2)[1](rax_2, 1)
        
        goto label_141afb9a9

void** rax_9
void*** rcx_7

if (&arg1[0x1a] != &var_18)
    arg1[0x1a] = &rax_2[2]
    void*** rdi_1 = arg1[0x1b]
    
    if (rax_2 == rdi_1)
        goto label_141afb9f3
    
    arg1[0x1b] = rax_2
    
    if (rdi_1 == 0)
        goto label_141afba1a
    
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d != 1)
        goto label_141afba1a
    
    (**rdi_1)(rdi_1)
    int32_t temp5_1 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141afba1a
    
    rax_9 = *rdi_1
    rcx_7 = rdi_1
    goto label_141afba17

label_141afb9f3:

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d != 1)
        goto label_141afba1a
    
    (**rax_2)(rax_2)
    int32_t temp1_1 = *(rax_2 + 0xc)
    *(rax_2 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141afba1a
    
    rax_9 = *rax_2
    rcx_7 = rax_2
label_141afba17:
    rax_9[1](rcx_7, 1)
label_141afba1a:
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp8_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_2)[1](rax_2, 1)

return arg1
