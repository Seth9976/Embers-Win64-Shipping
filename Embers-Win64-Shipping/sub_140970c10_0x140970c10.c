// 函数: sub_140970c10
// 地址: 0x140970c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x38)

if (rcx == 0)
    return 

uint64_t rax = (*(*rcx + 0x68))(rcx)
uint32_t i_1 = rax.d

if (rax.d == 0)
    return 

int32_t rbp_1 = 0
uint32_t i

do
    i = i_1
    
    if ((i_1.b & 1) != 0)
        uint64_t r14_1 = zx.q(rbp_1)
        int16_t* rsi_2 = (r14_1 + 3) << 6
        uint32_t rbx_1 = zx.d(*(rsi_2 + arg1))
        int32_t rax_2
        float zmm0_1
        float zmm6_1
        rax_2, zmm0_1, zmm6_1 = sub_142437180()
        int32_t arg_8 = rax_2 - rbx_1
        
        if (rax_2 == rbx_1)
            *(rsi_2 + arg1) = 0
        else
            int64_t* rcx_1 = *(arg1 + 0x30)
            uint64_t r14_2 = r14_1 << 6
            int64_t r13_2 = zx.q(rbx_1.w) + *(r14_2 + arg1 + 0xb0)
            void var_58
            int64_t* rax_4 = (*(*rcx_1 + 0xf0))(rcx_1, &var_58, zx.q(rbp_1))
            void* rdx_3 = arg1 + 0xa0 + r14_2
            
            if (rdx_3 != rax_4)
                *rdx_3 = *rax_4
                *rax_4 = 0
                int64_t rcx_3 = rax_4[1]
                int64_t* rbx_2 = *(rdx_3 + 8)
                
                if (rcx_3 != rbx_2)
                    rax_4[1] = 0
                    *(rdx_3 + 8) = rcx_3
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp4_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
            
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t temp2_1 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_50 + 8))(var_50, 1)
            
            int64_t* rcx_8 = *(arg1 + 0x38)
            uint64_t arg_10 = *(r14_2 + arg1 + 0xc8)
            int32_t rax_11 = (*(*rcx_8 + 0x78))(rcx_8, zx.q(rbp_1), r13_2, &arg_8, &arg_10)
            int64_t* rcx_9 = *(arg1 + 0x38)
            int64_t r8_3 = *rcx_9
            (*(r8_3 + 0xc0))(rcx_9, zx.q(rbp_1), r8_3)
            *(r14_2 + arg1 + 0xd0) = (int.d(zmm0_1 * zmm6_1)).w
            
            if (rax_11 == 0)
                int64_t rdx_6 = sx.q(rbp_1) * 3
                rax = *(arg1 + 0x50)
                
                if (*(rax + (rdx_6 << 2) + 1) == rax_11.b)
                    *(rsi_2 + arg1) = 0
                else
                    *(rax + (rdx_6 << 2) + 9) = 1
                    *(*(arg1 + 0x50) + (rdx_6 << 2) + 4) = *(arg1 + 0x90)
                    *(rsi_2 + arg1) += arg_8.w
                    *(r14_2 + arg1 + 0xc8) = arg_10
    
    rbp_1 += 1
    i_1 u>>= 1
while (i u>= 2)
