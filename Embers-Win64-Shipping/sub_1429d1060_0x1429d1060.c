// 函数: sub_1429d1060
// 地址: 0x1429d1060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t r11 = arg2 * 2
int64_t rbx = sx.q(r11 + 1) << 2
void* r10 = *(rdi + 0x150)
void* rcx = *(rdi + 0x108)
int32_t* r14 = *(rdi + 0x168) + (sx.q(*(r10 + rbx)) << 2)
int64_t rax_2 = sx.q(r11)
int32_t rbp = *(rcx + (rax_2 << 2))
int32_t r11_1 = *(r10 + (rax_2 << 2))
int64_t r15
r15.b = r11_1 s> rbp
int16_t var_20 = rbp.w
void* r13 = arg1[0xf] + (sx.q(*(rcx + rbx)) << 1)
int64_t rcx_2 = sx.q(arg2) * 2
int16_t result_1 = *(rcx_2 + arg1[9])
uint64_t result = *(rdi + 0x1b0)

if ((*(rcx_2 + result) & 1) != 0)
    result = zx.q(result_1)
    
    if (result.d s> 0)
        uint64_t i
        
        do
            *arg3 = 0
            arg3[2] = 1
            arg3 = &arg3[5]
            i = result
            result -= 1
        while (i != 1)
else if (result_1 != 1 || r15.b != 0)
    int32_t r9_3 = 1
    *arg3 = 1
    
    if (r15.b == 0 && *(r13 + (sx.q(rbp - 1) << 1)) == 0)
        int64_t rdx_1 = sx.q(*r14)
        
        if ((*(rdx_1 + arg1[6]) & 1) == 0)
            char rax_11 = *(rdx_1 + *(*arg1 + 0xf0))
            
            if ((rax_11 & 4) != 0)
                arg3[4] += 1
            else if ((rax_11 & 8) != 0)
                arg3[3] += 1
        else
            arg3[2] += 1
    
    if (rbp s> 1)
        int16_t* rdx_2 = r13 + 2
        void* rbx_1 = &r14[1]
        
        do
            int16_t r10_2 = *rdx_2
            
            if (r10_2 != rdx_2[-1])
                uint64_t rcx_10 = zx.q(r10_2) * 5
                
                if (arg3[rcx_10] u> 0)
                    arg3[rcx_10 + 2] += 1
                
                arg3[zx.q(*rdx_2) * 5 + 1] = r9_3.w
            else
                int64_t r11_2 = sx.q(*rbx_1)
                
                if ((*(r11_2 + arg1[6]) & 1) == 0)
                    char rax_15 = *(r11_2 + *(*arg1 + 0xf0))
                    
                    if ((rax_15 & 4) != 0)
                        uint64_t rcx_8 = zx.q(r10_2) * 5
                        arg3[rcx_8 + 4] += 1
                    else if ((rax_15 & 8) != 0)
                        uint64_t rcx_9 = zx.q(r10_2) * 5
                        arg3[rcx_9 + 3] += 1
                else
                    uint64_t rcx_6 = zx.q(r10_2) * 5
                    arg3[rcx_6 + 2] += 1
            
            uint64_t rax_20 = zx.q(*rdx_2)
            r9_3 += 1
            rbx_1 += 4
            rdx_2 = &rdx_2[1]
            uint64_t rcx_12 = rax_20 * 5
            arg3[rcx_12] += 1
        while (r9_3 s< rbp)
    
    result = zx.q(rbp - 1)
    
    if (*(r13 + (sx.q(result.d) << 1)) == 0 && r15.b == 0)
        result = 0xffff
        arg3[2] -= 1
else
    int32_t rdx = 0
    *arg3 = 0
    
    if (r11_1 s<= 0)
    label_1429d11b2:
        *arg3 = var_20
    else
        do
            int64_t r9_2 = sx.q(r14[sx.q(rdx)])
            result = arg1[6]
            
            if ((*(r9_2 + result) & 1) == 0)
                result = zx.q(*(r9_2 + *(*arg1 + 0xf0)))
                
                if ((result.b & 4) != 0)
                    arg3[4] += 1
                else if ((result.b & 8) != 0)
                    arg3[3] += 1
            else
                if (*arg3 u> 0)
                    arg3[2] = 1
                    goto label_1429d11b2
                
                *arg3 = var_20
                arg3[1] = rdx.w
            
            rdx += 1
        while (rdx s< r11_1)
        
        *arg3 = var_20

return result
