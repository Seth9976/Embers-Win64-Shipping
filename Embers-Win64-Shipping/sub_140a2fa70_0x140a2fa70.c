// 函数: sub_140a2fa70
// 地址: 0x140a2fa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*arg2 == 0)
    result.b = 0
else
    int32_t rax = arg1[1].d
    int32_t rcx = rax - 1
    result = -1
    
    if (rax == 0)
        rcx = 0
    
    do
        result += 1
    while (arg2[result] != 0)
    
    if (result.d s> rcx)
        result.b = 0
    else
        result = *arg1 + ((sx.q(rcx) - sx.q(result.d)) << 1)
        bool cond:2_1
        
        if (arg3 != 1)
            void* r8_1 = arg2 - result
            uint32_t i
            uint32_t rdx
            
            do
                rdx = zx.d(*result)
                i = zx.d(*(result + r8_1))
                
                if (rdx != i)
                    break
                
                result += 2
            while (i != 0)
            
            cond:2_1 = rdx - i == 0
        else
            cond:2_1 = sub_140a54510(result, arg2).d == 0
        
        result.b = cond:2_1
        
        if (result.b == 0)
            result.b = 0
        else
            result = -1
            
            do
                result += 1
            while (arg2[result] != 0)
            
            int32_t rcx_4 = arg1[1].d
            int32_t r10_1 = rcx_4 - 1
            
            if (rcx_4 == 0)
                r10_1 = -1
            
            int32_t rbx_1 = rcx_4 - 1
            
            if (rcx_4 == 0)
                r10_1 = 0
            
            int32_t r10_2 = r10_1 - result.d
            
            if (rcx_4 == 0)
                rbx_1 = -1
            
            if (rcx_4 == 0)
                rbx_1 = 0
            
            int32_t rbx_2 = rbx_1 - r10_2
            
            if (result.d s>= 0)
                if (result.d s< rbx_2)
                    rbx_2 = result.d
                
                if (rbx_2 != 0)
                    int32_t rax_4 = rcx_4 - rbx_2
                    
                    if (rax_4 != r10_2)
                        int64_t r9_1 = *arg1
                        memmove(r9_1 + (sx.q(r10_2) << 1), r9_1 + (sx.q(rbx_2 + r10_2) << 1), 
                            (rax_4 - r10_2) * 2)
                        rcx_4 = arg1[1].d
                    
                    arg1[1].d = rcx_4 - rbx_2
                    sub_1405a50a0(arg1)
            
            result.b = 1

return result
