// 函数: sub_140e5e280
// 地址: 0x140e5e280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_18 = 0

while (*(arg1 + 0x1c8) s> 0)
    int64_t* rax = *(arg1 + 0x1c0)
    int64_t r15_1 = *rax
    int64_t var_68 = r15_1
    int64_t* rcx = rax[1]
    
    if (rcx != 0)
        rcx[1].d += 1
        r15_1 = var_68
    
    int64_t rcx_1 = sx.q(*(arg1 + 0x1c8))
    int32_t arg_10
    bool r8
    
    if (rcx_1.d != 0)
        int32_t rbx_1 = 0
        int32_t r14_1 = 0
        arg_10 = 0
        int64_t rsi_1 = 0
        r8 = **(arg1 + 0x1c0) != r15_1
        arg3 = r8
        
        do
            int64_t r9_1 = sx.q(r14_1)
            rsi_1 += 1
            r14_1 += 1
            
            if (rsi_1 s< rcx_1)
                int64_t* rcx_4 = (rsi_1 << 4) + *(arg1 + 0x1c0)
                
                do
                    int32_t rax_2
                    rax_2.b = *rcx_4 != r15_1
                    
                    if (zx.d(r8) != rax_2)
                        break
                    
                    r14_1 += 1
                    rsi_1 += 1
                    rcx_4 = &rcx_4[2]
                while (rsi_1 s< rcx_1)
            
            int32_t i_3 = r14_1 - r9_1.d
            
            if (r8 != 0)
                if (rbx_1 != r9_1.d)
                    int64_t rax_3 = *(arg1 + 0x1c0)
                    memmove((sx.q(rbx_1) << 4) + rax_3, (r9_1 << 4) + rax_3, i_3 << 4)
                    r8 = arg3
                    r15_1 = var_68
                
                rbx_1 += i_3
                arg_10 = rbx_1
            else if (i_3 != 0)
                int64_t* rdi_4 = (r9_1 << 4) + 8 + *(arg1 + 0x1c0)
                int32_t i
                
                do
                    int64_t* rbx_2 = *rdi_4
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp8_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    rdi_4 = &rdi_4[2]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                r15_1 = var_68
                r8 = arg3
                rbx_1 = arg_10
            
            r8 ^= 1
            arg3 = r8
        while (rsi_1 s< rcx_1)
        
        *(arg1 + 0x1c8) = rbx_1
    
    if (*(arg1 + 0x1b8) s> 0)
        for (int64_t* i_1 = *(arg1 + 0x1b0); i_1 != &i_1[sx.q(*(arg1 + 0x1b8)) * 2]; i_1 = &i_1[2])
            int64_t rcx_10 = *i_1
            
            if (rcx_10 != 0 && rcx_10 == r15_1)
                if (rcx != 0)
                    rcx[1].d += 1
                
                int64_t rcx_11 = sx.q(*(arg1 + 0x1b8))
                
                if (rcx_11.d != 0)
                    int32_t rbx_4 = 0
                    int32_t r14_2 = 0
                    arg_10 = 0
                    int64_t rsi_2 = 0
                    r8 = **(arg1 + 0x1b0) != r15_1
                    arg3 = r8
                    
                    do
                        int64_t r9_2 = sx.q(r14_2)
                        rsi_2 += 1
                        r14_2 += 1
                        
                        if (rsi_2 s< rcx_11)
                            int64_t* rcx_14 = (rsi_2 << 4) + *(arg1 + 0x1b0)
                            
                            do
                                int32_t rax_7
                                rax_7.b = *rcx_14 != r15_1
                                
                                if (zx.d(r8) != rax_7)
                                    break
                                
                                r14_2 += 1
                                rsi_2 += 1
                                rcx_14 = &rcx_14[2]
                            while (rsi_2 s< rcx_11)
                        
                        int32_t j_2 = r14_2 - r9_2.d
                        
                        if (r8 != 0)
                            if (rbx_4 != r9_2.d)
                                int64_t rax_8 = *(arg1 + 0x1b0)
                                memmove((sx.q(rbx_4) << 4) + rax_8, (r9_2 << 4) + rax_8, j_2 << 4)
                                r8 = arg3
                            
                            rbx_4 += j_2
                            arg_10 = rbx_4
                        else if (j_2 != 0)
                            int64_t* rdi_8 = (r9_2 << 4) + 8 + *(arg1 + 0x1b0)
                            int32_t j
                            
                            do
                                int64_t* rbx_5 = *rdi_8
                                
                                if (rbx_5 != 0)
                                    rbx_5[1].d -= 1
                                    
                                    if (rbx_5[1].d == 1)
                                        (**rbx_5)(rbx_5)
                                        int32_t temp18_1 = *(rbx_5 + 0xc)
                                        *(rbx_5 + 0xc) -= 1
                                        
                                        if (temp18_1 == 1)
                                            (*(*rbx_5 + 8))(rbx_5, 1)
                                
                                rdi_8 = &rdi_8[2]
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                            r8 = arg3
                            rbx_4 = arg_10
                        
                        r8 ^= 1
                        arg3 = r8
                    while (rsi_2 s< rcx_11)
                    
                    *(arg1 + 0x1b8) = rbx_4
                
                if (rcx != 0)
                    rcx[1].d -= 1
                    
                    if (rcx[1].d == 1)
                        (**rcx)(rcx)
                        int32_t temp9_1 = *(rcx + 0xc)
                        *(rcx + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rcx + 8))(rcx, 1)
                
                uint64_t rdx_7
                
                if (*(arg1 + 0x1b8) s<= 0)
                    for (int32_t j_1 = 0; j_1 s>= 0; j_1 += 1)
                        if (j_1 s>= *(arg1 + 0x188))
                            break
                        
                        rdx_7.b = 1
                        sub_140e0ff70(*(*(arg1 + 0x180) + sx.q(j_1) * 0x10), rdx_7.b)
                    
                    if (*(arg1 + 0x418) != 0)
                        int64_t* rcx_33 = *(arg1 + 0x410)
                        
                        if (rcx_33 != 0 && (*(*rcx_33 + 0x28))(rcx_33) != 0)
                            int64_t* rcx_34
                            
                            if (*(arg1 + 0x418) == 0)
                                rcx_34 = nullptr
                            else
                                rcx_34 = *(arg1 + 0x410)
                            
                            (*(*rcx_34 + 0x50))(rcx_34)
                else
                    int64_t rax_13 = *(arg1 + 0x1b0)
                    int64_t rcx_23 = sx.q(*(arg1 + 0x1b8)) * 2
                    int64_t* rbx_6 = *(rax_13 + (rcx_23 << 3) - 8)
                    void* rdi_9 = *(rax_13 + (rcx_23 << 3) - 0x10)
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d += 1
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d += 1
                    
                    arg_18 = 0
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t temp13_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp13_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    rdx_7.b = 1
                    sub_140e0ff70(rdi_9, rdx_7.b)
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t temp17_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp17_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                break
    
    int128_t var_58 = var_68.o
    
    if (rcx != 0)
        rcx[1].d += 1
    
    sub_140e78340(arg1 + 0x1d0, &var_58, arg2)
    result, arg2 = sub_140e7a090(arg1, &var_68)
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            result = (**rcx)(rcx)
            int32_t temp4_1 = *(rcx + 0xc)
            *(rcx + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rcx + 8))(rcx, 1)

int32_t i_4 = *(arg1 + 0x1c8)

if (i_4 != 0)
    int64_t* rdi_11 = *(arg1 + 0x1c0) + 8
    int32_t i_2
    
    do
        int64_t* rbx_8 = *rdi_11
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                result = (**rbx_8)(rbx_8)
                int32_t temp2_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_8 + 8))(rbx_8, 1)
        
        rdi_11 = &rdi_11[2]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

bool cond:1 = *(arg1 + 0x1cc) == 0
*(arg1 + 0x1c8) = 0

if (cond:1)
    return result

return sub_1405a5410(arg1 + 0x1c0, 0)
