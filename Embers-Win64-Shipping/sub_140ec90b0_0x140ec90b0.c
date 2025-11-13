// 函数: sub_140ec90b0
// 地址: 0x140ec90b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg4 + 0x70)
char rax_1

if (rsi != 0)
    int64_t rbx_1 = *rsi
    sub_140ec00f0()
    rax_1 = (*(rbx_1 + 0x58))(rsi, &data_143e29fe0)

int64_t* rsi_1

if (rsi == 0 || rax_1 == 0)
    rsi_1 = nullptr
    *arg2 = 0
else
    rsi_1 = *(arg4 + 0x78)
    void* rcx_1 = *(arg4 + 0x70)
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    if (rcx_1 == 0)
        *arg2 = 0
    else
        int64_t* rbx_2 = *(arg1 + 0x2d8)
        
        if (rbx_2 != 0)
            int32_t rax_2 = rbx_2[1].d
            
            if (rax_2 != 0)
                rbx_2[1].d = rax_2 + 1
                rax_2.b = 1
            
            if (rax_2.b == 0)
                rbx_2 = nullptr
        
        int64_t rax_3 = 0
        
        if (rbx_2 != 0)
            rax_3 = *(arg1 + 0x2d0)
        
        int64_t var_38 = rax_3
        int64_t* var_30_1 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        char rax_4 = sub_140eadaa0(rcx_1, &var_38, 0)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                int64_t rdx_1 = *rbx_2
                (*rdx_1)(rbx_2, rdx_1)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
            
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (rax_4 == 0)
            *arg2 = 0
        else
            *(arg1 + 0x2f0) = sub_140eaf5c0(arg1, arg3, arg4, arg1 + 0x2f4)
            *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp1_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

return arg2
