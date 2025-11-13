// 函数: sub_141de0ff0
// 地址: 0x141de0ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x120) == 0 || arg5 != 0)
    int64_t rax_2
    
    if (arg3 != 0)
        rax_2 = (*(*arg3 + 0x260))(arg3, arg1)
    else
        arg3.b = 1
        void* rax_1 = sub_142437e30(arg1, 0, arg3.b)
        
        if (rax_1 == 0)
            rax_2 = 0
        else
            arg3 = *(rax_1 + 0x238)
            
            if (arg3 != 0)
                rax_2 = (*(*arg3 + 0x260))(arg3, arg1)
            else
                arg3 = *(rax_1 + 0x230)
                
                if (arg3 != 0)
                    rax_2 = (*(*arg3 + 0x260))(arg3, arg1)
                else
                    rax_2 = 0
    
    sub_142444e60(arg1, rax_2)

if (arg4 == 0)
    return 

int64_t* rcx_2 = *(arg1 + 0x120)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x298))(rcx_2, arg1, zx.q(arg2))
else if (arg2 == 2)
    int64_t* rax_5 = sub_141baa510(arg1)
    int64_t* i = *rax_5
    
    for (void* rdi_1 = &i[sx.q(rax_5[1].d)]; i != rdi_1; i = &i[1])
        void* r11_1 = *i
        int64_t r9 = 0
        int64_t* r8_1 = *(r11_1 + 0x100)
        uint64_t r10_2 = sx.q(*(r11_1 + 0x108)) << 3 u>> 3
        
        if (r8_1 u> &r8_1[sx.q(*(r11_1 + 0x108))])
            r10_2 = 0
        
        if (r10_2 != 0)
            do
                int64_t rax = *r8_1
                
                if (rax != 0)
                    int32_t rax_7 = *(rax + 0xc)
                    
                    if (rax_7 s>= data_143e1d9b4)
                        rax = 0
                    else
                        uint32_t rdx_3 = zx.d(rax_7.w)
                        
                        if (rax_7 s< 0)
                            rax_7 += 0xffff
                            rdx_3 -= 0x10000
                        
                        rax = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
                    
                    *(rax + 8) |= 0x20000000
                
                r8_1 = &r8_1[1]
                r9 += 1
            while (r9 != r10_2)
        
        *(r11_1 + 0x108) = 0
        
        if (*(r11_1 + 0x10c) != 0)
            sub_1405c5570(r11_1 + 0x100, 0)
