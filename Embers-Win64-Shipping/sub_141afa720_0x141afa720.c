// 函数: sub_141afa720
// 地址: 0x141afa720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
int32_t arg_c = 0
int64_t* rcx = &arg1[0x25]
int32_t arg_1c = 0
*arg1 = &data_143054838
arg1[0x1c] = &data_143050870
__builtin_memset(&arg1[0x1d], 0, 0x40)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

int64_t var_18 = 2.q
int64_t var_10 = 2.q
*rcx = 0
rcx[1] = 0
arg1[0x29].d = 0xffffffff
*(arg1 + 0x14c) = 0
arg1[0x2b] = 0
arg1[0x2c].d = 0
uint8_t rax_4 = (arg1[1].d u>> 9).b
arg1[0x19].b = 1
uint8_t rax_5

if ((rax_4 & 1) == 0)
    int64_t rdx
    rdx.b = 1
    rax_5 = sub_141a6b7c0(arg1)

if ((rax_4 & 1) != 0 || rax_5 != 0)
    *(arg1 + 0x90) = var_18.o

void*** rax_6 = sub_141af2de0(&arg1[0x1c])

if (rax_6 == -0x10)
label_141afa887:
    
    if (rax_6 != 0)
        rax_6[1].d += 1
else
    void* rax_7
    
    if (rax_6[2] != 0)
        rax_7 = rax_6[3]
    
    if (rax_6[2] != 0 && rax_7 != 0 && *(rax_7 + 8) s> 0)
        goto label_141afa887
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    rax_6[2] = &rax_6[2]
    int64_t* rcx_3 = rax_6[3]
    
    if (rax_6 != rcx_3)
        if (rax_6 != 0)
            *(rax_6 + 0xc) += 1
            rcx_3 = rax_6[3]
        
        if (rcx_3 != 0)
            int32_t temp7_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        rax_6[3] = rax_6
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t temp6_1 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_6)[1](rax_6, 1)
        
        goto label_141afa887

void** rax_13
void*** rcx_7

if (&arg1[0x1a] != &var_18)
    arg1[0x1a] = &rax_6[2]
    void*** rdi_1 = arg1[0x1b]
    
    if (rax_6 == rdi_1)
        goto label_141afa8d1
    
    arg1[0x1b] = rax_6
    
    if (rdi_1 == 0)
        goto label_141afa8f8
    
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d != 1)
        goto label_141afa8f8
    
    (**rdi_1)(rdi_1)
    int32_t temp5_1 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141afa8f8
    
    rax_13 = *rdi_1
    rcx_7 = rdi_1
    goto label_141afa8f5

label_141afa8d1:

if (rax_6 != 0)
    rax_6[1].d -= 1
    
    if (rax_6[1].d != 1)
        goto label_141afa8f8
    
    (**rax_6)(rax_6)
    int32_t temp1_1 = *(rax_6 + 0xc)
    *(rax_6 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141afa8f8
    
    rax_13 = *rax_6
    rcx_7 = rax_6
label_141afa8f5:
    rax_13[1](rcx_7, 1)
label_141afa8f8:
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t temp8_1 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_6)[1](rax_6, 1)

return arg1
