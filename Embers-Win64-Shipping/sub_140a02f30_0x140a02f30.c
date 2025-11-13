// 函数: sub_140a02f30
// 地址: 0x140a02f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
void* rbx = arg2
sub_1419c6730()
int64_t* r14 = *(arg1 + 0x150)
int32_t i = 0
int64_t r13 = 0
int64_t* var_a8 = r14
int64_t var_a0 = 0
uint64_t result = &r14[sx.q(*(arg1 + 0x158))]
uint64_t result_1 = sx.q(*(arg1 + 0x158)) << 3 u>> 3

if (r14 u> result)
    result_1 = 0

if (result_1 != 0)
    result = result_1
    int64_t* rbp_1 = arg5
    
    do
        int64_t* r12_1 = *r14
        
        if (r12_1 != 0 && r12_1[0x69].b != 0)
            int64_t* rcx = *r12_1
            int64_t rax_2 = (*(*rcx + 0x280))(rcx)
            
            if (*(rbx + 8) s> 0)
                do
                    if (test_bit(rdi, i))
                        int32_t rax_3 = sub_14081f8e0(rbp_1, 1)
                        int64_t* r13_3 =
                            zx.q(rax_3 s% 0x66) * 0xa0 + *(*rbp_1 + (sx.q(rax_3 s/ 0x66) << 3))
                        int64_t* r14_1 = r13_3
                        int64_t* rax_5 = r13_3[0xd]
                        
                        if (rax_5 != 0)
                            r14_1 = rax_5
                        
                        r14_1[2] = &r12_1[0x22]
                        *(r13_3 + 0x9c) &= 0xffffffbf
                        r13_3[0xf] = &r12_1[0x27]
                        r13_3[0x10] = rax_2
                        int64_t* rcx_6 = *(arg1 + 0x108)
                        char var_d8
                        bool var_d0
                        char var_c8
                        char var_b8
                        char var_b7
                        void var_98
                        void var_78
                        (*(*rcx_6 + 0x150))(rcx_6, *(arg1 + 0x110), &var_b7, &var_78, &var_98, 
                            &var_b8, var_d8, var_d0, var_c8)
                        char arg_8 = 0
                        char* var_80_1 = &arg_8
                        void*** (* var_88)() = j_sub_140597fc0
                        void* rax_10 = sub_140a756e0(&var_88, &data_143958018)
                        void*** rbx_3 = (*(rax_10 + 0x10) + 0xf) & 0xfffffffffffffff0
                        void* rax_11 = &rbx_3[6]
                        
                        if (rax_11 u> *(rax_10 + 0x18))
                            sub_140b0e3d0(rax_10 + 0x10, 0x40)
                            rbx_3 = (*(rax_10 + 0x10) + 0xf) & 0xfffffffffffffff0
                            rax_11 = &rbx_3[6]
                        
                        *(rax_10 + 0x10) = rax_11
                        
                        if (rbx_3 != 0)
                            rbx_3[2] = 0
                            rbx_3[3] = 0
                            *rbx_3 = &data_142e0f070
                            rbx_3[2].d = 0xffffffff
                            *(rbx_3 + 0x14) = 4
                            rbx_3[1] = &data_142d99570
                            rbx_3[3].d = 2
                            rbx_3[4] = 0
                            rbx_3[5] = 0
                        
                        int64_t rbp_2 = sx.q(rbp_1[0x18].d)
                        int32_t rax_12 = (rbp_2 + 1).d
                        rbp_1[0x18].d = rax_12
                        
                        if (rax_12 s> *(rbp_1 + 0xc4))
                            sub_14083a310(&rbp_1[0x17], rbp_2.d)
                        
                        *(rbp_1[0x17] + (rbp_2 << 3)) = rbx_3
                        var_c8 = var_b8
                        var_d0 = *(arg1 + 0x32) - 1 u<= 1
                        var_d8 = var_b7
                        char* var_e0_1
                        var_e0_1.b = 1
                        sub_1422f21f0(rbx_3, arg1 + 0x80, &var_78, arg1 + 0xc0, arg1 + 0xdc, 
                            var_e0_1.b, var_d8, var_d0, var_c8)
                        rbp_1 = arg5
                        r14_1[1] = &rbx_3[1]
                        r14_1[8].d = 0
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = muls.dp.d(0x55555556, r12_1[0x26].d)
                        r14_1[0xa].d = 0
                        *(r14_1 + 0x44) = temp2_1 + (temp2_1 u>> 0x1f)
                        *(r14_1 + 0x54) = *(r12_1 + 0xc4) - 1
                        *(r13_3 + 0x9c) =
                            (zx.d(*(arg1 + 0x35)) & 1) | (*(r13_3 + 0x9c) & 0xfffe007e)
                        sub_1422dd2a0(rbp_1, i, r13_3)
                        rbx = arg2
                        rdi = arg4
                    
                    i += 1
                while (i s< *(rbx + 8))
                
                r14 = var_a8
                r13 = var_a0
            
            result = result_1
            i = 0
        
        r14 = &r14[1]
        r13 += 1
        var_a8 = r14
        var_a0 = r13
    while (r13 != result)

return result
