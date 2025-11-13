// 函数: sub_14068edb0
// 地址: 0x14068edb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d8b390
arg1[1].d = 0
*(arg1 + 0xc) = 0
arg1[2] = 0
arg1[3] = 0
_Mtx_init_in_situ(&arg1[4], 2)
arg1[0xe] = 0
arg1[0x10] = 0
int64_t* rdi = arg3[1]

if (rdi != 0)
    rdi[1].d += 1
    rdi = arg3[1]

int64_t r15 = *arg3
int64_t r12 = arg3[2]
_Cnd_init_in_situ(&arg1[0x11])
_Mtx_init_in_situ(&arg1[0x1a], 2)
arg1[0x24] = 0
arg1[0x25] = 0

if (rdi != 0)
    rdi[1].d += 1

arg1[0x24] = r15
arg1[0x25] = rdi
arg1[0x26] = r12
arg1[0x27].d = 0

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi)

__builtin_memset(&arg1[0x28], 0, 0x20)
arg1[0x2c] = arg1
arg1[0x2d].w = 0
arg1[0xf] = arg2

if (arg2 != 2)
    *(arg2 + 8) += 1

int64_t* rdi_1 = arg3[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1)

return arg1
