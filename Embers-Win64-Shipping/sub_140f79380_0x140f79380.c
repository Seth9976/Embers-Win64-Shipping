// 函数: sub_140f79380
// 地址: 0x140f79380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg4 + 0x48)

if (rdi != 0)
    rdi[1].d += 1

int64_t rbp
rbp.b = *(arg4 + 0x38) == data_143e1e008

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rbp.b == 0)
    *arg2 = 0
else
    float zmm2 = *(arg3 + 0x28)
    float zmm4 = *(arg3 + 0x24)
    float zmm3 = *(arg3 + 0x30)
    int128_t zmm10 = *(arg3 + 0x20)
    int128_t zmm11 = *(arg4 + 0x18)
    float zmm1 = zmm11.d f- *(arg3 + 0x2c)
    zmm11.d = zmm11.d f- *(arg3 + 0x2c)
    int128_t zmm12 = *(arg4 + 0x1c)
    int128_t zmm6
    zmm6.d = (*(arg3 + 0x1c)).d f* zmm2
    zmm6.d = zmm6.d f- zmm10.d * zmm4
    float zmm0 = zmm12.d - zmm3
    int128_t zmm8
    zmm8.d = 1f f/ zmm6.d
    zmm12.d = zmm12.d f/ zmm6.d
    zmm12.d = zmm12.d f- zmm3 f* zmm8.d
    zmm12.d = zmm12.d f* *(arg3 + 0x1c)
    zmm10.d = zmm10.d f* zmm8.d
    zmm11.d = zmm11.d f* zmm10.d
    zmm12.d = zmm12.d f- zmm11.d
    float arg_20 = (zmm1 * zmm2 f* zmm8.d - zmm0 * zmm4 f* zmm8.d) f* *(arg3 + 8)
    zmm12.d = zmm12.d f* *(arg3 + 8)
    int32_t arg_24 = zmm12.d
    sub_140f89ef0(arg1, &arg_20)
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
