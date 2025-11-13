// 函数: sub_1409dd5f0
// 地址: 0x1409dd5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t r12 = 0
int64_t rsi = sx.q(arg2)
void*** r13 = arg1
int32_t arg_10 = 0
int64_t r9 = arg1[5][0x1c]
int64_t rdx = rsi * 5
int64_t result = sx.q(*(r9 + (rdx << 3) + 8))
int64_t result_1 = result
int64_t* r9_1 = r9 + (rdx << 3)
int64_t rdx_1 = 0
int64_t* var_90 = r9_1
int64_t var_a8 = 0

if (result s> 0)
    TEB* gsbase
    void* rax_2 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    
    do
        result = (rdx_1 << 4) + *arg3
        
        if (*(result + 8) != 0)
            int64_t rax_5 = *r9_1
            int32_t r8 = 0
            void* rbp_1 = r13[5]
            int32_t* r9_2 = nullptr
            void* var_88 = rbp_1
            int32_t* var_b8 = nullptr
            int64_t rbx_1 = sx.q(*(rax_5 + (rdx_1 << 2)))
            int64_t rdx_2 = *(rbp_1 + 0x38)
            int32_t var_ac_1 = 0
            int64_t r14_1 = rbx_1 * 0x18
            int32_t rax_6 = *(r14_1 + rdx_2 + 0x10)
            int32_t rdi_1 = *(r14_1 + rdx_2)
            
            if (rax_6 s> 0)
                int32_t var_b0_1 = 0
                sub_1405dadb0(&var_b8, rax_6)
                rdx_2 = *(rbp_1 + 0x38)
                r8 = var_b0_1
                r9_2 = var_b8
            
            int32_t* r15_1 = *(r14_1 + rdx_2 + 8)
            uint64_t r13_2 = sx.q(*(r14_1 + rdx_2 + 0x10)) << 2 u>> 2
            
            if (r15_1 u> &r15_1[sx.q(*(r14_1 + rdx_2 + 0x10))])
                r13_2 = 0
            
            if (r13_2 != 0)
                do
                    int32_t* rax_9 = r9_2
                    void* r14_4 = (sx.q(*r15_1) << 4) + *(rbp_1 + 0xa8)
                    void* rdx_4 = &r9_2[sx.q(r8)]
                    
                    if (r9_2 != rdx_4)
                        while (*rax_9 != *(r14_4 + 0xc))
                            rax_9 = &rax_9[1]
                            
                            if (rax_9 == rdx_4)
                                goto label_1409dd760
                    
                    if (r9_2 == rdx_4 || ((rax_9 - r9_2) s>> 2).d == 0xffffffff)
                    label_1409dd760:
                        int64_t rbp_2 = sx.q(r8)
                        r8 = (rbp_2 + 1).d
                        
                        if (r8 s> var_ac_1)
                            sub_1405a4cf0(&var_b8)
                            r9_2 = var_b8
                        
                        r9_2[rbp_2] = *(r14_4 + 0xc)
                        rbp_1 = var_88
                    
                    r15_1 = &r15_1[1]
                    r12 += 1
                while (r12 != r13_2)
            
            int32_t rcx_6 = *(0x14 + *rax_2)
            
            if (r8 != 1)
                if (data_143cee640 s> rcx_6)
                    _Init_thread_header(&data_143cee640)
                    
                    if (data_143cee640 == 0xffffffff)
                        data_143cee630 = 0
                        data_143cee638.q = 0
                        atexit(sub_142cba520)
                        _Init_thread_footer(&data_143cee640)
                
                int32_t i_14 = data_143cee638
                int32_t r14_10
                
                if (data_143cee63c s>= 0)
                    if (i_14 != 0)
                        int64_t* r14_9 = data_143cee630 + 8
                        int32_t i
                        
                        do
                            int64_t rcx_20 = *r14_9
                            
                            if (rcx_20 != 0)
                                sub_140a74f90(rcx_20)
                            
                            r14_9 = &r14_9[4]
                            i = i_14
                            i_14 -= 1
                        while (i != 1)
                    
                    r14_10 = 0
                    goto label_1409ddaa4
                
                if (i_14 != 0)
                    int64_t* r14_13 = data_143cee630 + 8
                    int32_t i_1
                    
                    do
                        int64_t rcx_29 = *r14_13
                        
                        if (rcx_29 != 0)
                            sub_140a74f90(rcx_29)
                        
                        r14_13 = &r14_13[4]
                        i_1 = i_14
                        i_14 -= 1
                    while (i_1 != 1)
                
                bool cond:3_1 = data_143cee63c == 0
                r14_10 = 0
                data_143cee638 = 0
                
                if (cond:3_1)
                label_1409ddaa4:
                    int32_t i_15 = 1 - r14_10
                    int32_t rax_25 = r14_10 + i_15
                    bool cond:5_1 = rax_25 s<= data_143cee63c
                    data_143cee638 = rax_25
                    
                    if (not(cond:5_1))
                        sub_1405c4e40(&data_143cee630)
                    
                    int32_t* rdx_14 = (sx.q(r14_10) << 5) + data_143cee630
                    
                    if (i_15 != 0)
                        void* rcx_21 = &rdx_14[5]
                        int32_t i_2
                        
                        do
                            rcx_21 += 0x20
                            *rdx_14 = data_143a1c6b4
                            rdx_14 = &rdx_14[8]
                            *(rcx_21 - 0x2c) = 0
                            *(rcx_21 - 0x24) = 0
                            *(rcx_21 - 0x1c) = data_143a1c6b8
                            i_2 = i_15
                            i_15 -= 1
                        while (i_2 != 1)
                else
                    sub_1405a51b0(&data_143cee630, 0)
                    r14_10 = data_143cee638
                    
                    if (r14_10 s< 1)
                        goto label_1409ddaa4
                    
                    if (r14_10 s> 1 && r14_10 != 1)
                        int32_t i_16 = r14_10 - 1
                        int64_t* r14_15 = data_143cee630 + 0x28
                        int32_t i_3
                        
                        do
                            int64_t rcx_30 = *r14_15
                            
                            if (rcx_30 != 0)
                                sub_140a74f90(rcx_30)
                            
                            r14_15 = &r14_15[4]
                            i_3 = i_16
                            i_16 -= 1
                        while (i_3 != 1)
                        int32_t rax_36 = data_143cee638
                        int32_t rcx_32 = rax_36 - (r14_10 - 1)
                        
                        if (rcx_32 != 1)
                            int64_t rcx_34 = data_143cee630
                            memmove(rcx_34 + 0x20, (sx.q(r14_10) << 5) + rcx_34, (rcx_32 - 1) << 5)
                            rax_36 = data_143cee638
                        
                        data_143cee638 = rax_36 - (r14_10 - 1)
                        sub_1405dad20(&data_143cee630)
                
                r13 = arg1
                int32_t var_60_1 = rbx_1.d
                *data_143cee630 = rdi_1
                var_88.o = (data_143cee630 + 8).o
                sub_14099a420(&r13[5][0x35], &var_88)
                void* rbx_4 = data_143cee630
                int64_t rbp_4 = sx.q(*(result + 8))
                
                if (rbp_4.d != 0)
                    int32_t rax_31 = *(rbx_4 + 0x10)
                    int32_t rdx_16 = rax_31 + rbp_4.d
                    
                    if (rdx_16 s> *(rbx_4 + 0x14))
                        sub_14090a730(rbx_4 + 8, rdx_16)
                        rax_31 = *(rbx_4 + 0x10)
                    
                    memcpy(sx.q(rax_31) * 0x60 + *(rbx_4 + 8), *result, (rbp_4 * 0x60).d)
                    *(rbx_4 + 0x10) += rbp_4.d
                
                void* rbx_5 = *rax_2
                
                if (data_143cee658 s> *(rbx_5 + 0x14))
                    _Init_thread_header(&data_143cee658)
                    
                    if (data_143cee658 == 0xffffffff)
                        data_143cee648 = 0
                        data_143cee650 = 0
                        atexit(sub_142cb8ee0)
                        _Init_thread_footer(&data_143cee658)
                
                sub_1409b5360(r13, &data_143cee630, &data_143cee648)
                
                if (data_143cee670 s<= *(rbx_5 + 0x14))
                    r12 = 0
                else
                    _Init_thread_header(&data_143cee670)
                    r12 = 0
                    
                    if (data_143cee670 == 0xffffffff)
                        data_143cee660 = 0
                        data_143cee668.q = 0
                        atexit(sub_142cba390)
                        _Init_thread_footer(&data_143cee670)
                
                int32_t i_18 = data_143cee668
                int32_t r14_18
                
                if (data_143cee66c s>= 0)
                    if (i_18 != 0)
                        int64_t* r14_17 = data_143cee660 + 0x18
                        int32_t i_4
                        
                        do
                            int32_t j_2 = r14_17[1].d
                            int64_t* rbx_6 = *r14_17
                            
                            if (j_2 != 0)
                                int32_t j
                                
                                do
                                    int64_t rcx_36 = *rbx_6
                                    
                                    if (rcx_36 != 0)
                                        sub_140a74f90(rcx_36)
                                    
                                    rbx_6 = &rbx_6[2]
                                    j = j_2
                                    j_2 -= 1
                                while (j != 1)
                                rbx_6 = *r14_17
                            
                            if (rbx_6 != 0)
                                sub_140a74f90(rbx_6)
                            
                            int64_t rcx_38 = r14_17[-2]
                            
                            if (rcx_38 != 0)
                                sub_140a74f90(rcx_38)
                            
                            r14_17 = &r14_17[5]
                            i_4 = i_18
                            i_18 -= 1
                        while (i_4 != 1)
                    
                    r14_18 = 0
                    goto label_1409dddd6
                
                if (i_18 != 0)
                    int64_t* r14_20 = data_143cee660 + 0x18
                    int32_t i_5
                    
                    do
                        int32_t j_3 = r14_20[1].d
                        int64_t* rbx_8 = *r14_20
                        
                        if (j_3 != 0)
                            int32_t j_1
                            
                            do
                                int64_t rcx_49 = *rbx_8
                                
                                if (rcx_49 != 0)
                                    sub_140a74f90(rcx_49)
                                
                                rbx_8 = &rbx_8[2]
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                            rbx_8 = *r14_20
                        
                        if (rbx_8 != 0)
                            sub_140a74f90(rbx_8)
                        
                        int64_t rcx_51 = r14_20[-2]
                        
                        if (rcx_51 != 0)
                            sub_140a74f90(rcx_51)
                        
                        r14_20 = &r14_20[5]
                        i_5 = i_18
                        i_18 -= 1
                    while (i_5 != 1)
                
                bool cond:10_1 = data_143cee66c == 0
                r14_18 = 0
                data_143cee668 = 0
                
                if (cond:10_1)
                label_1409dddd6:
                    int32_t i_11 = 1 - r14_18
                    int32_t rax_39 = r14_18 + i_11
                    bool cond:11_1 = rax_39 s<= data_143cee66c
                    data_143cee668 = rax_39
                    
                    if (not(cond:11_1))
                        sub_1405c4ec0(&data_143cee660)
                    
                    int32_t* rdx_22 = data_143cee660 + sx.q(r14_18) * 0x28
                    
                    if (i_11 != 0)
                        void* rcx_40 = &rdx_22[5]
                        int32_t i_6
                        
                        do
                            rcx_40 += 0x28
                            *rdx_22 = data_143a1c6c8
                            rdx_22 = &rdx_22[0xa]
                            __builtin_memset(rcx_40 - 0x34, 0, 0x20)
                            i_6 = i_11
                            i_11 -= 1
                        while (i_6 != 1)
                else
                    sub_1405c5660(&data_143cee660, 0)
                    r14_18 = data_143cee668
                    
                    if (r14_18 s< 1)
                        goto label_1409dddd6
                    
                    if (r14_18 s> 1)
                        sub_1409d8720(&data_143cee660, 1, r14_18 - 1, 1)
                
                *data_143cee660 = rsi.d
                void* rbx_7 = data_143cee660
                int64_t rbp_5 = sx.q(*(rbx_7 + 0x10))
                int32_t rax_44 = (rbp_5 + 1).d
                *(rbx_7 + 0x10) = rax_44
                
                if (rax_44 s> *(rbx_7 + 0x14))
                    sub_1405a4d70(rbx_7 + 8)
                
                int64_t rcx_42 = *(rbx_7 + 8)
                *(rcx_42 + (rbp_5 << 3)) = 0
                *(rcx_42 + (rbp_5 << 3) + 4) = data_143a1c6b0
                **(data_143cee660 + 8) = arg_10
                *(*(data_143cee660 + 8) + 4) = *data_143cee648
                sub_1409b2280(r13, &data_143cee660)
                int32_t var_58
                sub_1409afd50(&r13[0x99], &var_58)
                int32_t rax_50 = var_58
                int32_t* var_50
                *var_50 = rdi_1
                var_50[1] = 0xffffffff
                void arg_20
                result = sub_1409b8a30(&r13[0x99], &arg_20, rdi_1, var_50, rax_50, nullptr)
            else
                if (data_143cee628 s<= rcx_6)
                    r12 = 0
                else
                    _Init_thread_header(&data_143cee628)
                    r12 = 0
                    
                    if (data_143cee628 == 0xffffffff)
                        data_143cee618 = 0
                        data_143cee620.q = 0
                        atexit(sub_142cb7c40)
                        _Init_thread_footer(&data_143cee628)
                
                int32_t i_12 = data_143cee620
                int32_t r14_5
                
                if (data_143cee624 s>= 0)
                    if (i_12 != 0)
                        int64_t* rdi_3 = data_143cee618 + 8
                        int32_t i_7
                        
                        do
                            int64_t rcx_7 = *rdi_3
                            
                            if (rcx_7 != 0)
                                sub_140a74f90(rcx_7)
                            
                            rdi_3 = &rdi_3[3]
                            i_7 = i_12
                            i_12 -= 1
                        while (i_7 != 1)
                    
                    r14_5 = 0
                    goto label_1409dd84e
                
                if (i_12 != 0)
                    int64_t* rdi_6 = data_143cee618 + 8
                    int32_t i_8
                    
                    do
                        int64_t rcx_9 = *rdi_6
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                        
                        rdi_6 = &rdi_6[3]
                        i_8 = i_12
                        i_12 -= 1
                    while (i_8 != 1)
                
                bool cond:4_1 = data_143cee624 == 0
                r14_5 = 0
                data_143cee620 = 0
                
                if (cond:4_1)
                label_1409dd84e:
                    int32_t i_17 = 1 - r14_5
                    int32_t rax_15 = r14_5 + i_17
                    bool cond:6_1 = rax_15 s<= data_143cee624
                    data_143cee620 = rax_15
                    
                    if (not(cond:6_1))
                        sub_1405a4df0(&data_143cee618)
                    
                    int32_t* rdx_7 = data_143cee618 + sx.q(r14_5) * 0x18
                    
                    if (i_17 != 0)
                        void* rax_18 = &rdx_7[5]
                        int32_t i_9
                        
                        do
                            *rdx_7 = 0
                            rdx_7 = &rdx_7[6]
                            *(rax_18 - 0xc) = 0
                            *(rax_18 - 4) = 0
                            rax_18 += 0x18
                            i_9 = i_17
                            i_17 -= 1
                        while (i_9 != 1)
                else
                    sub_1405a5130(&data_143cee618, 0)
                    r14_5 = data_143cee620
                    
                    if (r14_5 s< 1)
                        goto label_1409dd84e
                    
                    if (r14_5 s> 1 && r14_5 != 1)
                        int32_t i_13 = r14_5 - 1
                        int64_t* rdi_8 = data_143cee618 + 0x20
                        int32_t i_10
                        
                        do
                            int64_t rcx_10 = *rdi_8
                            
                            if (rcx_10 != 0)
                                sub_140a74f90(rcx_10)
                            
                            rdi_8 = &rdi_8[3]
                            i_10 = i_13
                            i_13 -= 1
                        while (i_10 != 1)
                        int32_t rax_20 = data_143cee620
                        int32_t rcx_12 = rax_20 - (r14_5 - 1)
                        
                        if (rcx_12 != 1)
                            int64_t rcx_15 = data_143cee618
                            memmove(rcx_15 + 0x18, rcx_15 + sx.q(r14_5) * 0x18, (rcx_12 - 1) * 0x18)
                            rax_20 = data_143cee620
                        
                        data_143cee620 = rax_20 - (r14_5 - 1)
                        sub_1405fde90(&data_143cee618)
                
                *data_143cee618 = rbx_1.d
                int64_t* rbx_3 = data_143cee618 + 8
                
                if (rbx_3 != result)
                    int64_t rdi_4 = sx.q(*(result + 8))
                    int64_t rbp_3 = *result
                    int32_t r8_1 = *(rbx_3 + 0xc)
                    rbx_3[1].d = rdi_4.d
                    
                    if (rdi_4.d != 0 || r8_1 != 0)
                        sub_1409da0d0(rbx_3, rdi_4.d, r8_1)
                        memcpy(*rbx_3, rbp_3, (rdi_4 * 0x60).d)
                    else
                        *(rbx_3 + 0xc) = 0
                
                r13 = arg1
                result = sub_1409de410(r13, &data_143cee618)
            
            int32_t* rcx_48 = var_b8
            
            if (rcx_48 != 0)
                result = sub_140a74f90(rcx_48)
            
            r9_1 = var_90
            arg3 = arg_18
            rdx_1 = var_a8
        
        arg_10 += 1
        rdx_1 += 1
        var_a8 = rdx_1
    while (rdx_1 s< result_1)

return result
