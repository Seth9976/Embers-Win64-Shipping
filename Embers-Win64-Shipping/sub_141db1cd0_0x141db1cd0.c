// 函数: sub_141db1cd0
// 地址: 0x141db1cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** lpTlsValue_1 = TlsGetValue(*(arg1 + 8))
void*** lpTlsValue = lpTlsValue_1
int64_t* result

if (lpTlsValue_1 == 0)
    uint32_t rax
    
    if (data_143de5480 != lpTlsValue_1.b)
        rax.b = GetCurrentThreadId() == data_143de5470
    
    int128_t zmm6
    
    if (data_143de5480 == lpTlsValue_1.b || rax.b != 0)
        zmm6 = sub_1417ca770(1)
    
    void*** lpTlsValue_2 = j_sub_140a82f30(0x10)
    lpTlsValue = lpTlsValue_2
    
    if (lpTlsValue_2 == 0)
        lpTlsValue = nullptr
    else
        *lpTlsValue = &data_14323ae48
        char rax_1 = data_143de5480
        int64_t r14_1 = data_143ef8678
        int32_t var_74_1 = 0x447a0000
        int128_t var_18_1 = zmm6
        int64_t rcx_2
        
        if (rax_1 == 0)
            rcx_2 = 0
        else
            bool cond:0_1 = GetCurrentThreadId() != data_143de5470
            rax_1 = data_143de5480
            rcx_2.b = cond:0_1
        
        zmm6 = *(r14_1 + (rcx_2 << 2))
        int64_t r14_2 = data_143ef8690
        int64_t rcx_3
        
        if (rax_1 == 0)
            rcx_3 = 0
        else
            rcx_3.b = GetCurrentThreadId() != data_143de5470
        
        int32_t var_58_1 = 1
        int64_t zmm0_1
        zmm0_1.d = zmm6.q.d f* 0.0599999987f
        float var_64_1 = zmm6.d * 0.0250000004f
        zmm0_1.d = zmm0_1.d f* zmm6.d
        int16_t var_54_1 = 0
        int32_t var_38_1 = 0x3dcccccd
        char var_52_1 = 0
        int32_t var_60_1 = zmm0_1.d
        int32_t var_5c_1 = 0x3a378034
        int64_t var_50_1 = zmm6.d.q
        int32_t var_48_1 = (*(r14_2 + (rcx_3 << 2))).d
        int32_t var_40_1 = 0
        int32_t var_3c_1 = 0x3f0ccccd
        int32_t var_28_1 = 0x20
        int32_t var_44_1 = 1
        int32_t var_68 = 0
        int64_t var_30_1 = 0
        int32_t var_34_1 = 0x3f0ccccd
        lpTlsValue[1] = PxCreateCooking(0x3040000, 0.100000001f, &var_68)
    
    result = TlsSetValue(*(arg1 + 8), lpTlsValue)

if (lpTlsValue_1 != 0 || lpTlsValue != 0)
    result = (*lpTlsValue)[9](lpTlsValue)
    
    if (result != 0)
        (**result)(result)
        (*lpTlsValue)[0xa](lpTlsValue, 1)
        return TlsSetValue(*(arg1 + 8), nullptr)

return result
