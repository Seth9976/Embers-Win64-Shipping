// 函数: sub_141eb8d30
// 地址: 0x141eb8d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t* rdi = *arg2
uint64_t result = &rdi[arg2[1]]
uint64_t r14_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            result = zx.q((*(*rbx_1 + 0x4c8))(rbx_1) - 1)
            
            if ((result.d & 0xfffffffd) == 0)
                int32_t r15_1 = *(rbx_1 + 0xc)
                uint64_t result_1 = arg1 + 0x20
                int64_t rbp_1 = sx.q(*(result_1 + 0x28))
                int32_t rax_3 = (rbp_1 + 1).d
                *(result_1 + 0x28) = rax_3
                
                if (rax_3 s> *(result_1 + 0x2c))
                    sub_14083a280(result_1, rbp_1.d)
                
                result = *(result_1 + 0x20)
                
                if (result != 0)
                    result_1 = result
                
                *(result_1 + (rbp_1 << 2)) = r15_1
                *(arg1 + 0x1e) = 0
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return result
