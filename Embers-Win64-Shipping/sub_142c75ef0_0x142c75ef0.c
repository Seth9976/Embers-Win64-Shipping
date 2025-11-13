// 函数: sub_142c75ef0
// 地址: 0x142c75ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int32_t rbx = 0

for (int32_t i = 0; i u< 4; )
    char r9_1 = *arg2
    int32_t r8_1 = 0
    
    if (r9_1 != 0x3d)
        char const* const rcx = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
        char rax = 0x41
        
        while (rax != r9_1)
            rax = rcx[1]
            rcx = &rcx[1]
            r8_1 += 1
            
            if (rax == 0)
                break
        
        if (*rcx != r9_1)
            return 0
        
        rbx = (rbx << 6) + r8_1
    else
        rbx <<= 6
        rdi += 1
    
    i += 1
    arg2 = &arg2[1]

if (rdi u< 1)
    arg1[2] = sub_142c56220(rbx.b)

uint32_t rbx_2 = rbx u>> 8

if (rdi u< 2)
    arg1[1] = sub_142c56220(rbx_2.b)

*arg1 = sub_142c56220((rbx_2 u>> 8).b)
return 3 - rdi
