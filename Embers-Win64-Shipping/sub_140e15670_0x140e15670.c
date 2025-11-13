// 函数: sub_140e15670
// 地址: 0x140e15670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140e1ad30(&arg_8, arg2, arg3)
int64_t rsi = 0
int64_t rbx = arg_8

if (*(arg1 + 0x220) == *(arg1 + 0x24c))
    goto label_140e15710

int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
void* r8 = arg1 + 0x250
void* rcx_2 = *(r8 + 8)

if (rcx_2 != 0)
    r8 = rcx_2

int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x260)) - 1) & sx.q(rax_2)) << 2))
int64_t rdi_1
bool cond:1_1

if (rax_4 == 0xffffffff)
label_140e1570b:
    rbx = arg_8
label_140e15710:
    rdi_1 = 0
label_140e1571f:
    int64_t* rbx_1
    
    if (*(arg1 + 0x310) == *(arg1 + 0x33c))
    label_140e15780:
        rbx_1 = nullptr
    label_140e15783:
        
        if (rbx_1 != 0)
            int32_t rax_10 = rbx_1[1].d
            
            if (rax_10 != 0)
                rbx_1[1].d = rax_10
                
                if (rsi == 0)
                    rsi = rdi_1
                
                rdi_1 = rsi
                
                if (rax_10 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rbx_1 != 0)
                int32_t temp0_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp0_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        int32_t rax_7 = sub_140b5ead0(rbx.d) + rbx:4.d
        void* r8_2 = arg1 + 0x340
        void* rcx_5 = *(r8_2 + 8)
        
        if (rcx_5 != 0)
            r8_2 = rcx_5
        
        int32_t rax_9 = *(r8_2 + (((sx.q(*(arg1 + 0x350)) - 1) & sx.q(rax_7)) << 2))
        
        if (rax_9 == 0xffffffff)
            goto label_140e15780
        
        int64_t r8_3 = *(arg1 + 0x308)
        int64_t rdx_7
        
        while (true)
            rdx_7 = sx.q(rax_9)
            int64_t rcx_7 = rdx_7 << 5
            
            if (*(rcx_7 + r8_3) == rbx)
                break
            
            rax_9 = *(rcx_7 + r8_3 + 0x18)
            
            if (rax_9 == 0xffffffff)
                goto label_140e15780
        
        if (rax_9 == 0xffffffff)
            goto label_140e15780
        
        int64_t rdx_8 = rdx_7 << 5
        void* rdx_9 = rdx_8 + r8_3
        
        if (rdx_8 == neg.q(r8_3))
            goto label_140e15780
        
        rbx_1 = *(rdx_9 + 0x10)
        rsi = *(rdx_9 + 8)
        
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
            goto label_140e15783
    cond:1_1 = rdi_1 != 0
else
    int64_t r8_1 = *(arg1 + 0x218)
    int64_t rdx_3
    
    while (true)
        rdx_3 = sx.q(rax_4)
        int64_t rcx_3 = rdx_3 * 3
        
        if (*(r8_1 + (rcx_3 << 3)) == rbx)
            break
        
        rax_4 = *(r8_1 + (rcx_3 << 3) + 0x10)
        
        if (rax_4 == 0xffffffff)
            goto label_140e1570b
    
    if (rax_4 == 0xffffffff)
        goto label_140e1570b
    
    void* rdi_2 = r8_1 + rdx_3 * 0x18
    
    if (rdi_2 == 0)
        goto label_140e1570b
    
    rdi_1 = *(rdi_2 + 8)
    cond:1_1 = rdi_1 != 0
    
    if (rdi_1 == 0)
        rbx = arg_8
        goto label_140e1571f

if (cond:1_1)
    return rdi_1

return arg4
