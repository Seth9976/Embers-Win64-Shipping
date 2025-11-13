// 函数: sub_1423c1b40
// 地址: 0x1423c1b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x18)
int32_t rsi = *(arg1 + 0x20)
void* rdi = &rbx[sx.q(rsi)]

if (rbx == rdi)
    return zx.q(rsi)

do
    void* rbp_1 = *rbx
    
    if (sub_140bc9500(rbp_1 + 0x10) == 0 && sub_140bc9510(rbp_1 + 0x10) != 0)
        break
    
    rsi -= 1
    rbx = &rbx[1]
while (rbx != rdi)

return zx.q(rsi)
