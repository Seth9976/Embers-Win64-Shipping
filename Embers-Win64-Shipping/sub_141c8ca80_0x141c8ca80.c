// 函数: sub_141c8ca80
// 地址: 0x141c8ca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140a242a0()
int32_t rax_1 = (*(*rax + 0x10))(rax, 0)
int64_t* arg_50
int64_t* rbx = *arg_50
void arg_8
int64_t* rax_2 = sub_140b29d90(&arg_8)
arg_50 = *arg8 + *rax_2
int64_t r8_2 = *rbx
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
    sub_141c81de0(&rbx_1[2], arg2, arg3, arg5, arg6, rax_3, arg7, 2, arg4, &arg_50, arg9, rax_1)

void* rsi_1 = &rbx_1[2]
void* var_78 = rsi_1
void*** var_70 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rsi_1 = var_78

void* rdi_1 = *(arg1 + 0x28)
sub_141c8e590(*(rdi_1 + 0x148), &var_78)
int32_t var_60 = 0
void** (* var_68)(void* arg1, int64_t* arg2) = sub_141c8a230
var_68.o = var_68.o
void* var_58 = rsi_1
void*** var_50 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_38
int64_t* rax_7 = sub_141c7fb60(&var_38, rdi_1, &var_68, &var_58)

if (sub_141c87730(rdi_1 + 0x110, rax_7) != 0)
    int64_t* rcx_7 = *(rdi_1 + 0x158)
    int64_t rdx_8 = *rcx_7
    (*(rdx_8 + 0x10))(rcx_7, rdx_8)

int32_t result = sub_140745b20(rax_7)

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
