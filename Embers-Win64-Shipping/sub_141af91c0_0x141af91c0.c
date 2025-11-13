// 函数: sub_141af91c0
// 地址: 0x141af91c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
int64_t* rcx = &arg1[0x2a]
*arg1 = &data_143051ec8
arg1[0x1c] = &data_143051e50
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x1f].d = data_143f2c430
*(arg1 + 0xfc) = 1
__builtin_memset(&arg1[0x20], 0, 0x50)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x35]
arg1[0x2e].d = 0xffffffff
*(arg1 + 0x174) = 0
arg1[0x30] = 0
arg1[0x31].d = 0
arg1[0x32] = &data_142d6a040
arg1[0x33] = 0
arg1[0x34] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x39].d = 0xffffffff
*(arg1 + 0x1cc) = 0
arg1[0x3b] = 0
arg1[0x3c].d = 0
arg1[0x3d] = 0
arg1[0x3e] = 0
arg1[0x32] = &data_14302e030
arg1[0x3f] = 0
arg1[0x40] = 0
arg1[0x41].d = 0x7fffffff
*(arg1 + 0x20c) = 0
arg1[0x42] = 0
arg1[0x43] = 0
void*** rax_3 = sub_141af2ae0(&arg1[0x1c])

if (rax_3 == -0x10)
label_141af93ac:
    
    if (rax_3 != 0)
        rax_3[1].d += 1
else
    void* rax_4
    
    if (rax_3[2] != 0)
        rax_4 = rax_3[3]
    
    if (rax_3[2] != 0 && rax_4 != 0 && *(rax_4 + 8) s> 0)
        goto label_141af93ac
    
    if (rax_3 != 0)
        rax_3[1].d += 1
    
    rax_3[2] = &rax_3[2]
    int64_t* rcx_3 = rax_3[3]
    
    if (rax_3 != rcx_3)
        if (rax_3 != 0)
            *(rax_3 + 0xc) += 1
            rcx_3 = rax_3[3]
        
        if (rcx_3 != 0)
            int32_t temp7_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        rax_3[3] = rax_3
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t temp6_1 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_3)[1](rax_3, 1)
        
        goto label_141af93ac

void var_18
void** rax_10
void*** rcx_7

if (&arg1[0x1a] != &var_18)
    arg1[0x1a] = &rax_3[2]
    void*** rdi_1 = arg1[0x1b]
    
    if (rax_3 == rdi_1)
        goto label_141af93f6
    
    arg1[0x1b] = rax_3
    
    if (rdi_1 == 0)
        goto label_141af941d
    
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d != 1)
        goto label_141af941d
    
    (**rdi_1)(rdi_1)
    int32_t temp5_1 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141af941d
    
    rax_10 = *rdi_1
    rcx_7 = rdi_1
    goto label_141af941a

label_141af93f6:

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d != 1)
        goto label_141af941d
    
    (**rax_3)(rax_3)
    int32_t temp1_1 = *(rax_3 + 0xc)
    *(rax_3 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141af941d
    
    rax_10 = *rax_3
    rcx_7 = rax_3
label_141af941a:
    rax_10[1](rcx_7, 1)
label_141af941d:
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t temp8_1 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_3)[1](rax_3, 1)

return arg1
