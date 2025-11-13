// 函数: sub_142a2ee90
// 地址: 0x142a2ee90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x1e7c))
arg2[2] = 0
char rax = sub_142a2f010(arg1 + 0x36a0, &data_143601364)
*arg2 = rax

if (rax == 4)
    int32_t i = 0
    void* rbx_1 = &arg2[8]
    arg2[3] = 1
    
    do
        int32_t r8_1
        
        if ((i & 0xfffffffc) != 0)
            r8_1 = *(rbx_1 - 0xc)
        else
            void* rdx_1 = arg2 - rbx * 0x4c
            uint32_t rax_2 = zx.d(*rdx_1)
            
            if (rax_2 == 0)
                r8_1 = 0
            else if (rax_2 == 1)
                r8_1 = 2
            else if (rax_2 == 2)
                r8_1 = 3
            else if (rax_2 == 3)
                r8_1 = 1
            else if (rax_2 == 4)
                r8_1 = *(0x34 - arg2 + rbx_1 + rdx_1)
            else
                r8_1 = 0
        
        int32_t rdx_2
        
        if ((i.b & 3) != 0)
            rdx_2 = *rbx_1
        else
            uint32_t rcx_1 = zx.d(arg2[-0x4c])
            
            if (rcx_1 == 0)
                rdx_2 = 0
            else if (rcx_1 == 1)
                rdx_2 = 2
            else if (rcx_1 == 2)
                rdx_2 = 3
            else if (rcx_1 == 3)
                rdx_2 = 1
            else if (rcx_1 == 4)
                rdx_2 = *(0x10 - arg2 + rbx_1 + arg2 - 0x4c)
            else
                rdx_2 = 0
        
        rbx_1 += 4
        i += 1
        *rbx_1 =
            sub_142a2edc0(arg1 + 0x36a0, (sx.q(rdx_2) + sx.q(r8_1) * 0xa) * 9 + &data_143600fe0)
    while (i s< 0x10)

char result = sub_142a2fa10(arg1 + 0x36a0, &data_143600e34)
arg2[1] = result
return result
