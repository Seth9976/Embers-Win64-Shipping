// 函数: sub_142b53940
// 地址: 0x142b53940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0xffffffff
int128_t zmm7 = sub_142a4bbc0()
int32_t* i

for (i = sub_142a86e70(data_144016d78, &arg_8); i != 0; i = sub_142a86e70(data_144016d78, &arg_8))
    void* rcx_1 = *(i + 8)
    
    if (*(rcx_1 + 8) s<= 0)
        int128_t zmm0
        zmm0.q = zmm7.q f- *(rcx_1 + 0x10)
        
        if (not(zmm0.q f<= 0x4105f90000000000))
            sub_142a87020(data_144016d78, i)

return i
