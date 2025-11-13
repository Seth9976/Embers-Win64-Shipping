// 函数: sub_140e1db00
// 地址: 0x140e1db00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* r12 = nullptr
int32_t var_1a8 = 0
int64_t r14 = 0
int32_t rax_2 = *arg2
int64_t* result
int64_t var_1b8

if (rax_2 != 2)
    if (rax_2 == 0)
        int64_t* rbx_6 = arg1[2]
        var_1b8 = 0
        int64_t* var_1b0_1 = nullptr
        
        if (rbx_6 != 0)
            int32_t rax_27 = rbx_6[1].d
            
            if (rax_27 != 0)
                rbx_6[1].d = rax_27 + 1
                rax_27.b = 1
            
            if (rax_27.b == 0)
                rbx_6 = nullptr
            
            if (rbx_6 != 0)
                int32_t rax_28 = rbx_6[1].d
                r14 = arg1[1]
                rbx_6[1].d = rax_28
                
                if (rax_28 == 0)
                    (**rbx_6)(rbx_6)
                    int32_t temp2_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_6 + 8))(rbx_6, 1)
        
        int64_t rsi_2 = sx.q(var_1b0_1.d)
        int32_t rax_31 = (rsi_2 + 1).d
        var_1b0_1.d = rax_31
        
        if (rax_31 s> 0)
            arg3 = sub_1405a4f90(&var_1b8)
        
        int64_t* rax_34 = (rsi_2 << 4) + var_1b8
        *rax_34 = r14
        rax_34[1] = rbx_6
        
        if (rbx_6 != 0)
            int32_t rax_35 = rbx_6[1].d
            rbx_6[1].d = rax_35
            
            if (rax_35 == 0)
                (**rbx_6)(rbx_6)
                int32_t temp1_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        int64_t* rbx_7 = arg1[0x110]
        void var_198
        
        if (rbx_7 == 0)
        label_140e1df74:
            
            if ((*(*arg1 + 0x198))(arg1) != 0)
                sub_140d947e0(&var_198)
                int64_t* rsi_5
                int32_t r13_1
                int64_t* r14_1
                int64_t* r15_1
                
                if (arg1[0x111] == 0)
                label_140e1dfee:
                    r15_1 = arg1[2]
                    var_1a8.q = 0
                    
                    if (r15_1 != 0)
                        int32_t rax_46 = r15_1[1].d
                        
                        if (rax_46 != 0)
                            r15_1[1].d = rax_46 + 1
                            rax_46.b = 1
                        
                        if (rax_46.b == 0)
                            r15_1 = nullptr
                        
                        if (r15_1 != 0)
                            var_1a8.q = arg1[1]
                    
                    r14_1 = var_1b0_1
                    r13_1 = 8
                    rsi_5 = r15_1
                else
                    r14_1 = arg1[0x112]
                    
                    if (r14_1 == 0)
                        goto label_140e1dfee
                    
                    int32_t rax_44 = r14_1[1].d
                    
                    if (rax_44 s<= 0)
                        goto label_140e1dfee
                    
                    var_1a8.q = 0
                    
                    if (r14_1 != 0)
                        if (rax_44 != 0)
                            r14_1[1].d = rax_44 + 1
                            rax_44.b = 1
                        
                        if (rax_44.b == 0)
                            r14_1 = nullptr
                        
                        if (r14_1 != 0)
                            var_1a8.q = arg1[0x111]
                    
                    r15_1 = var_1b0_1
                    r13_1 = 6
                    rsi_5 = r14_1
                
                if (rsi_5 != 0)
                    rsi_5[1].d += 1
                
                if ((r13_1.b & 8) != 0)
                    r13_1 &= 0xfffffff7
                    
                    if (r15_1 != 0)
                        r15_1[1].d -= 1
                        
                        if (r15_1[1].d == 1)
                            (**r15_1)(r15_1)
                            int32_t temp14_1 = *(r15_1 + 0xc)
                            *(r15_1 + 0xc) -= 1
                            
                            if (temp14_1 == 1)
                                (*(*r15_1 + 8))(r15_1, 1)
                
                if ((r13_1.b & 4) != 0 && r14_1 != 0)
                    r14_1[1].d -= 1
                    
                    if (r14_1[1].d == 1)
                        (**r14_1)(r14_1)
                        int32_t temp17_1 = *(r14_1 + 0xc)
                        *(r14_1 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            (*(*r14_1 + 8))(r14_1, 1)
                
                var_1a8.q = var_1a8.q
                int64_t* var_1a0_2 = rsi_5
                
                if (rsi_5 != 0)
                    rsi_5[1].d += 1
                
                char rax_53
                int64_t r8_4
                rax_53, r8_4 = sub_140da1990(&var_1b8, &var_1a8, &var_198, data_1439ae51c, arg3)
                
                if (rax_53 != 0)
                    int64_t* rcx_38 = data_143e20d08
                    r8_4.b = 5
                    (*(*rcx_38 + 0x150))(rcx_38, &var_198, r8_4)
                
                if (rsi_5 != 0)
                    rsi_5[1].d -= 1
                    
                    if (rsi_5[1].d == 1)
                        (**rsi_5)(rsi_5)
                        int32_t temp21_1 = *(rsi_5 + 0xc)
                        *(rsi_5 + 0xc) -= 1
                        
                        if (temp21_1 == 1)
                            (*(*rsi_5 + 8))(rsi_5, 1)
                
                sub_140de0810(&var_198)
        else
            int32_t rax_38 = rbx_7[1].d
            
            if (rax_38 != 0)
                rbx_7[1].d = rax_38 + 1
                rax_38.b = 1
            
            if (rax_38.b == 0)
                rbx_7 = nullptr
            
            if (rbx_7 == 0)
                goto label_140e1df74
            
            int64_t rsi_3 = arg1[0x10f]
            
            if (rsi_3 == 0)
                goto label_140e1df74
            
            sub_140d947e0(&var_198)
            
            if (rbx_7 != 0)
                rbx_7[1].d += 1
            
            var_1a8.q = rsi_3
            int64_t* var_1a0_1 = rbx_7
            
            if (rbx_7 != 0)
                rbx_7[1].d += 1
            
            char rax_39
            int64_t r8_2
            rax_39, r8_2 = sub_140da1990(&var_1b8, &var_1a8, &var_198, data_1439ae51c, arg3)
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    int64_t rdx_4 = *rbx_7
                    (*rdx_4)(rbx_7, rdx_4)
                    int32_t temp15_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
            
            if (rax_39 != 0)
                int64_t* rcx_30 = data_143e20d08
                r8_2.b = 5
                (*(*rcx_30 + 0x148))(rcx_30, &var_198, r8_2)
            
            sub_140de0810(&var_198)
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp5_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
        
        sub_140596d80(&var_1b8)
    
    if (arg1[0x126].d != 0)
        int64_t* rcx_45 = arg1[0x125]
        
        if (rcx_45 != 0 && (*(*rcx_45 + 0x28))(rcx_45) != 0)
            if (arg1[0x126].d != 0)
                r12 = arg1[0x125]
            
            (*(*r12 + 0x50))(r12)
    
    sub_140599090(&arg1[0x127])
else
    if (arg1[0x12b].d != 0)
        int64_t* rcx = arg1[0x12a]
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (arg1[0x12b].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x12a]
            
            (*(*rcx_1 + 0x50))(rcx_1)
    
    int512_t zmm1_1 = sub_140599090(&arg1[0x12c])
    
    if (&arg1[0x111] != &var_1b8)
        arg1[0x111] = 0
        int64_t* rcx_3 = arg1[0x112]
        arg1[0x112] = 0
        
        if (rcx_3 != 0)
            int32_t temp0_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
    
    int64_t* rcx_4 = arg1[0x122]
    int64_t* rbx_1
    int64_t r15
    
    if ((*(*rcx_4 + 0x68))(rcx_4) == 0 || arg1[0x10f] == 0)
        rbx_1 = var_1a8.q
        r15.b = 0
    else
        rbx_1 = arg1[0x110]
        
        if (rbx_1 == 0)
            rbx_1 = var_1a8.q
            r15.b = 0
        else
            int32_t rax_9 = rbx_1[1].d
            
            if (rax_9 s<= 0)
                rbx_1 = var_1a8.q
                r15.b = 0
            else
                void* rcx_5 = nullptr
                
                if (rbx_1 != 0)
                    if (rax_9 == 0)
                        rbx_1 = nullptr
                    else
                        rbx_1[1].d = rax_9 + 1
                        rcx_5 = arg1[0x10f]
                
                r14 = 1
                
                if (sub_140e19840(rcx_5, zmm1_1) == 0)
                    r15.b = 0
                else
                    int64_t* rcx_6 = data_143e20d08
                    
                    if ((*(*rcx_6 + 0xf0))(rcx_6) != 0)
                        r15.b = 0
                    else
                        r15 = 1
    
    if ((r14.b & 1) != 0 && rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (r15.b == 0)
        result = (*(*arg1 + 0x198))(arg1)
        
        if (result.b != 0)
            int64_t* rcx_11 = data_143e20d08
            int64_t* rax_19 = (*(*rcx_11 + 0x88))(rcx_11, &var_1b8)
            arg1[0x111] = *rax_19
            void* rbx_2 = rax_19[1]
            int64_t* rcx_13 = arg1[0x112]
            
            if (rbx_2 != rcx_13)
                if (rbx_2 != 0)
                    *(rbx_2 + 0xc) += 1
                    rcx_13 = arg1[0x112]
                
                if (rcx_13 != 0)
                    int32_t temp10_1 = *(rcx_13 + 0xc)
                    *(rcx_13 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rcx_13 + 8))(rcx_13, 1)
                
                arg1[0x112] = rbx_2
            
            int64_t* var_1b0
            
            if (var_1b0 != 0)
                var_1b0[1].d -= 1
                
                if (var_1b0[1].d == 1)
                    (**var_1b0)(var_1b0)
                    int32_t temp9_1 = *(var_1b0 + 0xc)
                    *(var_1b0 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*var_1b0 + 8))(var_1b0, 1)
            
            if (arg1[0x111] != 0)
                result = arg1[0x112]
            
            if (arg1[0x111] == 0 || result == 0 || result[1].d s<= 0)
                int64_t* rcx_16 = data_143e20d08
                result = (*(*rcx_16 + 0x158))(rcx_16, &var_1b8, 0)
                arg1[0x111] = *result
                void* rbx_4 = result[1]
                int64_t* rcx_18 = arg1[0x112]
                
                if (rbx_4 != rcx_18)
                    if (rbx_4 != 0)
                        *(rbx_4 + 0xc) += 1
                        rcx_18 = arg1[0x112]
                    
                    if (rcx_18 != 0)
                        int32_t temp19_1 = *(rcx_18 + 0xc)
                        *(rcx_18 + 0xc) -= 1
                        
                        if (temp19_1 == 1)
                            (*(*rcx_18 + 8))(rcx_18, 1)
                    
                    arg1[0x112] = rbx_4
                
                if (var_1b0 != 0)
                    var_1b0[1].d -= 1
                    
                    if (var_1b0[1].d == 1)
                        (**var_1b0)(var_1b0)
                        int32_t temp18_1 = *(var_1b0 + 0xc)
                        *(var_1b0 + 0xc) -= 1
                        
                        if (temp18_1 == 1)
                            (*(*var_1b0 + 8))(var_1b0, 1)
    else if (&arg1[0x10f] != &var_1b8)
        arg1[0x10f] = 0
        int64_t* rcx_9 = arg1[0x110]
        arg1[0x110] = 0
        
        if (rcx_9 != 0)
            int32_t temp7_1 = *(rcx_9 + 0xc)
            *(rcx_9 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_9 + 8))(rcx_9, 1)
result.b = 1
__security_check_cookie(rax_1 ^ &var_1d8)
return result
