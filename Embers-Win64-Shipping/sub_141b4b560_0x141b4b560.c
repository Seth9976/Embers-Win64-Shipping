// 函数: sub_141b4b560
// 地址: 0x141b4b560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t rsi = *arg1[1]
void*** rcx_2 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_2[3]

if (rax_1 u> *(rdi + 0x38))
    sub_140b0e3d0(rdi + 0x30, 0x20)
    rcx_2 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_2[3]

*(rdi + 0x30) = rax_1
int64_t* rax_2 = *(rdi + 8)
*(rdi + 0x14) += 1
*rax_2 = rcx_2
*(rdi + 8) = &rcx_2[1]
rcx_2[1] = 0
rcx_2[2].d = rsi
*rcx_2 = &data_142f18bb8
return &data_142f18bb8
