// 函数: sub_1427e4f10
// 地址: 0x1427e4f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1

if (*(r8 + 0x10) != 0 && *(*(r8 + 8) + zx.q(*(r8 + 0x10) - 1) * 0x18 + 8) == 0)
    if (arg1[9].b != 0)
        int64_t* r8_1 = arg1[5]
        int64_t r9_1 = *r8_1
        arg1[9].b = (*(r9_1 + 0x18))(r8_1, *(*(r8 + 8) + zx.q(*(r8 + 0x10) - 1) * 0x18), r8_1, r9_1)
    
    void* rcx_2 = *arg1
    *(*(rcx_2 + 8) + zx.q(*(rcx_2 + 0x10) - 1) * 0x18 + 0x10) = arg1[9].b
    void* rcx_4 = *arg1
    *(*(rcx_4 + 8) + zx.q(*(rcx_4 + 0x10) - 1) * 0x18 + 8) = arg1[9].b

return zx.q(arg1[9].b)
