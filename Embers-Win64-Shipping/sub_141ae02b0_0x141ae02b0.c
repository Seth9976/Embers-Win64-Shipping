// 函数: sub_141ae02b0
// 地址: 0x141ae02b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    int64_t* rcx = arg2 + 8
    int64_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *rcx = *(r8 + rcx)
        int128_t zmm0 = *(r8 + rcx + 8)
        rcx = &rcx[8]
        *(rcx - 0x38) = zmm0
        rcx[-5] = *(r8 + rcx - 0x28)
        rcx[-4].d = *(r8 + rcx - 0x20)
        rcx[-3] = *(r8 + rcx - 0x18)
        rcx[-2] = *(r8 + rcx - 0x10)
        i = arg4
        arg4 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
