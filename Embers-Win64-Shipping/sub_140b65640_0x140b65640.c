// 函数: sub_140b65640
// 地址: 0x140b65640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
uint64_t result

if (arg1 == 0 || arg2 == 0)
    result = 0
else
    uint32_t result_1 = 0
    
    if (arg3 == 0)
        if (zx.d(data_143e19e3e) == 0)
            sub_140b66780()
        
        uint32_t FramesToCapture
        
        if (data_1439a9630 u> arg2)
            FramesToCapture = arg2
        else
            FramesToCapture = data_1439a9630
        
        int64_t BackTrace[0x80]
        uint16_t result_2 = RtlCaptureStackBackTrace(0, FramesToCapture, &BackTrace, nullptr)
        result_1 = zx.d(result_2)
        int16_t var_424_1 = 0
        
        while (zx.d(var_424_1) s< zx.d(result_2))
            *(arg1 + (zx.q(var_424_1) << 3)) = BackTrace[zx.q(var_424_1)]
            var_424_1 += 1
        
        while (zx.d(result_2) u< arg2)
            *(arg1 + (zx.q(result_2) << 3)) = 0
            result_2 += 1
    else
        sub_140b6e100()
        sub_140b657b0(arg1, arg2, arg3, &result_1)
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_448)
return result
