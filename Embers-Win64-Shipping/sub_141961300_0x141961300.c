// 函数: sub_141961300
// 地址: 0x141961300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_143000cb0
*(arg1 + 0x24) = arg4
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = arg3
arg1[4].d = arg2
arg1[5].d = 0
arg1[6] = 0
arg1[7] = 0
int32_t rax = *(arg1 + 0x24)

if (rax != 0xffffffff && (data_143f0f1b7 != 0 || arg2 != 2))
    if (rax s> 0)
        sub_1405c5570(&arg1[6], rax)
        rax = *(arg1 + 0x24)
    
    int32_t i = 0
    
    if (rax != 0)
        do
            int64_t* rcx_1 = arg1[3]
            int64_t* arg_8
            int64_t* rax_2 = (*(*rcx_1 + 0x320))(rcx_1, &arg_8, zx.q(arg1[4].d))
            int64_t rdi_1 = sx.q(arg1[7].d)
            int32_t rcx_2 = (rdi_1 + 1).d
            arg1[7].d = rcx_2
            
            if (rcx_2 s> *(arg1 + 0x3c))
                sub_1405a4d70(&arg1[6])
            
            arg1[6][rdi_1] = *rax_2
            *rax_2 = 0
            int64_t* rdi_2 = arg_8
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    if (rdi_2[2].b == 0)
                        bool z_1
                        
                        if (0 == *(rdi_2 + 0xc))
                            *(rdi_2 + 0xc) = 1
                            z_1 = true
                        else
                            *(rdi_2 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_7 = sub_140a20af0()
                            uint64_t rdx_3 = zx.q(rax_7)
                            void* const rax_8
                            
                            if (rax_7 != 0)
                                rax_8 = *(&data_143cf0bf8 + (rdx_3 u>> 0xe << 3))
                                    + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                            else
                                rax_8 = nullptr
                            
                            *(rax_8 + 8) = rdi_2
                            sub_1405a42f0(&data_143f02390, rdx_3.d)
                    else
                        (**rdi_2)(rdi_2, 1)
            
            arg1[5].d += 1
            i += 1
        while (i u< *(arg1 + 0x24))

return arg1
