// 函数: sub_141afb360
// 地址: 0x141afb360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
*arg1 = &data_143057e18
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
arg1[0x1c] = &data_143057da0
int64_t rax_1
int64_t rdx
rax_1, rdx = sub_141b421d0()
arg1[0x22] = rax_1
int32_t arg_c = 0
int64_t var_18 = 2.q
int32_t arg_1c = 0
int64_t var_10 = 2.q
uint8_t rax_6

if (((arg1[1].d u>> 9).b & 1) == 0)
    rdx.b = 1
    rax_6 = sub_141a6b7c0(arg1)

if (((arg1[1].d u>> 9).b & 1) != 0 || rax_6 != 0)
    *(arg1 + 0x90) = var_18.o

var_18.o = data_1439a9488
int32_t rax_7

if (sub_140cdd5d0(arg1, &var_18) s>= 4)
    var_18.o = data_1439a9488
    rax_7.b = sub_140cdd5d0(arg1, &var_18) s>= 6
    rax_7.b += 1
else
    rax_7.b = 0

arg1[0xa].b = 1
*(arg1 + 0x51) = rax_7.b
void*** rax_8 = sub_141af32e0(&arg1[0x1c])

if (rax_8 == -0x10)
label_141afb537:
    
    if (rax_8 != 0)
        rax_8[1].d += 1
else
    void* rax_9
    
    if (rax_8[2] != 0)
        rax_9 = rax_8[3]
    
    if (rax_8[2] != 0 && rax_9 != 0 && *(rax_9 + 8) s> 0)
        goto label_141afb537
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    rax_8[2] = &rax_8[2]
    int64_t* rcx_6 = rax_8[3]
    
    if (rax_8 != rcx_6)
        if (rax_8 != 0)
            *(rax_8 + 0xc) += 1
            rcx_6 = rax_8[3]
        
        if (rcx_6 != 0)
            int32_t temp7_1 = *(rcx_6 + 0xc)
            *(rcx_6 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_6 + 8))(rcx_6, 1)
        
        rax_8[3] = rax_8
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t temp6_1 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_8)[1](rax_8, 1)
        
        goto label_141afb537

void** rax_15
void*** rcx_10

if (&arg1[0x1a] != &var_18)
    arg1[0x1a] = &rax_8[2]
    void*** rsi_1 = arg1[0x1b]
    
    if (rax_8 == rsi_1)
        goto label_141afb581
    
    arg1[0x1b] = rax_8
    
    if (rsi_1 == 0)
        goto label_141afb5a8
    
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d != 1)
        goto label_141afb5a8
    
    (**rsi_1)(rsi_1)
    int32_t temp5_1 = *(rsi_1 + 0xc)
    *(rsi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141afb5a8
    
    rax_15 = *rsi_1
    rcx_10 = rsi_1
    goto label_141afb5a5

label_141afb581:

if (rax_8 != 0)
    rax_8[1].d -= 1
    
    if (rax_8[1].d != 1)
        goto label_141afb5a8
    
    (**rax_8)(rax_8)
    int32_t temp1_1 = *(rax_8 + 0xc)
    *(rax_8 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141afb5a8
    
    rax_15 = *rax_8
    rcx_10 = rax_8
label_141afb5a5:
    rax_15[1](rcx_10, 1)
label_141afb5a8:
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t temp8_1 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_8)[1](rax_8, 1)

return arg1
