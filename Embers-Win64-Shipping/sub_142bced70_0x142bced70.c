// 函数: sub_142bced70
// 地址: 0x142bced70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)
int32_t rsi

if (sx.d(*(rcx + 0x62)) + 1 + sx.d(*(rcx + 0x1a)) u> rcx[1].d)
    int32_t rax_1 = sub_142b92690(rcx, 1, 0)
    rsi = rax_1
    
    if (rax_1 != 0)
        return rax_1
else
    rsi = 0

void* rbp_1 = *(arg1 + 0x28)

if (*(arg1 + 0x5c) != 0)
    int64_t rdx = sx.q(*(rbp_1 + 2))
    char* rbx_2 = *(rbp_1 + 0x10) + rdx
    int32_t* rdi_1 = *(rbp_1 + 8) + (rdx << 3)
    *rdi_1 = sub_142b96160(arg2) s>> 0x10
    rdi_1[1] = sub_142b96160(arg3) s>> 0x10
    *rbx_2 = 1

*(rbp_1 + 2) += 1
return rsi
