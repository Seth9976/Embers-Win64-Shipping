// 函数: sub_140969250
// 地址: 0x140969250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 0x44)
void* rdi = *(*(arg2 + 0x28) + 0x58)
int32_t rax_1 = *(rdi + 0x1b0)
int32_t result
bool cond:1

if (*(rdi + 0x88) == 0)
    *(rdi + 0x1dc)
    int64_t* rcx_9
    
    if (rax_1 == *(rdi + 0x1dc))
    label_14096934e:
        rcx_9 = nullptr
    else
        int32_t rax_6 = sub_140b5ead0(rbx.d) + rbx:4.d
        void* r8_3 = rdi + 0x1e0
        void* rcx_6 = *(r8_3 + 8)
        
        if (rcx_6 != 0)
            r8_3 = rcx_6
        
        result = *(r8_3 + (((sx.q(*(rdi + 0x1f0)) - 1) & sx.q(rax_6)) << 2))
        
        if (result == 0xffffffff)
        label_14096934e_1:
            rcx_9 = nullptr
        else
            while (true)
                rcx_9 = sx.q(result) * 0x38 + *(rdi + 0x1a8)
                
                if (*rcx_9 == rbx)
                    break
                
                result = rcx_9[6].d
                
                if (result == 0xffffffff)
                    goto label_14096934e_2
            
            if (result == 0xffffffff)
            label_14096934e_2:
                rcx_9 = nullptr
    
    cond:1 = *(rcx_9 + 0x26) == 0
else
    *(rdi + 0x1dc)
    int64_t* rcx_4
    
    if (rax_1 == *(rdi + 0x1dc))
        rcx_4 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
        void* r8_1 = rdi + 0x1e0
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        result = *(r8_1 + (((sx.q(*(rdi + 0x1f0)) - 1) & sx.q(rax_3)) << 2))
        
        if (result == 0xffffffff)
            rcx_4 = nullptr
        else
            while (true)
                rcx_4 = sx.q(result) * 0x38 + *(rdi + 0x1a8)
                
                if (*rcx_4 == rbx)
                    break
                
                result = rcx_4[6].d
                
                if (result == 0xffffffff)
                    cond:1 = *0x25 == 0
                    goto label_140969354
            
            if (result == 0xffffffff)
                rcx_4 = nullptr
    
    cond:1 = *(rcx_4 + 0x25) == 0

label_140969354:

if (cond:1)
    result.b = 0
    return result

result.b = 1
return result
