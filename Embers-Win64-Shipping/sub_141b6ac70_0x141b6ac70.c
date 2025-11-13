// 函数: sub_141b6ac70
// 地址: 0x141b6ac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg2
int32_t result_1
sub_140865c40(&arg1[0x17], &result_1, rsi)
int64_t result_2 = sx.q(result_1)
void* rcx_1

if (result_2.d != 0xffffffff)
    rcx_1 = arg1[0x17] + result_2 * 0x18

if (result_2.d == 0xffffffff || rcx_1 == 0 || *(rcx_1 + 8) == 0)
    void* rax_1 = arg2[1]
    int64_t var_38 = rsi
    void* var_30_1 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    (*(*arg1 + 0x20))(arg1, &var_38)

sub_140865c40(&arg1[0x17], &result_1, *arg2)
int64_t result = sx.q(result_1)

if (result.d != 0xffffffff)
    int64_t r8_2 = result * 3
    result = arg1[0x17]
    int64_t rbx_1 = result + (r8_2 << 3)
    
    if (rbx_1 != 0)
        void* rbx_2 = *(rbx_1 + 8)
        
        if (rbx_2 != 0)
            char rax_3 = sub_140e1abc0()
            int32_t rbp_1 = data_143a30330
            void* rcx_5 = data_143f5b298
            
            if (arg3 != 0)
                rbp_1 = arg3
            
            int32_t r15_1 = data_143a30334
            
            if (arg4 != 0)
                r15_1 = arg4
            
            int64_t rsi_1
            
            if (rcx_5 == 0 || *(rcx_5 + 0xb08) == 0)
                rsi_1.b = 0
            else
                int64_t* rcx_6 = *(rcx_5 + 0xaf8)
                
                if (rcx_6 == 0)
                    rsi_1.b = 0
                else if ((*(*rcx_6 + 8))(rcx_6) == 0)
                    rsi_1.b = 0
                else
                    rsi_1.b = 1
            
            int64_t* rcx_7 = *(*arg2 + 0x910)
            
            if ((*(*rcx_7 + 0x68))(rcx_7) == 1 || rsi_1.b != 0)
                rbp_1 = *(rbx_2 + 0xa0)
                r15_1 = *(rbx_2 + 0xa4)
            
            result = sub_141b50d60(arg1, rbx_2, rbp_1, r15_1, rax_3)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_3 + 8))

return result
