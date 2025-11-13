// 函数: sub_1409617f0
// 地址: 0x1409617f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u< 1)
    int64_t* r15_2 = arg1 + 0x98 + (zx.q(arg3) << 6)
    
    if ((*(*r15_2 + 0x10))(r15_2) != 0)
        void*** rax_5 = j_sub_140a82f30(0x40)
        void*** rsi = rax_5
        
        if (rax_5 == 0)
            rsi = nullptr
        else
            *rsi = &data_142e32d98
            rsi[1] = 0
            rsi[2] = 0
            rsi[3] = 0
            rsi[4] = 0
            int64_t* rdi_1 = r15_2[2]
            int64_t var_38 = r15_2[1]
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            if (&var_38 != &rsi[1])
                var_38.o = *(rsi + 8)
                *(rsi + 8) = var_38.o
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            int32_t rdx = 0
            rsi[5].w = r15_2[5].w
            rsi[6] = r15_2[6]
            rsi[7].w = r15_2[7].w
            uint32_t rax_12 = zx.d(r15_2[5].w)
            rsi[4].d = 0
            
            if (*(rsi + 0x24) != rax_12)
                sub_1405c5510(&rsi[3], rax_12)
                rdx = rsi[4].d
            
            int32_t rcx_6 = zx.d(r15_2[5].w) + rdx
            rsi[4].d = rcx_6
            
            if (rcx_6 s> *(rsi + 0x24))
                sub_1405daba0(&rsi[3])
            
            memcpy(rsi[3], r15_2[3], zx.d(r15_2[5].w))
        
        void*** rax_13 = j_sub_140a82f30(0x18)
        
        if (rax_13 == 0)
            rax_13 = nullptr
        else
            rax_13[1].d = 1
            *rax_13 = &data_142d42ea8
            *(rax_13 + 0xc) = 1
            rax_13[2] = rsi
        
        *arg2 = rsi
        arg2[1] = rax_13
        return arg2

*arg2 = nullptr
arg2[1] = 0
return arg2
