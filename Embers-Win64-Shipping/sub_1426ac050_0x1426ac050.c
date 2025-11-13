// 函数: sub_1426ac050
// 地址: 0x1426ac050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
uint128_t zmm1 = zx.o(*arg3)
uint64_t var_28 = zmm1.q
uint128_t zmm0 = zx.o(*arg4)
int32_t rax_2 = arg4[1].d
zmm1.d = zmm1.d f- zmm0.d

if (not(_mm_and_ps(zmm1, 0x7fffffff).d f> 9.99999975e-05f))
    zmm0.d = var_28:4.d.d f- zmm0.q:4.d
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f))
        zmm0.d = rax.d f- rax_2
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f))
            return 0

return 1
