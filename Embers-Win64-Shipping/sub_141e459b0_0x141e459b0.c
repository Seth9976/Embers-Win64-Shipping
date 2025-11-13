// 函数: sub_141e459b0
// 地址: 0x141e459b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e66300(arg1)
int64_t result = (*(*arg1 + 0x2b8))(arg1)
void* rdi = arg1[7]

if (rdi != 0)
    void* i = arg1[0x13]
    
    for (void* r15_2 = sx.q(arg1[0x14].d) * 0x98 + i; i != r15_2; i += 0x98)
        if (sub_141e4ba90(rdi, &data_143f398c8, i + 8) != 0)
            *(rdi + 0x268) += 1
            void* rbp_1 = *(rdi + 0x240)
            
            if (rbp_1 != 0)
                *(rdi + 0x250) = 0
                
                if (*(rdi + 0x254) s<= 0xffffffff)
                    sub_1405947f0(rdi + 0x248, 0)
                
                sub_141e5ced0(rbp_1, rdi + 0x248)
    
    int128_t var_28 = data_1439a9418
    int32_t rax_3 = sub_140cdd5d0(arg1, &var_28)
    
    if (rax_3 s>= 0xf)
        var_28 = data_1439a9418
        result = sub_140cdd5d0(rdi, &var_28)
    
    if (rax_3 s< 0xf || result.d s< 0xf)
        void* rbx_1 = arg1[0x13]
        result = sx.q(arg1[0x14].d)
        void* rbp_3 = result * 0x98 + rbx_1
        
        if (rbx_1 != rbp_3)
            void* rsi_1 = rbx_1 + 8
            
            do
                char rax_4 = sub_141e01870(rbx_1, 1)
                result = sub_141e01870(rbx_1, 8)
                
                if (rax_4 != 0 || result.b != 0)
                    result = sub_141e3aac0(rdi, *rsi_1, result.b, rax_4)
                
                rbx_1 += 0x98
                rsi_1 += 0x98
            while (rbx_1 != rbp_3)

return result
