// 函数: sub_14213fce0
// 地址: 0x14213fce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
(*(*arg1 + 0x2a0))()
void* result_1

if (rdi == 0xffffffff)
    void* r14_1 = arg1[0xb]
    rdi = 1
    void* result_2 = *arg2
    result_1 = result_2
    int64_t* rcx_4
    
    if (*(r14_1 + 0x1b0) == *(r14_1 + 0x1dc))
    label_14213fd9e:
        rcx_4 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(result_2.d) + result_1:4.d
        void* r8 = r14_1 + 0x1e0
        void* rcx_1 = *(r8 + 8)
        
        if (rcx_1 != 0)
            r8 = rcx_1
        
        int32_t rax_5 = *(r8 + (((sx.q(*(r14_1 + 0x1f0)) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_14213fd9e_1:
            rcx_4 = nullptr
        else
            while (true)
                rcx_4 = sx.q(rax_5) * 0x38 + *(r14_1 + 0x1a8)
                
                if (*rcx_4 == result_2)
                    break
                
                rax_5 = rcx_4[6].d
                
                if (rax_5 == 0xffffffff)
                    goto label_14213fd9e_2
            
            if (rax_5 == 0xffffffff)
            label_14213fd9e_2:
                rcx_4 = nullptr
    
    int32_t r8_2 = arg1[0x263].d
    
    if (rcx_4[4].d != 0xffffffff)
        rdi = rcx_4[4].d
    
    bool cond:0_1 = rdi != r8_2
    
    if (rdi s< r8_2)
        int64_t* rdx_3 = arg1[0x262] + (sx.q(rdi) << 3)
        
        while (*rdx_3 != 0)
            rdi += 1
            rdx_3 = &rdx_3[1]
            
            if (rdi s>= r8_2)
                break
        
        cond:0_1 = rdi != r8_2
    
    if (not(cond:0_1))
        if (*(arg1 + 0x199c) == 0)
            *(arg1 + 0x199c) = 1
        
        return nullptr

void* result = sub_142169690(arg1[0xb], arg2)
(*(*result + 0x260))(result, arg1, zx.q(rdi), zx.q(arg3))
*(arg1[0x262] + (sx.q(rdi) << 3)) = result
int64_t rdi_1 = sx.q(arg1[0xf].d)
int32_t rcx_9 = (rdi_1 + 1).d
arg1[0xf].d = rcx_9

if (rcx_9 s> *(arg1 + 0x7c))
    sub_1405a4d70(&arg1[0xe])

*(arg1[0xe] + (rdi_1 << 3)) = result
void* rdi_2 = arg1[0xb]
void* result_3 = *arg2
result_1 = result_3
int64_t* rcx_15

if (*(rdi_2 + 0x1b0) == *(rdi_2 + 0x1dc))
label_14213febe:
    rcx_15 = nullptr
else
    int32_t rax_11 = sub_140b5ead0(result_3.d) + result_1:4.d
    void* r8_4 = rdi_2 + 0x1e0
    void* rcx_12 = *(r8_4 + 8)
    
    if (rcx_12 != 0)
        r8_4 = rcx_12
    
    int32_t rax_13 = *(r8_4 + (((sx.q(*(rdi_2 + 0x1f0)) - 1) & sx.q(rax_11)) << 2))
    
    if (rax_13 == 0xffffffff)
    label_14213febe_1:
        rcx_15 = nullptr
    else
        while (true)
            rcx_15 = sx.q(rax_13) * 0x38 + *(rdi_2 + 0x1a8)
            
            if (*rcx_15 == result_3)
                break
            
            rax_13 = rcx_15[6].d
            
            if (rax_13 == 0xffffffff)
                goto label_14213febe_2
        
        if (rax_13 == 0xffffffff)
        label_14213febe_2:
            rcx_15 = nullptr

if (*(rcx_15 + 0x24) != 0)
    result_1 = result
    sub_1405a7050(&arg1[0x2a2], &result_1)

return result
