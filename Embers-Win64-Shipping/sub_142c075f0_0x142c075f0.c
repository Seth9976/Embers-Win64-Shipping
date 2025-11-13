// 函数: sub_142c075f0
// 地址: 0x142c075f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x2c) & 0xfffffffd

if (result != 4)
    void* rbx_1 = arg1[3]
    int32_t r15_1 = *(*arg1 + 0xac)
    result = *(rbx_1 + 0x60)
    void* rbp_1 = *(rbx_1 + 0x10)
    int32_t* rbx_2 = *(rbx_1 + 0x70)
    
    if (result != 0)
        uint64_t rsi_1 = zx.q(result)
        uint64_t i
        
        do
            result = (*(rbp_1 + 0x30))(rbp_1, zx.q(*rbx_2), *(rbp_1 + 0x70))
            int32_t result_1 = result
            
            if (result == *rbx_2)
                rbx_2[1] |= r15_1
            else
                void* rcx_1 = arg1[1]
                int32_t arg_8 = 0
                void* r10_1 = *(rcx_1 + 0x40)
                result = (*(r10_1 + 0x130))(rcx_1, *(rcx_1 + 0x48), zx.q(result), &arg_8, 
                    *(r10_1 + 0x20))
                
                if (result == 0)
                    rbx_2[1] |= r15_1
                else
                    *rbx_2 = result_1
            
            rbx_2 = &rbx_2[5]
            i = rsi_1
            rsi_1 -= 1
        while (i != 1)

return result
