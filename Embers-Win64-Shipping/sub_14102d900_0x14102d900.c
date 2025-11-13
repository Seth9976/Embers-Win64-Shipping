// 函数: sub_14102d900
// 地址: 0x14102d900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x34f0) != 1)
    *(arg1 + 0x3200) = 1
    *(arg1 + 0xa30) = 1
    *(arg1 + 0x34f0) = 1

uint64_t result = sub_14105a8e0(arg1 + 0x250, *(arg2 + 0x18), arg3, arg4)

if (*(arg1 + 0xa28) != arg2)
    *(arg1 + 0x3200) = 1
    sub_1405d16e0(arg1 + 0xa28, arg2)
    char rbp_1 = *(arg1 + 0x3200)
    void* rcx_2 = *(*(arg1 + 0xa28) + 0x20)
    
    if (*(rcx_2 + 0x28) == 0)
        result = sub_141026e90(rcx_2)
    else
        result = *(rcx_2 + 0x10)
    
    uint64_t result_1 = *(arg1 + 0x31f8)
    
    if (result_1 != result)
        *(arg1 + 0x31f8) = result
        result_1 = result
    label_14102d9ba:
        int64_t* rcx_4 = *(*(*(arg1 + 0x278) + 0x1c8) + 0x30)
        result = (*(*rcx_4 + 0xc8))(rcx_4, result_1)
        *(arg1 + 0x3200) = 0
    else if (rbp_1 != 0)
        goto label_14102d9ba

void* rdi_1 = *(arg2 + 0x18)

if (rdi_1 != 0)
    int32_t i = 0
    
    if (*(rdi_1 + 0x50) s> 0)
        int64_t r14_1 = 0
        
        do
            result = *(rdi_1 + 0x48)
            char rdx_2 = *(r14_1 + result)
            
            if (rdx_2 u< 0xff)
                void* rbp_2 = *(*(arg1 + 0x9d20) + (zx.q(rdx_2) << 3))
                result = *(rdi_1 + 0xc0)
                *(result + (r14_1 << 2))
                
                if (rbp_2 != 0)
                    result = sub_141030570(arg1, rdi_1, i, rbp_2)
            
            i += 1
            r14_1 += 1
        while (i s< *(rdi_1 + 0x50))

return result
