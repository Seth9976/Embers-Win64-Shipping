// 函数: sub_142253a30
// 地址: 0x142253a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result
result.o = zx.o(0)
float temp0[0x4] = __minss_xmmss_memss(arg2[0], 0x3d072b02)

if (not(temp0[0] <= 0f))
    arg1[0x30].d += 1
    sub_142242f10(arg1, temp0, arg3)
    
    if (arg1[0x45].b != 0)
        sub_142250f90(arg1)
    
    int128_t zmm6_1 = sub_142249ae0(arg1)
    sub_1422407f0(arg1)
    result = sub_142253ae0(arg1, sub_1422508c0(arg1, zmm6_1))
    void* i = arg1[9]
    
    if (i != 0)
        do
            *(i + 0x10010) = 0
            i = *(i + 0x10000)
        while (i != 0)
        
        i = arg1[9]
    
    arg1[8] = i

return result
