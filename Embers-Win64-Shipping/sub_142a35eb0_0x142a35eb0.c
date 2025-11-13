// 函数: sub_142a35eb0
// 地址: 0x142a35eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x28)
void* rsi = &rbx[sx.q(*(arg1 + 0x34) + *(arg1 + 0x30))]

while (rbx != rsi)
    void* rdi_1 = *rbx
    rbx = &rbx[1]
    
    if (rdi_1 != 0)
        j_sub_140a74f90(*(rdi_1 + 0x20))
        j_sub_140a74f90(rdi_1)

return j_sub_140a74f90(*(arg1 + 0x28)) __tailcall
