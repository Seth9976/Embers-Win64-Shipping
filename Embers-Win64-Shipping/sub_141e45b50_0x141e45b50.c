// 函数: sub_141e45b50
// 地址: 0x141e45b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e66300(arg1)
(*(*arg1 + 0x2b8))(arg1)
void* rbx = arg1[7]

if (rbx != 0)
    void* i = arg1[0x13]
    
    for (void* r15_2 = sx.q(arg1[0x14].d) * 0x98 + i; i != r15_2; i += 0x98)
        if (sub_141e4ba90(rbx, &data_143f398c8, i + 8) != 0)
            *(rbx + 0x268) += 1
            void* rbp_1 = *(rbx + 0x240)
            
            if (rbp_1 != 0)
                *(rbx + 0x250) = 0
                
                if (*(rbx + 0x254) s<= 0xffffffff)
                    sub_1405947f0(rbx + 0x248, 0)
                
                sub_141e5ced0(rbp_1, rbx + 0x248)
    
    int128_t var_28 = data_1439a9418
    int32_t rax_3 = sub_140cdd5d0(arg1, &var_28)
    int32_t rax_4
    
    if (rax_3 s>= 0xf)
        var_28 = data_1439a9418
        rax_4 = sub_140cdd5d0(rbx, &var_28)
    
    if (rax_3 s< 0xf || rax_4 s< 0xf)
        void* rdi_1 = arg1[0x13]
        void* rbp_3 = sx.q(arg1[0x14].d) * 0x98 + rdi_1
        
        if (rdi_1 != rbp_3)
            int64_t* rsi_1 = rdi_1 + 8
            
            do
                char rax_6 = sub_141e01870(rdi_1, 1)
                char rax_7 = sub_141e01870(rdi_1, 8)
                
                if (rax_6 != 0 || rax_7 != 0)
                    sub_141e3aac0(rbx, *rsi_1, rax_7, rax_6)
                
                rdi_1 += 0x98
                rsi_1 = &rsi_1[0x13]
            while (rdi_1 != rbp_3)

int64_t* rax_9 = sub_1405f89a0(sub_141f88540())
int64_t r8_3 = *rax_9
int64_t result = (*(r8_3 + 0x98))(rax_9, arg1, r8_3)
void* rdi_2 = arg1[7]

if (rdi_2 != 0)
    void* rcx_11 = *(arg1[0x17] + 8)
    int64_t* i_1 = *(rcx_11 + 0x10)
    result = sx.q(*(rcx_11 + 0x18))
    
    for (void* r14_1 = i_1 + result * 0xc; i_1 != r14_1; i_1 += 0xc)
        result = sub_141e4ba90(rdi_2, &data_143f398c8, i_1)
        
        if (result.b != 0)
            *(rdi_2 + 0x268) += 1
            void* rbp_4 = *(rdi_2 + 0x240)
            
            if (rbp_4 != 0)
                int32_t rax_11 = *(rdi_2 + 0x254)
                *(rdi_2 + 0x250) = 0
                
                if (rax_11 s< 0 && rax_11 != 0)
                    sub_1405947f0(rdi_2 + 0x248, 0)
                
                result = sub_141e5ced0(rbp_4, rdi_2 + 0x248)

return result
