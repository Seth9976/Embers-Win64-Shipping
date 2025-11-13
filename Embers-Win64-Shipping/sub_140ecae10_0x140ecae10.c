// 函数: sub_140ecae10
// 地址: 0x140ecae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1[0xdc]
uint128_t zmm6
uint128_t var_58 = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
int32_t var_b8 = 0

if (r15[1].d s<= 0 || (*(arg4 + 8) & 0x30) != 0)
    sub_140f7f130(arg1, arg2, arg3, arg4)
else
    int64_t* rbx_1 = *(arg4 + 0x28)
    int64_t r12
    r12.b = 0
    uint128_t var_98_1 = zx.o(0)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    uint64_t rdi
    rdi.b = *(arg4 + 0x18) == data_143e1e170
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t var_c8
    int64_t* rbx_13
    int64_t* rax_5
    
    if (rdi.b == 0)
        int64_t* rbx_2 = *(arg4 + 0x28)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        rdi.b = *(arg4 + 0x18) == data_143e1e158
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (rdi.b != 0)
            int64_t rcx_5 = *r15
            int64_t rdx_1 = sx.q(r15[1].d) * 2
            var_c8 = *(rcx_5 + (rdx_1 << 3) - 0x10)
            rax_5 = *(rcx_5 + (rdx_1 << 3) - 8)
            goto label_140ecb15a
        
        int64_t* rbx_3 = *(arg4 + 0x28)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        rdi.b = *(arg4 + 0x18) == data_143e1e128
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp9_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int64_t rcx_13
        int64_t* rdx_5
        
        if (rdi.b != 0)
            int64_t i = arg1[0xce]
            int32_t rbx_4 = 0
            
            if (i != 0)
                int64_t* rdi_1 = arg1[0xcf]
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                int64_t* rdx_2 = *r15
                int64_t* rbx_5 = rdx_2
                void* rax_15 = &rdx_2[sx.q(r15[1].d) * 2]
                
                if (rdx_2 == rax_15)
                label_140ecafb5:
                    rbx_4 = -1
                else
                    while (*rbx_5 != i)
                        rbx_5 = &rbx_5[2]
                        
                        if (rbx_5 == rax_15)
                            goto label_140ecafb5
                    
                    rbx_4 = ((rbx_5 - rdx_2) s>> 4).d
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp31_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp31_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
            
            (*(*arg1 + 0x260))(arg1)
            int32_t rdi_2 = int.d(arg5.d)
            rdi = zx.q(rdi_2 - mods.dp.d(sx.q(rdi_2), (*(*arg1 + 0x268))(arg1)))
            rdx_5 = *r15
            
            if (rbx_4 s< rdi.d)
                var_c8 = *rdx_5
                rax_5 = rdx_5[1]
                goto label_140ecb15a
            
            rcx_13 = sx.q(rbx_4 - rdi.d)
        label_140ecb012:
            int64_t rcx_14 = rcx_13 * 2
            var_c8 = rdx_5[rcx_14]
            rax_5 = rdx_5[rcx_14 + 1]
            goto label_140ecb15a
        
        int64_t* rbx_8 = *(arg4 + 0x28)
        
        if (rbx_8 != 0)
            rbx_8[1].d += 1
        
        rdi.b = *(arg4 + 0x18) == data_143e1e140
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t temp21_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
        
        if (rdi.b != 0)
            int64_t i_1 = arg1[0xce]
            int32_t rbx_9 = 0
            
            if (i_1 != 0)
                int64_t* rdi_3 = arg1[0xcf]
                
                if (rdi_3 != 0)
                    rdi_3[1].d += 1
                
                int64_t* rdx_6 = *r15
                int64_t* rbx_10 = rdx_6
                void* rax_31 = &rdx_6[sx.q(r15[1].d) * 2]
                
                if (rdx_6 == rax_31)
                label_140ecb0ce:
                    rbx_9 = -1
                else
                    while (*rbx_10 != i_1)
                        rbx_10 = &rbx_10[2]
                        
                        if (rbx_10 == rax_31)
                            goto label_140ecb0ce
                    
                    rbx_9 = ((rbx_10 - rdx_6) s>> 4).d
                
                if (rdi_3 != 0)
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d == 1)
                        (**rdi_3)(rdi_3)
                        int32_t temp34_1 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (temp34_1 == 1)
                            (*(*rdi_3 + 8))(rdi_3, 1)
            
            (*(*arg1 + 0x260))(arg1)
            int32_t rdi_4 = int.d(arg5.d)
            int32_t temp1_2 = mods.dp.d(sx.q(rdi_4), (*(*arg1 + 0x268))(arg1))
            int64_t rcx_22 = sx.q(r15[1].d)
            rdi = zx.q(rdi_4 - temp1_2)
            rdx_5 = *r15
            
            if (rbx_9 s< rcx_22.d - rdi.d)
                rcx_13 = sx.q(rdi.d + rbx_9)
                goto label_140ecb012
            
            int64_t rcx_23 = rcx_22 * 2
            var_c8 = rdx_5[rcx_23 - 2]
            rax_5 = rdx_5[rcx_23 - 1]
            goto label_140ecb15a
    else
        int64_t* rcx_2 = *r15
        var_c8 = *rcx_2
        rax_5 = rcx_2[1]
    label_140ecb15a:
        
        if (rax_5 != 0)
            rax_5[1].d += 1
        
        zmm6 = var_c8.o
        int64_t* rbx_12 = _mm_bsrli_si128(zx.o(0), 8).q
        var_98_1 = zmm6
        
        if (rbx_12 != 0)
            rbx_12[1].d -= 1
            
            if (rbx_12[1].d == 1)
                (**rbx_12)(rbx_12)
                int32_t temp7_1 = *(rbx_12 + 0xc)
                *(rbx_12 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_12 + 8))(rbx_12, 1)
        
        r12.b = 1
        
        if (zmm6.q != 0)
            var_c8.o = zmm6
            rbx_13 = _mm_bsrli_si128(zmm6, 8).q
            
            if (rbx_13 != 0)
                rbx_13[1].d += 1
            
            (*(*arg1 + 0x2b8))(arg1, &var_c8, arg4)
            
            if (rax_5 != 0)
                rax_5[1].d -= 1
                
                if (rax_5[1].d == 1)
                    (**rax_5)(rax_5)
                    int32_t temp18_1 = *(rax_5 + 0xc)
                    *(rax_5 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        (*(*rax_5 + 8))(rax_5, 1)
            
            goto label_140ecb489
    int32_t rcx_29
    int64_t* rbx_14
    
    if (arg1[0xce] == 0)
        rbx_14 = arg3
        rcx_29 = var_b8
        rdi.b = 0
    else
        rbx_14 = *(arg4 + 0x28)
        
        if (rbx_14 != 0)
            rbx_14[1].d += 1
        
        rcx_29 = 1
        var_b8 = 1
        
        if (*(arg4 + 0x18) != data_143e1e110)
            rdi.b = 0
        else
            rdi = 1
            var_b8 = 1
    
    if ((rcx_29.b & 1) != 0)
        rcx_29 &= 0xfffffffe
        var_b8 = rcx_29
        
        if (rbx_14 != 0)
            rbx_14[1].d -= 1
            
            if (rbx_14[1].d == 1)
                (**rbx_14)(rbx_14)
                int32_t temp29_1 = *(rbx_14 + 0xc)
                *(rbx_14 + 0xc) -= 1
                
                if (temp29_1 == 1)
                    (*(*rbx_14 + 8))(rbx_14, 1)
                
                rcx_29 = var_b8
    
    if (rdi.b == 0)
        char rax_69 = (*(arg4 + 8)).b
        int64_t* rbx_20
        
        if ((rax_69 & 3) != 0 || (rax_69 & 0x30) != 0 || (rax_69 & 0xc) == 0)
            rbx_20 = arg3
            rdi.b = 0
        else
            rbx_20 = *(arg4 + 0x28)
            var_b8 = rcx_29 | 2
            
            if (rbx_20 != 0)
                rbx_20[1].d += 1
            
            if (*(arg4 + 0x18) != data_143e1e308)
                rdi.b = 0
            else if (*sub_140ebd5a0(&arg1[0x90]) != 3)
                rdi.b = 0
            else
                rdi.b = 1
        
        if ((var_b8.b & 2) != 0 && rbx_20 != 0)
            rbx_20[1].d -= 1
            
            if (rbx_20[1].d == 1)
                (**rbx_20)(rbx_20)
                int32_t temp35_1 = *(rbx_20 + 0xc)
                *(rbx_20 + 0xc) -= 1
                
                if (temp35_1 == 1)
                    (*(*rbx_20 + 8))(rbx_20, 1)
        
        if (rdi.b != 0)
            (*(arg1[0x9d] + 0x30))(&arg1[0x9d])
            int32_t i_2 = 0
            
            if (r15[1].d s> 0)
                int64_t* rbx_21 = nullptr
                
                do
                    int64_t rcx_54 = *r15
                    var_c8 = *(rbx_21 + rcx_54)
                    void* rax_77 = *(rbx_21 + rcx_54 + 8)
                    void* var_c0_3 = rax_77
                    
                    if (rax_77 != 0)
                        *(rax_77 + 8) += 1
                    
                    int64_t r8_6
                    r8_6.b = 1
                    (*(arg1[0x9d] + 0x28))(&arg1[0x9d], &var_c8, r8_6, 0)
                    i_2 += 1
                    rbx_21 = &rbx_21[2]
                while (i_2 s< r15[1].d)
            
            (*(arg1[0x9d] + 0x40))(&arg1[0x9d], 0)
            goto label_140ecb483
    else
        int64_t var_a8 = arg1[0xce]
        int64_t* rax_53 = arg1[0xcf]
        int64_t* var_a0_1 = rax_53
        
        if (rax_53 != 0)
            rax_53[1].d += 1
            rax_53 = var_a0_1
        
        if ((*(arg4 + 8) & 0xc) != 0)
            goto label_140ecb324
        
        if (*sub_140ebd5a0(&arg1[0x90]) == 2)
            rax_53 = var_a0_1
        label_140ecb324:
            var_c8.o = var_a8.o
            
            if (rax_53 != 0)
                rax_53[1].d += 1
            
            int64_t rbx_16 = arg1[0x9d]
            char rax_60
            int64_t r8_1
            int64_t r9_1
            rax_60, r8_1, r9_1 = (*(rbx_16 + 0x10))(&arg1[0x9d], &var_a8)
            r9_1.b = 1
            r8_1.b = rax_60 == 0
            (*(rbx_16 + 0x28))(&arg1[0x9d], &var_c8, r8_1, r9_1)
            (*(arg1[0x9d] + 0x40))(&arg1[0x9d], 0)
            r12.b = 1
        else
            char rax_56
            int64_t r9
            rax_56, r9 = (*(arg1[0x9d] + 0x10))(&arg1[0x9d], &var_a8)
            
            if (rax_56 == 0)
                arg5 = var_a8.o
                var_c8.o = arg5
                int64_t* rax_57 = _mm_bsrli_si128(arg5, 8).q
                var_a0_1 = rax_57
                
                if (rax_57 != 0)
                    rax_57[1].d += 1
                
                r9.b = 1
                (*(arg1[0x9d] + 0x28))(&arg1[0x9d], &var_c8, 1, r9)
                (*(arg1[0x9d] + 0x40))(&arg1[0x9d], 0)
                r12.b = 1
            else
                r12.b = 0
        
        int64_t* rbx_17 = arg1[0xcf]
        var_c8 = arg1[0xce]
        int64_t* var_c0_2 = rbx_17
        
        if (rbx_17 != 0)
            rbx_17[1].d += 1
        
        if (&var_c8 != &arg1[0xd0])
            var_c8.o = *(arg1 + 0x680)
            rbx_17 = var_c0_2
            *(arg1 + 0x680) = var_c8.o
        
        if (rbx_17 != 0)
            rbx_17[1].d -= 1
            
            if (rbx_17[1].d == 1)
                (**rbx_17)(rbx_17)
                int32_t temp39_1 = *(rbx_17 + 0xc)
                *(rbx_17 + 0xc) -= 1
                
                if (temp39_1 == 1)
                    (*(*rbx_17 + 8))(rbx_17, 1)
        
        sub_140ec04c0(&arg1[0x9e], &var_c8, &var_a8)
        
        if (var_c8 == 0)
            uint128_t zmm0 = var_a8.o
            int32_t r8_3 = *(arg4 + 0xc)
            uint128_t var_78 = zmm0
            int64_t* rax_64 = _mm_bsrli_si128(zmm0, 8).q
            var_a0_1 = rax_64
            
            if (rax_64 != 0)
                rax_64[1].d += 1
            
            sub_140ed5b90(arg1, &var_78, r8_3)
        
        if (var_c0_2 != 0)
            var_c0_2[1].d -= 1
            
            if (var_c0_2[1].d == 1)
                (**var_c0_2)(var_c0_2)
                int32_t temp42_1 = *(var_c0_2 + 0xc)
                *(var_c0_2 + 0xc) -= 1
                
                if (temp42_1 == 1)
                    (*(*var_c0_2 + 8))(var_c0_2, 1)
        
        if (var_a0_1 != 0)
            var_a0_1[1].d -= 1
            
            if (var_a0_1[1].d == 1)
                (**var_a0_1)(var_a0_1)
                int32_t temp43_1 = *(var_a0_1 + 0xc)
                *(var_a0_1 + 0xc) -= 1
                
                if (temp43_1 == 1)
                    (*(*var_a0_1 + 8))(var_a0_1, 1)
    
    if (r12.b == 0)
        int64_t* rbx_22 = var_98_1:8.q
        
        if (rbx_22 != 0)
            rbx_22[1].d -= 1
            
            if (rbx_22[1].d == 1)
                (**rbx_22)(rbx_22)
                int32_t temp37_1 = *(rbx_22 + 0xc)
                *(rbx_22 + 0xc) -= 1
                
                if (temp37_1 == 1)
                    (*(*rbx_22 + 8))(rbx_22, 1)
        
        sub_140f7f130(arg1, arg2, arg3, arg4)
    else
    label_140ecb483:
        rbx_13 = var_98_1:8.q
    label_140ecb489:
        *arg2 = 1
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        arg2[0x20] = 0
        __builtin_memset(&arg2[0x28], 0, 0x88)
        *(arg2 + 0xb4) &= 0xffffff00
        *(arg2 + 0xb0) = 0x20702
        
        if (rbx_13 != 0)
            rbx_13[1].d -= 1
            
            if (rbx_13[1].d == 1)
                (**rbx_13)(rbx_13)
                int32_t temp20_1 = *(rbx_13 + 0xc)
                *(rbx_13 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    int64_t r8_5 = *rbx_13
                    (*(r8_5 + 8))(rbx_13, 1, r8_5)

return arg2
