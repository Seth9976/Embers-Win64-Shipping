// 函数: sub_141afb620
// 地址: 0x141afb620
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

arg1[0x1d] = sub_142543940()
void*** rax_6 = sub_141af31e0(&arg1[0x1c])

if (rax_6 == -0x10)
label_141afb740:
    
    if (rax_6 != 0)
        rax_6[1].d += 1
else
    void* rax_7
    
    if (rax_6[2] != 0)
        rax_7 = rax_6[3]
    
    if (rax_6[2] != 0 && rax_7 != 0 && *(rax_7 + 8) s> 0)
        goto label_141afb740
    
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
        
        goto label_141afb740

void** rax_13
void*** rcx_7

if (&arg1[0x1a] != &var_18)
    arg1[0x1a] = &rax_6[2]
    void*** rsi_1 = arg1[0x1b]
    
    if (rax_6 == rsi_1)
        goto label_141afb78a
    
    arg1[0x1b] = rax_6
    
    if (rsi_1 == 0)
        goto label_141afb7b1
    
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d != 1)
        goto label_141afb7b1
    
    (**rsi_1)(rsi_1)
    int32_t temp5_1 = *(rsi_1 + 0xc)
    *(rsi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141afb7b1
    
    rax_13 = *rsi_1
    rcx_7 = rsi_1
    goto label_141afb7ae

label_141afb78a:

if (rax_6 != 0)
    rax_6[1].d -= 1
    
    if (rax_6[1].d != 1)
        goto label_141afb7b1
    
    (**rax_6)(rax_6)
    int32_t temp1_1 = *(rax_6 + 0xc)
    *(rax_6 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141afb7b1
    
    rax_13 = *rax_6
    rcx_7 = rax_6
label_141afb7ae:
    rax_13[1](rcx_7, 1)
label_141afb7b1:
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t temp8_1 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_6)[1](rax_6, 1)

return arg1
