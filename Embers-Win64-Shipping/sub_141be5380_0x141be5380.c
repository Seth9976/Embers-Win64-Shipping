// 函数: sub_141be5380
// 地址: 0x141be5380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result = *arg2
*(arg1 + 0x168) = result
int64_t* rbx = *(arg1 + 0xf0)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
    
    if (rbx != 0)
        void* rdi_1 = *(arg1 + 0xe8)
        
        if (rdi_1 != 0)
            result = *(arg1 + 0x168)
            int64_t var_18 = 0
            int32_t var_10_1 = 0
            int64_t var_40 = 0
            int32_t var_38_1 = 0
            int128_t result_1 = result
            char var_20_1 = 1
            char var_48_1 = 1
            sub_140692f90(&var_40, &var_18)
            *(rdi_1 + 0x2f0) = 1
            *(rdi_1 + 0x2e0) = result
            sub_140692f90(rdi_1 + 0x2f8, &var_40)
            sub_140745b20(&var_40)
            result = sub_140745b20(&var_18)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    jump(*(*rbx + 8))

return result
