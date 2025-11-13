// 函数: sub_142637270
// 地址: 0x142637270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= arg4)
    return 

int64_t r11_1 = sx.q(*arg6)
int64_t rdi_2 = sx.q(r11_1.d * arg3 + arg1) << 2
uint64_t i_1 = zx.q(arg4 - arg3)
uint64_t i

do
    if (arg1 s< arg2)
        int64_t r11_2 = rdi_2
        uint64_t j_1 = zx.q(arg2 - arg1)
        uint64_t j
        
        do
            int32_t rcx = *(r11_2 + *(arg6 + 0x40))
            uint64_t rax = zx.q(rcx) & 0xffffff
            uint64_t rdx = zx.q(rax.d + (rcx u>> 0x18))
            
            if (rax u< rdx)
                do
                    if (*(rax + *(arg6 + 0x58)) != 0)
                        *(arg7 + (rax << 1)) = arg5
                    
                    rax += 1
                while (rax s< rdx)
            
            r11_2 += 4
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    rdi_2 += r11_1 << 2
    i = i_1
    i_1 -= 1
while (i != 1)
