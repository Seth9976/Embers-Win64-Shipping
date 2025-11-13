// 函数: sub_1403cb780
// 地址: 0x1403cb780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = arg1[4].b

if ((r8 & 2) == 0)
    return 

int32_t i_3 = *arg1
arg1.b = *(arg1 + 0x11)
uint16_t rax

if (arg1.b == 0x10)
    int64_t r8_1
    
    if (r8 == 2)
        r8_1 = 6
        
        if (i_3 != 0)
        label_1403cb84b:
            void* rdx_1 = &arg2[5]
            int32_t i
            
            do
                rax = zx.w(*(rdx_1 - 2)) | (zx.d(*(rdx_1 - 3)) << 8).w
                uint16_t rbx_4 = (zx.w(*(rdx_1 - 4)) | (zx.d(*(rdx_1 - 5)) << 8).w) + rax
                uint16_t rcx_7 = (zx.w(*rdx_1) | (zx.d(*(rdx_1 - 1)) << 8).w) + rax
                *(rdx_1 - 5) = rbx_4:1.b
                *(rdx_1 - 4) = rbx_4.b
                *(rdx_1 - 1) = rcx_7:1.b
                *rdx_1 = rcx_7.b
                rdx_1 += r8_1
                i = i_3
                i_3 -= 1
            while (i != 1)
    else if (r8 == 6)
        r8_1 = 8
        
        if (i_3 != 0)
            goto label_1403cb84b
else if (arg1.b == 8)
    int64_t rcx
    
    if (r8 == 2)
        rcx = 3
        
        if (i_3 != 0)
        label_1403cb7f3:
            int32_t r8_3 = i_3 & 1
            
            if (i_3 != 1)
                int32_t i_2 = r8_3 - i_3
                int32_t i_1
                
                do
                    char rax_1 = arg2[1]
                    *arg2 += rax_1
                    arg2[2] += rax_1
                    rax = zx.w(arg2[rcx + 1])
                    arg2[rcx] += rax.b
                    arg2[rcx + 2] += rax.b
                    arg2 = &arg2[rcx * 2]
                    i_1 = i_2
                    i_2 += 2
                while (i_1 != 0xfffffffe)
            
            if (r8_3 != 0)
                rax.b = arg2[1]
                *arg2 += rax.b
                arg2[2] += rax.b
    else if (r8 == 6)
        rcx = 4
        
        if (i_3 != 0)
            goto label_1403cb7f3
