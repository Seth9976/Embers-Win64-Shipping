// 函数: sub_140e121f0
// 地址: 0x140e121f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    void* rax_1 = *(arg1 + 0x20)
    
    if (rax_1 != 0 && *(rax_1 + 8) s> 0)
        int64_t rdx = 0
        int64_t* r8_2 = (sx.q(arg3) << 4) + *(arg1 + 0x40)
        int64_t* rcx = r8_2[1]
        int64_t* rbx = rcx
        
        if (rcx != 0)
            int32_t rax_2 = rcx[1].d
            
            if (rax_2 != 0)
                rcx[1].d = rax_2 + 1
                rax_2.b = 1
            
            if (rax_2.b == 0)
                rcx = nullptr
                rbx = nullptr
        
        if (rbx != 0)
            rdx = *r8_2
        
        *arg2 = rdx
        arg2[1] = rcx
        
        if (rcx != 0)
            rcx[1].d += 1
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        return arg2

*arg2 = 0
arg2[1] = 0
return arg2
