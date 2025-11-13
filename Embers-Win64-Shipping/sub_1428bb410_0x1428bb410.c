// 函数: sub_1428bb410
// 地址: 0x1428bb410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t i = sx.q(arg2)
int32_t rbx

if ((arg3 & 2) == 0)
    rbx = 0
    
    if ((arg3 & 4) == 0)
        if (i s> 0)
            char* rdi_2 = arg1
            
            do
                char rax_6 = *rdi_2
                
                if (rax_6 == 0xa)
                    break
                
                if (rax_6 == 0xd)
                    break
                
                if (sub_1428e4710(sx.d(rax_6), 0x40) != 0)
                    *rdi_2 = 0x20
                
                rdi_2 = &rdi_2[1]
                rbx += 1
            while (rdi_2 - arg1 s< i)
    else if (i s> 0)
        char* rdi_1 = arg1
        
        do
            if (sub_1428e4710(sx.d(*rdi_1), 0x400) == 0)
                break
            
            char rax_3 = *rdi_1
            
            if (rax_3 == 0xa)
                break
            
            if (rax_3 == 0xd)
                break
            
            rdi_1 = &rdi_1[1]
            rbx += 1
        while (rdi_1 - arg1 s< i)
else
    if (arg2 s>= 0)
        char* rax_1 = &arg1[i]
        
        while (*rax_1 s<= 0x20)
            rax_1 -= 1
            int32_t temp0_1 = i.d
            i = zx.q(i.d - 1)
            
            if (temp0_1 - 1 s< 0)
                break
    
    rbx = i.d + 1

*(sx.q(rbx) + arg1) = 0xa
return zx.q(rbx + 1)
