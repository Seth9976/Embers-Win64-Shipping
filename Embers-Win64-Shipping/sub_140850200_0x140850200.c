// 函数: sub_140850200
// 地址: 0x140850200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2
int64_t rbp = 0
void* result = &rdi[arg2[1]]
uint64_t r15_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rdi u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        int64_t arg_20
        sub_140d3a3a0(&arg_20, rbx_1)
        int32_t arg_10
        sub_1408506d0(arg1 + 0x100, &arg_10, arg_20)
        int64_t rax_1 = sx.q(arg_10)
        void* const rcx_2
        
        if (rax_1.d == 0xffffffff)
            rcx_2 = nullptr
        else
            rcx_2 = *(arg1 + 0x100) + rax_1 * 0x14
        
        int32_t* rax_3 = rcx_2 + 8
        
        if (rcx_2 == 0)
            rax_3 = nullptr
        
        int64_t rdx_4
        
        if (rax_3 == 0)
            rdx_4 = 0
        else
            rdx_4 = sx.q(*rax_3) + *(arg1 + 0xf0)
        
        result = (*(*rbx_1 + 0x330))(rbx_1, rdx_4, arg1, arg3)
        rdi = &rdi[1]
        rbp += 1
    while (rbp != r15_1)

return result
