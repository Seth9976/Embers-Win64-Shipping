// 函数: sub_140a2fba0
// 地址: 0x140a2fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg2[1].d
int32_t rax

if (rcx s> 1)
    if (arg3 != 1)
        int32_t rdx_1 = rcx - 1
        rax = rcx - 1
        
        if (rcx == 0)
            rax = -1
        
        if (rcx == 0)
            rdx_1 = -1
        
        if (rcx == 0)
            rax = 0
        
        if (rax s> 0)
            int16_t* _String1 = &data_142d40450
            
            if (rcx == 0)
                rdx_1 = 0
            
            wchar16* _String2
            
            if (rcx == 0)
                _String2 = &data_142d40450
            else
                _String2 = *arg2
            
            if (arg1[1].d != 0)
                _String1 = *arg1
            
            rax = wcsncmp(_String1, _String2, sx.q(rdx_1))
        label_140a2fc56:
            
            if (rax == 0)
                int32_t rax_2 = arg2[1].d
                int32_t rcx_3 = rax_2 - 1
                int32_t rax_3 = arg1[1].d
                
                if (rax_2 == 0)
                    rcx_3 = 0
                
                int32_t rdi_1 = rax_3 - 1
                
                if (rax_3 == 0)
                    rdi_1 = 0
                
                if (rcx_3 s>= 0)
                    if (rcx_3 s< rdi_1)
                        rdi_1 = rcx_3
                    
                    if (rdi_1 != 0)
                        if (rax_3 != rdi_1)
                            int16_t* rcx_4 = *arg1
                            memmove(rcx_4, &rcx_4[sx.q(rdi_1)], (rax_3 - rdi_1) * 2)
                            rax_3 = arg1[1].d
                        
                        arg1[1].d = rax_3 - rdi_1
                        sub_1405a50a0(arg1)
                
                rax_3.b = 1
                return rax_3
    else
        int32_t r8 = rcx - 1
        
        if (rcx == 0)
            r8 = 0
        
        if (r8 s> 0)
            int16_t* const rax_1 = &data_142d40450
            int16_t* rdx
            
            if (rcx == 0)
                rdx = &data_142d40450
            else
                rdx = *arg2
            
            if (arg1[1].d != 0)
                rax_1 = *arg1
            
            rax = sub_140a546e0(rax_1, rdx, sx.q(r8))
            goto label_140a2fc56

rax.b = 0
return rax
