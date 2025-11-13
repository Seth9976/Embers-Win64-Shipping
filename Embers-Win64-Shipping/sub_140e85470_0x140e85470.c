// 函数: sub_140e85470
// 地址: 0x140e85470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t r11 = sx.q(arg2)
int32_t result = *(arg1 + 0x138)
int32_t* rcx_3

if (result == *(arg1 + 0x164))
label_140e854e2:
    rcx_3 = nullptr
else
    void* r8_1 = *(arg1 + 0x170)
    void* r10_1 = arg1 + 0x168
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    result = *(r10_1 + (((sx.q(*(arg1 + 0x178)) - 1) & r11) << 2))
    
    if (result == 0xffffffff)
    label_140e854e2_1:
        rcx_3 = nullptr
    else
        while (true)
            rcx_3 = sx.q(result) * 0x30 + *(arg1 + 0x130)
            
            if (*rcx_3 == r11.d)
                break
            
            result = rcx_3[0xa]
            
            if (result == 0xffffffff)
                goto label_140e854e2_2
        
        if (result == 0xffffffff)
        label_140e854e2_2:
            rcx_3 = nullptr

void* rbx = &rcx_3[2]

if (rcx_3 == 0)
    rbx = nullptr

if (rbx != 0)
    sub_140e471c0(arg1 + 0x1f0, &arg_10, rbx)
    int64_t rax = *rbx
    int64_t rcx_6 = sx.q(*(rbx + 8)) * 2
    int64_t* rsi_1 = *(rax + (rcx_6 << 3) - 0x10)
    int64_t* rcx_7 = *(rax + (rcx_6 << 3) - 8)
    int64_t* rbx_1 = rcx_7
    
    if (rcx_7 != 0)
        *(rcx_7 + 0xc) += 1
    
    int64_t* r8_4 = rcx_7
    
    if (rcx_7 != 0)
        int32_t rax_1 = rcx_7[1].d
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            rcx_7[1].d = rax_1 + 1
        
        int32_t temp1_1 = *(rcx_7 + 0xc)
        *(rcx_7 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_7 + 8))(rcx_7, 1)
        
        r8_4 = nullptr
    
    if (rbx_1 == 0)
        rsi_1 = nullptr
    
    if (r8_4 != 0)
        int32_t temp0_1 = *(r8_4 + 0xc)
        *(r8_4 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*r8_4 + 8))(r8_4, 1)
    
    int32_t rdi_1 = arg_10
    
    if (rsi_1 != 0)
        int32_t arg_8 = *(arg1 + 0x18)
        int32_t arg_c = rdi_1
        (*(*rsi_1 + 0x1a8))(rsi_1, &arg_8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = sub_140e85900(arg1 + 0x130, rdi_1)
    
    if (rdi_1 == 0xa)
        *(arg1 + 0x31) = 1

return result
