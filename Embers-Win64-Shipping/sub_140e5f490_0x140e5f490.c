// 函数: sub_140e5f490
// 地址: 0x140e5f490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x2b8)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x2c0)) * 2]; i != rsi_2; i = &i[2])
    void* rcx = *i
    
    if (rcx != 0)
        int64_t var_18 = *arg2
        void* rax_2 = arg2[1]
        void* var_10_1 = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
            rcx = *i
        
        if (sub_140e5efb0(rcx, &var_18) != 0)
            int64_t* rbx_1 = arg2[1]
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            return 1

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return 0
