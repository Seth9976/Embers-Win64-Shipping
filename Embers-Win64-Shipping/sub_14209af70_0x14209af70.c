// 函数: sub_14209af70
// 地址: 0x14209af70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143de543c = 0
data_143de5440 = 0
*(arg1 + 0x20) = 0x3f800000
*(arg1 + 0x24) = 0
int16_t* rdi

if (arg2[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *arg2

if (sub_1423dd3b0(rdi, arg3, &data_143de543c, &data_143de5440, arg1 + 0x20, arg1 + 0x10, 
        arg1 + 0x28, arg1 + 0x2a, arg1 + 0x41, arg1 + 0x48, arg1 + 0x29) != 0)
    uint64_t r8_1 = zx.q(data_1439c7a78)
    uint64_t rax_3 = zx.q(data_143de5440)
    int32_t rcx_1 = (int.q(float.s(zx.q(data_143de543c)) f* *(arg1 + 0x20))).d
    data_143de543c = rcx_1
    int32_t result = (int.q(float.s(rax_3) f* *(arg1 + 0x20))).d
    data_143de5440 = result
    
    if (rcx_1 u<= r8_1.d && result u<= r8_1.d)
        data_143de5438 = 1
        result.b = 1
        return result
    
    sub_140b1f700(arg3, Error: Screenshot size exceeds the maximum allowed texture size (%d x %d)", 
        r8_1)

return 0
