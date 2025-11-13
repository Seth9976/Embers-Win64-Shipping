// 函数: sub_14190a090
// 地址: 0x14190a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
void* result = *(arg2 + 8) + rdi * 0x28

if (*(arg2 + 0x3f0) != rdi.d)
    data_143effc18(zx.q((rdi + 0x84c0).d))
    *(arg2 + 0x3f0) = rdi.d

int32_t rcx_1 = *(result + 0x10)
int32_t arg_28
int64_t rsi_1 = sx.q(arg_28)

if (rcx_1 != arg4 && rcx_1 != 0)
    data_143eff988(rcx_1, 0)

if (rcx_1 == arg4 || arg4 != 0)
    data_143eff988(zx.q(arg4), zx.q(rsi_1.d))

int32_t rbp
int32_t r12

if ((rcx_1 != arg4 && arg4 == 0) || arg4 == 0 || arg4 == 0x8c2a || arg4 == 0x8d65
        || data_1439c74ea != 0)
    rbp = 0
    r12 = 0
else
    *(arg1 + 0x15b9c)
    int32_t rax_2
    void* const rcx_5
    
    if (*(arg1 + 0x15b70) == *(arg1 + 0x15b9c))
    label_14190a1a0:
        rcx_5 = nullptr
    else
        void* r8 = arg1 + 0x15ba0
        void* rcx_3 = *(r8 + 8)
        
        if (rcx_3 != 0)
            r8 = rcx_3
        
        rax_2 = *(r8 + (((sx.q(*(arg1 + 0x15bb0)) - 1) & rsi_1) << 2))
        
        if (rax_2 == 0xffffffff)
        label_14190a1a0_1:
            rcx_5 = nullptr
        else
            int64_t r8_1 = *(arg1 + 0x15b68)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_2) * 5
                rcx_5 = r8_1 + (rdx_4 << 2)
                
                if (*(r8_1 + (rdx_4 << 2)) == rsi_1.d)
                    break
                
                rax_2 = *(rcx_5 + 0xc)
                
                if (rax_2 == 0xffffffff)
                    goto label_14190a1a0_2
            
            if (rax_2 == 0xffffffff)
            label_14190a1a0_2:
                rcx_5 = nullptr
    
    r12 = arg5
    void* rdi_1 = rcx_5 + 4
    int32_t r13_1 = r12
    
    if (rcx_5 == 0)
        rdi_1 = nullptr
    
    if (r12 == 0xffffffff)
        r13_1 = 0
    
    rbp = arg6
    int32_t r14_1 = rbp - 1
    
    if (r12 != 0xffffffff)
        r14_1 = r12
    
    if (rdi_1 == 0 || *rdi_1 != r13_1)
        rax_2.b = 0
    else
        rax_2.b = 1
    
    int64_t r15
    
    if (rdi_1 == 0 || *(rdi_1 + 4) != r14_1)
        r15.b = 0
    else
        r15.b = 1
    
    if (rax_2.b == 0)
        data_143effb50(zx.q(arg4), 0x813c, zx.q(r13_1))
    label_14190a212:
        
        if (r15.b == 0)
            data_143effb50(zx.q(arg4), 0x813d, zx.q(r14_1))
        
        if (rdi_1 == 0)
            int32_t arg_10 = r13_1
            int32_t arg_14 = r14_1
            sub_141904ca0(arg1 + 0x15b68, &arg_28, &arg_10)
            rsi_1 = zx.q(arg_28)
        else
            *rdi_1 = r13_1
            *(rdi_1 + 4) = r14_1
    else if (r15.b == 0)
        goto label_14190a212

*(result + 0x18) = r12
*(result + 0x20) = rbp
*(result + 0x10) = arg4
*(result + 0x14) = rsi_1.d
return result
