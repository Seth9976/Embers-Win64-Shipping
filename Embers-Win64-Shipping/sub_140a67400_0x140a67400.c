// 函数: sub_140a67400
// 地址: 0x140a67400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg3
uint64_t rbx = zx.q(arg2[1].d)

if (rbx.d s> arg3[1].d - *(arg3 + 0x34))
    sub_140976540(arg3, rbx.d)
    int32_t rax_4
    
    if (rbx.d u< 4)
        rax_4 = 1
    else
        uint32_t rbx_1 = rbx.d u>> 1
        rbx = zx.q(rbx_1 + 8)
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx.d)
        int32_t rcx_1
        
        if (rbx_1 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse((rbx - 1).d)
        
        if (rcx_3 == 0)
            rax_4 = 1
        else
            rax_4 = 1 << ((not.d(rcx_3)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_6 = r14[9].d
    
    if (rcx_6 == 0 || rcx_6 s< rax_4)
        r14[9].d = rax_4
        sub_1405a4480(r14)

int64_t* rsi = *arg2
void* rax_7 = &rsi[sx.q(arg2[1].d) * 2]
int64_t* var_d0 = rsi

if (rsi != rax_7)
    do
        int64_t var_c0_1 = 0
        uint64_t var_d8_1 = 0
        uint64_t var_c8 = 0
        int32_t r13_1 = 0
        uint64_t var_78 = 0
        int32_t r15_1 = 0
        int64_t var_70_1 = 0
        int16_t* var_88 = nullptr
        int32_t var_80_1 = 0
        sub_1405947f0(&var_88, 2)
        int32_t rdi_1 = var_80_1 + 2
        
        if (rdi_1 s> 0)
            sub_140594770(&var_88)
        
        int16_t* r12_1 = var_88
        UnDecorator::getReferenceType(r12_1, &data_142e5e360, 4)
        int16_t* const rdx_3 = &data_142d40450
        
        if (rdi_1 != 0)
            rdx_3 = r12_1
        
        int32_t rax_8
        int64_t r9_2
        rax_8, r9_2 = sub_140a23cf0(rsi, rdx_3, 0, 0, 0xffffffff)
        
        if (rax_8 s>= 0)
            int32_t rbx_2 = rsi[1].d
            int16_t* rsi_1
            
            if (rbx_2 == 0)
                rsi_1 = &data_142d40450
            else
                rsi_1 = *rsi
            
            int32_t rbx_3
            
            if (rbx_2 == 0)
                rbx_3 = 0
            else
                rbx_3 = rbx_2 - 1
            
            int64_t var_b0_1 = 0
            uint64_t rax_9 = 0
            int32_t arg_10 = 0
            
            if (rax_8 s< rbx_3)
                rbx_3 = rax_8
            
            var_d8_1 = 0
            uint64_t var_b8 = 0
            r13_1 = 0
            int32_t r15_2 = 0
            
            if (rsi_1 != 0 && *rsi_1 != 0 && rbx_3 s> 0)
                if (rbx_3 + 1 s> 0)
                    sub_1405947f0(&var_b8, rbx_3 + 1)
                    rax_9 = var_b8
                    r15_2 = var_b0_1:4.d
                    r13_1 = var_b0_1.d
                    var_d8_1 = rax_9
                    arg_10 = r15_2
                
                r13_1 = r13_1 + 1 + rbx_3
                var_b0_1.d = r13_1
                
                if (r13_1 s> r15_2)
                    sub_140594770(&var_b8)
                    rax_9 = var_b8
                    r15_2 = var_b0_1:4.d
                    r13_1 = var_b0_1.d
                    var_d8_1 = rax_9
                    arg_10 = r15_2
                
                UnDecorator::getReferenceType(rax_9, rsi_1, rbx_3 * 2)
                *(var_d8_1 + (sx.q(r13_1) << 1) - 2) = 0
                rax_9 = var_d8_1
            
            var_c8 = rax_9
            var_b8 = 0
            var_c0_1.d = r13_1
            var_c0_1:4.d = r15_2
            int64_t var_b0_2 = 0
            int32_t rdi_2
            
            if (rdi_1 == 0)
                rdi_2 = 0
            else
                rdi_2 = rdi_1 - 1
            
            int32_t rcx_15 = rdi_2 + rax_8
            int32_t rdx_7 = var_d0[1].d
            int32_t rbx_5 = rdx_7 - 1
            
            if (rdx_7 == 0)
                rbx_5 = 0
            
            int32_t rax_11
            
            if (rcx_15 s>= 0)
                rax_11 = rbx_5
                
                if (rcx_15 s< rbx_5)
                    rax_11 = rcx_15
            else
                rax_11 = 0
            
            r9_2 = sx.q(rax_11)
            
            if (sx.q(rcx_15) + 0x7fffffff s< r9_2)
                rbx_5 = rax_11
            else if (sx.q(rcx_15) + 0x7fffffff s< sx.q(rbx_5))
                rbx_5 = rcx_15 + 0x7fffffff
            
            int16_t* const rcx_18
            
            if (rdx_7 == 0)
                rcx_18 = &data_142d40450
            else
                rcx_18 = *var_d0
            
            int16_t* r15_3 = &rcx_18[r9_2]
            uint64_t var_a8 = 0
            int32_t rbx_6 = rbx_5 - rax_11
            int64_t var_a0_1 = 0
            uint64_t rsi_2 = 0
            int32_t rdi_3 = 0
            int32_t r14_2 = 0
            
            if (r15_3 != 0 && *r15_3 != 0 && rbx_6 s> 0)
                if (rbx_6 + 1 s> 0)
                    sub_1405947f0(&var_a8, rbx_6 + 1)
                    r14_2 = var_a0_1:4.d
                    rdi_3 = var_a0_1.d
                    rsi_2 = var_a8
                
                rdi_3 = rdi_3 + 1 + rbx_6
                var_a0_1.d = rdi_3
                
                if (rdi_3 s> r14_2)
                    sub_140594770(&var_a8)
                    r14_2 = var_a0_1:4.d
                    rdi_3 = var_a0_1.d
                    rsi_2 = var_a8
                
                UnDecorator::getReferenceType(rsi_2, r15_3, rbx_6 * 2)
                *(rsi_2 + (sx.q(rdi_3) << 1) - 2) = 0
            
            rbx = var_78
            var_a8 = 0
            int64_t var_a0_2 = 0
            
            if (rbx != 0)
                int64_t* rcx_22 = data_143ddb3f0
                
                if (rcx_22 == 0)
                    sub_140a750a0()
                    rcx_22 = data_143ddb3f0
                
                (*(*rcx_22 + 0x30))(rcx_22, rbx)
            
            r15_1 = arg_10
            rbx.b = 1
            var_78 = rsi_2
            rsi = var_d0
            var_70_1.d = rdi_3
            var_70_1:4.d = r14_2
        else
            rbx.b = 0
        
        if (r12_1 != 0)
            int64_t* rcx_23 = data_143ddb3f0
            
            if (rcx_23 == 0)
                sub_140a750a0()
                rcx_23 = data_143ddb3f0
            
            (*(*rcx_23 + 0x30))(rcx_23, r12_1)
        
        if (rbx.b == 0)
            if (&var_c8 == rsi)
                goto label_140a67a54
            
            r13_1 = rsi[1].d
            int64_t rbx_10 = *rsi
            var_c0_1.d = r13_1
            uint64_t rdi_10
            
            if (r13_1 != 0 || r15_1 != 0)
                sub_1405a4c70(&var_c8, r13_1, r15_1)
                rdi_10 = var_c8
                memcpy(rdi_10, rbx_10, r13_1 * 2)
                r15_1 = var_c0_1:4.d
                r13_1 = var_c0_1.d
            else
                r15_1 = 0
                var_c0_1:4.d = 0
            label_140a67a54:
                rdi_10 = var_d8_1
            
            void arg_20
            
            if (*sub_14062d5f0(*arg1 + 0x38, &arg_20, &var_c8) != 0xffffffff)
                int32_t var_58
                sub_140598750(arg3, &var_58)
                int64_t var_c0_2 = 0
                int64_t* var_50
                *var_50 = rdi_10
                rdi_10 = 0
                var_50[1].d = r13_1
                *(var_50 + 0xc) = r15_1
                var_50[2].d = 0xffffffff
                int16_t* rdx_25
                
                if (r13_1 == 0)
                    rdx_25 = &data_142d40450
                else
                    rdx_25 = *var_50
                
                int32_t rcx_40 = r13_1 - 1
                
                if (r13_1 == 0)
                    rcx_40 = 0
                
                void var_68
                sub_14059a6d0(arg3, &var_68, sub_1405969c0(rcx_40, rdx_25), var_50, var_58, nullptr)
            
            rbx = var_78
            
            if (rbx != 0)
                int64_t* rcx_43 = data_143ddb3f0
                
                if (rcx_43 == 0)
                    sub_140a750a0()
                    rcx_43 = data_143ddb3f0
                
                (*(*rcx_43 + 0x30))(rcx_43, rbx)
            
            if (rdi_10 != 0)
                int64_t* rcx_44 = data_143ddb3f0
                
                if (rcx_44 == 0)
                    sub_140a750a0()
                    rcx_44 = data_143ddb3f0
                
                (*(*rcx_44 + 0x30))(rcx_44, rdi_10)
        else
            r9_2.b = 1
            int64_t* var_98 = nullptr
            int32_t i_3 = 0
            
            if (sub_140a2ccb0(&var_78, &var_98, U",", r9_2.b) == 0)
            label_140a67989:
                int32_t i_2 = i_3
                int64_t* rbx_9 = var_98
                
                if (i_2 != 0)
                    int32_t i
                    
                    do
                        int64_t rdi_9 = *rbx_9
                        
                        if (rdi_9 != 0)
                            int64_t* rcx_33 = data_143ddb3f0
                            
                            if (rcx_33 == 0)
                                sub_140a750a0()
                                rcx_33 = data_143ddb3f0
                            
                            (*(*rcx_33 + 0x30))(rcx_33, rdi_9)
                        
                        rbx_9 = &rbx_9[2]
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    rbx_9 = var_98
                
                if (rbx_9 != 0)
                    int64_t* rcx_34 = data_143ddb3f0
                    
                    if (rcx_34 == 0)
                        sub_140a750a0()
                        rcx_34 = data_143ddb3f0
                    
                    (*(*rcx_34 + 0x30))(rcx_34, rbx_9)
                
                rsi = var_d0
                goto label_140a67a54
            
            int64_t* rbx_7 = var_98
            int64_t i_4 = sx.q(i_3)
            void* rdi_7 = &rbx_7[i_4 * 2]
            
            if (rbx_7 != rdi_7)
                do
                    int64_t* rcx_25 = arg1[1]
                    int16_t* rdx_14
                    
                    if (rbx_7[1].d == 0)
                        rdx_14 = &data_142d40450
                    else
                        rdx_14 = *rbx_7
                    
                    int16_t* const rcx_26
                    
                    if (rcx_25[1].d == 0)
                        rcx_26 = &data_142d40450
                    else
                        rcx_26 = *rcx_25
                    
                    if (sub_140a54510(rcx_26, rdx_14) == 0)
                        goto label_140a67989
                    
                    rbx_7 = &rbx_7[2]
                while (rbx_7 != rdi_7)
                
                i_4 = zx.q(i_3)
                rbx_7 = var_98
            
            if (i_4.d != 0)
                int32_t i_1
                
                do
                    int64_t rdi_8 = *rbx_7
                    
                    if (rdi_8 != 0)
                        int64_t* rcx_27 = data_143ddb3f0
                        
                        if (rcx_27 == 0)
                            sub_140a750a0()
                            rcx_27 = data_143ddb3f0
                        
                        (*(*rcx_27 + 0x30))(rcx_27, rdi_8)
                    
                    rbx_7 = &rbx_7[2]
                    i_1 = i_4.d
                    i_4 = zx.q(i_4.d - 1)
                while (i_1 != 1)
                rbx_7 = var_98
            
            if (rbx_7 != 0)
                int64_t* rcx_28 = data_143ddb3f0
                
                if (rcx_28 == 0)
                    sub_140a750a0()
                    rcx_28 = data_143ddb3f0
                
                (*(*rcx_28 + 0x30))(rcx_28, rbx_7)
            
            uint64_t rbx_8 = var_78
            
            if (rbx_8 != 0)
                int64_t* rcx_29 = data_143ddb3f0
                
                if (rcx_29 == 0)
                    sub_140a750a0()
                    rcx_29 = data_143ddb3f0
                
                (*(*rcx_29 + 0x30))(rcx_29, rbx_8)
            
            if (var_d8_1 != 0)
                int64_t* rcx_30 = data_143ddb3f0
                
                if (rcx_30 == 0)
                    sub_140a750a0()
                    rcx_30 = data_143ddb3f0
                
                (*(*rcx_30 + 0x30))(rcx_30, var_d8_1)
            
            rsi = var_d0
        
        rsi = &rsi[2]
        var_d0 = rsi
    while (rsi != rax_7)
    
    r14 = arg3

char result = sub_140a6c1e0(r14)

if (result == 0)
    return result

return sub_1405a4480(r14)
