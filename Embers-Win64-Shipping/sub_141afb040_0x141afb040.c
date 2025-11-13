// 函数: sub_141afb040
// 地址: 0x141afb040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
*arg1 = &data_1430576d8
sub_141a75f50(&arg1[0x1c])
int32_t arg_1c = 0
int32_t arg_c = 0
int64_t var_18 = 2.q
int64_t var_10 = 2.q
arg1[0x19].b = 1
arg1[0xa].w = 0x201
uint8_t rax_4

if (((arg1[1].d u>> 9).b & 1) == 0)
    int64_t rdx
    rdx.b = 1
    rax_4 = sub_141a6b7c0(arg1)

if (((arg1[1].d u>> 9).b & 1) != 0 || rax_4 != 0)
    *(arg1 + 0x90) = var_18.o

void*** rax_5 = sub_141af31e0(&arg1[0x1c])

if (rax_5 == -0x10)
label_141afb154:
    
    if (rax_5 != 0)
        rax_5[1].d += 1
else
    void* rax_6
    
    if (rax_5[2] != 0)
        rax_6 = rax_5[3]
    
    if (rax_5[2] != 0 && rax_6 != 0 && *(rax_6 + 8) s> 0)
        goto label_141afb154
    
    if (rax_5 != 0)
        rax_5[1].d += 1
    
    rax_5[2] = &rax_5[2]
    int64_t* rcx_3 = rax_5[3]
    
    if (rax_5 != rcx_3)
        if (rax_5 != 0)
            *(rax_5 + 0xc) += 1
            rcx_3 = rax_5[3]
        
        if (rcx_3 != 0)
            int32_t temp7_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        rax_5[3] = rax_5
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t temp6_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_5)[1](rax_5, 1)
        
        goto label_141afb154

void** rax_12
void*** rcx_7

if (&arg1[0x1a] != &var_18)
    arg1[0x1a] = &rax_5[2]
    void*** rdi_1 = arg1[0x1b]
    
    if (rax_5 == rdi_1)
        goto label_141afb19e
    
    arg1[0x1b] = rax_5
    
    if (rdi_1 == 0)
        goto label_141afb1c5
    
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d != 1)
        goto label_141afb1c5
    
    (**rdi_1)(rdi_1)
    int32_t temp5_1 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141afb1c5
    
    rax_12 = *rdi_1
    rcx_7 = rdi_1
    goto label_141afb1c2

label_141afb19e:

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d != 1)
        goto label_141afb1c5
    
    (**rax_5)(rax_5)
    int32_t temp1_1 = *(rax_5 + 0xc)
    *(rax_5 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141afb1c5
    
    rax_12 = *rax_5
    rcx_7 = rax_5
label_141afb1c2:
    rax_12[1](rcx_7, 1)
label_141afb1c5:
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t temp8_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_5)[1](rax_5, 1)

return arg1
