// 函数: sub_1429e6730
// 地址: 0x1429e6730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

char* i = nullptr

do
    int32_t rsi_1 = 0
    uint32_t rbx_3 = (arg3[1].d * 0xfc + 4) u>> 8
    
    if (*(arg3 + 0xc) s< 0)
        sub_142a23140(arg3)
    
    int64_t r8 = *arg3
    uint64_t rcx_2 = zx.q(rbx_3) << 0x38
    
    if (r8 u>= rcx_2)
        rsi_1 = 1
        rbx_3 = arg3[1].d - rbx_3
        r8 -= rcx_2
    
    uint32_t rdx = zx.d(*(zx.q(rbx_3) + &data_143603f00))
    *(arg3 + 0xc) -= rdx
    *arg3 = r8 << rdx.b
    arg3[1].d = rbx_3 << rdx.b
    
    if (rsi_1 != 0)
        int32_t rbp_1 = 0
        int32_t r14_1 = 6
        int32_t temp0_1
        
        do
            int32_t rsi_2 = 0
            uint32_t rbx_8 = (arg3[1].d + 1) << 7 u>> 8
            
            if (*(arg3 + 0xc) s< 0)
                sub_142a23140(arg3)
            
            int64_t r8_2 = *arg3
            uint64_t rcx_7 = zx.q(rbx_8) << 0x38
            
            if (r8_2 u>= rcx_7)
                rsi_2 = 1
                rbx_8 = arg3[1].d - rbx_8
                r8_2 -= rcx_7
            
            uint32_t rdx_1 = zx.d(*(zx.q(rbx_8) + &data_143603f00))
            *(arg3 + 0xc) -= rdx_1
            rbp_1 |= rsi_2 << r14_1.b
            *arg3 = r8_2 << rdx_1.b
            temp0_1 = r14_1
            r14_1 -= 1
            arg3[1].d = rbx_8 << rdx_1.b
        while (temp0_1 - 1 s>= 0)
        rbp_1.b *= 2
        rbp_1.b |= 1
        i[arg1] = rbp_1.b
    
    i = &i[1]
while (i s< sx.q(arg2))
