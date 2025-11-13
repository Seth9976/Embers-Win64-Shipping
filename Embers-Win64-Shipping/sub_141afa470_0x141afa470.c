// 函数: sub_141afa470
// 地址: 0x141afa470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, sub_140d20910())
int32_t arg_c = 0
void* rcx_1 = &arg1[0x1f]
int32_t arg_14 = 0
*arg1 = &data_143054240
arg1[0x1c] = &data_142d6a040
arg1[0x1d] = 0
arg1[0x1e] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x34]
arg1[0x23].d = 0xffffffff
*(arg1 + 0x11c) = 0
arg1[0x25] = 0
arg1[0x26].d = 0
arg1[0x27] = 0
arg1[0x28] = 0
arg1[0x1c] = &data_1430541a0
arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x2b] = &data_1430541c8
__builtin_memset(&arg1[0x2c], 0, 0x40)
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

int64_t var_18 = 2.q
int64_t var_10 = 2.q
__builtin_memset(rcx_2, 0, 0x1c)
arg1[0x38].d = 0xffffffff
*(arg1 + 0x1c4) = 0
arg1[0x3a] = 0
arg1[0x3b].d = 0
uint8_t rax_6 = (arg1[1].d u>> 9).b
arg1[0x19].b = 1
uint8_t rax_7

if ((rax_6 & 1) == 0)
    int64_t rdx_1
    rdx_1.b = 1
    rax_7 = sub_141a6b7c0(arg1)

if ((rax_6 & 1) != 0 || rax_7 != 0)
    *(arg1 + 0x90) = var_18.o

void*** rax_8 = sub_141af2ee0(&arg1[0x2b])

if (rax_8 == -0x10)
label_141afa66c:
    
    if (rax_8 != 0)
        rax_8[1].d += 1
else
    void* rax_9
    
    if (rax_8[2] != 0)
        rax_9 = rax_8[3]
    
    if (rax_8[2] != 0 && rax_9 != 0 && *(rax_9 + 8) s> 0)
        goto label_141afa66c
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    rax_8[2] = &rax_8[2]
    int64_t* rcx_5 = rax_8[3]
    
    if (rax_8 != rcx_5)
        if (rax_8 != 0)
            *(rax_8 + 0xc) += 1
            rcx_5 = rax_8[3]
        
        if (rcx_5 != 0)
            int32_t temp7_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_5 + 8))(rcx_5, 1)
        
        rax_8[3] = rax_8
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t temp6_1 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_8)[1](rax_8, 1)
        
        goto label_141afa66c

void** rax_15
void*** rcx_9

if (&arg1[0x1a] != &var_18)
    arg1[0x1a] = &rax_8[2]
    void*** rdi_1 = arg1[0x1b]
    
    if (rax_8 == rdi_1)
        goto label_141afa6b6
    
    arg1[0x1b] = rax_8
    
    if (rdi_1 == 0)
        goto label_141afa6dd
    
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d != 1)
        goto label_141afa6dd
    
    (**rdi_1)(rdi_1)
    int32_t temp5_1 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141afa6dd
    
    rax_15 = *rdi_1
    rcx_9 = rdi_1
    goto label_141afa6da

label_141afa6b6:

if (rax_8 != 0)
    rax_8[1].d -= 1
    
    if (rax_8[1].d != 1)
        goto label_141afa6dd
    
    (**rax_8)(rax_8)
    int32_t temp1_1 = *(rax_8 + 0xc)
    *(rax_8 + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141afa6dd
    
    rax_15 = *rax_8
    rcx_9 = rax_8
label_141afa6da:
    rax_15[1](rcx_9, 1)
label_141afa6dd:
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t temp8_1 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_8)[1](rax_8, 1)

return arg1
