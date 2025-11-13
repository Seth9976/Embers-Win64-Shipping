// 函数: sub_14193d6f0
// 地址: 0x14193d6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg2 + 0x38))
    *(arg2 + 0x38) = 0
else
    rax = *(arg2 + 0x38)

uint32_t result = 0

if (0 == *(arg2 + 0x34))
    *(arg2 + 0x34) = 0
else
    result = *(arg2 + 0x34)

if (rax != result)
    if (*(arg2 + 0x3d) == 0)
        result = sub_141955bc0(*(arg2 + 0x20))
        
        if (result.b == 0)
            result = sub_141958330(*(arg2 + 0x18), *(arg2 + 0x20))
            *(arg2 + 0x18) = 0
            *(arg2 + 0x3d) = 1
    
    if (*(arg2 + 0x3d) == 0)
        uint64_t rcx_3 = zx.q(*(arg2 + 0x18))
        int32_t i_2 = 0
        result = data_143effcd0(rcx_3, 0x8867, &i_2)
        
        if (i_2 == 1)
            return sub_14193d680(arg2)
        
        if (arg3 != 0)
            int64_t performanceCount_2[0x2]
            QueryPerformanceCounter(&performanceCount_2)
            int32_t i = 0
            
            if (data_1439c7520 s> 0)
                int64_t rdx_1 = 0
                
                do
                    rdx_1 += 8
                    i += 1
                    *(*(rdx_1 + data_1439c7518 - 8) + 0x14) = 0
                while (i s< data_1439c7520)
            
            uint128_t zmm6
            uint128_t var_18_1 = zmm6
            int128_t zmm7
            int128_t var_28_1 = zmm7
            uint128_t zmm8
            uint128_t var_38_1 = zmm8
            uint128_t zmm9
            uint128_t var_48_1 = zmm9
            int32_t i_1
            
            if (data_1439c750c != 0)
                int64_t performanceCount_3
                QueryPerformanceCounter(&performanceCount_3)
                zmm7.q = float.d(performanceCount_3)
                zmm7.q = zmm7.q f* data_143d796f8
                
                do
                    sub_140b73230(zx.o(0))
                    
                    if (*(arg2 + 0x3d) != 0)
                        i_2 = 0
                        *(arg2 + 0x3c) = 1
                        goto label_14193d8ec
                    
                    data_143effcd0(zx.q(*(arg2 + 0x18)), 0x8867, &i_2)
                    
                    if (*(arg2 + 0x40) != 2)
                        zmm6 = 0x3fe0000000000000
                    else
                        zmm6 = 0x4000000000000000
                    
                    int64_t performanceCount
                    QueryPerformanceCounter(&performanceCount)
                    i_1 = i_2
                    int128_t zmm0
                    zmm0.q = float.d(performanceCount)
                    zmm0.q = zmm0.q f* data_143d796f8
                    zmm0.q = zmm0.q f- zmm7.q
                    
                    if (zmm0.q f> zmm6.q)
                        break
                while (i_1 == 0)
            
            if (data_1439c750c != 0 && i_1 != 1)
            label_14193d8ec:
                *(arg2 + 0x28) = 0
                *(arg2 + 0x38) += 1
            else
                sub_14193d680(arg2)
            
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            int32_t rbx_2 = performanceCount_1.d - performanceCount_2[0].d
            result = sub_140a80f10()
            
            if (result.b == 0)
                data_143f138cc += rbx_2
                data_143f138d8:4.d += 1
            else
                data_143f01c9c += rbx_2
    else
        *(arg2 + 0x28) = 0
        *(arg2 + 0x38) += 1

return result
