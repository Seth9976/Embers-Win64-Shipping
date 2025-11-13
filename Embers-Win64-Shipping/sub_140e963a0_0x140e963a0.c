// 函数: sub_140e963a0
// 地址: 0x140e963a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg9
void* rax_1 = arg9[1]
void* var_20 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t r9 = *arg2
int128_t var_18 = zx.o(0)
sub_140e96910(arg1, &var_18, &var_28, r9, 4, 0)
*arg1 = &data_142edc668
arg1[0x13] = *arg3
void* rax_3 = arg3[1]
arg1[0x14] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[0x15].d = arg3[2].d
arg1[0x16].b = arg3[3].b
arg1[0x17] = 0
arg1[0x18].d = 0
sub_140692f90(&arg1[0x17], &arg3[4])
arg1[0x19] = *arg4
void* rax_7 = arg4[1]
arg1[0x1a] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

arg1[0x1b].d = arg4[2].d
arg1[0x1c].b = arg4[3].b
arg1[0x1d] = 0
arg1[0x1e].d = 0
sub_140692f90(&arg1[0x1d], &arg4[4])
*(arg1 + 0xf8) = *arg11
arg1[0x21] = arg11[1].q
arg1[0x22].d = *(arg11 + 0x18)
arg1[0x23] = 0
arg1[0x24].d = 0
sub_1407473e0(&arg1[0x23], arg5)
arg1[0x25] = 0
arg1[0x26].d = 0
arg1[0x27] = 0
arg1[0x28] = 0
arg1[0x29].b = arg7
*(arg1 + 0x149) = arg8
*(arg1 + 0x14b) = arg10
*(arg1 + 0x14a) = 1
arg1[0x2a] = *arg6
void* rax_16 = arg6[1]
arg1[0x2b] = rax_16

if (rax_16 != 0)
    *(rax_16 + 8) += 1

arg1[0x2c].b = arg12
int64_t* rdi_2 = arg6[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp2_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = arg9[1]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp3_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

return arg1
