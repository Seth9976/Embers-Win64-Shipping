// 函数: sub_142b83c10
// 地址: 0x142b83c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg1[1].d
int32_t rdi = arg2
char r15_1 = (neg.d(r11)).b
int64_t rbx = 1
int64_t rbp = 1 << (neg.d(r11)).b
uint32_t r9_1 = (*arg1 u>> r15_1).d
int32_t rdx_1 = ((r11 + 0x41) * 0x4d1) s>> 0xc
int64_t r8_1 = (rbp - 1) & *arg1

if (r9_1 u>= *(&data_14367e0f8 + (sx.q(rdx_1 + 1) << 2)))
    rdx_1 += 1

uint32_t r11_1 = *(&data_14367e0f8 + (sx.q(rdx_1) << 2))
*arg5 = rdx_1
*arg4 = 0
int64_t result

while (*arg5 s> 0)
    result.b = divu.dp.d(0:r9_1, r11_1).b + 0x30
    *(sx.q(*arg4) + *arg3) = result.b
    r9_1 = modu.dp.d(0:r9_1, r11_1)
    *arg4 += 1
    *arg5 -= 1
    int32_t temp8_1 = rdi
    rdi -= 1
    
    if (temp8_1 == 1)
        goto label_142b83cde
    
    r11_1 u/= 0xa

int64_t zmm0

if (rdi != 0)
    if (rdi s> 0)
        while (r8_1 u> rbx)
            int64_t r8_5 = r8_1 * 0xa
            rdi -= 1
            rbx *= 0xa
            r8_1 = r8_5 & (rbp - 1)
            sx.q(*arg4)[*arg3] = (r8_5 u>> r15_1).b + 0x30
            *arg4 += 1
            *arg5 -= 1
            
            if (rdi s<= 0)
                break
    
    if (rdi != 0)
        result.b = 0
    else
        zmm0 = (*arg3).q
        
        if (rbx u>= rbp || rbp - rbx u<= rbx)
            result.b = 0
        else
            int64_t rcx_14 = rbp - r8_1
            
            if (rcx_14 u> r8_1 && rbp - r8_1 * 2 u>= rbx * 2)
                result.b = 1
            else if (r8_1 u<= rbx || rcx_14 + rbx u> r8_1 - rbx)
                result.b = 0
            else
                char* rcx_15 = sx.q(*arg4 - 1)
                rcx_15[zmm0] += 1
                
                if (rcx_15 s> 0)
                    while (rcx_15[zmm0] == 0x3a)
                        rcx_15[zmm0] = 0x30
                        rcx_15[zmm0 - 1] += 1
                        rcx_15 -= 1
                        
                        if (rcx_15 s<= 0)
                            break
                
                if (*zmm0 == 0x3a)
                    *zmm0 = 0x31
                    *arg5 += 1
                
                result.b = 1
else
label_142b83cde:
    zmm0 = (*arg3).q
    int64_t rdx_6 = (zx.q(r9_1) << r15_1) + r8_1
    uint64_t r8_3 = zx.q(r11_1) << r15_1
    
    if (r8_3 u> 1 && r8_3 - 1 u> 1)
        int64_t rcx_8 = r8_3 - rdx_6
        
        if (rcx_8 u> rdx_6 && r8_3 - rdx_6 * 2 u>= 2)
            return 1
        
        if (rdx_6 u> 1 && rcx_8 + 1 u<= rdx_6 - 1)
            char* rcx_10 = sx.q(*arg4 - 1)
            rcx_10[zmm0] += 1
            
            if (rcx_10 s> 0)
                while (rcx_10[zmm0] == 0x3a)
                    rcx_10[zmm0] = 0x30
                    rcx_10[zmm0 - 1] += 1
                    rcx_10 -= 1
                    
                    if (rcx_10 s<= 0)
                        break
            
            if (*zmm0 == 0x3a)
                *zmm0 = 0x31
                *arg5 += 1
            
            return 1
    
    result.b = 0
return result
