// 函数: sub_142338980
// 地址: 0x142338980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int64_t* rbx_1
int64_t rdi

if (*(arg1 + 0x248) == 0)
    rbx_1 = 0.q
    rdi.b = 0
else
    rbx_1 = *(arg1 + 0x250)
    
    if (rbx_1 == 0)
        rbx_1 = 0.q
        rdi.b = 0
    else
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s<= 0)
            rbx_1 = 0.q
            rdi.b = 0
        else
            void* r8_1 = nullptr
            
            if (rbx_1 == 0)
                goto label_1423389c5
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rbx_1[1].d = rax_1 + 1
            label_1423389c5:
                
                if (rbx_1 != 0)
                    r8_1 = *(arg1 + 0x248)
            
            rsi = 1
            
            if (sub_140e19840(r8_1, arg2) == 0)
                rdi.b = 0
            else
                rdi = 1

if ((rsi & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t r8_2 = *rbx_1
        (*r8_2)(rbx_1, arg2, r8_2)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_3 = *rbx_1
            (*(r8_3 + 8))(rbx_1, 1, r8_3)

return zx.q(rdi.b)
