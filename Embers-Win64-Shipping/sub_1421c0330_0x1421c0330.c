// 函数: sub_1421c0330
// 地址: 0x1421c0330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(*arg2 + 8)
sub_140ce8e80(arg1, arg2)
(*(*rdi + 0x1d8))(rdi, &data_1439a9478)
uint32_t result
int512_t zmm0
int512_t zmm1
result, zmm0, zmm1 = sub_140b4e7c0(rdi, &data_1439a9478)

if (result s>= 8)
    int64_t r8_1 = rdi[0xe]
    bool result_1 = r8_1 != 0
    int64_t* r9_1 = *(*arg2 + 8)
    int64_t* rcx_2 = r9_1[1]
    int64_t rdx = *rcx_2
    int32_t arg_18
    
    if (rdx + 4 u> rcx_2[1])
        int32_t rax_5
        rax_5.b = r8_1 != 0
        arg_18 = rax_5
        (*(*r9_1 + 0x150))(r9_1, &arg_18, 4)
        result.b = arg_18 != 0
        result_1 = result.b
    else
        result_1 = *rdx != 0
        int64_t* rax_4 = r9_1[1]
        *rax_4 += 4
        result = zx.d(result_1)
    
    if (result.b != 0)
        return sub_142221160(arg1 + 0x118, arg2, zmm0, zmm1)
    
    if ((rdi[5].b & 1) != 0)
        arg_18.q = *(arg1 + 0x18)
        int16_t* var_18
        sub_140b63b70(&arg_18, &var_18)
        int16_t* const r9_2 = &data_142d40450
        int32_t var_10
        
        if (var_10 != 0)
            r9_2 = var_18
        
        zmm1 = sub_140af98a0("Unknown", 0x462, 
            This platform requires cooked packages, and this SubUV animation does not contain cooked "
        "data %s.", r9_2)
        int16_t* rcx_5 = var_18
        
        if (rcx_5 != 0)
            zmm1 = sub_140a74f90(rcx_5)
        
        result, zmm0 = sub_140afbb40()
        
        if (result_1 != 0)
            return sub_142221160(arg1 + 0x118, arg2, zmm0, zmm1)

return result
