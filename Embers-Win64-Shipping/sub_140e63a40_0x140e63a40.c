// 函数: sub_140e63a40
// 地址: 0x140e63a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg3 + 0x130)
int64_t rdi = sx.q(rax - 1)

if (rax - 1 s< 0)
label_140e63b23:
    *arg2 = 0
    arg2[1] = 0
else
    int64_t rsi_2 = rdi * 0x48
    
    while (true)
        void* rax_2 = *(arg3 + 0x128)
        void* rcx = arg3 + 8
        
        if (rax_2 != 0)
            rcx = rax_2
        
        int64_t* rbx_1 = *(rcx + rsi_2 + 0x40)
        int64_t var_38 = *(rcx + rsi_2 + 0x38)
        int64_t* var_30_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int32_t arg_18
        sub_140a73790(arg1 + 0x60, &arg_18, &var_38)
        int64_t rax_4 = sx.q(arg_18)
        void* const r8_1
        
        if (rax_4.d == 0xffffffff)
            r8_1 = nullptr
        else
            r8_1 = *(arg1 + 0x60) + rax_4 * 0x28
        
        int64_t* rcx_2 = r8_1 + 0x10
        
        if (r8_1 == 0)
            rcx_2 = nullptr
        
        if (rcx_2 != 0)
            *arg2 = *rcx_2
            void* rax_10 = rcx_2[1]
            arg2[1] = rax_10
            
            if (rax_10 != 0)
                *(rax_10 + 8) += 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            break
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1 && rbx_1 != 0)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi_2 -= 0x48
        int64_t temp1_1 = rdi
        rdi -= 1
        
        if (temp1_1 - 1 s< 0)
            goto label_140e63b23

return arg2
