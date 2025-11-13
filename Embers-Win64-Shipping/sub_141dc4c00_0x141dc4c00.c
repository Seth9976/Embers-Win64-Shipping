// 函数: sub_141dc4c00
// 地址: 0x141dc4c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xec) == 0 & sub_140b5b8a0(arg1[0x1d].d, 0)) == 0)
    int32_t rbx_1 = *(arg1 + 0xec)
    sub_140b5b8a0(arg1[0x1d].d, 0x11a)
    int32_t rcx_1
    rcx_1.b = rbx_1 == 0

void* result = sub_141dcdc50(arg1)

if (result.d != 3 && (*(arg1 + 0x5b) & 1) != 0)
    void* rax_2 = (*(*arg1 + 0x150))(arg1)
    int64_t rdx_1 = *arg1
    result = sub_141dca020((*(rdx_1 + 0x150))(arg1, rdx_1), arg1[0x1d])
    void* result_1 = result
    
    if (result != 0)
        result = sub_142167fd0(result, arg1)
        void* rcx_7 = *(rax_2 + 0xf0)
        
        if (rcx_7 != 0 && rcx_7 != result_1)
            return sub_142167fd0(rcx_7, arg1)

return result
