// 函数: sub_1408484f0
// 地址: 0x1408484f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2
int64_t rbp = 0
void* result = &rdi[arg2[1]]
uint64_t r12_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rdi u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            int32_t rax_2 = (*(*rbx_1 + 0x2c0))(rbx_1)
            
            if (rax_2 != 0)
                int64_t arg_18
                sub_140d3a3a0(&arg_18, rbx_1)
                void* rsi_1 = *arg1
                int32_t arg_10
                sub_1408506d0(rsi_1 + 0x100, &arg_10, arg_18)
                int64_t rcx_3 = sx.q(arg_10)
                int64_t rdx_2
                
                if (rcx_3.d == 0xffffffff)
                    rdx_2 = 0
                else
                    rdx_2 = *(rsi_1 + 0x100) + rcx_3 * 0x14
                
                int64_t rax_4 = rdx_2 + 8
                
                if (rdx_2 == 0)
                    rax_4 = 0
                
                if (rax_4 == 0)
                    void arg_20
                    sub_140d3a3a0(&arg_20, rbx_1)
                    int32_t* rax_5 = sub_140841880(*arg1 + 0x100, &arg_20)
                    *rax_5 = *arg1[1]
                    int32_t* rcx_9 = arg1[1]
                    *rcx_9 += (rax_2 + 0xf) & 0xfffffff0
            
            result = *arg1
            
            if ((*(result + 0x6b8) & 0x40) == 0)
                uint32_t rcx_11 = zx.d((*(*rbx_1 + 0x300))(rbx_1))
                result = *arg1
                *(result + 0x6b8) ^= (rcx_11 << 6 ^ *(result + 0x6b8)) & 0x40
        
        rdi = &rdi[1]
        rbp += 1
    while (rbp != r12_1)

return result
