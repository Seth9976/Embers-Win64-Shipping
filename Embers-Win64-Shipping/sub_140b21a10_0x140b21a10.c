// 函数: sub_140b21a10
// 地址: 0x140b21a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
int64_t arg_10 = rbp
int16_t* r14 = arg2
int16_t* rbx = arg1
uint64_t result

if (*arg1 == 0)
label_140b21af1:
    result.b = 0
else
    while (true)
        if (r14 == 0)
            goto label_140b21af1
        
        if (rbx == 0)
            goto label_140b21af1
        
        uint32_t rcx = zx.d(*r14)
        arg2.b = 0
        int64_t rsi_1 = -1
        int16_t r15_1 = rcx.w - 0x20
        
        if ((rcx - 0x61).w u> 0x19)
            r15_1 = rcx.w
        
        do
            rsi_1 += 1
        while (r14[rsi_1] != 0)
        
        uint32_t rcx_1 = zx.d(*rbx)
        void* rdi_1 = &rbx[1]
        rbp.b = 0
        
        if (rcx_1.w == 0)
            goto label_140b21af1
        
        while (true)
            int32_t rbx_1 = rcx_1 - 0x20
            
            if (rcx_1.w - 0x61 u> 0x19)
                rbx_1.w = rcx_1.w
            
            if (rbp.b == 0 && arg2.b == 0 && rbx_1.w == r15_1)
                result, arg2 = sub_140a546e0(rdi_1, &r14[1], sx.q(rsi_1.d - 1))
                
                if (result.d == 0)
                    break
            
            if ((rbx_1 - 0x41).w u<= 0x19 || (rbx_1 - 0x30).w u<= 9)
                arg2.b = 1
            else
                arg2.b = 0
            
            if (rbx_1.w == 0x22)
                rbp.b = rbp.b == 0
            
            rcx_1 = zx.d(*rdi_1)
            rdi_1 += 2
            
            if (rcx_1.w == 0)
                goto label_140b21af1
        
        if (rdi_1 == 2)
            goto label_140b21af1
        
        if (rdi_1 - 2 u> arg1)
            result.w = *(rdi_1 - 4) - 0x2d
            
            if ((0xfffd & result.w) == 0)
                if (arg1 u<= rdi_1 - 6)
                    result, arg2 = iswspace(*(rdi_1 - 6))
                
                if (arg1 u> rdi_1 - 6 || result.d != 0)
                    int64_t rax_2 = -1
                    
                    do
                        rax_2 += 1
                    while (r14[rax_2] != 0)
                    
                    void* rcx_4 = rdi_1 - 2 + (sx.q(rax_2.d) << 1)
                    
                    if (rcx_4 == 0)
                        result.b = 1
                        break
                    
                    wint_t _C = *rcx_4
                    
                    if (_C == 0)
                        result.b = 1
                        break
                    
                    result, arg2 = iswspace(_C)
                    
                    if (result.d != 0)
                        result.b = 1
                        break
        
        rbx = rdi_1

return result
