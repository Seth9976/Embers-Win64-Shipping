// 函数: sub_142b0d620
// 地址: 0x142b0d620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_3 = *(arg1 + 0x10)
int16_t* rdi = *(arg1 + 0x20)
int64_t rbp = *(arg1 + 0x18)
void* r12 = *(*(arg1 + 8) + 0x10)
int16_t count_1 = *arg1
uint32_t count = zx.d(count_1)

if (count_1 u>= 0x38)
    count = 0x38

int16_t var_68
void* result = memcpy(&var_68, arg1, count)
var_68 = count.w
int32_t r14 = *(r12 + 0xa0)

while (result_3 u< rbp)
    if (rdi u>= *(arg1 + 0x28))
        *arg2 = 0xf
        break
    
    void* r8_1 = *(arg1 + 8)
    char rcx_1 = *(r8_1 + 0x40)
    result = r8_1 + 0x41
    
    if (rcx_1 s<= 0)
        result = result_3
    
    if (*result == 0x1b)
        int32_t rax_1 = sub_142b0d980(result_3, rbp, r8_1 + 0x41, sx.d(rcx_1), arg2)
        
        if (*arg2 == 0xb)
            do
                char rax_8 = *result_3
                result_3 += 1
                void* rdx_7 = *(arg1 + 8)
                *(sx.q(*(rdx_7 + 0x40)) + rdx_7 + 0x41) = rax_8
                result = *(arg1 + 8)
                *(result + 0x40) += 1
            while (result_3 u< rbp)
            
            *arg2 = 0
            break
        
        if (rax_1 == 0xfffffffe)
            result = *(arg1 + 8)
            
            if (*(result + 0x40) == 0)
                result_3 += 1
            
            *arg2 = 0xc
            break
        
        void* r8_3 = *(arg1 + 8)
        
        if (rax_1 != r14)
            r14 = rax_1
        
        int64_t rcx_3 = -1
        
        do
            rcx_3 += 1
        while (*(sx.q(r14) * 5 + &data_1436698b0 + rcx_3) != 0)
        
        int32_t result_2 = rcx_3.d - sx.d(*(r8_3 + 0x40))
        *(r8_3 + 0x40) = 0
        result = sx.q(result_2)
        result_3 += result
    
    if (r14 != 0)
        if (result_3 u>= rbp)
            break
        
        int32_t rcx_4 = 1
        int32_t r8_5 = rbp.d - result_3.d
        char* rax_4 = 1
        int64_t rdx_4 = sx.q(r8_5)
        
        if (1 s>= rdx_4)
        label_142b0d7a6:
            rcx_4 = r8_5
        else
            while (*(rax_4 + result_3) != 0x1b)
                rcx_4 += 1
                rax_4 = &rax_4[1]
                
                if (rax_4 s>= rdx_4)
                    goto label_142b0d7a6
        
        void* var_50_1 = sx.q(rcx_4) + result_3
        void* result_1
        int64_t rbx = *(result_1 + 0x30)
        *(result_1 + 0x30) = *(r12 + (sx.q(r14) << 3))
        sub_142af8080(&var_68, arg2, arg2)
        result = result_1
        *(result + 0x30) = rbx
        
        if (*arg2 s> 0)
            if (*arg2 == 0xf)
                void* result_4 = result_1
                char rcx_8 = *(result_4 + 0x5d)
                
                if (rcx_8 s> 0)
                    memcpy(*(arg1 + 8) + 0x90, result_4 + 0x90, sx.d(rcx_8))
                    result_4 = result_1
                
                *(*(arg1 + 8) + 0x5d) = *(result_4 + 0x5d)
                result = result_1
                *(result + 0x5d) = 0
            
            break
    else
        if (result_3 u>= rbp)
            break
        
        while (true)
            result = zx.q(*result_3)
            
            if (result.b == 0x1b)
                break
            
            if (rdi u>= *(arg1 + 0x28))
                *arg2 = 0xf
                break
            
            result_3 += 1
            result.w = sx.w(result.b) & 0xff
            *rdi = result.w
            rdi = &rdi[1]
            
            if (result_3 u>= rbp)
                goto label_142b0d8a0

label_142b0d8a0:
*(r12 + 0xa0) = r14
*(arg1 + 0x10) = result_3
*(arg1 + 0x20) = rdi
return result
