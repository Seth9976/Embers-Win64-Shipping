// 函数: sub_140ac5b60
// 地址: 0x140ac5b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg1[1].d)
int32_t temp0 = rdx.d
int32_t result_1 = (rdx - 2).d

if (temp0 == 0)
    result_1 = -1

int32_t rbx = (rdx - 1).d

if (temp0 == 0)
    rbx = -1

int64_t result = 0

if (rdx.d == 0)
    rbx = 0

if (rbx s> 0)
    int64_t r9_1 = *arg1
    result = sx.q(result_1)
    
    if (*(r9_1 + (result << 1)) == 0x5d)
        result = r9_1 + (rdx << 1)
        
        if (result != r9_1)
            while (true)
                result -= 2
                
                if (*result == 0x5b)
                    break
                
                if (result == r9_1)
                    return result
            
            result = (result - r9_1) s>> 1
            
            if (result.d != 0xffffffff)
                int32_t r8 = result_1 - result.d
                int32_t rbx_1 = rbx - result.d
                
                if (r8 + 1 s>= 0)
                    if (r8 + 1 s< rbx_1)
                        rbx_1 = r8 + 1
                    
                    if (rbx_1 != 0)
                        int32_t rcx_1 = rdx.d - rbx_1
                        
                        if (rcx_1 != result.d)
                            memmove(r9_1 + (sx.q(result.d) << 1), 
                                r9_1 + (sx.q(rbx_1 + result.d) << 1), (rcx_1 - result.d) * 2)
                            rdx = zx.q(arg1[1].d)
                        
                        arg1[1].d = rdx.d - rbx_1
                
                return sub_140a35cd0(arg1)

return result
