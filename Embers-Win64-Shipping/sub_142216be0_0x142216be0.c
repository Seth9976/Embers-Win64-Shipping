// 函数: sub_142216be0
// 地址: 0x142216be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0xf8)
void* rbx = rax

if (rax != 0)
    rax = *(rax + 0xa0)

if (rax != 0 && (*(rax + 0x5c) & 4) == 0)
    return 0

if (rbx != 0)
    void* rax_2 = sub_142591550()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
        return zx.q(*(rbx + 0x2b0))

return zx.q(*(arg1 + 8))
