// 函数: sub_142828dec
// 地址: 0x142828dec
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rdi = arg3

if (*(arg3 + 0x19) != 0)
    return 

do
    sub_142828dec(arg1, arg2, rdi[2])
    void** rbx_1 = rdi
    rdi = *rdi
    int64_t rdx_1 = rbx_1[7]
    
    if (rdx_1 u>= 0x10)
        sub_14058ba50(rbx_1[4], rdx_1 + 1)
    
    rbx_1[6] = 0
    rbx_1[7] = 0xf
    rbx_1[4].b = 0
    sub_14058ba50(rbx_1, 0x48)
while (*(rdi + 0x19) == 0)
