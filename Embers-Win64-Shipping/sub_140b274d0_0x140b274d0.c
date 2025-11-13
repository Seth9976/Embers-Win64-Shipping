// 函数: sub_140b274d0
// 地址: 0x140b274d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int16_t* rbx = arg1

while (true)
    if (iswalpha(*rbx) == 0 && iswdigit(*rbx) == 0)
        int16_t rcx_2 = *rbx
        
        if ((0xfffc & (rcx_2 - 0x2b)) != 0 || rcx_2 == 0x2c)
            int16_t result
            
            if (rcx_2 != 0x3a || rdi s<= 0)
                result.b = 0
            else
                int64_t rbx_1 = 0
                int64_t var_28 = 0
                int32_t rsi_1 = 0
                int64_t var_20_1 = 0
                int32_t rbp_1 = 0
                
                if (arg1 != 0 && *arg1 != 0)
                    if (rdi + 1 s> 0)
                        sub_1405947f0(&var_28, rdi + 1)
                        rbp_1 = var_20_1:4.d
                        rsi_1 = var_20_1.d
                        rbx_1 = var_28
                    
                    rsi_1 += rdi + 1
                    var_20_1.d = rsi_1
                    
                    if (rsi_1 s> rbp_1)
                        sub_140594770(&var_28)
                        rbp_1 = var_20_1:4.d
                        rsi_1 = var_20_1.d
                        rbx_1 = var_28
                    
                    UnDecorator::getReferenceType(rbx_1, arg1, rdi * 2)
                    *(rbx_1 + (sx.q(rsi_1) << 1) - 2) = 0
                
                if (arg2 == &var_28)
                    if (rbx_1 != 0)
                        sub_140a74f90(rbx_1)
                    
                    result.b = 1
                else
                    int64_t rcx_6 = *arg2
                    
                    if (rcx_6 != 0)
                        sub_140a74f90(rcx_6)
                    
                    *arg2 = rbx_1
                    result.b = 1
                    *(arg2 + 0xc) = rbp_1
                    arg2[1].d = rsi_1
            
            return result
    
    rdi += 1
    rbx = &rbx[1]
