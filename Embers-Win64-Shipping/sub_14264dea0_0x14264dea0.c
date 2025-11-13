// 函数: sub_14264dea0
// 地址: 0x14264dea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141edf050(arg1)
int64_t* rdi = arg1[0x14]

if (rdi != 0)
    result = (*(*rdi + 0x150))(rdi)
    
    if (result != 0)
        int64_t* rbx_1 = *(result + 0x120)
        
        if (rbx_1 != 0)
            void* rax_1 = sub_14269bba0()
            void* rcx_1 = rbx_1[2]
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s<= *(rcx_1 + 0x38))
                int64_t result_1 = result
                result = *(rcx_1 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_1 + 0x30)
                    return (*(*rbx_1 + 0x2f8))(rbx_1, rdi, result_1)

return result
