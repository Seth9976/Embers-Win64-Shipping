// 函数: sub_1418e76a0
// 地址: 0x1418e76a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax

if (arg3 != 1)
    if (arg3 == 2)
        void*** rax_2 = j_sub_140a82f30(0x90)
        void*** r14 = rax_2
        
        if (rax_2 == 0)
            r14 = nullptr
        else
            void* rbp_1 = *(arg1 + 0x58)
            *rax_2 = &data_142d3ff08
            rax_2[1].d = 0
            *(rax_2 + 0xc) = 0
            rax_2[2].w = 0x100
            rax_2[3].d = arg3
            rax_2[4] = 0
            rax_2[5].d = 0xffffffff
            *r14 = &data_142feeeb0
            sub_1418cfd70(&r14[6], rbp_1, arg3 + 6, arg3)
            r14[0xd] = 0
            r14[6] = &data_142feeea0
            r14[0xe].d = 4
            __builtin_memset(&r14[0xf], 0, 0x18)
            int64_t rbx_1 = sx.q(r14[0x10].d)
            int32_t rax_3 = (rbx_1 + 8).d
            r14[0x10].d = rax_3
            
            if (rax_3 s> *(r14 + 0x84))
                sub_1405a4f90(&r14[0xf])
            
            memset(&r14[0xf][rbx_1 * 2], 0, 0x80)
            r14[0x11] = sub_1418ba820(rbp_1 + 0x3f0, r14[0xe].d << 3, 2, 4)
        
        *arg2 = r14
        
        if (r14 != 0)
            r14[1].d += 1
        
        return arg2
    
    rax = j_sub_140a82f30(0x30)
    
    if (rax == 0)
        rax = nullptr
    else
        *rax = &data_142d3ff08
        rax[1].d = 0
        *rax = &data_142ef2928
        *(rax + 0xc) = 0
        rax[2].w = 0x100
        rax[3].d = arg3
        rax[4] = 0
        rax[5].d = 0xffffffff
else
    rax = j_sub_140a82f30(zx.q(arg3 + 0x3f))
    
    if (rax == 0)
        rax = nullptr
    else
        *rax = &data_142d3ff08
        rax[1].d = 0
        *rax = &data_142feeea8
        *(rax + 0xc) = 0
        rax[2].w = 0x100
        rax[3].d = arg3
        rax[4] = 0
        rax[5].d = 0xffffffff
        rax[6] = 0
        rax[7].d = 0

*arg2 = rax

if (rax != 0)
    rax[1].d += 1

return arg2
