// 函数: sub_141734850
// 地址: 0x141734850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
int32_t arg_20 = 0x7f7fffff
int32_t arg_24 = 0x7f7fffff
int32_t r9 = 1
uint32_t zmm2[0x4]

do
    uint32_t zmm0[0x4]
    
    if (i != 0)
        zmm0 = *(arg3 + 4)
    else
        zmm0 = *arg3
    
    int32_t zmm1
    
    if (zmm0[0] f<= 0f)
        if (i != 0)
            zmm0 = *(arg3 + 4)
        else
            zmm0 = *arg3
        
        if (not(zmm0[0] f>= 0f))
            if (i != 0)
                zmm0 = arg2[1]
                zmm1 = arg1[1]
                goto label_1417348dd
            
            zmm0 = *arg2
            zmm1 = *arg1
            zmm2 = *arg3
            goto label_1417348e3
    else
        if (i != 0)
            zmm0 = arg1[3]
            zmm1 = arg2[1]
        label_1417348dd:
            zmm2 = *(arg3 + 4)
            goto label_1417348e3
        
        zmm0 = arg1[2]
        zmm1 = *arg2
        zmm2 = *arg3
    label_1417348e3:
        zmm0[0] = zmm0[0] f- zmm1
        zmm0[0] = zmm0[0] f* zmm2[0]
        (&arg_20)[i] = zmm0[0]
    
    if (r9 != 0)
        zmm0 = *(arg3 + 4)
    else
        zmm0 = *arg3
    
    if (zmm0[0] f<= 0f)
        if (r9 != 0)
            zmm0 = *(arg3 + 4)
        else
            zmm0 = *arg3
        
        if (not(zmm0[0] f>= 0f))
            if (r9 != 0)
                zmm0 = arg2[1]
                zmm1 = arg1[1]
                goto label_14173495e
            
            zmm0 = *arg2
            zmm1 = *arg1
            zmm2 = *arg3
            goto label_141734964
    else
        if (r9 != 0)
            zmm0 = arg1[3]
            zmm1 = arg2[1]
        label_14173495e:
            zmm2 = *(arg3 + 4)
            goto label_141734964
        
        zmm0 = arg1[2]
        zmm1 = *arg2
        zmm2 = *arg3
    label_141734964:
        zmm0[0] = zmm0[0] f- zmm1
        zmm0[0] = zmm0[0] f* zmm2[0]
        (&arg_24)[i] = zmm0[0]
    
    r9 += 2
    i += 2
while (i s< 2)

zmm2 = arg_20
uint32_t temp0[0x4] = __andps_xmmxud_memxud(arg_24, data_142d3f770)
uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm2, data_142d3f770)
return _mm_min_ss(temp0[0], temp0_1[0])
