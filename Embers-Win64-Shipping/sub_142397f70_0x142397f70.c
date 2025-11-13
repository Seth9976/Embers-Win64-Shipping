// 函数: sub_142397f70
// 地址: 0x142397f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg4 + 0x68)
void* r10 = arg4
int64_t rdi = sx.q(arg2)

if (rax != 0)
    r10 = rax

int32_t r11_1 = *(arg4 + 0x9c) & 0xffdfffff

if (*(arg1 + 0x620) s> 0)
    *(arg4 + 0x9c) = r11_1
    *(r10 + 0x60) = 0
    *(r10 + 0x5c) = 0xbf800000
    return rax

*(arg4 + 0x9c) = zx.d(arg3) << 0x15 | r11_1
int64_t rax_4 = *(arg1 + 0x150)
*(r10 + 0x60) = *(rax_4 + (rdi << 2) + 0x20)
*(r10 + 0x5c) = 0

if (rdi.d s< 7)
    rax_4 = *(arg1 + 0x150)
    *(r10 + 0x5c) = *(rax_4 + (rdi << 2) + 0x24)

return rax_4
