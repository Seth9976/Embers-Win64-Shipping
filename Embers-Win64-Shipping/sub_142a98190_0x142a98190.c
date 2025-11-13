// 函数: sub_142a98190
// 地址: 0x142a98190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = -1
int32_t rbx = -1
sub_142aeacd0(*(arg1 + 0x158), sx.q(arg2))
void* rdx_1 = *(*(arg1 + 0x148) + 0x10)
*(rdx_1 + 0x10) = *(rdx_1 + 8)
*(rdx_1 + 0x18) = 0xffffffff

if (sub_142aeabf0(*(arg1 + 0x158)) != 0x20)
    sub_142aea870(*(arg1 + 0x158), arg3)

int32_t i = sub_142aeabf0(*(arg1 + 0x158))

if (i == 0xffffffff)
label_142a982ec:
    rbx = sub_142a98bf0(*(*(arg1 + 0x148) + 0x10))
    int64_t rax_7
    rax_7, arg3 = sub_142aea6a0(*(arg1 + 0x158))
    rbp = rax_7
else
    int32_t rax_3
    
    do
        rax_3 = sub_142b107e0(*(*(arg1 + 0x148) + 0x10), i)
        
        if ((rax_3.b & 1) == 0)
            break
        
        if (rax_3 s>= 2)
            int64_t rax_4
            rax_4, arg3 = sub_142aea6a0(*(arg1 + 0x158))
            rbp = rax_4
            int16_t* rcx_8 = *(*(*(arg1 + 0x148) + 0x10) + 0x10)
            uint32_t rbx_1 = zx.d(*rcx_8)
            
            if (test_bit(rbx_1, 0xf))
                rbx = rbx_1 & 0x7fff
                
                if (rbx u>= 0x4000)
                    if (rbx u>= 0x7fff)
                        goto label_142a982aa
                    
                    rbx = (rbx - 0x4000) << 0x10 | zx.d(rcx_8[1])
            else if (rbx_1 u< 0x4040)
                rbx = (rbx_1 u>> 6) - 1
            else if (rbx_1 u>= 0x7fc0)
            label_142a982aa:
                rbx = zx.d(rcx_8[1]) << 0x10 | zx.d(rcx_8[2])
            else
                rbx = ((rbx_1 & 0x7fc0) - 0x4040) << 0xa | zx.d(rcx_8[1])
        
        i = sub_142aeabf0(*(arg1 + 0x158))
    while (i != 0xffffffff)
    
    if (rax_3 != 0)
        goto label_142a982ec

if (rbp s>= 0)
    if (rbx == 2)
        return zx.q(rbx - 1)
    
    if (rbx == 1)
        void* rcx_13 = *(*(arg1 + 0x148) + 8)
        
        if (rcx_13 != 0)
            *(rcx_13 + 0x10) = *(rcx_13 + 8)
            int32_t rbx_7 = 3
            *(rcx_13 + 0x18) = 0xffffffff
            sub_142aeacd0(*(arg1 + 0x158), rbp)
            int32_t rax_12
            
            do
                int32_t rax_11 = sub_142aea870(*(arg1 + 0x158), arg3)
                
                if (rax_11 == 0xffffffff)
                    break
                
                rax_12 = sub_142b107e0(*(*(arg1 + 0x148) + 8), rax_11)
                rbx_7 = rax_12
            while ((rax_12.b & 1) != 0)
            int64_t result
            result.b = rbx_7 != 0
            return result

return 0
