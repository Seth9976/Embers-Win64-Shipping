// 函数: sub_141baebd0
// 地址: 0x141baebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x508)

if (rax == 0)
    int512_t zmm0
    
    if ((*(arg1 + 0x4f0) & 4) == 0)
        zmm0.o = 0x800000
        return zmm0
    
    zmm0.o = *(arg1 + 0x4fc)
    return zmm0

int128_t zmm6 = 0xff7fffff
int32_t arg_8 = 0xff7fffff
int32_t* rax_1
int512_t zmm0_1
rax_1, zmm0_1 = sub_140f466a0(rax + 0x508)

if (rax_1[1].b != 0)
    zmm6 = *rax_1

zmm0_1.o = zmm6
return zmm0_1
