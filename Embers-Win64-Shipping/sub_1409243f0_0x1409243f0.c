// 函数: sub_1409243f0
// 地址: 0x1409243f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = -1
void* rax_1
int64_t r8
rax_1, r8 = (*(*arg1 + 0x20))()
int32_t result

if (rax_1 != 0)
    (*(*arg1 + 0x28))(arg1, *(rax_1 + 0xb0))
    result, r8 = sub_1409389a0(arg1)
    result_1 = result

if (rax_1 == 0 || result != 0x3e5)
    if (arg3[1].d != 0)
        int64_t* rcx_2 = *arg3
        
        if (rcx_2 != 0)
            int64_t rdx_2 = *rcx_2
            char rax_3
            rax_3, r8 = (*(rdx_2 + 0x28))(rcx_2, rdx_2)
            
            if (rax_3 != 0)
                int64_t* rcx_3
                
                if (arg3[1].d == 0)
                    rcx_3 = nullptr
                else
                    rcx_3 = *arg3
                
                r8.b = result_1 == 0
                (*(*rcx_3 + 0x50))(rcx_3, arg2, r8)
    
    r8.b = result_1 == 0
    (*(*arg1 + 0x108))(arg1, arg2, r8)

if (result_1 != 0 && result_1 != 0x3e5)
    result.b = 0
    return result

result.b = 1
return result
