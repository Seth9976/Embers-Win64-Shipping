// 函数: sub_140e965e0
// 地址: 0x140e965e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg4
void* rax_1 = arg4[1]
void* var_20 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t var_18 = *arg3
void* rax_3 = arg3[1]
void* var_10 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

sub_140e96910(arg1, &var_18, &var_28, *arg2, 4, 0)
*arg1 = &data_142edc668
arg1[0x13] = *arg5
void* rax_5 = arg5[1]
arg1[0x14] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

arg1[0x15].d = arg5[2].d
arg1[0x16].b = arg5[3].b
arg1[0x17] = 0
arg1[0x18].d = 0
sub_140692f90(&arg1[0x17], &arg5[4])
arg1[0x19] = *arg6
void* rax_9 = arg6[1]
arg1[0x1a] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

arg1[0x1b].d = arg6[2].d
arg1[0x1c].b = arg6[3].b
arg1[0x1d] = 0
arg1[0x1e].d = 0
sub_140692f90(&arg1[0x1d], &arg6[4])
*(arg1 + 0xf8) = *arg7
arg1[0x21] = arg7[1].q
arg1[0x22].d = *(arg7 + 0x18)
arg1[0x23] = 0
arg1[0x24].d = 0
arg1[0x25] = 0
arg1[0x26].d = 0
arg1[0x27] = 0
arg1[0x28] = 0
*(arg1 + 0x14b) = arg8
arg1[0x29].w = 0
*(arg1 + 0x14a) = 1
arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2c].b = arg9
int64_t* rdi_1 = arg3[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg4[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp3_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

return arg1
