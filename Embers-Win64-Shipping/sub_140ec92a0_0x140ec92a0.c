// 函数: sub_140ec92a0
// 地址: 0x140ec92a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg4 + 0x70)

if (rsi == 0)
    *arg2 = 0
else
    int64_t rbx_1 = *rsi
    sub_140ec01c0()
    
    if ((*(rbx_1 + 0x58))(rsi, &data_143e29fc8) == 0)
        *arg2 = 0
    else
        int64_t* rbx_2 = *(arg4 + 0x78)
        int64_t rsi_1 = *(arg4 + 0x70)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (rsi_1 == 0)
            *arg2 = 0
        else
            int64_t var_28 = *(arg1 + 0x3a0)
            void* rax_5 = *(arg1 + 0x3a8)
            void* var_20_1 = rax_5
            
            if (rax_5 != 0)
                *(rax_5 + 8) += 1
            
            int64_t* rsi_2 = *(arg1 + 0x398)
            void* const rcx_3 = nullptr
            
            if (rsi_2 != 0)
                int32_t rax_6 = rsi_2[1].d
                
                if (rax_6 != 0)
                    rsi_2[1].d = rax_6 + 1
                    rax_6.b = 1
                
                if (rax_6.b == 0)
                    rsi_2 = nullptr
                
                if (rsi_2 != 0)
                    rcx_3 = *(arg1 + 0x390)
            
            sub_140ec6c90(rcx_3, &var_28, arg3, arg4)
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t temp3_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
            
            *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
