// 函数: sub_142bfd840
// 地址: 0x142bfd840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg3

if (arg2 u>= (zx.d(arg1[2]) << 8) + zx.d(arg1[3]))
    return (zx.o(0)).d

uint64_t rbx = 0
uint32_t i = (zx.d(*arg1) << 8) + zx.d(arg1[1])
int128_t zmm6 = 0x3f800000
int128_t zmm7
int128_t var_28 = zmm7

if (i != 0)
    do
        int32_t rdx
        
        if (rbx.d u>= arg4)
            rdx = 0
        else
            rdx = *rdi
        
        int32_t zmm0 =
            sub_142bfd760(&arg1[zx.q(i * arg2) * 6 + ((rbx + ((rbx + 1) << 1)) << 1)], rdx)
        zmm0 f- 0f
        
        if (not(is_unordered.d(zmm0, 0f)) && zmm0 f== 0f)
            return (zx.o(0)).d
        
        rbx = zx.q(rbx.d + 1)
        zmm6.d = zmm6.d f* zmm0
        rdi = &rdi[1]
    while (rbx.d u< i)

return zmm6.d
