// 函数: sub_140b67580
// 地址: 0x140b67580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = 0x80
*arg1 = 0
arg1[1] = 0
bool cond:0 = true
bool cond:1 = false
bool cond:3 = false

while (true)
    if (not(cond:3))
        arg1[1].d = rax
        
        if (rax s> *(arg1 + 0xc))
            sub_140594770(arg1)
    else if (not(cond:0) && not(cond:1))
        arg1[1].d = rax
        sub_1405a50a0(arg1)
    
    rax = GetCurrentDirectoryW(arg1[1].d, *arg1)
    
    if (rax == 0)
        int32_t rax_5 = *(arg1 + 0xc)
        arg1[1].d = 0
        
        if (rax_5 s< 0 && rax_5 != 0)
            sub_1405947f0(arg1, 0)
        
        int16_t* rax_6 = *arg1
        
        if (rax_6 != 0)
            *rax_6 = 0
        
        break
    
    int64_t rdi = sx.q(arg1[1].d)
    cond:0 = rax s>= rdi.d
    cond:1 = rax == rdi.d
    cond:3 = rax s<= rdi.d
    
    if (rax u< rdi.d)
        if (rax + 1 s<= rdi.d)
            if (rax + 1 s< rdi.d && rax + 1 != rdi.d)
                arg1[1].d = rax + 1
                sub_1405a50a0(arg1)
                return arg1
            
            break
        
        arg1[1].d = rax + 1
        
        if (rax + 1 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        memset(*arg1 + (rdi << 1), 0, sx.q(rax + 1 - rdi.d) * 2)
        return arg1

return arg1
