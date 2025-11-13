// 函数: sub_142c1ad40
// 地址: 0x142c1ad40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
uint32_t result = zx.d(arg1[3])
uint32_t rdi_1 = zx.d(arg1[2]) << 8
uint32_t rdi_2 = rdi_1 + result

if (rdi_1 == neg.d(result))
    result.b = 0
else if (rdi_2 != 1)
    void* r8_1 = &arg1[4]
    uint32_t rcx_3 = (zx.d(arg1[2]) << 8) + zx.d(arg1[3])
    int32_t var_128 = 0
    int32_t var_124 = 0
    
    if (rcx_3 u<= 1)
        r8_1 = &data_14369a5d0
    
    int32_t var_118[0x40]
    
    if (sub_142c22240(arg2, rdi_2, r8_1, sub_142c22220, 0, &var_124, &var_118, &var_128).b == 0)
        result.b = 0
    else
        int32_t* var_140_1
        var_140_1.d = var_128
        int64_t var_148_1
        var_148_1.d = (zx.d(*arg1) << 8) + zx.d(arg1[1])
        int64_t r15
        sub_142c21c80(arg2, rdi_2, &var_118, var_124, r15, var_148_1.d, var_140_1.b)
        result.b = 1
else
    sub_142c22da0(arg2, (zx.d(*arg1) << 8) + zx.d(arg1[1]))
    result.b = 1

__security_check_cookie(rax_1 ^ &var_168)
return result
