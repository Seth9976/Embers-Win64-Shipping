// 函数: sub_140a236f0
// 地址: 0x140a236f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2[1].d
int32_t r9 = r10 - 1
uint32_t i
bool cond:2_1

if (arg3 != 1)
    if (r10 == 0)
        r9 = 0
    
    if (r9 s> 0)
        i = arg1[1].d
        int32_t rcx_2 = i - 1
        
        if (i == 0)
            rcx_2 = 0
        
        if (rcx_2 s>= r9)
            int16_t* const r8_1
            
            if (r10 == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *arg2
            
            int16_t* rdx_3 = *arg1 + (sx.q(rcx_2 - r9) << 1)
            int64_t r8_2 = r8_1 - rdx_3
            uint32_t rcx_5
            
            do
                rcx_5 = zx.d(*rdx_3)
                i = zx.d(*(rdx_3 + r8_2))
                
                if (rcx_5 != i)
                    break
                
                rdx_3 = &rdx_3[1]
            while (i != 0)
            
            cond:2_1 = rcx_5 - i != 0
        label_140a237b6:
            
            if (not(cond:2_1))
                i.b = 1
                return i
else
    if (r10 == 0)
        r9 = 0
    
    if (r9 s> 0)
        i = arg1[1].d
        int32_t rdx = i - 1
        
        if (i == 0)
            rdx = 0
        
        if (rdx s>= r9)
            int16_t* r8
            
            if (r10 == 0)
                r8 = &data_142d40450
            else
                r8 = *arg2
            
            cond:2_1 = sub_140a54510(*arg1 + (sx.q(rdx - r9) << 1), r8) != 0
            goto label_140a237b6
i.b = 0
return i
