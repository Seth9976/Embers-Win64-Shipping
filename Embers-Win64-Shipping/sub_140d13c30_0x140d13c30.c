// 函数: sub_140d13c30
// 地址: 0x140d13c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x10)
int64_t rbp = sx.q(arg2)

if (rax == 0)
    sub_140d186f0(&data_143e1d990, arg1)
    rax = *(arg1 + 0x10)

if (rbp.d s>= rax)
    int32_t i_1 = rbp.d - rax + 1
    int64_t r14_1 = sx.q(*(arg1 + 0x10))
    int32_t rax_1 = r14_1.d + i_1
    *(arg1 + 0x10) = rax_1
    
    if (rax_1 s> *(arg1 + 0x14))
        sub_1405c5060(arg1 + 8)
    
    if (i_1 != 0)
        int64_t r8_1 = r14_1 * 0x50
        int32_t i
        
        do
            void* rdx_3 = *(arg1 + 8) + r8_1
            r8_1 += 0x50
            int64_t* rcx_1 = rdx_3 + 0x10
            *(rdx_3 + 0x20) = 0
            *(rdx_3 + 0x28) = 0
            __builtin_memset(rdx_3 + 0x30, 0, 0x20)
            __builtin_memset(rdx_3, 0, 0x2c)
            *(rcx_1 + 0x1c) = 0x80
            int64_t* rax_2 = rcx_1[2]
            
            if (rax_2 != 0)
                rcx_1 = rax_2
            
            *rcx_1 = 0
            rcx_1[1] = 0
            *(rdx_3 + 0x30) = 0xffffffff
            *(rdx_3 + 0x34) = 0
            *(rdx_3 + 0x40) = 0
            *(rdx_3 + 0x48) = 0
            i = i_1
            i_1 -= 1
        while (i != 1)

return sub_140b30de0(rbp * 0x50 + *(arg1 + 8), arg3) __tailcall
