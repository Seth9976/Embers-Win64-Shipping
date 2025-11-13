// 函数: sub_141ece730
// 地址: 0x141ece730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x30) s<= 0)
    return 

int64_t rdi_1 = 0

do
    int64_t* rsi_1 = *(arg1 + 0x28)
    void* rax = sub_141b71960(*(arg2 + 0x10), *(rsi_1 + rdi_1))
    
    if (rax != 0)
        int64_t r8_1 = *rax
        rax = (*(r8_1 + 0x140))(rax, sx.q(*(rax + 0x4c)) + arg2, r8_1)
        void* rbp_1 = rax
        
        if (rax != 0)
            rax = sub_141eb0bb0(*(rax + 0x10), *(rsi_1 + rdi_1 + 8))
            
            if (rax != 0)
                void var_38
                sub_140d3a3a0(&var_38, nullptr)
                int64_t var_30_1 = 0
                sub_140d3a3a0(&var_38, arg2)
                int64_t var_30_2 = *(rsi_1 + rdi_1 + 0x10)
                (*(*rax + 0x148))(rax, &var_38, rbp_1, 0)
    
    i += 1
    rdi_1 += 0x18
while (i s< *(arg1 + 0x30))
