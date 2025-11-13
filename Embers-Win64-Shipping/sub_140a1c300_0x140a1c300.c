// 函数: sub_140a1c300
// 地址: 0x140a1c300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
int16_t* rsi = arg3
int32_t rbx = arg2
int16_t* r14 = arg1
uint64_t result

if (arg4 != 0)
    while (true)
        int16_t r9 = *rsi
        
        if (r9 == 0x2a || r9 == 0x3f)
            void* r11_1 = &r14[sx.q(rbx) - 1]
            int16_t i = rsi[sx.q(rdi) - 1]
            void* r10_2 = &rsi[sx.q(rdi) - 1]
            
            if (i != 0x2a)
                while (i != 0x3f)
                    uint32_t rcx_1 = zx.d(*r11_1)
                    arg2.w = sbb.w(arg2.w, arg2.w, rcx_1 - 0x41 u< 0x1a)
                    result = zx.q(zx.d(i) - 0x41)
                    arg2.w &= 0x20
                    arg2.w += rcx_1.w
                    result.w = sbb.w(result.w, result.w, result.d u< 0x1a)
                    result.w &= 0x20
                    result.w += i
                    
                    if (arg2.w != result.w)
                        goto label_140a1c463
                    
                    rdi -= 1
                    int32_t temp1_1 = rbx
                    rbx -= 1
                    
                    if (temp1_1 == 1)
                        break
                    
                    i = *(r10_2 - 2)
                    r10_2 -= 2
                    r11_1 -= 2
                    
                    if (i == 0x2a)
                        break
            
            if (rdi == 1 && (r9 == 0x2a || rbx s< 2))
                result.b = 1
                return result
            
            int32_t r15_1 = rbx
            
            if (r9 == 0x3f && rbx s> 1)
                r15_1 = 1
            
            int32_t rbp_1 = 0
            
            if (r15_1 s>= 0)
                while (sub_140a1c300(&r14[sx.q(rbp_1)], zx.q(rbx), &rsi[1], zx.q(rdi - 1)).b == 0)
                    rbp_1 += 1
                    rbx -= 1
                    
                    if (rbp_1 s> r15_1)
                        goto label_140a1c463
                
                result.b = 1
                return result
        else
            uint32_t rcx = zx.d(*r14)
            arg2.w = sbb.w(arg2.w, arg2.w, rcx - 0x41 u< 0x1a)
            result = zx.q(zx.d(r9) - 0x41)
            arg2.w &= 0x20
            arg2.w += rcx.w
            result.w = sbb.w(result.w, result.w, result.d u< 0x1a)
            result.w &= 0x20
            result.w += r9
            
            if (arg2.w == result.w)
                r14 = &r14[1]
                rsi = &rsi[1]
                rbx -= 1
                int32_t temp0_1 = rdi
                rdi -= 1
                
                if (temp0_1 == 1)
                    break
                
                continue
        
    label_140a1c463:
        result.b = 0
        return result

result.b = rbx == 0
return result
