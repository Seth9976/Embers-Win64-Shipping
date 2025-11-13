// 函数: sub_141f31520
// 地址: 0x141f31520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1 + 0x750
void* rsi = arg1
int64_t* result_1 = *r8
int64_t r9 = sx.q(r8[1].d)
int64_t* result = result_1
int64_t* arg_20 = r8
void* rdx = &result_1[r9]

if (result_1 == rdx)
label_141f31573:
    result.b = 0
else
    while (*result != arg2)
        result = &result[1]
        
        if (result == rdx)
            goto label_141f31573
    
    result.b = 1

if (arg3 == result.b)
    if (arg3 == 0)
        int32_t rax_2 = (r9 + 1).d
        r8[1].d = rax_2
        
        if (rax_2 s> *(r8 + 0xc))
            sub_1405a4d70(r8)
            r8 = arg_20
        
        result = *r8
        result[r9] = arg2
    else if (r9.d != 0)
        int32_t rsi_1 = 0
        int64_t rdi_1 = 0
        int64_t r12
        r12.b = *result_1 != arg2
        int32_t r13_1 = 0
        
        do
            int64_t r9_1 = sx.q(rsi_1)
            rdi_1 += 1
            rsi_1 += 1
            
            if (rdi_1 s< r9)
                int64_t rcx = *r8 + (rdi_1 << 3)
                
                do
                    result.b = *rcx != arg2
                    
                    if (zx.d(r12.b) != result.d)
                        break
                    
                    rsi_1 += 1
                    rdi_1 += 1
                    rcx += 8
                while (rdi_1 s< r9)
            
            int32_t r14_2 = rsi_1 - r9_1.d
            
            if (r12.b != 0)
                if (r13_1 != r9_1.d)
                    int64_t rcx_1 = *r8
                    result = memmove(rcx_1 + (sx.q(r13_1) << 3), rcx_1 + (r9_1 << 3), r14_2 << 3)
                    r8 = arg_20
                
                r13_1 += r14_2
            
            r12.b ^= 1
        while (rdi_1 s< r9)
        
        rsi = arg1
        r8[1].d = r13_1
    
    *(rsi + 0x720) = 0

return result
