// 函数: sub_142c6a1e0
// 地址: 0x142c6a1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[0xce]

if (rax != 0)
    arg1[0xd] = rax
    arg1[0xce] = 0

int32_t result
int512_t zmm2
result, zmm2 = sub_142c5f360(arg1, arg2, arg3)

if (result == 0)
    return result

sub_142c5c970(arg1, 0, zmm2)
return result
