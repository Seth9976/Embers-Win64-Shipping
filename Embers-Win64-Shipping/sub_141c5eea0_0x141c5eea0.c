// 函数: sub_141c5eea0
// 地址: 0x141c5eea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x7d0)
int64_t rdi = 0
int32_t r9 = 0
int64_t rdx = 0

while (true)
    int64_t* rbx
    
    if (arg3 != *rax)
        r9 += 1
        rdx += 1
        rax = &rax[1]
        
        if (rdx s< 3)
            continue
        else
            rbx = nullptr
        
        goto label_141c5eeea
    
    int64_t* rax_7 = (sx.q(r9) << 4) + *(arg1 + 0x7e0)
    rbx = rax_7[1]
    int64_t rcx_1 = *rax_7
    
    if (rbx != 0)
        rbx[1].d += 1
    
    if (rcx_1 == 0)
    label_141c5eeea:
        int32_t arg_20
        sub_1405ba560(arg1 + 0x980, &arg_20, arg3)
        int64_t rax_1 = sx.q(arg_20)
        int64_t rax_2
        void* rax_3
        
        if (rax_1.d != 0xffffffff)
            rax_2 = rax_1 << 5
            rax_3 = rax_2 + *(arg1 + 0x980)
        
        int64_t* rax_4
        int64_t* r14_1
        
        if (rax_1.d == 0xffffffff || rax_2 == neg.q(*(arg1 + 0x980)))
            rax_4 = nullptr
            r14_1 = nullptr
        else
            rdi = *(rax_3 + 8)
            rax_4 = *(rax_3 + 0x10)
            
            if (rax_4 != 0)
                rax_4[1].d += 1
            
            r14_1 = rax_4
        
        *arg2 = rdi
        arg2[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 0xc) += 1
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**r14_1)(r14_1)
                int32_t rax_10 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (rax_10 == 1)
                    (*(*r14_1 + 8))(r14_1, 1)
        
        if (rbx == 0)
            break
    else
        *arg2 = rcx_1
        arg2[1] = rbx
        
        if (rbx == 0)
            break
        
        *(rbx + 0xc) += 1
        
        if (rbx == 0)
            break
    
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))
    
    break

return arg2
