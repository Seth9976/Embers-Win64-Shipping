// 函数: sub_1426b5e50
// 地址: 0x1426b5e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 != 0)
    void* rax = sub_14272def0()
    void* rcx = *(arg2 + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (result << 3)) == rax + 0x30)
        result = *(arg2 + 0x30)
        void* rdx_1 = *(arg1 + 0x30)
        
        if (result == rdx_1)
            result.b = 1
            return result
        
        if (result != 0)
            int64_t r8_2 = result + 0x30
            result = sx.q(*(result + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result << 3)) == r8_2)
                result.b = 1
                return result

result.b = 0
return result
