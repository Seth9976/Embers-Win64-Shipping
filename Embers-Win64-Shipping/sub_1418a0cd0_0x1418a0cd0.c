// 函数: sub_1418a0cd0
// 地址: 0x1418a0cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x60)

if (result == 0)
    return 0

result[1] = arg1
*result = &data_142fe8690
result[2].d = 0
*(result + 0x14) = 0
result[3].d = 0
InitializeCriticalSection(&result[4])
SetCriticalSectionSpinCount(&result[4], 0xfa0)
__builtin_memset(&result[9], 0, 0x18)
void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x30, 0)
var_18 = rax
int32_t var_10 = 3

if (rax != 0)
    rax[1] = result
    *rax = &data_142d42fd0
    rax[2] = sub_1418ad2f0
    rax[4] = sub_140a387b0()

void arg_10
result[0xb] = *sub_140a208a0(sub_140b18f30(), &arg_10, &var_18, zx.o(0))
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_1418a0ddf:
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
else
    void*** rcx_4 = var_18
    
    if (rcx_4 != 0)
        (*rcx_4)[7](rcx_4, 0)
        rax_5 = var_18
        
        if (rax_5 != 0)
            rax_5 = sub_140a84c80(rax_5, 0, 0)
            var_18 = rax_5
        
        int32_t var_10_1 = 0
        goto label_1418a0ddf
return result
