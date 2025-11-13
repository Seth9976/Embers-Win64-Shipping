// 函数: sub_140821df0
// 地址: 0x140821df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = data_143ce3ad0
uint64_t result = &rsi[sx.q(data_143ce3ad8) * 2]
uint64_t result_1 = result

if (rsi != result)
    int64_t* r10_1 = data_143ce3aa0
    int64_t* r13_1 = data_143ce3ab0
    int64_t r14
    int64_t var_20_1 = r14
    int64_t* r11_1 = data_143ce3ac0
    
    do
        int64_t rcx_1 = sx.q(data_143ce3aa8)
        
        if (rcx_1.d != 0)
            result = *rsi
            int32_t r12_1 = 0
            int32_t rdi_1 = 0
            int64_t rbx_1 = 0
            
            if (*r10_1 != result)
                r14.b = 1
            else
                result = zx.q(rsi[1].w)
                
                if (r10_1[1].w != result.w)
                    r14.b = 1
                else
                    r14.b = 0
            
            do
                int64_t r9_1 = sx.q(rdi_1)
                rbx_1 += 1
                rdi_1 += 1
                
                if (rbx_1 s< rcx_1)
                    void* rcx_4 = &r10_1[rbx_1 * 2]
                    
                    do
                        if (*rcx_4 != *rsi || *(rcx_4 + 8) != rsi[1].w)
                            result.b = 1
                        else
                            result.b = 0
                        
                        if (r14.b != result.b)
                            break
                        
                        rdi_1 += 1
                        rbx_1 += 1
                        rcx_4 += 0x10
                    while (rbx_1 s< rcx_1)
                
                int32_t rbp_2 = rdi_1 - r9_1.d
                
                if (r14.b != 0)
                    if (r12_1 != r9_1.d)
                        result = memmove(&r10_1[sx.q(r12_1) * 2], &r10_1[r9_1 * 2], rbp_2 << 4)
                        r10_1 = data_143ce3aa0
                    
                    r12_1 += rbp_2
                
                r14.b ^= 1
            while (rbx_1 s< rcx_1)
            
            r11_1 = data_143ce3ac0
            r13_1 = data_143ce3ab0
            data_143ce3aa8 = r12_1
        
        int64_t rcx_8 = sx.q(data_143ce3ac8)
        
        if (rcx_8.d != 0)
            result = *rsi
            int32_t r12_2 = 0
            int32_t rdi_2 = 0
            int64_t rbx_2 = 0
            
            if (*r11_1 != result)
                r14.b = 1
            else
                result = zx.q(rsi[1].w)
                
                if (r11_1[1].w != result.w)
                    r14.b = 1
                else
                    r14.b = 0
            
            do
                int64_t r9_2 = sx.q(rdi_2)
                rbx_2 += 1
                rdi_2 += 1
                
                if (rbx_2 s< rcx_8)
                    void* rcx_11 = &r11_1[rbx_2 * 2]
                    
                    do
                        if (*rcx_11 != *rsi || *(rcx_11 + 8) != rsi[1].w)
                            result.b = 1
                        else
                            result.b = 0
                        
                        if (r14.b != result.b)
                            break
                        
                        rdi_2 += 1
                        rbx_2 += 1
                        rcx_11 += 0x10
                    while (rbx_2 s< rcx_8)
                
                int32_t rbp_4 = rdi_2 - r9_2.d
                
                if (r14.b != 0)
                    if (r12_2 != r9_2.d)
                        result = memmove(&r11_1[sx.q(r12_2) * 2], &r11_1[r9_2 * 2], rbp_4 << 4)
                        r11_1 = data_143ce3ac0
                    
                    r12_2 += rbp_4
                
                r14.b ^= 1
            while (rbx_2 s< rcx_8)
            
            r10_1 = data_143ce3aa0
            r13_1 = data_143ce3ab0
            data_143ce3ac8 = r12_2
        
        uint64_t rcx_15 = sx.q(data_143ce3ab8)
        
        if (rcx_15.d != 0)
            result = *rsi
            int32_t r12_3 = 0
            int32_t rdi_3 = 0
            int64_t rbx_3 = 0
            
            if (*r13_1 != result)
                r14.b = 1
            else
                result = zx.q(rsi[1].w)
                
                if (r13_1[1].w != result.w)
                    r14.b = 1
                else
                    r14.b = 0
            
            uint64_t r15_3 = rcx_15
            
            do
                int64_t r9_3 = sx.q(rdi_3)
                rbx_3 += 1
                rdi_3 += 1
                
                if (rbx_3 s< r15_3)
                    result = &r13_1[rbx_3 * 2]
                    
                    do
                        if (*result != *rsi || *(result + 8) != rsi[1].w)
                            rcx_15.b = 1
                        else
                            rcx_15.b = 0
                        
                        if (r14.b != rcx_15.b)
                            break
                        
                        rdi_3 += 1
                        rbx_3 += 1
                        result += 0x10
                    while (rbx_3 s< r15_3)
                
                int32_t rbp_6 = rdi_3 - r9_3.d
                
                if (r14.b != 0)
                    if (r12_3 != r9_3.d)
                        result, rcx_15 =
                            memmove(&r13_1[sx.q(r12_3) * 2], &r13_1[r9_3 * 2], rbp_6 << 4)
                        r13_1 = data_143ce3ab0
                    
                    r12_3 += rbp_6
                
                r14.b ^= 1
            while (rbx_3 s< r15_3)
            
            r10_1 = data_143ce3aa0
            r11_1 = data_143ce3ac0
            data_143ce3ab8 = r12_3
        
        rsi = &rsi[2]
    while (rsi != result_1)

bool cond:0 = data_143ce3aec == 0
data_143ce3ae8 = 0

if (not(cond:0))
    result = sub_1405a5410(&data_143ce3ae0, 0)

bool cond:1 = data_143ce3adc == 0
data_143ce3ad8 = 0

if (cond:1)
    return result

return sub_1405a5410(&data_143ce3ad0, 0) __tailcall
