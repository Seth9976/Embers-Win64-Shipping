// 函数: sub_141e5e020
// 地址: 0x141e5e020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
zmm6.d = arg1[0x1a].d.d f* arg1[0x19].d
zmm6.d = zmm6.d f* arg1[2].d
zmm6.d = zmm6.d f* *(arg1 + 0xcc)

if (not(zmm6.d f== 0f))
    int32_t zmm0
    zmm0, zmm6 = sub_141e5f830(arg1)
    void* rax_1 = arg1[0x18]
    zmm6.d = zmm6.d f* zmm0
    
    if ((*(rax_1 + 0x182) & 8) == 0)
        zmm6.d = zmm6.d f* *(*(rax_1 + 0x50) + 0xc0)

return zmm6.d
