// 函数: sub_1426b45c0
// 地址: 0x1426b45c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x20)

if (rdi == 0)
    return 0

void* rax_1 = sub_140cddea0()
void* rdx = *(rdi + 0x10)
int64_t rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    jump(*(**(arg1 + 0x20) + 0x150))

void* const result = *(*(arg1 + 0x20) + 0x20)

if (result != 0)
    void* rax_5 = sub_1425be5e0()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (rax_6.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
        return result

return nullptr
