// 函数: sub_140a2f8e0
// 地址: 0x140a2f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2[1].d
uint64_t result

if (r9 s<= 1)
    result.b = 0
else if (arg3 != 1)
    int32_t rdx_3 = r9 - 1
    result = zx.q(r9 - 1)
    
    if (r9 == 0)
        result = 0xffffffff
    
    if (r9 == 0)
        rdx_3 = -1
    
    if (r9 == 0)
        result = 0
    
    if (result.d s<= 0)
        result.b = 0
    else
        result = zx.q(arg1[1].d)
        int32_t rcx_2 = (result - 1).d
        
        if (result.d == 0)
            rcx_2 = 0
        
        if (r9 == 0)
            rdx_3 = 0
        
        if (rcx_2 s< rdx_3)
            result.b = 0
        else
            int16_t* const r8_1
            
            if (r9 == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *arg2
            
            result = *arg1 + (sx.q(rcx_2 - rdx_3) << 1)
            void* r8_2 = r8_1 - result
            uint32_t i
            uint32_t rdx_4
            
            do
                rdx_4 = zx.d(*result)
                i = zx.d(*(result + r8_2))
                
                if (rdx_4 != i)
                    break
                
                result += 2
            while (i != 0)
            
            if (rdx_4 - i == 0)
                goto label_140a2f9ec
            
            result.b = 0
else
    int32_t r10_1 = r9 - 1
    
    if (r9 == 0)
        r10_1 = 0
    
    if (r10_1 s<= 0)
        result.b = 0
    else
        result = zx.q(arg1[1].d)
        int32_t rdx = (result - 1).d
        
        if (result.d == 0)
            rdx = 0
        
        if (rdx s< r10_1)
            result.b = 0
        else
            int16_t* r8
            
            if (r9 == 0)
                r8 = &data_142d40450
            else
                r8 = *arg2
            
            if (sub_140a54510(*arg1 + (sx.q(rdx - r10_1) << 1), r8).d == 0)
            label_140a2f9ec:
                result = zx.q(arg2[1].d)
                int32_t temp1_1 = result.d
                int32_t rcx_5 = arg1[1].d
                int32_t rdx_6 = (result - 1).d
                
                if (temp1_1 == 0)
                    rdx_6 = -1
                
                int32_t rbx_1 = (result - 1).d
                
                if (temp1_1 == 0)
                    rbx_1 = -1
                
                int32_t r10_2 = rcx_5 - 1
                
                if (temp1_1 == 0)
                    rdx_6 = 0
                
                if (temp1_1 == 0)
                    rbx_1 = 0
                
                if (rcx_5 == 0)
                    r10_2 = -1
                
                if (rcx_5 == 0)
                    r10_2 = 0
                
                int32_t r10_3 = r10_2 - rbx_1
                
                if (rdx_6 s>= 0)
                    if (rdx_6 s< rbx_1)
                        rbx_1 = rdx_6
                    
                    if (rbx_1 != 0)
                        int32_t rax_3 = rcx_5 - rbx_1
                        
                        if (rax_3 != r10_3)
                            int64_t r9_1 = *arg1
                            memmove(r9_1 + (sx.q(r10_3) << 1), r9_1 + (sx.q(rbx_1 + r10_3) << 1), 
                                (rax_3 - r10_3) * 2)
                            rcx_5 = arg1[1].d
                        
                        arg1[1].d = rcx_5 - rbx_1
                        sub_1405a50a0(arg1)
                
                result.b = 1
            else
                result.b = 0

return result
