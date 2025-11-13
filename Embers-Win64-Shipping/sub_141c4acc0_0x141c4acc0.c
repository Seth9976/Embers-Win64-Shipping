// 函数: sub_141c4acc0
// 地址: 0x141c4acc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp_1 = (*(*arg1 + 0x20))() * (*(*arg1 + 0x10))(arg1)
arg1[3].d = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_140775b10(&arg1[2], 0)

int32_t rax_4 = arg1[3].d + rbp_1
arg1[3].d = rax_4

if (rax_4 s> *(arg1 + 0x1c))
    sub_140775270(&arg1[2])

int32_t i

for (i = sub_141c3c800(&arg1[0xa]); i s>= rbp_1; i = sub_141c3c800(&arg1[0xa]))
    sub_141c3efd0(&arg1[0xa], arg1[2], arg1[3].d, 0)
    int32_t var_40_1 = arg1[3].d
    int64_t* var_28_1 = arg1
    int128_t var_38 = arg1[2].o
    EnterCriticalSection(&arg1[5])
    int64_t arg_8 = arg1[4]
    sub_141c4a5f0(&var_38, &arg_8)
    
    if (arg1 != -0x28)
        LeaveCriticalSection(&arg1[5])

return i
