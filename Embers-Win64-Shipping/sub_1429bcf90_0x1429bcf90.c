// 函数: sub_1429bcf90
// 地址: 0x1429bcf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg4
char* rbx = arg3
int32_t rbp = arg2
int32_t i = arg1

if (arg1 s> 0)
    do
        int32_t rax_1 = sx.d(*rbx)
        int64_t count
        
        if (rax_1.b s>= 0)
            i -= 2
            int32_t temp0_1 = rbp
            rbp += 0xffffffff - rax_1
            
            if (temp0_1 + 0xffffffff - rax_1 s< 0)
                return 0
            
            count = sx.q(rax_1 + 1)
            memset(rdi, sx.d(rbx[1]), count)
            rbx = &rbx[2]
        else
            int32_t count_1 = neg.d(rax_1)
            i += 0xffffffff - count_1
            int32_t temp1_1 = rbp
            rbp -= count_1
            
            if (temp1_1 - count_1 s< 0)
                return 0
            
            count = sx.q(count_1)
            memcpy(rdi, &rbx[1], count.d)
            rbx = &rbx[1 + count]
        
        rdi += count
    while (i s> 0)

return zx.q(rdi.d - arg4.d)
