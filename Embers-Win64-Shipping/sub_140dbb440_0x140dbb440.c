// 函数: sub_140dbb440
// 地址: 0x140dbb440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t result = sub_140865c40(arg1, &arg_8, *arg2)
int64_t rdx_1 = sx.q(arg_8)

if (rdx_1.d != 0xffffffff)
    int64_t rsi_1 = sx.q(*(*arg1 + rdx_1 * 0x18 + 8))
    sub_1405c2fb0(arg1, rdx_1.d)
    int64_t r12_2 = rsi_1 << 6
    void* rbp_2 = arg1[0xa] + r12_2
    
    for (int32_t i = *(rbp_2 + 0x20); i s<= *(rbp_2 + 0x28); i += 1)
        for (int32_t j = *(rbp_2 + 0x24); j s<= *(rbp_2 + 0x2c); j += 1)
            int64_t rcx_1 = sx.q(j * arg1[0x13].d + i) * 3
            int64_t rax_5 = arg1[0x11]
            int64_t rdx_2 = sx.q(*(rax_5 + (rcx_1 << 3) + 0x10))
            void* rdi_1 = rax_5 + (rcx_1 << 3)
            int32_t rcx_2 = 0
            int64_t rax_6 = 0
            
            if (rdx_2.d s> 0)
                int64_t r9_1 = *(rdi_1 + 8)
                
                do
                    if (*(r9_1 + (rax_6 << 2)) == rsi_1.d)
                        int32_t rdx_3 = *(rdi_1 + 0x10)
                        int32_t rax_8 = rdx_3 - rcx_2
                        
                        if (rax_8 != 1)
                            memmove(r9_1 + (sx.q(rcx_2) << 2), r9_1 + (sx.q(rcx_2 + 1) << 2), 
                                (rax_8 - 1) << 2)
                            rdx_3 = *(rdi_1 + 0x10)
                        
                        *(rdi_1 + 0x10) = rdx_3 - 1
                        sub_1405dac90(rdi_1 + 8)
                        break
                    
                    rcx_2 += 1
                    rax_6 += 1
                while (rax_6 s< rdx_2)
    
    int64_t rdi_2 = arg1[0xa]
    int64_t* rcx_5 = *(rdi_2 + r12_2 + 0x18)
    
    if (rcx_5 != 0)
        int32_t temp0_1 = *(rcx_5 + 0xc)
        *(rcx_5 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx_5 + 8))(rcx_5, 1)
    
    int64_t* rcx_6 = *(rdi_2 + r12_2 + 8)
    
    if (rcx_6 != 0)
        int32_t temp1_1 = *(rcx_6 + 0xc)
        *(rcx_6 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_6 + 8))(rcx_6, 1)
    
    void* r8_4 = &arg1[0xc]
    
    if (*(arg1 + 0x84) != 0)
        *((sx.q(arg1[0x10].d) << 6) + arg1[0xa]) = rsi_1.d
    
    int32_t rax_16 = -1
    int32_t* rcx_11 = arg1[0xa] + r12_2
    *rcx_11 = 0xffffffff
    
    if (*(arg1 + 0x84) s> 0)
        rax_16 = arg1[0x10].d
    
    rcx_11[1] = rax_16
    *(arg1 + 0x84) += 1
    arg1[0x10].d = rsi_1.d
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rsi_1.d)
    void* rcx_12 = *(r8_4 + 0x10)
    
    if (rcx_12 != 0)
        r8_4 = rcx_12
    
    result = (temp3_1 + (temp2_1 & 0x1f)) s>> 5
    int64_t result_1 = sx.q(result)
    *(r8_4 + (result_1 << 2)) &= not.d(rol.d(1, rsi_1.b))

return result
