// 函数: sub_140953400
// 地址: 0x140953400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg2

if (arg1[0x49] != 0)
    void* rbx_1 = arg1[0x1c]
    
    if (rbx_1 != 0)
        void* rax_1 = sub_140986690()
        void* rdx = *(rbx_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && *(rbx_1 + 0x238) != 1)
            int32_t rbx_5
            
            if (sub_140968000(r15) == 0)
                rbx_5 = 0xd
            else
                int64_t* rcx_2 = arg1[0x49]
                int64_t rax_6 = (*(*rcx_2 + 0x2b0))(rcx_2)
                int64_t* rcx_3 = arg1[0x49]
                int64_t r8_2 = *rcx_3
                int32_t rax_7 = (*(r8_2 + 0x2b8))(rcx_3, r15 + 8, r8_2)
                
                if (rax_7 == 0xffffffff)
                    void* rsi_7 = *(r15 + 0x30)
                    int64_t* r14_1 = nullptr
                    int64_t rax_23 = sx.q(*(r15 + 0x38))
                    int64_t r13
                    r13.b = 0
                    int64_t i = 0
                    int32_t arg_8 = r13.d
                    int32_t r12_5 = -1
                    int64_t i_4 = 0
                    int32_t rbp_2 = 0
                    int64_t var_a8_1 = 0
                    void* rax_26 = rax_23 * 0x50 + rsi_7
                    
                    if (rsi_7 == rax_26)
                    label_1409538bc:
                        
                        for (int64_t rsi_13 = sx.q(rbp_2) * 0x50 + i; i != rsi_13; i += 0x50)
                            int64_t* rcx_37 = arg1[0x49]
                            (*(*rcx_37 + 0x2a0))(rcx_37, i)
                        
                        int64_t* rcx_38 = arg1[0x49]
                        
                        if ((*(*rcx_38 + 0x2e8))(rcx_38, r15) == 0)
                            rbx_5 = 3
                            sub_14094b070(&i_4)
                        else
                            char rax_41
                            
                            if (arg1[0x55].d == 0)
                                rax_41 = 0
                            else
                                int64_t* rcx_39 = arg1[0x54]
                                
                                if (rcx_39 == 0)
                                    rax_41 = 0
                                else if ((*(*rcx_39 + 0x28))(rcx_39) == 0)
                                    rax_41 = 0
                                else
                                    rax_41 = 1
                            
                            void* rsi_14
                            
                            if (rax_41 == 0)
                                rsi_14 = r15 + 0x30
                            label_14095396c:
                                int64_t* rcx_42 = arg1[0x49]
                                
                                if ((*(*rcx_42 + 0x348))(rcx_42, r15) == 0)
                                    rbx_5 = 3
                                    sub_14094b070(&i_4)
                                else
                                    int64_t* rcx_43 = arg1[0x49]
                                    
                                    if ((*(*rcx_43 + 0x350))(rcx_43, r15) == 0)
                                        rbx_5 = 0xa
                                        sub_14094b070(&i_4)
                                    else
                                        int64_t* rcx_44 = arg1[0x49]
                                        
                                        if ((*(*rcx_44 + 0x278))(rcx_44, r15) == 0)
                                            rbx_5 = 4
                                            sub_14094b070(&i_4)
                                        else
                                            void* i_1 = *rsi_14
                                            
                                            for (void* rsi_17 = sx.q(*(rsi_14 + 8)) * 0x50 + i_1; 
                                                    i_1 != rsi_17; i_1 += 0x50)
                                                sub_1409690d0(arg1, i_1)
                                            
                                            sub_140977230(arg1)
                                            sub_14096a8d0(arg1, &arg1[0x4c])
                                            int64_t* rcx_48 = arg1[0x49]
                                            
                                            if ((*(*rcx_48 + 0x2f0))(rcx_48) != 0)
                                                sub_14096a8d0(arg1, &arg1[0x4a])
                                            
                                            rbx_5 = 8
                                            sub_14094b070(&i_4)
                            else
                                if (arg1[0x55].d != 0)
                                    r14_1 = arg1[0x54]
                                
                                rsi_14 = r15 + 0x30
                                
                                if ((*(*r14_1 + 0x48))(r14_1, rsi_14) != 0)
                                    goto label_14095396c
                                
                                rbx_5 = 0xb
                                sub_14094b070(&i_4)
                    else
                        int32_t r15_2 = 0
                        
                        do
                            int64_t* rcx_20 = arg1[0x49]
                            int32_t rax_28 = (*(*rcx_20 + 0x2c0))(rcx_20, rsi_7)
                            
                            if (rax_28 == 0xffffffff)
                                r13 = zx.q(r13.b)
                                
                                if (sub_140947320(arg1[0x49] + 0x68, *(rsi_7 + 8)) != 0xffffffff)
                                    r13 = 1
                                
                                arg_8 = r13.d
                            else
                                r13 = sx.q(rbp_2)
                                rbp_2 = (r13 + 1).d
                                var_a8_1.d = rbp_2
                                
                                if (rbp_2 s> var_a8_1:4.d)
                                    sub_1405c5060(&i_4)
                                    rbp_2 = var_a8_1.d
                                    i = i_4
                                
                                sub_140949000(r13 * 0x50 + i, rsi_7)
                                int32_t* rcx_28 = sx.q(rax_28) * 0x50 + *rax_6
                                
                                if (r12_5 == 0xffffffff || r12_5 == *rcx_28)
                                    r12_5 = *rcx_28
                                    r15_2 += 1
                                    r13 = zx.q(arg_8)
                                else
                                    r13.b = 1
                                    arg_8 = r13.d
                            
                            rsi_7 += 0x50
                        while (rsi_7 != rax_26)
                        
                        r14_1 = nullptr
                        r15 = arg2
                        
                        if (r12_5 == 0xffffffff)
                            if (r13.b == 0)
                                goto label_1409538bc
                            
                            rbx_5 = 0xf
                            sub_14094b070(&i_4)
                        else
                            int32_t rsi_8 = 0
                            
                            if (arg1[0x1c] != 0)
                                int64_t* rcx_31 = arg1[0x49]
                                
                                if (rcx_31 != 0)
                                    rsi_8 = (*(*rcx_31 + 0x310))(rcx_31, zx.q(r12_5))
                            
                            int64_t rdx_17 = *arg1
                            int32_t rax_34 = (*(rdx_17 + 0x690))(arg1, rdx_17)
                            int32_t rsi_9 = *(r15 + 0x38)
                            int32_t rax_35 = rax_34 + r15_2 - rsi_8
                            
                            if (rax_35 s<= 0)
                                rax_35 = 0
                            
                            if (rax_35 s< rsi_9)
                                rbx_5 = 0xf
                                sub_14094b070(&i_4)
                            else
                                int64_t* rcx_35 = arg1[0x49]
                                
                                if ((*(*rcx_35 + 0x2d8))(rcx_35) s>= rsi_9 - r15_2 && r13.b == 0)
                                    goto label_1409538bc
                                
                                rbx_5 = 0xf
                                sub_14094b070(&i_4)
                else
                    int32_t rcx_5 = *(r15 + 0x38)
                    void* r13_3 = sx.q(rax_7) * 0x50 + *rax_6
                    
                    if (rcx_5 s> *(r13_3 + 0x38))
                        rbx_5 = 4
                    else
                        void* rbp_1 = *(r15 + 0x30)
                        int32_t i_3 = 0
                        int32_t r12_1 = 0
                        void* rax_11 = sx.q(rcx_5) * 0x50 + rbp_1
                        void** var_a0
                        
                        if (rbp_1 != rax_11)
                            do
                                sub_140949000(&var_a0, rbp_1)
                                void* rbx_3 = *(r13_3 + 0x30)
                                void* rsi_3 = sx.q(*(r13_3 + 0x38)) * 0x50 + rbx_3
                                
                                if (rbx_3 == rsi_3)
                                label_140953573:
                                    remapper::~remapper(&var_a0)
                                else
                                    while (true)
                                        if (sub_14094dfb0(&var_a0, rbx_3) != 0)
                                            remapper::~remapper(&var_a0)
                                            
                                            if (rbx_3 != 0)
                                                r12_1 += 1
                                            
                                            break
                                        
                                        rbx_3 += 0x50
                                        
                                        if (rbx_3 == rsi_3)
                                            goto label_140953573
                                
                                rbp_1 += 0x50
                            while (rbp_1 != rax_11)
                            
                            r15 = arg2
                            rcx_5 = *(r15 + 0x38)
                        
                        if (r12_1 != rcx_5)
                            rbx_5 = 4
                        else
                            void* i_2 = *(r15 + 0x30)
                            
                            for (void* r12_4 = sx.q(*(r15 + 0x38)) * 0x50 + i_2; i_2 != r12_4; 
                                    i_2 += 0x50)
                                if (*(i_2 + 0x30) s> 1)
                                    sub_140949000(&var_a0, i_2)
                                    void* rbx_4 = *(r13_3 + 0x30)
                                    void* rsi_6 = sx.q(*(r13_3 + 0x38)) * 0x50 + rbx_4
                                    
                                    if (rbx_4 == rsi_6)
                                    label_1409535ff:
                                        remapper::~remapper(&var_a0)
                                    else
                                        while (true)
                                            if (sub_14094dfb0(&var_a0, rbx_4) != 0)
                                                remapper::~remapper(&var_a0)
                                                
                                                if (rbx_4 != 0)
                                                    sub_140597df0(rbx_4 + 0x28, i_2 + 0x28)
                                                
                                                break
                                            
                                            rbx_4 += 0x50
                                            
                                            if (rbx_4 == rsi_6)
                                                goto label_1409535ff
                            
                            int64_t* rcx_12 = arg1[0x49]
                            
                            if ((*(*rcx_12 + 0x350))(rcx_12, r15) == 0)
                                rbx_5 = 0xa
                            else
                                sub_140977230(arg1)
                                char rax_19
                                
                                if (arg1[0x51].d == 0)
                                    rax_19 = 0
                                else
                                    int64_t* rcx_14 = arg1[0x50]
                                    
                                    if (rcx_14 == 0)
                                        rax_19 = 0
                                    else if ((*(*rcx_14 + 0x28))(rcx_14) == 0)
                                        rax_19 = 0
                                    else
                                        rax_19 = 1
                                
                                if (rax_19 != 0)
                                    int64_t* rcx_18
                                    
                                    if (arg1[0x51].d == 0)
                                        rcx_18 = nullptr
                                    else
                                        rcx_18 = arg1[0x50]
                                    
                                    (*(*rcx_18 + 0x50))(rcx_18, r15)
                                
                                if (*(r15 + 0x38) s> 0)
                                    do
                                        sub_1409690d0(arg1, sx.q(i_3) * 0x50 + *(r15 + 0x30))
                                        i_3 += 1
                                    while (i_3 s< *(r15 + 0x38))
                                
                                rbx_5 = 6
            
            return zx.q(rbx_5)

return 9
