// 函数: sub_1406c0470
// 地址: 0x1406c0470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x1d1) == 0
*(arg1 + 0x190) = arg2[0]
int64_t* result

if (not(cond:0))
    int64_t* result_1
    
    if (__andps_xmmxud_memxud(arg2, data_142d3f770)[0] f> 9.99999994e-09f)
        *(arg1 + 0x1b0) = 3
        result = j_sub_140a82f30(0x10)
        result_1 = result
        
        if (result != 0)
            result[1].d = 6
        label_1406c04e6:
            *result = 0
            void** rcx = *(arg1 + 0x1a0)
            *(arg1 + 0x1a0) = result
            *rcx = result
    else
        *(arg1 + 0x1b0) = 2
        result = j_sub_140a82f30(0x10)
        result_1 = result
        
        if (result != 0)
            result[1].d = 7
            goto label_1406c04e6

result.b = 1
return result
