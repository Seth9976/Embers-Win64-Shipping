// 函数: sub_140a5e210
// 地址: 0x140a5e210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
uint64_t var_8 = rbp
int128_t* var_48 = arg1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r13 = result.d

if (result.d s>= 0)
    result = zx.q(((result << 1) + 1).d)
    int32_t result_1 = result.d
    
    while (true)
        int32_t r15_1 = r13
        
        while (result.d s< arg2)
            int32_t r14_1 = r15_1 * 2
            uint64_t rsi_1 = zx.q(r14_1 + 1)
            uint64_t rax_3
            
            if ((rsi_1 + 1).d s< arg2)
                rax_3 = sx.q(rsi_1.d) * 2
                int64_t* rbx_4 = &arg1[sx.q(r14_1) + 2]
                int64_t* rdi_1 = *(arg1 + (rax_3 << 3) + 8)
                int64_t* rdx_1 = *(arg1 + (rax_3 << 3))
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                int64_t* rcx = *rbx_4
                int64_t* rbx_5 = rbx_4[1]
                
                if (rbx_5 != 0)
                    rbx_5[1].d += 1
                
                bool cond:2_1
                
                if (rcx != 0)
                    cond:2_1 = rdx_1 != 0
                label_140a5e307:
                    rbp.b = cond:2_1
                    rax_3.b = rcx != 0
                    
                    if (rax_3.b == rbp.b)
                        rbp = zx.q(sub_140a65900(rcx, rdx_1, arg3).b)
                        
                        if (rbx_5 != 0)
                            rbx_5[1].d -= 1
                            
                            if (rbx_5[1].d == 1)
                                int64_t rdx_2 = *rbx_5
                                (*rdx_2)(rbx_5, rdx_2)
                                int32_t temp34_1 = *(rbx_5 + 0xc)
                                *(rbx_5 + 0xc) -= 1
                                
                                if (temp34_1 == 1 && rbx_5 != 0)
                                    (*(*rbx_5 + 8))(rbx_5, 1)
                    else if (rbx_5 != 0)
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            (**rbx_5)(rbx_5)
                            int32_t temp35_1 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (temp35_1 == 1)
                                (*(*rbx_5 + 8))(rbx_5, 1)
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp43_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp43_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
                else
                    cond:2_1 = rdx_1 != 0
                    
                    if (rdx_1 != 0)
                        goto label_140a5e307
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            (**rbx_5)(rbx_5)
                            int32_t temp21_1 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (temp21_1 == 1)
                                (*(*rbx_5 + 8))(rbx_5, 1)
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp36_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp36_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
                    
                    rbp.b = 0
                arg1 = var_48
                
                if (rbp.b != 0)
                    rsi_1 = zx.q(r14_1)
                
                rsi_1 = zx.q(rsi_1.d + 1)
            
            int128_t* r14_4 = &arg1[sx.q(r15_1)]
            int128_t* r15_4 = &arg1[sx.q(rsi_1.d)]
            int64_t* rdi_2 = *(r15_4 + 8)
            int64_t* rdx_3 = *r15_4
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            int64_t* rbx_6 = *(r14_4 + 8)
            int64_t* rcx_10 = *r14_4
            
            if (rbx_6 != 0)
                rbx_6[1].d += 1
            
            if (rcx_10 != 0 || rdx_3 != 0)
                rbp.b = rdx_3 != 0
                rax_3.b = rcx_10 != 0
                
                if (rax_3.b == rbp.b)
                    rbp = zx.q(sub_140a65900(rcx_10, rdx_3, arg3))
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            int64_t rdx_4 = *rbx_6
                            (*rdx_4)(rbx_6, rdx_4)
                            int32_t temp14_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp14_1 == 1 && rbx_6 != 0)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                else if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp15_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp15_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp31_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp31_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
                
                if (rbp.b != 0)
                    if (r14_4 != r15_4)
                        arg3 = *r14_4
                        *r14_4 = *r15_4
                        *r15_4 = arg3
                    
                    arg1 = var_48
                    result = zx.q(((rsi_1 << 1) + 1).d)
                    r15_1 = rsi_1.d
                    continue
            else
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp17_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp32_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp32_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
            
            arg1 = var_48
            break
        
        result_1 -= 2
        int32_t temp2_1 = r13
        r13 -= 1
        result = zx.q(result_1)
        
        if (temp2_1 - 1 s< 0)
            break

