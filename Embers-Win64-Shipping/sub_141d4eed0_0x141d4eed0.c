// 函数: sub_141d4eed0
// 地址: 0x141d4eed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)
int32_t result

if (rcx != 0)
    int64_t* rax_1 = (*(*rcx + 0x10))(rcx)
    int64_t rdx_1 = *rax_1
    
    if ((*(rdx_1 + 0x18))(rax_1, rdx_1) != 0)
        int64_t* rcx_2 = *(arg1 + 0x130)
        int64_t* rax_3 = (*(*rcx_2 + 0x10))(rcx_2)
        int64_t rdx_2 = *rax_3
        
        if ((*(rdx_2 + 0x18))(rax_3, rdx_2) != 1)
            int64_t* rcx_4 = *(arg1 + 0x130)
            int64_t* rax_5 = (*(*rcx_4 + 0x10))(rcx_4)
            int64_t rdx_3 = *rax_5
            
            if ((*(rdx_3 + 0x18))(rax_5, rdx_3) != 4)
                result.b = 1
                return result

result.b = 0
return result
