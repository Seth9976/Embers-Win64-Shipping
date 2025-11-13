// 函数: sub_141db0430
// 地址: 0x141db0430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x55].d != 0)
    int64_t* rcx = arg1[0x54]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        jump(*(*arg1 + 0x198))

int32_t result = arg1[0x4b].d

if (result == 0 || *(arg1 + 0x25c) != 0)
    return result

*(arg1 + 0x25c) = 1

if (result == 2)
    sub_141dae750(arg1, 1)
else if (result == 1)
    sub_141da9880(arg1)
    sub_141db04e0(arg1)

int128_t zmm0 = zx.o(0)
int128_t var_18 = zmm0
return sub_141da6730(arg1, 0x11, &var_18, 0, zmm0.d)