int32_t r12_1 = arg2 - 1

if (r12_1 s> 0)
    int128_t* r13_3 = &arg1[sx.q(r12_1)]
    
    while (true)
        if (arg1 != r13_3)
            arg3 = *arg1
            *arg1 = *r13_3
            *r13_3 = arg3
        
        int32_t r15_5 = 0
        
        if (r12_1 s> 1)
            while (true)
                int32_t r14_5 = r15_5 * 2
                uint64_t rsi_2 = zx.q(r14_5 + 1)
                result = zx.q((rsi_2 + 1).d)
                
                if (result.d s< r12_1)
                    result = sx.q(rsi_2.d) * 2
                    void* rbx_10 = &arg1[sx.q(r14_5) + 2]
                    int64_t* rdi_3 = *(arg1 + (result << 3) + 8)
                    int64_t* rdx_5 = *(arg1 + (result << 3))
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d += 1
                    
                    int64_t* rcx_20 = *rbx_10
                    int64_t* rbx_11 = *(rbx_10 + 8)
                    
                    if (rbx_11 != 0)
                        rbx_11[1].d += 1
                    
                    bool cond:3_1
                    
                    if (rcx_20 != 0)
                        cond:3_1 = rdx_5 != 0
                    label_140a5e5dd:
                        rbp.b = cond:3_1
                        result.b = rcx_20 != 0
                        
                        if (result.b == rbp.b)
                            result = sub_140a65900(rcx_20, rdx_5, arg3)
                            rbp = zx.q(result.b)
                            
                            if (rbx_11 != 0)
                                rbx_11[1].d -= 1
                                
                                if (rbx_11[1].d == 1)
                                    int64_t rdx_6 = *rbx_11
                                    result = (*rdx_6)(rbx_11, rdx_6)
                                    int32_t temp40_1 = *(rbx_11 + 0xc)
                                    *(rbx_11 + 0xc) -= 1
                                    
                                    if (temp40_1 == 1 && rbx_11 != 0)
                                        result = (*(*rbx_11 + 8))(rbx_11, 1)
                        else if (rbx_11 != 0)
                            rbx_11[1].d -= 1
                            
                            if (rbx_11[1].d == 1)
                                result = (**rbx_11)(rbx_11)
                                int32_t temp41_1 = *(rbx_11 + 0xc)
                                *(rbx_11 + 0xc) -= 1
                                
                                if (temp41_1 == 1)
                                    result = (*(*rbx_11 + 8))(rbx_11, 1)
                        
                        if (rdi_3 != 0)
                            rdi_3[1].d -= 1
                            
                            if (rdi_3[1].d == 1)
                                result = (**rdi_3)(rdi_3)
                                int32_t temp44_1 = *(rdi_3 + 0xc)
                                *(rdi_3 + 0xc) -= 1
                                
                                if (temp44_1 == 1)
                                    result = (*(*rdi_3 + 8))(rdi_3, 1)
                    else
                        cond:3_1 = rdx_5 != 0
                        
                        if (rdx_5 != 0)
                            goto label_140a5e5dd
                        
                        if (rbx_11 != 0)
                            rbx_11[1].d -= 1
                            
                            if (rbx_11[1].d == 1)
                                result = (**rbx_11)(rbx_11)
                                int32_t temp30_1 = *(rbx_11 + 0xc)
                                *(rbx_11 + 0xc) -= 1
                                
                                if (temp30_1 == 1)
                                    result = (*(*rbx_11 + 8))(rbx_11, 1)
                        
                        if (rdi_3 != 0)
                            rdi_3[1].d -= 1
                            
                            if (rdi_3[1].d == 1)
                                result = (**rdi_3)(rdi_3)
                                int32_t temp42_1 = *(rdi_3 + 0xc)
                                *(rdi_3 + 0xc) -= 1
                                
                                if (temp42_1 == 1)
                                    result = (*(*rdi_3 + 8))(rdi_3, 1)
                        
                        rbp.b = 0
                    arg1 = var_48
                    
                    if (rbp.b != 0)
                        rsi_2 = zx.q(r14_5)
                    
                    rsi_2 = zx.q(rsi_2.d + 1)
                
                void* r14_8 = &arg1[sx.q(r15_5)]
                void* r15_8 = &arg1[sx.q(rsi_2.d)]
                int64_t* rdi_4 = *(r15_8 + 8)
                int64_t* rdx_7 = *r15_8
                
                if (rdi_4 != 0)
                    rdi_4[1].d += 1
                
                int64_t* rbx_12 = *(r14_8 + 8)
                int64_t* rcx_30 = *r14_8
                
                if (rbx_12 != 0)
                    rbx_12[1].d += 1
                
                if (rcx_30 != 0 || rdx_7 != 0)
                    rbp.b = rdx_7 != 0
                    result.b = rcx_30 != 0
                    
                    if (result.b == rbp.b)
                        result = sub_140a65900(rcx_30, rdx_7, arg3)
                        rbp = zx.q(result.b)
                        
                        if (rbx_12 != 0)
                            rbx_12[1].d -= 1
                            
                            if (rbx_12[1].d == 1)
                                int64_t rdx_8 = *rbx_12
                                result = (*rdx_8)(rbx_12, rdx_8)
                                int32_t temp23_1 = *(rbx_12 + 0xc)
                                *(rbx_12 + 0xc) -= 1
                                
                                if (temp23_1 == 1 && rbx_12 != 0)
                                    result = (*(*rbx_12 + 8))(rbx_12, 1)
                    else if (rbx_12 != 0)
                        rbx_12[1].d -= 1
                        
                        if (rbx_12[1].d == 1)
                            result = (**rbx_12)(rbx_12)
                            int32_t temp24_1 = *(rbx_12 + 0xc)
                            *(rbx_12 + 0xc) -= 1
                            
                            if (temp24_1 == 1)
                                result = (*(*rbx_12 + 8))(rbx_12, 1)
                    
                    if (rdi_4 != 0)
                        rdi_4[1].d -= 1
                        
                        if (rdi_4[1].d == 1)
                            result = (**rdi_4)(rdi_4)
                            int32_t temp37_1 = *(rdi_4 + 0xc)
                            *(rdi_4 + 0xc) -= 1
                            
                            if (temp37_1 == 1)
                                result = (*(*rdi_4 + 8))(rdi_4, 1)
                    
                    if (rbp.b != 0)
                        if (r14_8 != r15_8)
                            arg3 = *r14_8
                            *r14_8 = *r15_8
                            *r15_8 = arg3
                        
                        arg1 = var_48
                        result = zx.q(((rsi_2 << 1) + 1).d)
                        r15_5 = rsi_2.d
                        
                        if (result.d s>= r12_1)
                            break
                        
                        continue
                else
                    if (rbx_12 != 0)
                        rbx_12[1].d -= 1
                        
                        if (rbx_12[1].d == 1)
                            result = (**rbx_12)(rbx_12)
                            int32_t temp26_1 = *(rbx_12 + 0xc)
                            *(rbx_12 + 0xc) -= 1
                            
                            if (temp26_1 == 1)
                                result = (*(*rbx_12 + 8))(rbx_12, 1)
                    
                    if (rdi_4 != 0)
                        rdi_4[1].d -= 1
                        
                        if (rdi_4[1].d == 1)
                            result = (**rdi_4)(rdi_4)
                            int32_t temp38_1 = *(rdi_4 + 0xc)
                            *(rdi_4 + 0xc) -= 1
                            
                            if (temp38_1 == 1)
                                result = (*(*rdi_4 + 8))(rdi_4, 1)
                
                arg1 = var_48
                break
        
        r12_1 -= 1
        r13_3 -= 0x10
        
        if (r12_1 s<= 0)
            break

return result
