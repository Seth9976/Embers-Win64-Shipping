// 函数: sub_140baa480
// 地址: 0x140baa480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2[1].d)
int16_t* rcx = *arg2
int16_t* rax = &rcx[r8]

while (rax != rcx)
    rax -= 2
    
    if (*rax == 0x2f)
        int32_t rax_3 = ((rax - rcx) s>> 1).d
        
        if (rax_3 == 0xffffffff)
            break
        
        int16_t* const rsi = &data_142d40450
        
        if (r8.d != 0)
            rsi = rcx
        
        int32_t rdi = (r8 - 1).d
        
        if (r8.d == 0)
            rdi = 0
        
        if (rax_3 s< 0)
            rdi = 0
        else if (rax_3 s< rdi)
            rdi = rax_3
        
        *arg1 = 0
        arg1[1] = 0
        
        if (rsi != 0 && *rsi != 0 && rdi s> 0)
            int32_t rdx = 0
            
            if (rdi + 1 s> 0)
                sub_1405947f0(arg1, rdi + 1)
                rdx = arg1[1].d
            
            int32_t rax_6 = rdi + 1 + rdx
            arg1[1].d = rax_6
            
            if (rax_6 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            UnDecorator::getReferenceType(*arg1, rsi, rdi * 2)
            *(*arg1 + (sx.q(arg1[1].d) << 1) - 2) = 0
        
        return arg1

sub_140596d10(arg1, arg2)
return arg1
