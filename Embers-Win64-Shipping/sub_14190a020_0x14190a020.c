// 函数: sub_14190a020
// 地址: 0x14190a020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = data_143eff600
uint64_t rdi

if (rbx[0x56d4] != 1)
    int32_t rcx_1 = 0x14e4c
    
    if (sub_141957ff0(*(rbx + 0x15bb8)) == 1)
        rcx_1 = 0x156e4
    
    rdi = zx.q(rcx_1)
else
    rdi = 0x156e4

if (*(rbx + rdi) != arg1)
    data_143effcd8(0x8a11, zx.q(arg1))
    *(rbx + rdi) = arg1
