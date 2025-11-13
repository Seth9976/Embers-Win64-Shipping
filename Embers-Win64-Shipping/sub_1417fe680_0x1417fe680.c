// 函数: sub_1417fe680
// 地址: 0x1417fe680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(&arg1[1], 0, 0x1c)
arg1[5] = 0
arg1[6].d = 0
arg1[7] = 0
arg1[8].d = 0
arg1[9] = 0
arg1[0xa].d = 0
*arg1 = &data_142fe20c8
arg1[0xb] = *arg3
void* rax_1 = arg3[1]
arg1[0xc] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[0xd].d = 0
*arg1 = &data_142fe21a0
arg1[0xe].b = 0

if (arg4[1].b != 0)
    *(arg1 + 0x6c) = *arg4
    arg1[0xe].b = 1

arg1[0x10].b = 0

if (arg5[1].b != 0)
    arg1[0xf] = *arg5
    arg1[0x10].b = 1

void* rdx = &arg1[0x13]
arg1[0x11] = 0
arg1[0x12] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_5 = *(rdx + 0x10)

if (rax_5 != 0)
    rdx = rax_5

*rdx = 0
*(rdx + 8) = 0
arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
arg1[0x19] = 0
arg1[0x1a].d = 0
sub_140780cc0(&arg1[0x11], arg6)
arg1[0x1b] = 0
void* rdx_2 = &arg1[0x1d]
arg1[0x1c] = 0
*(rdx_2 + 0x10) = 0
*(rdx_2 + 0x18) = 0
*(rdx_2 + 0x1c) = 0x80
void* rax_6 = *(rdx_2 + 0x10)

if (rax_6 != 0)
    rdx_2 = rax_6

*rdx_2 = 0
*(rdx_2 + 8) = 0
arg1[0x21].d = 0xffffffff
*(arg1 + 0x10c) = 0
arg1[0x23] = 0
arg1[0x24].d = 0
sub_1417d6d70(&arg1[0x1b], arg7)
arg1[0x25] = *arg8
void* rax_8 = arg8[1]
arg1[0x26] = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

arg1[0x27].d = 0
arg1[0x28] = 0
arg1[0x29] = 0
void* rdx_4 = arg1[0x25]
arg1[0x2a] = arg2

if (rdx_4 != 0)
    if (*(rdx_4 + 8) != 0)
        int32_t rax_12 = 0
        
        if (0 == *(rdx_4 + 0x10))
            *(rdx_4 + 0x10) = 0
        else
            rax_12 = *(rdx_4 + 0x10)
        
        arg1[0x27].d = rax_12
    else
        int64_t* var_10 = nullptr
        int64_t var_18
        
        if (&arg1[0x25] != &var_18)
            arg1[0x25] = 0
            var_18 = 0
            sub_1405aeff0(&arg1[0x26], &var_10)
            int64_t* rcx_4 = var_10
            
            if (rcx_4 != 0)
                rcx_4[1].d -= 1
                
                if (rcx_4[1].d == 1)
                    int64_t* rbx_1 = var_10
                    (**rbx_1)(rbx_1)
                    int32_t rsi_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        int64_t* rcx_6 = var_10
                        (*(*rcx_6 + 8))(rcx_6, zx.q(rsi_1))

return arg1
