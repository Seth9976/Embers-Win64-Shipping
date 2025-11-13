// 函数: sub_1403e4590
// 地址: 0x1403e4590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg2

if (*(arg1 + 0x1058) != 0)
    sub_1403e7bd0(arg1 + 0x109c, arg1 + 0x10a0, rbx, arg3)
    *(arg1 + 0x1090) = 1
    return 

if (*(arg1 + 0x1090) != 0)
    uint32_t arg_8
    int32_t arg_20
    sub_1403e7bd0(&arg_8, &arg_20, arg2, arg3)
    int32_t rax_2 = *(arg1 + 0x10a0)
    int32_t rcx_2 = arg_20
    uint32_t r8_2
    
    if (rcx_2 s> rax_2)
        *(arg1 + 0x109c) s>>= rcx_2.b - rax_2.b
        r8_2 = arg_8
    else if (rcx_2 s>= rax_2)
        r8_2 = arg_8
    else
        r8_2 = arg_8 s>> (rax_2.b - rcx_2.b)
    
    int32_t rax = *(arg1 + 0x109c)
    
    if (r8_2 s> rax)
        int32_t rcx_4
        
        if (rax == 0)
            rcx_4 = 0x20
        else
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax)
            rcx_4 = 0x1f - temp0_1
        
        *(arg1 + 0x109c) <<= (rcx_4 - 1).b
        char rcx_7 = 0
        
        if (0x18 - (rcx_4 - 1) s> 0)
            rcx_7 = (0x18 - (rcx_4 - 1)).b
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(*(arg1 + 0x109c))
        int32_t r8_4 = r8_2 s>> rcx_7
        int32_t rcx_8 = 1
        arg_8 = r8_4
        
        if (r8_4 s> 1)
            rcx_8 = r8_4
        
        int32_t r9_3 = 0
        int32_t r10_2 = sub_1403e49b0(divs.dp.d(temp2_1:temp3_1, rcx_8)) << 4
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(0x10000 - r10_2)
        
        if (arg3 s> 0)
            do
                int32_t rdx_7 = sx.d(*rbx)
                uint32_t r8_5 = zx.d(r10_2.w)
                rax = r10_2 s>> 0x10
                r10_2 += divs.dp.d(temp8_1:temp9_1, arg3) << 2
                rax.w *= rdx_7.w
                *rbx = ((r8_5 * rdx_7) s>> 0x10).w + rax.w
                
                if (r10_2 s> 0x10000)
                    break
                
                r9_3 += 1
                rbx = &rbx[1]
            while (r9_3 s< arg3)

*(arg1 + 0x1090) = 0
