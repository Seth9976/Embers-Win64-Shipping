// 函数: sub_141afaa60
// 地址: 0x141afaa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
int64_t* rcx = &arg1[0x27]
*arg1 = &data_143055468
arg1[0x1c] = &data_142d4c350
arg1[0x1d].w = 0x404
__builtin_memset(&arg1[0x1e], 0, 0x25)
__builtin_memset(&arg1[0x23], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
*(arg1 + 0x15c) = 0
arg1[0x2b].d = 0xffffffff
arg1[0x2d] = 0
arg1[0x2e].d = 0
arg1[0x2f].d = 0xea60
*(arg1 + 0x17c) = 1
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
*(arg1 + 0xc9) = 0x101
arg1[0x19].b = 1
void*** rax_2 = sub_141af2fe0(&arg1[0x1c])

if (rax_2 == -0x10)
label_141afabf3:
    
    if (rax_2 != 0)
        rax_2[1].d += 1
else
    void* rax_3
    
    if (rax_2[2] != 0)
        rax_3 = rax_2[3]
    
    if (rax_2[2] != 0 && rax_3 != 0 && *(rax_3 + 8) s> 0)
        goto label_141afabf3
    
    if (rax_2 != 0)
        rax_2[1].d += 1
    
    rax_2[2] = &rax_2[2]
    int64_t* rcx_4 = rax_2[3]
    
    if (rax_2 != rcx_4)
        if (rax_2 != 0)
            *(rax_2 + 0xc) += 1
            rcx_4 = rax_2[3]
        
        if (rcx_4 != 0)
            int32_t temp7_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
        
        rax_2[3] = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp6_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_2)[1](rax_2, 1)
        
        goto label_141afabf3

void** rax_9
void*** rcx_8

if (&arg1[0x1a] != &var_18)
    arg1[0x1a] = &rax_2[2]
    void*** rsi_1 = arg1[0x1b]
    
    if (rax_2 == rsi_1)
        goto label_141afac3d
    
    arg1[0x1b] = rax_2
    
    if (rsi_1 == 0)
        goto label_141afac64
    
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d != 1)
        goto label_141afac64
    
    (**rsi_1)(rsi_1)
    int32_t temp5_1 = *(rsi_1 + 0xc)
    *(rsi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141afac64
    
    rax_9 = *rsi_1
    rcx_8 = rsi_1
    goto label_141afac61

label_141afac3d:

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d != 1)
        goto label_141afac64
    
    (**rax_2)(rax_2)
    int32_t temp1_1 = *(rax_2 + 0xc)
    *(rax_2 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141afac64
    
    rax_9 = *rax_2
    rcx_8 = rax_2
label_141afac61:
    rax_9[1](rcx_8, 1)
label_141afac64:
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp8_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_2)[1](rax_2, 1)

return arg1
