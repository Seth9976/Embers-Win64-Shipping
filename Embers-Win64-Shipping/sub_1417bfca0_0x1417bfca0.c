// 函数: sub_1417bfca0
// 地址: 0x1417bfca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2
int32_t result

if (*arg1 == *arg2 && arg1[1] == arg2[1])
    int64_t* r14_1 = *(arg2 + 8)
    int64_t* rcx = *(arg1 + 8)
    arg2.b = rcx != 0
    result.b = r14_1 != 0
    
    if (arg2.b == result.b)
        if (rcx == 0)
            result.b = 1
            return result
        
        int32_t rax_1 = (*(*rcx + 0x10))()
        int64_t rdx = *r14_1
        
        if (rax_1 == (*(rdx + 0x10))(r14_1, rdx))
            int64_t* rcx_2 = *(arg1 + 8)
            
            if ((*(*rcx_2 + 0x28))(rcx_2, *(rdi + 8)).b != 0)
                result.b = 1
                return result

result.b = 0
return result
