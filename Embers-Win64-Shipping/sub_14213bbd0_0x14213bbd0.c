// 函数: sub_14213bbd0
// 地址: 0x14213bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx = *arg1

if (rcx[0x2a] == 0xffffffff)
    (*(*(rcx + 0xa0) + 0x28))(&rcx[0x28])
else if (*rcx == 0)
    sub_1419ba620(&rcx[0x28])

int32_t* rcx_3 = *arg1

if (rcx_3[8] == 0xffffffff)
    jump(*(*(rcx_3 + 0x18) + 0x28))

if (*rcx_3 != 0)
    return 

return sub_1419ba620(&rcx_3[6]) __tailcall
