// 函数: sub_140eca460
// 地址: 0x140eca460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg4 + 0x70)

if (r14 == 0)
    *arg2 = 0
else
    int64_t rbx_1 = *r14
    sub_140ec01c0()
    
    if ((*(rbx_1 + 0x58))(r14, &data_143e29fc8) == 0)
        *arg2 = 0
    else
        int64_t* rbx_2 = *(arg4 + 0x78)
        int64_t rbp_1 = *(arg4 + 0x70)
        
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
        
        if (rbp_1 == 0)
            *arg2 = 0
        else
            int64_t* rsi_1 = *(arg1 + 0x398)
            void* rcx_3 = nullptr
            
            if (rsi_1 != 0)
                int32_t rax_4 = rsi_1[1].d
                
                if (rax_4 != 0)
                    rsi_1[1].d = rax_4 + 1
                    rax_4.b = 1
                
                if (rax_4.b == 0)
                    rsi_1 = nullptr
                
                if (rsi_1 != 0)
                    rcx_3 = *(arg1 + 0x390)
            
            sub_140ec6e00(rcx_3, arg5, arg3)
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp3_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
            
            *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
