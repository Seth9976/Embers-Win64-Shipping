// 函数: sub_142b454b0
// 地址: 0x142b454b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[9].b != 0)
    return 

int64_t rax = sx.q(*arg1)

if (rax.d u> 9)
    abort()
    noreturn

switch (rax)
    case 0, 9
        *arg3 = 5
    case 1
        sub_142ab3fe0(arg2)
    case 2
        int32_t rbp_1 = sx.d(*(arg1 + 0xa))
        int32_t rbp_2
        
        if (rbp_1 != 0xffffffff)
            rbp_2 = neg.d(rbp_1)
        else
            rbp_2 = -0x80000000
        
        sub_142ab4700(arg2, rbp_2, arg1[8], arg3)
        int32_t rdi_1 = sx.d(arg1[2].w)
        int32_t rdx_1
        
        if (rdi_1 != 0)
            rdx_1 = sub_142a92b60(0, neg.d(neg.d(rdi_1))).d
        else
            rdx_1 = sub_142a92b60(0, 0x80000001).d
        
        sub_142ab47f0(arg2, rdx_1)
    case 3
        sub_142ab4700(arg2, sub_142b45a10(arg2, sx.d(*(arg1 + 0xe))), arg1[8], arg3)
        sub_142ab47f0(arg2, sub_142a92b60(0, neg.d(sub_142b459d0(arg2, sx.d(arg1[3].w)))))
        
        if (std::ios_base::good(arg2).b != 0 && arg1[3].w s> 0)
            sub_142ab4800(arg2, 1)
    case 4
        int32_t rdi_4 = sx.d(arg1[2].w)
        int32_t rdi_5
        
        if (rdi_4 != 0)
            rdi_5 = neg.d(rdi_4)
        else
            rdi_5 = 0x7fffffff
        
        int32_t rbp_3 = sx.d(*(arg1 + 0xa))
        int32_t rbp_4
        
        if (rbp_3 != 0xffffffff)
            rbp_4 = neg.d(rbp_3)
        else
            rbp_4 = -0x80000000
        
        int16_t rax_5 = arg1[3].w
        int32_t rax_7
        
        if (rax_5 != 0xffff)
            rax_7 = sub_142a92b70(rbp_4, sub_142b459d0(arg2, sx.d(rax_5)))
        else
            rax_7 = sub_142a92b60(rbp_4, sub_142b45a10(arg2, sx.d(*(arg1 + 0xe))))
        
        sub_142ab4700(arg2, rax_7, arg1[8], arg3)
        sub_142ab47f0(arg2, sub_142a92b60(0, neg.d(rdi_5)).d)
    case 5
        sub_142ab3f10(arg2, zx.o(*(arg1 + 8)), arg1[8], arg3)
        sub_142ab47f0(arg2, sx.d(arg1[4].w))
    case 6
        sub_142ab4700(arg2, neg.d(sx.d(*(arg1 + 0x12))), arg1[8], arg3)
        sub_142ab47f0(arg2, sx.d(arg1[4].w))
    case 7
        sub_142ab4720(arg2, neg.d(sx.d(*(arg1 + 0x12))), arg1[8], arg3)
        sub_142ab47f0(arg2, sx.d(arg1[4].w))
    case 8
        abort()
        noreturn
