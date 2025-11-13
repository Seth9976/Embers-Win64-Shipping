// 函数: sub_141be0700
// 地址: 0x141be0700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result = *arg2
*(arg1 + 0x110) = result
int64_t* rbx = *(arg1 + 0xf0)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
    
    if (rbx != 0)
        int64_t* rcx = *(arg1 + 0xe8)
        
        if (rcx != 0)
            result = *(arg1 + 0x110)
            int64_t var_20 = 0
            int32_t var_18_1 = 0
            char var_28_1 = 1
            int128_t result_1 = result
            sub_140e92500(rcx, &rcx[0x65], &result_1, 2)
            result = sub_140745b20(&var_20)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    jump(*(*rbx + 8))

return result
