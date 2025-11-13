// 函数: sub_142ac3450
// 地址: 0x142ac3450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2 & 0xfffffff

if (result != 0)
    if (arg2 == result)
        int64_t rax = *(arg1 + 8)
        uint64_t rdx = zx.q(arg2)
        void* rcx = rax + (rdx << 2)
        
        if (*(rax + (rdx << 2)) != 3 || *(rcx + 4) != 0x2205 || *(rcx + 6) != 0x2205
                || *(rcx + 8) != 0x2205)
            return 0
        
        int64_t rax_1
        rax_1.b = 1
        return 0x2201
    
    if ((arg2 & 0xf0000000) == 0x60000000)
        int32_t rcx_1 = *(arg1 + 0x30)
        int64_t rax_3
        uint64_t result_1
        
        if (result s>= rcx_1)
            result_1 = zx.q(result - rcx_1)
            rax_3 = *(arg1 + 0x10)
        else
            result_1 = zx.q(result)
            rax_3 = *(arg1 + 0x28)
        
        int16_t* rdx_2 = rax_3 + (result_1 << 1)
        uint32_t rcx_2 = zx.d(*rdx_2)
        
        if (rcx_2 == 0x2205)
            if (rdx_2[1] != 0x2205 || rdx_2[2] != 0x2205 || rdx_2[3] != 0)
                return 0
            
            result.b = 1
            return 0x2201
        
        if (rcx_2 == 0xdc03)
            if (rdx_2[1] != 0x2205 || rdx_2[2] != 0x2205 || rdx_2[3] != 0x2205)
                return 0
            
            result.b = 1
            return 0x2201

result.b = 0
return result
