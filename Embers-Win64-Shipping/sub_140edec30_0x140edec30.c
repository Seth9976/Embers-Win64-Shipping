// 函数: sub_140edec30
// 地址: 0x140edec30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* var_28 = nullptr
int32_t var_20 = 0
sub_140ebf760(arg1, &arg_8, &var_28)
int32_t rsi = arg_8

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0x158))
        break
    
    int64_t rdx_1 = *(arg1 + 0x150)
    int64_t rax_2 = sx.q(i) << 5
    
    if (*(rax_2 + rdx_1 + 0x10) != 0)
        int64_t* rbx_1 = *(rax_2 + rdx_1 + 0x18)
        
        if (rbx_1 != 0)
            int32_t rcx = rbx_1[1].d
            
            if (rcx s> 0)
                arg_8 = 0
                void* r9_1 = nullptr
                
                if (rbx_1 != 0)
                    if (rcx == 0)
                        rbx_1 = nullptr
                    else
                        rbx_1[1].d = rcx + 1
                        
                        if (rbx_1 != 0)
                            r9_1 = *(rax_2 + rdx_1 + 0x10)
                
                sub_140ebf760(r9_1, &arg_8, &var_28)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp4_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                rsi += arg_8

int32_t rax_6 = *(arg1 + 0x218)
int32_t result_1 = *(arg1 + 0x21c)

if (rax_6 s>= rsi)
    rsi = rax_6

*(arg1 + 0x218) = rsi
int32_t rsi_1 = var_20
int32_t result = rsi_1

if (result_1 s>= rsi_1)
    result = result_1

*(arg1 + 0x21c) = result
void* rbp_1 = var_28

if (rsi_1 != 0)
    int64_t* rdi = rbp_1 + 8
    int32_t i_1
    
    do
        int64_t* rbx_2 = *rdi
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi = &rdi[2]
        i_1 = rsi_1
        rsi_1 -= 1
    while (i_1 != 1)

if (rbp_1 == 0)
    return result

return sub_140a74f90(rbp_1) __tailcall
