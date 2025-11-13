// 函数: sub_14233e950
// 地址: 0x14233e950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg2 + 4)
int32_t result = sub_140e69970(data_143e29f28)

if (rbx == result)
    *(arg1 + 0x1b5) = 0
    *(arg1 + 0x1d1) = 0
    result = sub_142334c50(arg1 + 0xc8, 0)
    int64_t* rcx_2 = *(arg1 - 0x98)
    
    if (rcx_2 != 0)
        int64_t r8_1 = *rcx_2
        void* rdx = arg1 - 0xc8
        
        if (arg1 == 0xd0)
            rdx = nullptr
        
        return (*(r8_1 + 0xc8))(rcx_2, rdx, r8_1, 0)

return result
