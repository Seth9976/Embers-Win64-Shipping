// 函数: sub_1413c8320
// 地址: 0x1413c8320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[1]

if (*(rcx + 0xc0) != 0)
    void* rax_1 = *arg1
    *(rax_1 + 0x61c8) -= 1
    rcx = arg1[1]

*(rcx + 0xc0) = arg1[0xa].b

if (*(arg1[1] + 0xc0) != 0)
    void* rax_4 = *arg1
    *(rax_4 + 0x61c8) += 1

*(*arg1 + 0x1030) = 1
sub_141f49500(arg1[1], &arg1[2])
void* result = *arg1

if (*(result + 8) s> 1)
    return result

return sub_141f4dd60(arg1[1]) __tailcall
