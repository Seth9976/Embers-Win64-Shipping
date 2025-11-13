// 函数: sub_141e64620
// 地址: 0x141e64620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1

if (result != 0)
    void* rcx = arg1[0x18]
    char rdx_1 = *(rcx + 0x181)
    
    if ((rdx_1 & 4) != 0 && ((rdx_1 & 8) != 0 || *(result + 0x220) s> 0))
        result.b = 1
        return result
    
    if (sub_141dce670(rcx).b != 0 && (data_143f39934 == 0 || (*(*arg1 + 0x16d) & 1) != 0))
        result.b = 1
        return result
    
    int64_t rdx_2 = arg1[0x24]
    arg1[2].d
    
    if (rdx_2 != 0)
        void* rcx_1 = *(arg1[0x18] + 0x50)
        
        if ((*(rcx_1 + 0x358) & 0x10) != 0)
            int64_t* rcx_2 = *(rcx_1 + 0x60)
            (*(*rcx_2 + 8))(rcx_2, rdx_2)
    
    float zmm0_1
    float zmm6_1
    zmm0_1, result, zmm6_1 = sub_141e5f830(arg1)
    
    if (zmm0_1 * zmm6_1 f* arg1[0x19].d f* arg1[0x1a].d f* *(arg1 + 0xcc) > 9.99999975e-05f)
        result.b = 1
        return result
    
    if (sub_141c3c770(arg1[0x18] + 0x1ac).b != 0)
        result.b = 1
        return result

result.b = 0
return result
