// 函数: sub_1422f7d80
// 地址: 0x1422f7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if ((*(arg2 + 0x497c) & 0x40) != 0)
label_1422f7e20:
    *arg1 = *(arg2 + 0x60c)
    arg1[1].d = *(arg2 + 0x614)
    *(arg1 + 0xc) = *(arg2 + 0x60c)
    *(arg1 + 0x14) = *(arg2 + 0x614)
    int32_t zmm0_1
    zmm0_1, result = sub_1422e4ef0(arg2)
    arg1[3].d = zmm0_1
    *(arg1 + 0x1c) = zmm0_1
    arg1[4].d = arg3.d
    *(arg1 + 0x24) = arg3.d
    arg1[5].d = 0
else
    result = data_143f55488
    int32_t zmm1 = *(result + 4)
    int64_t zmm0
    zmm0.d = arg3.q.d f- zmm1
    arg1[5].d = zmm1
    int32_t zmm3 = *(arg1 + 0x24)
    
    if (not(zmm3 f>= zmm0.d))
        if (not(zmm3 f<= arg1[4].d))
            int32_t rax_1 = *(arg1 + 0x14)
            *arg1 = *(arg1 + 0xc)
            arg1[1].d = rax_1
            arg1[3].d = *(arg1 + 0x1c)
            arg1[4].d = zmm3
        
        *(arg1 + 0xc) = *(arg2 + 0x60c)
        *(arg1 + 0x14) = *(arg2 + 0x614)
        zmm0, result = sub_1422e4ef0(arg2)
        bool cond:1_1 = arg3.d f> arg1[4].d
        *(arg1 + 0x1c) = zmm0.d
        *(arg1 + 0x24) = arg3.d
        
        if (not(cond:1_1))
            goto label_1422f7e20

return result
