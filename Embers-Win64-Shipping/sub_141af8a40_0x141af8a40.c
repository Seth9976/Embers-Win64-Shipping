// 函数: sub_141af8a40
// 地址: 0x141af8a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
void* rcx = &arg1[0x2c]
*arg1 = &data_143050938
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e].d = data_143f2c430
*(arg1 + 0xf4) = 1
arg1[0x1f] = 0
arg1[0x20] = 0
*arg1 = &data_143050fb0
arg1[0x19].b = 1
arg1[0x21] = &data_142d4c350
arg1[0x22].w = 0x404
__builtin_memset(&arg1[0x23], 0, 0x25)
__builtin_memset(&arg1[0x28], 0, 0x20)
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

__builtin_memset(rcx, 0, 0x1c)
arg1[0x30].d = 0xffffffff
*(arg1 + 0x184) = 0
arg1[0x32] = 0
arg1[0x33].d = 0
arg1[0x34].d = 0xea60
*(arg1 + 0x1a4) = 1
arg1[0x35].w = 0x201
*(arg1 + 0x1ac) = (*(arg1 + 0x1ac) & 0xfffffff9) | 1
void*** rax_5 = sub_141af2fe0(&arg1[0x21])

if (rax_5 == -0x10)
label_141af8bda:
    
    if (rax_5 != 0)
        rax_5[1].d += 1
else
    void* rax_6
    
    if (rax_5[2] != 0)
        rax_6 = rax_5[3]
    
    if (rax_5[2] != 0 && rax_6 != 0 && *(rax_6 + 8) s> 0)
        goto label_141af8bda
    
    if (rax_5 != 0)
        rax_5[1].d += 1
    
    rax_5[2] = &rax_5[2]
    int64_t* rcx_2 = rax_5[3]
    
    if (rax_5 != rcx_2)
        if (rax_5 != 0)
            *(rax_5 + 0xc) += 1
            rcx_2 = rax_5[3]
        
        if (rcx_2 != 0)
            int32_t temp7_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_2 + 8))(rcx_2, 1)
        
        rax_5[3] = rax_5
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t temp6_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_5)[1](rax_5, 1)
        
        goto label_141af8bda

void var_18
void** rax_12
void*** rcx_6

if (&arg1[0x1a] != &var_18)
    arg1[0x1a] = &rax_5[2]
    void*** rdi_1 = arg1[0x1b]
    
    if (rax_5 == rdi_1)
        goto label_141af8c24
    
    arg1[0x1b] = rax_5
    
    if (rdi_1 == 0)
        goto label_141af8c4b
    
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d != 1)
        goto label_141af8c4b
    
    (**rdi_1)(rdi_1)
    int32_t temp5_1 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141af8c4b
    
    rax_12 = *rdi_1
    rcx_6 = rdi_1
    goto label_141af8c48

label_141af8c24:

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d != 1)
        goto label_141af8c4b
    
    (**rax_5)(rax_5)
    int32_t temp1_1 = *(rax_5 + 0xc)
    *(rax_5 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141af8c4b
    
    rax_12 = *rax_5
    rcx_6 = rax_5
label_141af8c48:
    rax_12[1](rcx_6, 1)
label_141af8c4b:
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t temp8_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_5)[1](rax_5, 1)

return arg1
