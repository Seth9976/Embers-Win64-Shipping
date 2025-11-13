// 函数: sub_140fb4810
// 地址: 0x140fb4810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg4 + 0x48)

if (rdi != 0)
    rdi[1].d += 1

int64_t rsi
rsi.b = *(arg4 + 0x38) == data_143e1e020

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rsi.b == 0)
    *arg2 = 0
else
    int32_t rax_3
    rax_3.b = *(arg1 + 0x408) == 0
    *(arg1 + 0x408) = rax_3
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
