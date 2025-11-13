// 函数: sub_140e589e0
// 地址: 0x140e589e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ed7710
int64_t* rsi = data_143e29f28

if (rsi != 0)
    int64_t rbp_1 = sx.q(arg1[1].d)
    
    if (rbp_1.d s< rsi[0x58].d)
        sub_140e5ad70(rsi, rbp_1.d, 2)
        int64_t* rax_3 = (rbp_1 << 4) + rsi[0x57]
        void var_18
        
        if (rax_3 != &var_18)
            *rax_3 = 0
            int64_t* rbx_1 = rax_3[1]
            
            if (rbx_1 != 0)
                rax_3[1] = 0
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rcx_3 = rsi[0x93]
        (*(*rcx_3 + 0x28))(rcx_3, zx.q(rbp_1.d))

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
