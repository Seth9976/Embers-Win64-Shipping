// 函数: sub_1413c8240
// 地址: 0x1413c8240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1410c2460(*arg1, 0)
void* rdi = *arg1
int64_t* r11 = *(rdi + 0xf88)
int64_t r10 = sx.q(*(rdi + 0xf90))
int64_t* rdx = r11
void* r9 = &r11[r10]

if (r11 != r9)
    do
        if (*rdx == arg1[1])
            int32_t rdx_2 = ((rdx - r11) s>> 3).d
            
            if (rdx_2 != 0xffffffff)
                void* rcx_2 = &r11[sx.q(rdx_2)]
                memmove(rcx_2, rcx_2 + 8, (r10.d - rdx_2 - 1) << 3)
                *(rdi + 0xf90) -= 1
            
            break
        
        rdx = &rdx[1]
    while (rdx != r9)

void* rdx_4 = *arg1
int64_t r8_3

if (*(rdx_4 + 0xf90) s<= 0)
    r8_3 = 0
else
    r8_3 = *(*(rdx_4 + 0xf88) + (sx.q(*(rdx_4 + 0xf90)) << 3) - 8)

*(rdx_4 + 0xf80) = r8_3
uint64_t result = sub_1410c2460(*arg1, 0)

if (rax != result.b)
    result = *arg1
    *(result + 0xf78) = 1

return result
