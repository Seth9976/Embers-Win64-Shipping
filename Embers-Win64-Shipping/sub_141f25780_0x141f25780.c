// 函数: sub_141f25780
// 地址: 0x141f25780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141ee76e0(arg1)

if ((result == 0 && (*(arg1 + 0x88) & 1) != 0 && *(arg1 + 0x14f) == result)
        || arg2.d f== *(arg1 + 0x210))
    return result

void* rax = *(arg1 + 0xa8)
*(arg1 + 0x210) = arg2.d

if (rax != 0)
label_141f257d5:
    int64_t* rcx_1 = *(rax + 0x1b0)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x160))(rcx_1, arg1)
else
    rax = sub_141ee69e0(arg1)
    
    if (rax != 0)
        goto label_141f257d5

return sub_140920c10(&data_143a2d768, arg1)
