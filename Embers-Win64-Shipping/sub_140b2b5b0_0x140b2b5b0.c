// 函数: sub_140b2b5b0
// 地址: 0x140b2b5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r11 = zx.q(arg2)
uint32_t rdx = zx.d(arg5)
uint64_t rax

if (arg6 != 0)
    if (rdx == 0)
        int32_t rax_5
        rax_5.b = sub_140a54510(arg1, arg3) == 0
        return rax_5
    
    if (rdx == 1)
        void* rax_4
        rax_4.b = sub_140a32c90(arg1, arg3) != 0
        return rax_4
    
    if (rdx == 2)
        bool cond:1_1 = arg4 s<= 0
        
        if (arg4 s< 0)
            rax = -1
            
            do
                rax += 1
            while (arg3[rax] != 0)
            
            arg4 = rax.d
            cond:1_1 = rax.d s<= 0
        
        if (not(cond:1_1))
            rax = sub_140a546e0(arg1, arg3, sx.q(arg4))
        label_140b2b632:
            
            if (rax.d == 0)
                rax.b = 1
                return rax
    else if (rdx == 3)
        rax = -1
        
        if (r11.d s< 0)
            r11 = -1
            
            do
                r11 += 1
            while (arg1[r11] != 0)
        
        if (arg4 s< 0)
            do
                rax += 1
            while (arg3[rax] != 0)
            
            arg4 = rax.d
        
        if (r11.d s> 0 && r11.d s>= arg4)
            rax = sub_140a546e0(&arg1[sx.q(r11.d - arg4)], arg3, sx.q(arg4))
            goto label_140b2b632
else
    if (rdx == 0)
        int64_t r10_1 = arg3 - arg1
        uint32_t i
        uint32_t rdx_5
        
        do
            rdx_5 = zx.d(*arg1)
            i = zx.d(*(arg1 + r10_1))
            
            if (rdx_5 != i)
                break
            
            arg1 = &arg1[1]
        while (i != 0)
        
        i.b = rdx_5 - i == 0
        return i
    
    if (rdx == 1)
        wchar16* rax_2
        rax_2.b = wcsstr(arg1, arg3) != 0
        return rax_2
    
    if (rdx == 2)
        bool cond:2_1 = arg4 s> 0
        
        if (arg4 s< 0)
            rax = -1
            
            do
                rax += 1
            while (arg3[rax] != 0)
            
            arg4 = rax.d
            cond:2_1 = rax.d s> 0
        
        if (cond:2_1)
            goto label_140b2b62c
    else if (rdx == 3)
        rax = -1
        
        if (r11.d s< 0)
            r11 = -1
            
            do
                r11 += 1
            while (arg1[r11] != 0)
        
        if (arg4 s< 0)
            do
                rax += 1
            while (arg3[rax] != 0)
            
            arg4 = rax.d
        
        if (r11.d s> 0 && r11.d s>= arg4)
            arg1 = &arg1[sx.q(r11.d - arg4)]
        label_140b2b62c:
            rax = wcsncmp(arg1, arg3, sx.q(arg4))
            goto label_140b2b632

rax.b = 0
return rax
