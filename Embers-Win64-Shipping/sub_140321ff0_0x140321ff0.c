// 函数: sub_140321ff0
// 地址: 0x140321ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x8] = *arg3
uint64_t result = zx.q(_mm256_movemask_ps(zmm0))

if (result.d != 0xff)
    if (arg2 s> 0)
        result = zx.q(arg2 - 1)
        int32_t r8_3 = arg2 & 3
        int64_t r9_2
        
        if (result.d u>= 3)
            result = arg1 + 0xa0
            r9_2 = 0
            zmm0[0].o = data_142d3f660
            arg4.o = __vxorps_xmmdq_xmmdq_xmmdq(arg4.o, arg4.o)
            
            do
                *(result - 0xa0) = zmm0[0].o
                *(result - 0x90) = arg4
                *(result - 0x70) = zmm0[0].o
                *(result - 0x60) = arg4
                *(result - 0x40) = zmm0[0].o
                *(result - 0x30) = arg4
                *(result - 0x10) = zmm0[0].o
                r9_2 += 4
                *result = arg4
                result += 0xc0
            while (arg2 - r8_3 != r9_2.d)
            
            if (r8_3 != 0)
                goto label_14032215c
        else
            r9_2 = 0
            
            if (r8_3 != 0)
            label_14032215c:
                result = r9_2 * 0x30 + arg1 + 0x10
                int32_t i_3 = neg.d(r8_3)
                zmm0[0].o = data_142d3f660
                arg4.o = __vxorps_xmmdq_xmmdq_xmmdq(arg4.o, arg4.o)
                int32_t i
                
                do
                    *(result - 0x10) = zmm0[0].o
                    *result = arg4
                    result += 0x30
                    i = i_3
                    i_3 += 1
                while (i != 0xffffffff)
else if (arg2 s> 0)
    result = zx.q(arg2 - 1)
    int32_t r8_1 = arg2 & 3
    int64_t r9_1
    
    if (result.d u>= 3)
        result = arg1 + 0xa0
        r9_1 = 0
        zmm0[0].o = data_142d3f660
        arg4.o = __vxorps_xmmdq_xmmdq_xmmdq(arg4.o, arg4.o)
        
        do
            *(result - 0xa0) = zmm0[0].o
            *(result - 0x90) = arg4
            *(result - 0x70) = zmm0[0].o
            *(result - 0x60) = arg4
            *(result - 0x40) = zmm0[0].o
            *(result - 0x30) = arg4
            *(result - 0x10) = zmm0[0].o
            r9_1 += 4
            *result = arg4
            result += 0xc0
        while (arg2 - r8_1 != r9_1.d)
        
        if (r8_1 != 0)
            goto label_1403220c0
    else
        r9_1 = 0
        
        if (r8_1 != 0)
        label_1403220c0:
            result = r9_1 * 0x30 + arg1 + 0x10
            int32_t i_2 = neg.d(r8_1)
            zmm0[0].o = data_142d3f660
            arg4.o = __vxorps_xmmdq_xmmdq_xmmdq(arg4.o, arg4.o)
            int32_t i_1
            
            do
                *(result - 0x10) = zmm0[0].o
                *result = arg4
                result += 0x30
                i_1 = i_2
                i_2 += 1
            while (i_1 != 0xffffffff)

_mm256_zeroupper()
return result
