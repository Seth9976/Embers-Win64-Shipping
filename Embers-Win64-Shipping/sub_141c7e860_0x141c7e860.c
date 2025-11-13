// 函数: sub_141c7e860
// 地址: 0x141c7e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t rbx = *arg4
void* const rcx_3

if (*(arg1 + 0xc0) == *(arg1 + 0xec))
label_141c7e910:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = arg1 + 0xf0
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x100)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141c7e910_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0xb8)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            rcx_3 = r8_1 + (rdx_3 << 2)
            
            if (*(r8_1 + (rdx_3 << 2)) == rbx)
                break
            
            rax_4 = *(rcx_3 + 0xc)
            
            if (rax_4 == 0xffffffff)
                goto label_141c7e910_2
        
        if (rax_4 == 0xffffffff)
        label_141c7e910_2:
            rcx_3 = nullptr

void* rax_5 = rcx_3 + 8

if (rcx_3 == 0)
    rax_5 = nullptr

if (rax_5 != 0 && *rax_5 != 0)
    int64_t* rbx_1 = *arg4
    int64_t* rdx_9
    
    if (*(arg1 + 0x70) == *(arg1 + 0x9c))
    label_141c7e9ae:
        rdx_9 = nullptr
    else
        int32_t rax_8 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8_2 = arg1 + 0xa0
        void* rcx_5 = *(r8_2 + 8)
        
        if (rcx_5 != 0)
            r8_2 = rcx_5
        
        int32_t rax_10 = *(r8_2 + (((sx.q(*(arg1 + 0xb0)) - 1) & sx.q(rax_8)) << 2))
        
        if (rax_10 == 0xffffffff)
        label_141c7e9ae_1:
            rdx_9 = nullptr
        else
            while (true)
                rdx_9 = (sx.q(rax_10) << 5) + *(arg1 + 0x68)
                
                if (*rdx_9 == rbx_1)
                    break
                
                rax_10 = rdx_9[3].d
                
                if (rax_10 == 0xffffffff)
                    goto label_141c7e9ae_2
            
            if (rax_10 == 0xffffffff)
            label_141c7e9ae_2:
                rdx_9 = nullptr
    
    void* rax_11 = &rdx_9[1]
    
    if (rdx_9 == 0)
        rax_11 = nullptr
    
    if (rax_11 == 0)
        sub_14090d470(arg1 + 0x68, arg4, arg5)
    
    int64_t* rbx_2 = *arg4
    int64_t* rdx_16
    
    if (*(arg1 + 0x20) == *(arg1 + 0x4c))
    label_141c7ea3e:
        rdx_16 = nullptr
    else
        int32_t rax_14 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
        void* r8_5 = arg1 + 0x50
        void* rcx_8 = *(r8_5 + 8)
        
        if (rcx_8 != 0)
            r8_5 = rcx_8
        
        int32_t rax_16 = *(r8_5 + (((sx.q(*(arg1 + 0x60)) - 1) & sx.q(rax_14)) << 2))
        
        if (rax_16 == 0xffffffff)
        label_141c7ea3e_1:
            rdx_16 = nullptr
        else
            while (true)
                rdx_16 = (sx.q(rax_16) << 5) + *(arg1 + 0x18)
                
                if (*rdx_16 == rbx_2)
                    break
                
                rax_16 = rdx_16[3].d
                
                if (rax_16 == 0xffffffff)
                    goto label_141c7ea3e_2
            
            if (rax_16 == 0xffffffff)
            label_141c7ea3e_2:
                rdx_16 = nullptr
    
    void* rax_17 = &rdx_16[1]
    
    if (rdx_16 == 0)
        rax_17 = nullptr
    
    if (rax_17 == 0)
        rax_17 = sub_140dd28f0(arg1 + 0x18, arg4, arg3)
    
    int64_t* rbx_3 = *(rax_17 + 8)
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    void var_38
    
    if (arg2 == &var_38)
    label_141c7eaaa:
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp3_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    else
        *arg2 = *rax_17
        int64_t* rdi_1 = arg2[1]
        
        if (rbx_3 == rdi_1)
            goto label_141c7eaaa
        
        arg2[1] = rbx_3
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp5_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    *(*arg3 + 0x18) = arg1

int64_t* rbx_4 = arg3[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp1_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t rcx_16 = *arg5

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

return arg2
