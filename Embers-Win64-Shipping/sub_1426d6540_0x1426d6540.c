// 函数: sub_1426d6540
// 地址: 0x1426d6540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x70)
void* rbx = nullptr
void* rdi = arg2

if (rbp != 0)
    if (((arg2 + 1) & 0xfffffffffffffffe) == 0)
        arg2 = sub_140cde0b0()
    
    int32_t var_18_1 = 0x7f800000
    rbx = sub_140d2e1f0(rbp, arg2, 0, 0xfffffff, 0, 0)

if (rbx != 0)
    return sub_1426e7fc0(arg1, rdi, rbx)

return zx.q((rbx + 1).d)
