// 函数: sub_141cc3300
// 地址: 0x141cc3300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3:4.d
void* const rcx_3

if (*(arg1 + 0x1c8) == *(arg1 + 0x1f4))
label_141cc3390:
    rcx_3 = nullptr
else
    int32_t rax_1 = sub_140b5ead0(arg3.d)
    void* r8 = arg1 + 0x1f8
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x208)) - 1) & sx.q(rax_1 + rdi)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141cc3390_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x1c0)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 3
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == arg3)
                break
            
            rax_4 = *(rcx_3 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_141cc3390_2
        
        if (rax_4 == 0xffffffff)
        label_141cc3390_2:
            rcx_3 = nullptr

void* rax_5 = rcx_3 + 8

if (rcx_3 == 0)
    rax_5 = nullptr

if (rax_5 != 0)
    *arg2 = *rax_5
    sub_140920c10(arg1 + 0x38, arg2)
    int64_t rax_7
    rax_7.b = 1
    return rax_7

*(arg1 + 0x94)
int32_t rax_9
int64_t* rdx_10

if (*(arg1 + 0x68) == *(arg1 + 0x94))
label_141cc342e:
    rdx_10 = nullptr
else
    int32_t rax_10 = sub_140b5ead0(arg3.d)
    void* r8_2 = arg1 + 0x98
    void* rcx_6 = *(r8_2 + 8)
    
    if (rcx_6 != 0)
        r8_2 = rcx_6
    
    rax_9 = *(r8_2 + (((sx.q(*(arg1 + 0xa8)) - 1) & sx.q(rax_10 + rdi)) << 2))
    
    if (rax_9 == 0xffffffff)
    label_141cc342e_1:
        rdx_10 = nullptr
    else
        while (true)
            rdx_10 = (sx.q(rax_9) << 5) + *(arg1 + 0x60)
            
            if (*rdx_10 == arg3)
                break
            
            rax_9 = rdx_10[3].d
            
            if (rax_9 == 0xffffffff)
                goto label_141cc342e_2
        
        if (rax_9 == 0xffffffff)
        label_141cc342e_2:
            rdx_10 = nullptr

void* rdi_1 = &rdx_10[1]

if (rdx_10 == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    int64_t rbp_1 = *rdi_1
    int64_t* rdi_2 = *(rdi_1 + 8)
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (rbp_1 != 0)
        *arg2 = arg3
        sub_140920c10(arg1 + 0x38, arg2)
        int64_t rax_15
        rax_15.b = 1
        return rax_15

int64_t arg_8 = 0
*arg2 = 0
rax_9.b = 0
return rax_9
