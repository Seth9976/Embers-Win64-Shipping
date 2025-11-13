// 函数: sub_141909e60
// 地址: 0x141909e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = data_143eff600
int32_t rsi = *(arg1 + 0x28)
uint64_t rbx

if (rdi[0x56d4] != 1)
    int32_t rcx_1 = 0x14e40
    
    if (sub_141957ff0(*(rdi + 0x15bb8)) == 1)
        rcx_1 = 0x156d8
    
    rbx = zx.q(rcx_1)
else
    rbx = 0x156d8

if (*(rdi + rbx) != rsi)
    data_143effcd8(0x8892, zx.q(rsi))
    *(rdi + rbx) = rsi
