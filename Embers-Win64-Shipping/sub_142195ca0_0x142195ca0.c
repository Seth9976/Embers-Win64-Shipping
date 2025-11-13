// 函数: sub_142195ca0
// 地址: 0x142195ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x45].d

if ((rax.b & 1) != 0)
    int512_t zmm1
    zmm1.o = 0x38d1b717
    (*(*arg1 + 0x390))(arg2, zmm1)
    rax = arg1[0x45].d

int32_t result = rax & 0xfffffffb
arg1[0x45].d = result
return result
