// 函数: sub_141e2d6b0
// 地址: 0x141e2d6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2
int64_t rsi = 0
int64_t result = &rdi[arg2[1]]
uint64_t r14_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        result = *rdi
        void* rbx_1 = *(result + 8)
        
        if (rbx_1 != 0)
            void* rax_1
            int512_t zmm1_1
            rax_1, zmm1_1 = sub_1424682e0()
            int32_t arg_18 = 0xffffffff
            int32_t arg_1c = 0
            
            if (rax_1 != 0)
                int64_t arg_20
                sub_140d3a3a0(&arg_20, rax_1)
                arg_18.q = arg_20
            
            int32_t result_1
            sub_141ab41e0(rbx_1, &result_1, &arg_18)
            result = sx.q(result_1)
            void* rbx_2
            
            if (result.d == 0xffffffff)
                rbx_2 = nullptr
            else
                void* rcx_2 = *(rbx_1 + 0x100)
                
                if (rcx_2 != 0)
                    rbx_1 = rcx_2
                
                rbx_2 = rbx_1 + (result << 6)
            
            void* result_2 = rbx_2 + 8
            
            if (rbx_2 == 0)
                result_2 = nullptr
            
            if (result_2 != 0)
                int64_t rdx_2 = sx.q(*(result_2 + 0x28))
                
                if (rdx_2.d != 0)
                    result = *(result_2 + 0x20)
                    
                    if (result != 0)
                        result_2 = result
                    
                    int64_t* rcx_5 = *(result_2 + (rdx_2 << 3) - 8)
                    
                    if (rcx_5 != 0)
                        zmm1_1.o = *(arg1 + 0x34)
                        result = (*(*rcx_5 + 0xd0))(rcx_5, zmm1_1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return result
