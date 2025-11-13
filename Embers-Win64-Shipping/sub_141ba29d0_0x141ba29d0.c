// 函数: sub_141ba29d0
// 地址: 0x141ba29d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141edf050(arg1)
int64_t* rcx = data_143e29f28

if (rcx != 0)
    result = arg1[0x40]
    
    if (result != 0)
        sub_140e8d1f0(rcx, *(result + 8))
        void var_18
        result = &var_18
        
        if (&arg1[0x40] != &var_18)
            result = nullptr
            arg1[0x40] = 0
            int64_t* rbx_1 = arg1[0x41]
            
            if (rbx_1 != 0)
                arg1[0x41] = 0
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        return (*(*rbx_1 + 8))(rbx_1, 1)

return result
