// 函数: sub_1426f9dc0
// 地址: 0x1426f9dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(arg1 + 0xf0)
void* rsi = nullptr
char r12 = result.b
int32_t result_1

if (arg2 != 0)
    int64_t r8_1 = *arg2
    void* rbp_1 = nullptr
    void* rax = (*(r8_1 + 8))(arg2, arg3, r8_1)
    void* rax_1 = sub_140d41340()
    void* rcx_2 = *(rax + 0x10)
    int64_t rdx = sx.q(*(rax_1 + 0x38))
    
    if (rdx.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx << 3)) == rax_1 + 0x30)
        rbp_1 = rax
    
    sub_140d3a3a0(&result_1, rbp_1)
    
    if (*(arg1 + 0xf0) != result_1 || *(arg1 + 0xf4) != arg4)
        if (sub_140d3e110(arg1 + 0xf0).b != 0)
            result.b = 0
        else if (sub_140d3e110(&result_1).b != 0)
            result.b = 0
        else
            result.b = 1
    else
        result.b = 1
    
    if (result.b != 0)
        result = (*(*arg2 + 0x50))(arg2, arg1)
        *(arg1 + 0xf0) = 0xffffffff
        *(arg1 + 0xf4) = 0

if (*(arg1 + 0x278) == 0)
    char rax_5 = sub_140d3e110(arg1 + 0xf0)
    void* rax_6 = *(arg1 + 0xa8)
    
    if (rax_6 == 0)
        rax_6 = sub_141ee69e0(arg1)
    
    result = sub_1426fbe40(rax_6)
    uint64_t result_2 = result
    
    if (r12 != 0 && rax_5 == 0 && result != 0)
        sub_140ba6bd0(result_2 + 0x78, &result_1, sub_140d21950(arg1, sub_142736f50()))
        result = sx.q(result_1)
        
        if (result.d != 0xffffffff)
            int64_t rax_9 = result * 0x38
            result = rax_9 + *(result_2 + 0x78)
            
            if (rax_9 != neg.q(*(result_2 + 0x78)))
                rsi = result + 8
        
        int32_t* rcx_13 = *(result_2 + 0xd8)
        
        if (rcx_13 != 0 && rsi != 0)
            int32_t rdx_5 = *(rsi + 0x18)
            
            if (rdx_5 s>= 0)
                return sub_1426163a0(rcx_13, rdx_5)

return result
