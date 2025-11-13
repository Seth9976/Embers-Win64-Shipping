// 函数: sub_141e04a30
// 地址: 0x141e04a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = zx.o(0)
int128_t zmm7 = zx.o(0)
int32_t* i = *(arg1 + 0x658)

for (void* rbp = &i[sx.q(*(arg1 + 0x660)) * 6]; i != rbp; i = &i[6])
    if (sub_140d3e110(i) != 0)
        void* rax_2 = sub_140d3c6e0(i)
        
        if (sub_141e2af70(rax_2, *arg2) != 0)
            zmm7.d = zmm7.d f+ i[2]
            
            if (sub_141e2af20(rax_2, arg2) == 0)
                zmm6.d = zmm6.d f+ i[2]

*arg5 = zmm7.d

if (not(zmm7.d f<= 1f))
    zmm6.d = zmm6.d f/ zmm7.d
    zmm7 = 0x3f800000

*arg3 = zmm7.d
*arg4 = 1f f- zmm6.d
return arg5
