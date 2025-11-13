// 函数: sub_141065ff0
// 地址: 0x141065ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* i = arg3
void* r15_1 = arg2

while (i != 0)
    void* r14_1 = *(r15_1 + 0x28)
    void* rbp_1 = *(r15_1 + 0x78)
    void* rsi_1 = *(i + 0x78)
    void* rdi_1 = **(r14_1 + 0x6d8)
    *(rdi_1 + 0x3b90) += 1
    int64_t* rcx = *(*(rdi_1 + 0x1c8) + 0x30)
    (*(*rcx + 0x88))(rcx, *(rsi_1 + 0x20), *(rbp_1 + 0x20))
    sub_14105c1a0(rsi_1, rdi_1 + 0x1c0)
    sub_14105c1a0(rbp_1, rdi_1 + 0x1c0)
    sub_141031e00(r14_1, 1, 0)
    r15_1 = *(r15_1 + 0xd8)
    i = *(i + 0xd8)
    
    if (r15_1 == 0)
        break
