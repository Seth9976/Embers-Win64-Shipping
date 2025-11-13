// 函数: sub_141980030
// 地址: 0x141980030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f0f180

if (&rcx[1] != arg1)
    int32_t r8_1 = *(rcx + 0x14)
    int64_t rsi_1 = *arg1
    int64_t rdi_1 = sx.q(arg1[1].d)
    rcx[2].d = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_1405c4a90(&rcx[1], rdi_1.d, r8_1)
        memcpy(rcx[1], rsi_1, (rdi_1 << 2).d)
    else
        *(rcx + 0x14) = rdi_1.d
    
    rcx = data_143f0f180

jump(*(*rcx + 0x10))
