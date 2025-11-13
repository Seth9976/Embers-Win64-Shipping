// 函数: sub_140812540
// 地址: 0x140812540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *arg1
int64_t rsi = sx.q(arg1[1].d)
int64_t* r8 = r9
int64_t r14_1 = rsi * 2
void* rcx = &r9[r14_1]

if (r9 != rcx)
    do
        if (*r8 == *arg2 && r8[1].w == arg2[1].w)
            int32_t r8_2 = ((r8 - r9) s>> 4).d
            
            if (r8_2 != 0xffffffff)
                return zx.q(r8_2)
            
            break
        
        r8 = &r8[2]
    while (r8 != rcx)

int32_t rax_2 = (rsi + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t rdx_2 = *arg1
*(rdx_2 + (r14_1 << 3)) = *arg2
*(rdx_2 + (r14_1 << 3) + 8) = arg2[1].w
*(rdx_2 + (r14_1 << 3) + 0xa) = 0xffffffff
return zx.q(rsi.d)
