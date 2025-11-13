// 函数: png_set_filter_heuristics
// 地址: 0x1403c2870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1403c2ae0(arg1, arg2, arg3)

if (arg2 == 2 && result.d != 0)
    double zmm1
    double zmm2
    
    if (arg3 s> 0)
        int64_t i = 0
        zmm1 = 256.0
        zmm2 = 0.5
        
        do
            double zmm3 = *(arg4 + (i << 3))
            void* rcx_1
            
            if (0.0 >= zmm3)
                *(*(arg1 + 0x3c0) + (i << 1)) = 0x100
                result.w = 0x100
                rcx_1 = arg1 + 0x3c8
            else
                *(*(arg1 + 0x3c8) + (i << 1)) = (int.d(zmm3 * zmm1 + zmm2)).w
                result = zx.q(int.d(zmm1 f/ *(arg4 + (i << 3)) + zmm2))
                rcx_1 = arg1 + 0x3c0
            
            *(*rcx_1 + (i << 1)) = result.w
            i += 1
        while (zx.q(arg3) != i)
    
    int64_t zmm0_1 = *arg5
    
    if (not(zmm0_1 f< 1.0))
        zmm1 = 8.0
        zmm2 = zmm1 f/ zmm0_1
        zmm0_1 = 0x3fe0000000000000
        **(arg1 + 0x3d8) = (int.d(zmm2 f+ zmm0_1)).w
        result = zx.q(int.d(zmm1 f* *arg5 f+ zmm0_1))
        **(arg1 + 0x3d0) = result.w
    
    zmm0_1 = arg5[1]
    
    if (not(zmm0_1 f< 1.0))
        zmm1 = 8.0
        zmm2 = zmm1 f/ zmm0_1
        zmm0_1 = 0x3fe0000000000000
        *(*(arg1 + 0x3d8) + 2) = (int.d(zmm2 f+ zmm0_1)).w
        result = zx.q(int.d(zmm1 f* arg5[1] f+ zmm0_1))
        *(*(arg1 + 0x3d0) + 2) = result.w
    
    zmm0_1 = arg5[2]
    
    if (not(zmm0_1 f< 1.0))
        zmm1 = 8.0
        zmm2 = zmm1 f/ zmm0_1
        zmm0_1 = 0x3fe0000000000000
        *(*(arg1 + 0x3d8) + 4) = (int.d(zmm2 f+ zmm0_1)).w
        result = zx.q(int.d(zmm1 f* arg5[2] f+ zmm0_1))
        *(*(arg1 + 0x3d0) + 4) = result.w
    
    zmm0_1 = arg5[3]
    
    if (not(zmm0_1 f< 1.0))
        zmm1 = 8.0
        zmm2 = zmm1 f/ zmm0_1
        zmm0_1 = 0x3fe0000000000000
        *(*(arg1 + 0x3d8) + 6) = (int.d(zmm2 f+ zmm0_1)).w
        result = zx.q(int.d(zmm1 f* arg5[3] f+ zmm0_1))
        *(*(arg1 + 0x3d0) + 6) = result.w
    
    zmm0_1 = arg5[4]
    
    if (not(zmm0_1 f< 1.0))
        zmm1 = 8.0
        zmm2 = zmm1 f/ zmm0_1
        zmm0_1 = 0x3fe0000000000000
        *(*(arg1 + 0x3d8) + 8) = (int.d(zmm2 f+ zmm0_1)).w
        result = zx.q(int.d(zmm1 f* arg5[4] f+ zmm0_1))
        *(*(arg1 + 0x3d0) + 8) = result.w

return result
