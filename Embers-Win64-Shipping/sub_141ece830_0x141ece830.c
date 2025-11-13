// 函数: sub_141ece830
// 地址: 0x141ece830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x30) s<= 0)
    return 

int64_t rdi_1 = 0

do
    int64_t* rsi_2 = *(arg1 + 0x28) + rdi_1
    void* rax
    void* arg_8
    
    if (arg3 == 0)
        arg_8 = nullptr
        rax = nullptr
    else
        rax = *(arg3 + 0x28)
        arg_8 = rax
    
    if (rax == *rsi_2)
        rax = sub_141b71960(*(arg2 + 0x10), *rsi_2)
        
        if (rax == arg3)
            rax = (*(*rax + 0x140))(rax, sx.q(*(rax + 0x4c)) + arg2)
            void* rbx = rax
            
            if (rax != 0)
                rax = sub_141eb0bb0(*(rax + 0x10), rsi_2[1])
                
                if (rax != 0)
                    void var_38
                    sub_140d3a3a0(&var_38, nullptr)
                    int64_t var_30_1 = 0
                    sub_140d3a3a0(&var_38, arg2)
                    int64_t var_30_2 = rsi_2[2]
                    (*(*rax + 0x148))(rax, &var_38, rbx, 0)
            
            break
    
    i += 1
    rdi_1 += 0x18
while (i s< *(arg1 + 0x30))
