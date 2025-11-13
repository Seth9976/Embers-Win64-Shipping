// 函数: sub_142b0ac60
// 地址: 0x142b0ac60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
void* const r12 = &data_143669090
int16_t* rbx = *(arg1 + 0x10)
int64_t r13 = *(arg1 + 0x18)
char* r9 = *(arg1 + 0x20)
uint32_t rsi = *(rdi + 0x50)
int64_t r14 = *(arg1 + 0x28)
int32_t* result = *(arg1 + 0x30)

if (rsi u< 0x10000000)
    r12 = &data_143669010

uint8_t rbp_1 = (rsi u>> 0x18).b & 1
uint64_t r11_1 = zx.q(rsi u>> 0x10)
int32_t r8 = 0
uint8_t arg_18 = rbp_1

if (rbp_1 != 0)
    goto label_142b0acd9

while (true)
    int16_t* rdx_1 = rbx
    
    if (rbx u>= r13)
        break
    
    if (r9 u>= r14)
        *arg2 = 0xf
        goto label_142b0b13a
    
    int16_t r10_4 = *rbx
    rbx = &rbx[1]
    
    if (r10_4 u<= 0x7f && *(zx.q(r10_4) + r12) != 0)
        uint8_t rbp_3 = 1
        rbx = rdx_1
        arg_18 = 1
        
        if (r11_1.b != 0)
            *r9 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx.q(rsi.b)]
            r9 = &r9[1]
            
            if (result != 0)
                *result = r8 - 1
                result = &result[1]
        
        if (*(zx.q(r10_4) + 0x143669150) == 0xff)
        label_142b0acd9:
            int32_t rcx_1 = r14.d - r9.d
            int32_t r10_3 = ((r13 - rbx) s>> 1).d
            
            if (r10_3 s> rcx_1)
                r10_3 = rcx_1
            
        label_142b0acf0:
            int16_t* rbp_2 = rbx
            
            if (r10_3 s> 0)
                int16_t rdx = *rbx
                rbx = &rbx[1]
                
                if (rdx u<= 0x7f && *(zx.q(rdx) + r12) != 0)
                    *r9 = rdx.b
                    r9 = &r9[1]
                    
                    if (result != 0)
                        *result = r8
                        result = &result[1]
                        r8 += 1
                    
                    r10_3 -= 1
                    goto label_142b0acf0
                
                *r9 = 0x2b
                r9 = &r9[1]
                
                if (rdx != 0x2b)
                    rbx = rbp_2
                    
                    if (result != 0)
                        *result = r8
                        result = &result[1]
                    
                    arg_18 = 0
                    r11_1.b = 0
                    continue
                else
                    if (r9 u< r14)
                        *r9 = 0x2d
                        r9 = &r9[1]
                        
                        if (result == 0)
                            goto label_142b0acd9
                        
                        *result = r8
                        result[1] = r8
                        result = &result[2]
                        r8 += 1
                        goto label_142b0acd9
                    
                    if (result != 0)
                        *result = r8
                        result = &result[1]
                        r8 += 1
                    
                    *(rdi + 0x68) = 0x2d
                    *(rdi + 0x5b) = 1
                    *arg2 = 0xf
            
            if (rbx u>= r13)
            label_142b0b13a:
                rbp_3 = arg_18
            else
                rbp_3 = arg_18
                
                if (r9 u>= r14)
                    *arg2 = 0xf
        else
            if (r9 u< r14)
                *r9 = 0x2d
                r9 = &r9[1]
                
                if (result != 0)
                    *result = r8 - 1
                    result = &result[1]
                
                goto label_142b0acd9
            
            *(rdi + 0x68) = 0x2d
            *(rdi + 0x5b) = 1
            *arg2 = 0xf
        
        if (*(arg1 + 2) == 0 || rbx u< r13)
            *(rdi + 0x50) &= 0xf0000000
            *(rdi + 0x50) |= (zx.d(rbp_3) << 8 | sx.d(r11_1.b)) << 0x10 | zx.d(rsi.b)
        else if (rbp_3 != 0)
            *(rdi + 0x50) &= 0xf1000000
            *(rdi + 0x50) |= 0x1000000
        else
            if (r11_1.b != 0)
                uint64_t rcx_40 = zx.q(rsi.b)
                
                if (r9 u>= r14)
                    *(sx.q(*(rdi + 0x5b)) + rdi + 0x68) = (
                        *"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[rcx_40]
                    *(rdi + 0x5b) += 1
                    *arg2 = 0xf
                else
                    *r9 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[
                        rcx_40]
                    r9 = &r9[1]
                    
                    if (result != 0)
                        *result = r8 - 1
                        result = &result[1]
            
            if (r9 u>= r14)
                *(sx.q(*(rdi + 0x5b)) + rdi + 0x68) = 0x2d
                *(rdi + 0x5b) += 1
                *arg2 = 0xf
                *(rdi + 0x50) &= 0xf1000000
                *(rdi + 0x50) |= 0x1000000
            else
                *r9 = 0x2d
                r9 = &r9[1]
                
                if (result == 0)
                    *(rdi + 0x50) &= 0xf1000000
                    *(rdi + 0x50) |= 0x1000000
                else
                    *result = r8 - 1
                    result = &result[1]
                    *(rdi + 0x50) &= 0xf1000000
                    *(rdi + 0x50) |= 0x1000000
        
        *(arg1 + 0x10) = rbx
        *(arg1 + 0x20) = r9
        *(arg1 + 0x30) = result
        return result
    
    int32_t rdx_2 = sx.d(r11_1.b)
    
    if (r11_1.b == 0)
        uint64_t rdx_10 = zx.q(r10_4)
        *r9 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx.q(rdx_10.d)
            u>> 0xa]
        r9 = &r9[1]
        
        if (r9 u>= r14)
            if (result != 0)
                *result = r8
                result = &result[1]
                r8 += 1
            
            *(rdi + 0x68) = *((zx.q((rdx_10 u>> 4).d) & 0x3f)
                + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
            *(rdi + 0x5b) = 1
            *arg2 = 0xf
        else
            *r9 = *((zx.q((rdx_10 u>> 4).d) & 0x3f)
                + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
            r9 = &r9[1]
            
            if (result != 0)
                *result = r8
                r10_4.b &= 0xf
                result[1] = r8
                r11_1.b = 1
                result = &result[2]
                r8 += 1
                r10_4.b <<= 2
                rsi = zx.d(r10_4.b)
                continue
        
        r10_4.b &= 0xf
        r11_1.b = 1
        r10_4.b <<= 2
        rsi = zx.d(r10_4.b)
    else if (rdx_2 == 1)
        uint64_t r11_3 = zx.q(r10_4)
        *r9 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[
            zx.q(r11_3.d) u>> 0xe | zx.q(rsi.b)]
        r9 = &r9[1]
        
        if (r9 u>= r14)
            if (result != 0)
                *result = r8
                result = &result[1]
                r8 += 1
            
            *(rdi + 0x68) = *((zx.q((r11_3 u>> 8).d) & 0x3f)
                + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
            *(rdi + 0x69) = *((zx.q((r11_3 u>> 2).d) & 0x3f)
                + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
            *(rdi + 0x5b) = 2
            *arg2 = 0xf
        else
            *r9 = *((zx.q(r11_3.d u>> 8) & 0x3f)
                + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
            r9 = &r9[1]
            
            if (r9 u>= r14)
                if (result != 0)
                    *result = r8
                    result[1] = r8
                    result = &result[2]
                    r8 += 1
                
                *(rdi + 0x68) = *((zx.q((r11_3 u>> 2).d) & 0x3f)
                    + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
                *(rdi + 0x5b) = 1
                *arg2 = 0xf
            else
                *r9 = *((zx.q((r11_3 u>> 2).d) & 0x3f)
                    + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
                r9 = &r9[1]
                
                if (result != 0)
                    *result = r8
                    r10_4.b &= 3
                    result[1] = r8
                    r11_1.b = 2
                    result[2] = r8
                    result = &result[3]
                    r8 += 1
                    r10_4.b <<= 4
                    rsi = zx.d(r10_4.b)
                    continue
        
        r10_4.b &= 3
        r11_1.b = 2
        r10_4.b <<= 4
        rsi = zx.d(r10_4.b)
    else if (rdx_2 == 2)
        uint64_t r11_2 = zx.q(r10_4)
        *r9 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[
            zx.q(r11_2.d) u>> 0xc | zx.q(rsi.b)]
        r9 = &r9[1]
        
        if (r9 u>= r14)
            if (result != 0)
                *result = r8
                result = &result[1]
                r8 += 1
            
            *(rdi + 0x68) = *((zx.q((r11_2 u>> 6).d) & 0x3f)
                + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
            *(rdi + 0x69) = *((zx.q(r11_2.d) & 0x3f)
                + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
            *(rdi + 0x5b) = 2
            *arg2 = 0xf
        else
            *r9 = *((zx.q(r11_2.d u>> 6) & 0x3f)
                + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
            r9 = &r9[1]
            
            if (r9 u>= r14)
                if (result != 0)
                    *result = r8
                    result[1] = r8
                    result = &result[2]
                    r8 += 1
                
                rsi.b = 0
                r11_1.b = 0
                *(rdi + 0x68) = *((zx.q(r11_2.d) & 0x3f)
                    + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
                *(rdi + 0x5b) = 1
                *arg2 = 0xf
                continue
            else
                *r9 = *((zx.q(r11_2.d) & 0x3f)
                    + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")
                r9 = &r9[1]
                
                if (result != 0)
                    *result = r8
                    rsi.b = 0
                    result[1] = r8
                    result[2] = r8
                    result = &result[3]
                    r8 += 1
                    r11_1.b = 0
                    continue
        
        rsi.b = 0
        r11_1.b = 0

goto label_142b0b13a
