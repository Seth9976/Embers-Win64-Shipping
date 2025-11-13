// 函数: sub_1418ff3a0
// 地址: 0x1418ff3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x50)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int64_t r8 = *arg3
    void* rdx = *(arg1 + 0x58)
    *rdi = &data_142d3ff08
    rdi[1].d = 0
    *rdi = &data_142ef2b58
    *(rdi + 0xc) = 0
    rdi[2].w = 0x100
    rdi[3] = r8
    rdi[4].b = 0
    sub_1418b86c0(&rdi[5], rdx)
    rdi[9].b = 0
    *rdi = &data_142ff1c20
    rdi[5] = &data_142ff1c38

*arg2 = rdi

if (rdi != 0)
    rdi[1].d += 1

return arg2
