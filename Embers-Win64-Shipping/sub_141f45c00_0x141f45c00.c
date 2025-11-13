// 函数: sub_141f45c00
// 地址: 0x141f45c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d

if (rdi == 0)
    return 0

int32_t i = 0
int32_t rbp = 0
int64_t r14
r14.b = sub_14077a170(*arg1, arg2) == 0

do
    int64_t i_1 = sx.q(i)
    
    for (i += 1; i s< rdi; i += 1)
        int32_t rcx_3
        rcx_3.b = sub_14077a170(*arg1 + (sx.q(i) << 3), arg2) == 0
        
        if (zx.d(r14.b) != rcx_3)
            break
    
    int32_t rsi_3 = i - i_1.d
    
    if (r14.b != 0)
        if (rbp != i_1.d)
            int64_t rcx_4 = *arg1
            memmove(rcx_4 + (sx.q(rbp) << 3), rcx_4 + (i_1 << 3), rsi_3 << 3)
        
        rbp += rsi_3
    
    r14.b ^= 1
while (i s< rdi)

arg1[1].d = rbp
return zx.q(rdi - rbp)
