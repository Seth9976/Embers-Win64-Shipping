// 函数: sub_141c8ade0
// 地址: 0x141c8ade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140a242a0()
int32_t rax_1 = (*(*rax + 0x10))(rax, 0)
int64_t* arg_40
int64_t* rbx = *arg_40
void arg_8
int64_t* rax_2 = sub_140b29d90(&arg_8)
arg_40 = *arg6 + *rax_2
int64_t r8_2 = *rbx
int64_t var_98 = 0
int64_t var_90 = 0
void var_48
int128_t* rax_3 = (*r8_2)(rbx, &var_48, r8_2)
void*** rax_4 = j_sub_140a82f30(0xd8)
void*** rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx_1 = &data_14320fbe0
    int128_t var_58 = zx.o(0)
    sub_141c81de0(&rbx_1[2], arg2, arg3, arg5, &var_58, rax_3, &var_98, arg4, 0, &arg_40, arg7, 
        rax_1)

void* rsi_1 = &rbx_1[2]
void* var_88 = rsi_1
void*** var_80 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rsi_1 = var_88

void* rdi_1 = *(arg1 + 0x28)
sub_141c8e590(*(rdi_1 + 0x148), &var_88)
int32_t var_70 = 0
void** (* var_78)(void* arg1, int64_t* arg2) = sub_141c8a230
var_78.o = var_78.o
void* var_68 = rsi_1
void*** var_60 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_38
int64_t* rax_5 = sub_141c7fb60(&var_38, rdi_1, &var_78, &var_68)

if (sub_141c87730(rdi_1 + 0x110, rax_5) != 0)
    int64_t* rcx_7 = *(rdi_1 + 0x158)
    int64_t rdx_8 = *rcx_7
    (*(rdx_8 + 0x10))(rcx_7, rdx_8)

int32_t result = sub_140745b20(rax_5)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        (**rbx_1)(rbx_1)
        result = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*rbx_1)[1](rbx_1, 1)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_2 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*rbx_1)[1](rbx_1, zx.q(rdi_2))

return result
