// 函数: sub_14089d2d0
// 地址: 0x14089d2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dbb100(arg1)
int64_t var_28 = 0
int32_t i = 0
int32_t var_18 = 0xffffffff
void* result = sub_140d3cc80(sub_1408a1550(), &var_28, 1, 0x10, 0)
int32_t result_1 = var_18 + 1
int32_t result_2 = result_1
int64_t rcx_1 = var_28

if (result_1 s< i)
    do
        result = sx.q(result_1)
        
        if (*(rcx_1 + (result << 3)) != 0)
            break
        
        result = zx.q(result_1 + 1)
        result_1 = result.d
        int32_t var_18_1 = result.d
    while (result.d s< i)

if (result_1 s>= 0 && result_1 s< i)
    result = sx.q(result_1)
    arg1[0x44] = *(rcx_1 + (result << 3))

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1)
