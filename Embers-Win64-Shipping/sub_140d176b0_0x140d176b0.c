// 函数: sub_140d176b0
// 地址: 0x140d176b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg2 + 0xc))
AcquireSRWLockExclusive(arg1 + 0x18)
int32_t rax = *(arg1 + 0x10)

if (*arg3 != 0xffffffff)
    if (rax == 0)
        sub_140d186f0(&data_143e1d990, arg1)
        rax = *(arg1 + 0x10)
    
    if (rbp.d s>= rax)
        int32_t i_1 = rbp.d - rax + 1
        int64_t r14_1 = sx.q(*(arg1 + 0x10))
        int32_t rax_2 = r14_1.d + i_1
        *(arg1 + 0x10) = rax_2
        
        if (rax_2 s> *(arg1 + 0x14))
            sub_1405a4cf0(arg1 + 8)
        
        if (i_1 != 0)
            int64_t r8 = r14_1 << 2
            int32_t i
            
            do
                int32_t* rdx_3 = *(arg1 + 8) + r8
                r8 += 4
                *rdx_3 = 0xffffffff
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    *(*(arg1 + 8) + (rbp << 2)) = *arg3
else if (rbp.d s< rax)
    *(*(arg1 + 8) + (rbp << 2)) = 0xffffffff

return ReleaseSRWLockExclusive(arg1 + 0x18) __tailcall
