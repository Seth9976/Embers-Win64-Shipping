// 函数: sub_140ed6440
// 地址: 0x140ed6440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1688)
void var_16c8
int64_t rax_1 = __security_cookie ^ &var_16c8
void**** rsi = arg1
void**** var_1660 = arg1
int64_t r14 = 0
int32_t var_1688 = 0
int64_t* rcx = *arg3
int64_t* var_1658 = arg4
int64_t* rdi = arg3
void* var_1628
(*(*rcx + 8))(rcx, &var_1628)
int64_t* rcx_1 = *rdi
int64_t var_1618
(*(*rcx_1 + 0x10))(rcx_1, &var_1618)
int64_t* rcx_2 = *rdi
void* var_1678
(*(*rcx_2 + 0x18))(rcx_2, &var_1678)
void* rax_5 = var_1628
int64_t r12
r12.b = arg7 != 0
char var_1698 = r12.b
int64_t* rbx_19
bool cond:3_1

if (rax_5 != 0)
    uint128_t zmm7 = zx.o(0)
    int64_t* r12_1 = nullptr
    uint128_t var_1590_1 = zx.o(0)
    int32_t var_16a8
    int64_t rdx_3
    int64_t* r13_1
    uint128_t zmm6
    
    if (arg7 == 0)
    label_140ed6728:
        uint128_t zmm0 = var_1628.o
        uint128_t var_1308 = zmm0
        void* rax_19 = _mm_bsrli_si128(zmm0, 8).q
        
        if (rax_19 != 0)
            *(rax_19 + 8) += 1
        
        uint128_t* var_14e8 = &var_1308
        void*** rax_20 = sub_140e91bb0()
        void* var_14c8 = &rax_20[2]
        sub_140918950(&var_14c8, &rax_20[2])
        var_16a8 = 0x4d0
        uint128_t** var_14b8_1 = &var_14e8
        sub_140e23ed0(&rax_20[2], "SDockingTabStack")
        void var_fa8
        int64_t* rax_21
        int128_t zmm1_1
        rax_21, zmm1_1 = sub_140e94090(&var_fa8)
        void var_1238
        int64_t** rax_22
        rax_22, zmm6, zmm7 = sub_140e9c640(&var_14c8, &var_1238, rax_21, zmm1_1)
        int64_t* rcx_19 = rax_22[1]
        r13_1 = *rax_22
        bool cond:1_1 = rcx_19 != 0
        
        if (rcx_19 != 0)
            rcx_19[1].d += 1
            cond:1_1 = rcx_19 != 0
        
        if (cond:1_1)
            r12_1 = rcx_19
        
        int64_t* var_1230
        
        if (var_1230 != 0)
            var_1230[1].d -= 1
            
            if (var_1230[1].d == 1)
                (**var_1230)(var_1230)
                int32_t temp15_1 = *(var_1230 + 0xc)
                *(var_1230 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*var_1230 + 8))(var_1230, 1)
        
        if (rax_20 != 0)
            rax_20[1].d -= 1
            
            if (rax_20[1].d == 1)
                (**rax_20)(rax_20)
                int32_t temp21_1 = *(rax_20 + 0xc)
                *(rax_20 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*rax_20)[1](rax_20, 1)
        
        int64_t* rbx_11 = var_1308:8.q
        
        if (rbx_11 != 0)
            rbx_11[1].d -= 1
            
            if (rbx_11[1].d == 1)
                (**rbx_11)(rbx_11)
                int32_t temp25_1 = *(rbx_11 + 0xc)
                *(rbx_11 + 0xc) -= 1
                
                if (temp25_1 == 1)
                    (*(*rbx_11 + 8))(rbx_11, 1)
        
        sub_140ddea30(&var_fa8)
        r13_1[0x74].d = *(*rdi + 0x18)
        rax_5 = var_1628
    else
        if (arg7 == 1)
            int32_t* rbx_1 = *(rax_5 + 0x20)
            void* rdi_3 = &rbx_1[sx.q(*(rax_5 + 0x28)) * 4]
            
            if (rbx_1 != rdi_3)
                do
                    char rax_6
                    rax_6, rdx_3 = sub_140ec2bb0(rsi, rbx_1)
                    
                    if (rax_6 != 0)
                        rdi = arg3
                        goto label_140ed6728
                    
                    rbx_1 = &rbx_1[4]
                while (rbx_1 != rdi_3)
                
                rax_5 = var_1628
        
        r13_1 = nullptr
    
    int32_t* r15_1 = *(rax_5 + 0x20)
    void* rbx_4 = &r15_1[sx.q(*(rax_5 + 0x28)) * 4]
    var_1688.q = rbx_4
    
    if (r15_1 != rbx_4)
        uint128_t var_58_1 = zmm6
        uint128_t* var_15e8
        
        do
            if (r15_1[3] == 1)
                char rax_7
                rax_7, rdx_3 = sub_140ec2bb0(rsi, r15_1)
                
                if (rax_7 != 0)
                    var_16a8.b = var_1698
                    int64_t var_14d8
                    rdx_3, zmm7 = sub_140edb490(rsi, &var_14d8, r15_1, var_1658, var_16a8.b)
                    int64_t* var_14d0
                    
                    if (var_14d8 != 0)
                        void* rdx_7 = var_1628
                        zmm6 = var_14d8.o
                        
                        if (*r15_1 == *(rdx_7 + 0x34))
                            int32_t rcx_6 = r15_1[2]
                            int32_t rax_10
                            
                            if (rcx_6 != 0xffffffff)
                                rax_10 = *(rdx_7 + 0x3c)
                            
                            if (rcx_6 == 0xffffffff || rax_10 == 0xffffffff || rcx_6 == rax_10)
                                if (var_14d0 != 0)
                                    var_14d0[1].d += 1
                                
                                uint128_t var_1168_1 = zmm7
                                uint128_t temp0_1 = _mm_bsrli_si128(zmm7, 8)
                                zmm7 = zmm6
                                int64_t* rbx_5 = temp0_1.q
                                uint128_t var_1158_1 = zmm6
                                
                                if (rbx_5 != 0)
                                    rbx_5[1].d -= 1
                                    
                                    if (rbx_5[1].d == 1)
                                        (**rbx_5)(rbx_5)
                                        int32_t temp52_1 = *(rbx_5 + 0xc)
                                        *(rbx_5 + 0xc) -= 1
                                        
                                        if (temp52_1 == 1)
                                            (*(*rbx_5 + 8))(rbx_5, 1)
                        
                        if (r13_1 == 0)
                            uint128_t zmm0_1 = var_1628.o
                            uint128_t var_12f8 = zmm0_1
                            void* rax_13 = _mm_bsrli_si128(zmm0_1, 8).q
                            
                            if (rax_13 != 0)
                                *(rax_13 + 8) += 1
                            
                            var_15e8 = &var_12f8
                            void*** rax_14 = sub_140e91bb0()
                            void* var_14b0 = &rax_14[2]
                            sub_140918950(&var_14b0, &rax_14[2])
                            var_16a8 = 0x4d0
                            uint128_t** var_14a0_1 = &var_15e8
                            sub_140e23ed0(&rax_14[2], "SDockingTabStack")
                            void var_e00
                            int64_t* rax_15
                            int128_t zmm1
                            rax_15, zmm1 = sub_140e94090(&var_e00)
                            void var_1218
                            int64_t* rax_16
                            rax_16, zmm6, zmm7 = sub_140e9c640(&var_14b0, &var_1218, rax_15, zmm1)
                            int64_t* rbx_7 = rax_16[1]
                            r13_1 = *rax_16
                            
                            if (rbx_7 != 0)
                                rbx_7[1].d += 1
                            
                            int64_t* rsi_1 = r12_1
                            
                            if (rbx_7 != r12_1)
                                r12_1 = rbx_7
                                
                                if (rsi_1 != 0)
                                    rsi_1[1].d -= 1
                                    
                                    if (rsi_1[1].d == 1)
                                        (**rsi_1)(rsi_1)
                                        int32_t temp63_1 = *(rsi_1 + 0xc)
                                        *(rsi_1 + 0xc) -= 1
                                        
                                        if (temp63_1 == 1)
                                            (*(*rsi_1 + 8))(rsi_1, 1)
                            else if (rbx_7 != 0)
                                rbx_7[1].d -= 1
                                
                                if (rbx_7[1].d == 1)
                                    (**rbx_7)(rbx_7)
                                    int32_t temp62_1 = *(rbx_7 + 0xc)
                                    *(rbx_7 + 0xc) -= 1
                                    
                                    if (temp62_1 == 1)
                                        (*(*rbx_7 + 8))(rbx_7, 1)
                            
                            int64_t* var_1210
                            
                            if (var_1210 != 0)
                                var_1210[1].d -= 1
                                
                                if (var_1210[1].d == 1)
                                    (**var_1210)(var_1210)
                                    int32_t temp65_1 = *(var_1210 + 0xc)
                                    *(var_1210 + 0xc) -= 1
                                    
                                    if (temp65_1 == 1)
                                        (*(*var_1210 + 8))(var_1210, 1)
                            
                            if (rax_14 != 0)
                                rax_14[1].d -= 1
                                
                                if (rax_14[1].d == 1)
                                    (**rax_14)(rax_14)
                                    int32_t temp68_1 = *(rax_14 + 0xc)
                                    *(rax_14 + 0xc) -= 1
                                    
                                    if (temp68_1 == 1)
                                        (*rax_14)[1](rax_14, 1)
                            
                            int64_t* rbx_14 = var_12f8:8.q
                            
                            if (rbx_14 != 0)
                                rbx_14[1].d -= 1
                                
                                if (rbx_14[1].d == 1)
                                    (**rbx_14)(rbx_14)
                                    int32_t temp72_1 = *(rbx_14 + 0xc)
                                    *(rbx_14 + 0xc) -= 1
                                    
                                    if (temp72_1 == 1)
                                        (*(*rbx_14 + 8))(rbx_14, 1)
                            
                            sub_140ddea30(&var_e00)
                            rsi = var_1660
                            r13_1[0x74].d = *(*arg3 + 0x18)
                        
                        uint128_t var_12e8 = zmm6
                        
                        if (var_14d0 != 0)
                            var_14d0[1].d += 1
                        
                        sub_140ea2e80(r13_1, &var_12e8, 0xffffffff)
                        int64_t* rbx_15 = var_12e8:8.q
                        
                        if (rbx_15 != 0)
                            rbx_15[1].d -= 1
                            
                            if (rbx_15[1].d == 1)
                                (**rbx_15)(rbx_15)
                                int32_t temp51_1 = *(rbx_15 + 0xc)
                                *(rbx_15 + 0xc) -= 1
                                
                                if (temp51_1 == 1)
                                    (*(*rbx_15 + 8))(rbx_15, 1)
                        
                        rbx_4 = var_1688.q
                    
                    if (var_14d0 != 0)
                        var_14d0[1].d -= 1
                        
                        if (var_14d0[1].d == 1)
                            (**var_14d0)(var_14d0)
                            int32_t temp35_1 = *(var_14d0 + 0xc)
                            *(var_14d0 + 0xc) -= 1
                            
                            if (temp35_1 == 1)
                                (*(*var_14d0 + 8))(var_14d0, 1)
            
            r15_1 = &r15_1[4]
        while (r15_1 != rbx_4)
        
        char r14_1 = 0
        var_1590_1 = zmm7
        void* rdi_5 = var_1590_1.q
        
        if (rdi_5 != 0)
            rdx_3.b = 1
            sub_140ee7440(rdi_5, rdx_3)
            char rax_42 = sub_140f03770(rdi_5)
            char rax_43
            
            if (rax_42 != 0)
                rax_43 = sub_140f03770(rdi_5)
            
            int64_t* rbx_16
            int64_t* r15_2
            
            if (rax_42 != 0 && rax_43 != 2)
                r15_2 = var_1658
                rbx_16 = var_15e8
                rsi.b = 0
            else
                r15_2 = var_1658
                
                if (*r15_2 == 0)
                    rbx_16 = var_15e8
                    rsi.b = 0
                else
                    sub_140ebd660()
                    void* rcx_46 = data_143e2a070
                    rbx_16 = *(rcx_46 + 0x1c0)
                    
                    if (rbx_16 != 0)
                        int32_t rax_44 = rbx_16[1].d
                        
                        if (rax_44 == 0)
                            rbx_16 = nullptr
                        else
                            rbx_16[1].d = rax_44 + 1
                    
                    int64_t rax_46 = 0
                    
                    if (rbx_16 != 0)
                        rax_46 = *(rcx_46 + 0x1b8)
                    
                    r14_1 = 1
                    
                    if (*r15_2 == rax_46)
                        rsi.b = 0
                    else
                        rsi = 1
            
            if ((r14_1 & 1) != 0 && rbx_16 != 0)
                rbx_16[1].d -= 1
                
                if (rbx_16[1].d == 1)
                    (**rbx_16)(rbx_16)
                    int32_t temp60_1 = *(rbx_16 + 0xc)
                    *(rbx_16 + 0xc) -= 1
                    
                    if (temp60_1 == 1)
                        (*(*rbx_16 + 8))(rbx_16, 1)
            
            if (rsi.b != 0)
                void var_1188
                sub_140edadd0(*r15_2, sub_140f035f0(rdi_5, &var_1188))
                int64_t* var_1180
                
                if (var_1180 != 0)
                    var_1180[1].d -= 1
                    
                    if (var_1180[1].d == 1)
                        (**var_1180)(var_1180)
                        int32_t rdi_6 = *(var_1180 + 0xc)
                        *(var_1180 + 0xc) -= 1
                        
                        if (rdi_6 == 1)
                            (*(*var_1180 + 8))(var_1180, zx.q(rdi_6))
    
    *arg2 = r13_1
    arg2[1] = r12_1
    
    if (r12_1 != 0)
        int32_t rax_54 = r12_1[1].d
        r12_1[1].d = rax_54
        
        if (rax_54 == 0)
            (**r12_1)(r12_1)
            int32_t temp17_1 = *(r12_1 + 0xc)
            *(r12_1 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*r12_1 + 8))(r12_1, 1)
    
    rbx_19 = var_1590_1:8.q
    
    if (rbx_19 == 0)
        goto label_140ed7fe9
    
    rbx_19[1].d -= 1
    cond:3_1 = rbx_19[1].d != 1
    goto label_140ed7fc3

void* rdi_7 = var_1678
int64_t* result
int64_t* var_1670
int64_t* var_1620
int64_t* var_1610

if (rdi_7 == 0)
    int64_t rax_171 = var_1618
    
    if (rax_171 == 0)
        void*** var_11a8
        var_1660 = sub_140ec5860(&var_11a8)
        void*** rax_180 = sub_140e91bb0()
        void*** var_1448_1 = rax_180
        void* var_1450 = &rax_180[2]
        sub_140918950(&var_1450, &rax_180[2])
        char var_16a8_6 = -0x30
        void***** var_1440_1 = &var_1660
        sub_140e23ed0(&rax_180[2], "SDockingTabStack")
        void var_c58
        int64_t* rax_181
        int128_t zmm1_17
        rax_181, zmm1_17 = sub_140e94090(&var_c58)
        int64_t* var_1318
        sub_140e9c640(&var_1450, &var_1318, rax_181, zmm1_17)
        sub_140597060(&var_1450)
        int64_t* var_11a0
        
        if (var_11a0 != 0)
            var_11a0[1].d -= 1
            
            if (var_11a0[1].d == 1)
                (**var_11a0)(var_11a0)
                int32_t temp4_1 = *(var_11a0 + 0xc)
                *(var_11a0 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_11a0 + 8))(var_11a0, 1)
        
        sub_140ddea30(&var_c58)
        int64_t var_1638_1 = 0
        var_1688.q = 0
        int32_t var_1680_1 = 0xffffffff
        void var_1228
        int64_t* rax_184 = sub_140edb490(rsi, &var_1228, &var_1688, arg4, r12.b)
        int64_t* rdi_15 = var_1318
        int64_t var_1510 = *rax_184
        int64_t* rcx_228 = rax_184[1]
        rax_184[1] = 0
        *rax_184 = 0
        sub_140ed1540(rdi_15, &var_1510, 0xffffffff)
        
        if (rcx_228 != 0)
            rcx_228[1].d -= 1
            
            if (rcx_228[1].d == 1)
                (**rcx_228)(rcx_228)
                int32_t temp7_1 = *(rcx_228 + 0xc)
                *(rcx_228 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rcx_228 + 8))(rcx_228, 1)
        
        int64_t* var_1220
        
        if (var_1220 != 0)
            var_1220[1].d -= 1
            
            if (var_1220[1].d == 1)
                (**var_1220)(var_1220)
                int32_t temp11_1 = *(var_1220 + 0xc)
                *(var_1220 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*var_1220 + 8))(var_1220, 1)
        
        int64_t* var_1310
        rbx_19 = var_1310
        *arg2 = rdi_15
        arg2[1] = rbx_19
        
        if (rbx_19 != 0)
            int32_t rax_190 = rbx_19[1].d
            cond:3_1 = rax_190 != 0
            rbx_19[1].d = rax_190
        label_140ed7fc3:
            
            if (cond:3_1)
                goto label_140ed7fe9
            
            (**rbx_19)(rbx_19)
            int32_t temp24_1 = *(rbx_19 + 0xc)
            *(rbx_19 + 0xc) -= 1
            
            if (temp24_1 == 1)
                (*(*rbx_19 + 8))(rbx_19, 1)
            
            goto label_140ed7fe9
        
    label_140ed7fe9:
        
        if (var_1670 != 0)
            var_1670[1].d -= 1
            
            if (var_1670[1].d == 1)
                (**var_1670)(var_1670)
                int32_t temp23_1 = *(var_1670 + 0xc)
                *(var_1670 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*(*var_1670 + 8))(var_1670, 1)
        
        if (var_1610 != 0)
            var_1610[1].d -= 1
            
            if (var_1610[1].d == 1)
                (**var_1610)(var_1610)
                int32_t temp27_1 = *(var_1610 + 0xc)
                *(var_1610 + 0xc) -= 1
                
                if (temp27_1 == 1)
                    (*(*var_1610 + 8))(var_1610, 1)
        
        if (var_1620 != 0)
            var_1620[1].d -= 1
            
            if (var_1620[1].d == 1)
                (**var_1620)(var_1620)
                int32_t temp30_1 = *(var_1620 + 0xc)
                *(var_1620 + 0xc) -= 1
                
                if (temp30_1 == 1)
                    (*(*var_1620 + 8))(var_1620, 1)
        
        result = arg2
    else
        int64_t var_1608 = 0
        int64_t var_1600_1 = 0
        int64_t var_1348 = rax_171
        int64_t* var_1340_1 = var_1610
        
        if (var_1610 != 0)
            var_1610[1].d += 1
        
        char rax_172 = sub_140eae1f0(rsi, &var_1608, &var_1348, arg4, arg5, arg7)
        
        if (var_1610 != 0)
            var_1610[1].d -= 1
            
            if (var_1610[1].d == 1)
                int64_t rdx_47 = *var_1610
                (*rdx_47)(var_1610, rdx_47)
                int32_t temp8_1 = *(var_1610 + 0xc)
                *(var_1610 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_1610 + 8))(var_1610, 1)
        
        if (rax_172 == 0)
            *arg2 = 0
            arg2[1] = 0
            sub_140596d80(&var_1608)
            sub_140597060(&var_1678)
            sub_140597060(&var_1618)
            sub_140597060(&var_1628)
            result = arg2
        else
            uint128_t zmm0_8 = var_1618.o
            uint128_t var_1338 = zmm0_8
            void* rax_174 = _mm_bsrli_si128(zmm0_8, 8).q
            
            if (rax_174 != 0)
                *(rax_174 + 8) += 1
            
            var_1658 = &var_1338
            void*** rax_175 = sub_140e91b00()
            void*** var_14f8_1 = rax_175
            void* var_1500 = &rax_175[2]
            sub_140918950(&var_1500, &rax_175[2])
            int64_t var_16a8_5 = 0x3c8
            int64_t** var_14f0_1 = &var_1658
            sub_140e23ed0(&rax_175[2], "SDockingSplitter")
            void var_1148
            int64_t* rax_176
            int128_t zmm1_15
            rax_176, zmm1_15 = sub_140e93f70(&var_1148)
            void* var_15f8
            sub_140e9c380(&var_1500, &var_15f8, rax_176, zmm1_15)
            sub_140597060(&var_1500)
            sub_140597060(&var_1338)
            int128_t zmm1_16 = sub_140ddea30(&var_1148)
            void* rbx_45 = var_15f8
            *(rbx_45 + 0x3a0) = *(*arg3 + 0x18)
            
            if (arg7 != 0)
                sub_140ed8090(rsi, &var_1608, &var_15f8)
            else
                uint128_t zmm0_9 = var_1618.o
                uint128_t var_1328 = zmm0_9
                void* rax_178 = _mm_bsrli_si128(zmm0_9, 8).q
                
                if (rax_178 != 0)
                    *(rax_178 + 8) += 1
                
                sub_140ed8460(rsi, &var_1328, &var_15f8, arg4, zmm1_16)
                sub_140597060(&var_1328)
            
            *arg2 = rbx_45
            void* var_15f0
            arg2[1] = var_15f0
            
            if (var_15f0 != 0)
                *(var_15f0 + 8) += 1
            
            sub_140597060(&var_15f8)
            sub_140596d80(&var_1608)
            sub_140597060(&var_1678)
            sub_140597060(&var_1618)
            sub_140597060(&var_1628)
            result = arg2
else
    int32_t rax_57 = *(rdi_7 + 0x38)
    uint128_t var_1648 = zx.o(0)
    void*** rbx_27
    
    if (rax_57 == 0)
        int64_t var_15d0 = 0
        int64_t var_15c8_1 = 0
        
        if (var_1670 != 0)
            var_1670[1].d += 1
        
        void* var_13c8 = rdi_7
        int64_t* var_13c0_1 = var_1670
        
        if (var_1670 != 0)
            var_1670[1].d += 1
        
        char rax_140 = sub_140eae1f0(rsi, &var_15d0, &var_13c8, arg4, arg5, arg7)
        
        if (var_1670 != 0)
            var_1670[1].d -= 1
            
            if (var_1670[1].d == 1)
                int64_t rdx_38 = *var_1670
                (*rdx_38)(var_1670, rdx_38)
                int32_t temp13_1 = *(var_1670 + 0xc)
                *(var_1670 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*var_1670 + 8))(var_1670, 1)
            
            var_1670[1].d -= 1
            
            if (var_1670[1].d == 1)
                (**var_1670)(var_1670)
                int32_t temp19_1 = *(var_1670 + 0xc)
                *(var_1670 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*var_1670 + 8))(var_1670, 1)
        
        if (rax_140 == 0)
            rbx_27 = var_1648:8.q
        else
            int64_t var_1530
            int128_t var_1388
            int64_t* rcx_154
            int64_t rdx_39
            int32_t rsi_18
            int32_t rdi_12
            
            if (arg6 == 0)
                rcx_154 = &var_1388
                var_1388 = zx.o(0)
                rdx_39 = 0
                rdi_12 = 0
                rsi_18 = 0x100
            else
                void* rax_144 = arg4[1]
                rdx_39 = *arg4
                var_1530 = rdx_39
                void* var_1528_1 = rax_144
                
                if (rax_144 != 0)
                    *(rax_144 + 8) += 1
                
                rcx_154 = &var_1530
                rdi_12 = 0x80
                rsi_18 = 0
            
            int64_t rax_145 = rcx_154[1]
            rcx_154[1] = 0
            *rcx_154 = 0
            int64_t var_13b8 = rdx_39
            int64_t var_13b0_1 = rax_145
            void var_720
            int64_t* rax_146
            int128_t zmm1_12
            rax_146, zmm1_12 = sub_140e93de0(&var_720)
            void* rax_147 = sub_140e99c30(rax_146, &var_13b8, zmm1_12)
            *(rax_147 + 0x1b0) = 0
            uint128_t zmm0_6 = var_1678.o
            uint128_t var_1398 = zmm0_6
            void* rcx_157 = _mm_bsrli_si128(zmm0_6, 8).q
            
            if (rcx_157 != 0)
                *(rcx_157 + 8) += 1
            
            void**** r12_4 = var_1660
            int64_t* rbx_36 = r12_4[2]
            
            if (rbx_36 != 0)
                int32_t rax_148 = rbx_36[1].d
                
                if (rax_148 != 0)
                    rbx_36[1].d = rax_148 + 1
                    rax_148.b = 1
                
                if (rax_148.b == 0)
                    rbx_36 = nullptr
                
                if (rbx_36 != 0)
                    r14 = r12_4[1]
            
            int64_t var_1540 = r14
            
            if (rbx_36 != 0)
                int32_t rax_149 = rbx_36[1].d
                rbx_36[1].d = rax_149
                
                if (rax_149 == 0)
                    (**rbx_36)(rbx_36)
                    int32_t temp42_1 = *(rbx_36 + 0xc)
                    *(rbx_36 + 0xc) -= 1
                    
                    if (temp42_1 == 1)
                        (*(*rbx_36 + 8))(rbx_36, 1)
            
            int64_t* var_13a8 = &var_1540
            uint128_t* var_13a0_1 = &var_1398
            void*** rax_152 = sub_140e919a0()
            void*** var_15a0_1 = rax_152
            void* var_15a8 = &rax_152[2]
            sub_140918950(&var_15a8, &rax_152[2])
            int64_t** var_1598_1 = &var_13a8
            int64_t var_16a8_4 = 0x400
            int128_t zmm1_13 = sub_140e23ed0(var_15a8, "SDockingArea")
            void var_1268
            sub_140e9bd90(sub_140dd3250(&var_15a8, &var_1648), &var_1268, rax_147, zmm1_13)
            int64_t* var_1260
            
            if (var_1260 != 0)
                var_1260[1].d -= 1
                
                if (var_1260[1].d == 1)
                    (**var_1260)(var_1260)
                    int32_t temp48_1 = *(var_1260 + 0xc)
                    *(var_1260 + 0xc) -= 1
                    
                    if (temp48_1 == 1)
                        (*(*var_1260 + 8))(var_1260, 1)
            
            sub_140597060(&var_15a8)
            
            if (rbx_36 != 0)
                rbx_36[1].d -= 1
                
                if (rbx_36[1].d == 1)
                    (**rbx_36)(rbx_36)
                    int32_t temp54_1 = *(rbx_36 + 0xc)
                    *(rbx_36 + 0xc) -= 1
                    
                    if (temp54_1 == 1)
                        (*(*rbx_36 + 8))(rbx_36, 1)
            
            int64_t* rbx_39 = var_1398:8.q
            
            if (rbx_39 != 0)
                rbx_39[1].d -= 1
                
                if (rbx_39[1].d == 1)
                    (**rbx_39)(rbx_39)
                    int32_t temp59_1 = *(rbx_39 + 0xc)
                    *(rbx_39 + 0xc) -= 1
                    
                    if (temp59_1 == 1)
                        (*(*rbx_39 + 8))(rbx_39, 1)
            
            sub_140e97ce0(&var_720)
            
            if (rsi_18 != 0)
                sub_140597060(&var_1388)
            
            if (rdi_12 != 0)
                sub_140597060(&var_1530)
            
            uint128_t zmm1_14 = var_1648
            rbx_27 = _mm_bsrli_si128(zmm1_14, 8).q
            
            if (arg7 != 0)
                uint128_t var_1248 = zmm1_14
                
                if (rbx_27 != 0)
                    rbx_27[1].d += 1
                
                uint128_t var_1358 = zmm1_14
                
                if (rbx_27 != 0)
                    rbx_27[1].d += 1
                
                sub_140ed8090(r12_4, &var_15d0, &var_1358)
                sub_140597060(&var_1358)
                sub_140597060(&var_1248)
            else
                uint128_t var_1258 = zmm1_14
                
                if (rbx_27 != 0)
                    rbx_27[1].d += 1
                
                uint128_t var_1368 = zmm1_14
                
                if (rbx_27 != 0)
                    rbx_27[1].d += 1
                
                void* rcx_174 = var_1678
                void* var_1378 = rcx_174
                int64_t* var_1370_1 = var_1670
                
                if (var_1670 != 0)
                    var_1670[1].d += 1
                
                void* var_1520 = rcx_174
                int64_t* var_1518_1 = var_1670
                
                if (var_1670 != 0)
                    var_1670[1].d += 1
                
                sub_140ed8460(r12_4, &var_1520, &var_1368, var_1658, zmm1_14)
                sub_140597060(&var_1520)
                sub_140597060(&var_1378)
                sub_140597060(&var_1368)
                sub_140597060(&var_1258)
        
        sub_140596d80(&var_15d0)
    else
        int64_t r12_2 = *arg4
        int64_t* var_1490
        void*** var_1478
        void var_558
        void var_2e8
        int64_t** rax_60
        int32_t rbx_21
        int32_t var_16a8_1
        
        if (rax_57 != 1)
            int64_t* rax_61 = sub_140dd5ed0(&var_558)
            *(rax_61 + 0x1e1) = 0
            int32_t zmm1_4 = *(rdi_7 + 0x40)
            *(rax_61 + 0x1e4) = *(rdi_7 + 0x3c)
            rax_61[0x3d].d = zmm1_4
            zmm1_4 = *(rdi_7 + 0x48)
            *(rax_61 + 0x1ec) = *(rdi_7 + 0x44)
            rax_61[0x3e].d = zmm1_4
            *(rax_61 + 0x234) = 0
            rax_61[0x40].b = *(rdi_7 + 0x4c)
            int64_t* rax_63 = j_sub_140a82f30(0xa88)
            int64_t* rdi_9 = rax_63
            
            if (rax_63 == 0)
                rdi_9 = nullptr
            else
                rax_63[1].d = 1
                *(rax_63 + 0xc) = 1
                *rdi_9 = &data_142ecd2f8
                
                if (rdi_9 != -0x10)
                    sub_140dde300(&rdi_9[2])
            
            var_1490 = rdi_9
            int64_t* var_1498 = &rdi_9[2]
            sub_140918950(&var_1498, &rdi_9[2])
            var_16a8_1 = 0xa78
            void var_1668
            void* var_1488_1 = &var_1668
            int64_t* var_1208
            rax_60 =
                sub_140de51f0(&var_1498, &var_1208, rax_61, sub_140e23ed0(&rdi_9[2], "SWindow"))
            rbx_21 = 0x70
        else
            int64_t* rax_58 = sub_140dd5ed0(&var_2e8)
            *(rax_58 + 0x1e1) = 2
            int32_t zmm1_2 = *(rdi_7 + 0x48)
            *(rax_58 + 0x1ec) = *(rdi_7 + 0x44)
            rax_58[0x3e].d = zmm1_2
            *(rax_58 + 0x234) = 0
            rax_58[0x40].b = *(rdi_7 + 0x4c)
            void*** rax_59 = j_sub_140a82f30(0xa88)
            void*** rdi_8 = rax_59
            
            if (rax_59 == 0)
                rdi_8 = nullptr
            else
                rax_59[1].d = 1
                *(rax_59 + 0xc) = 1
                *rdi_8 = &data_142ecd2f8
                
                if (rdi_8 != -0x10)
                    sub_140dde300(&rdi_8[2])
            
            var_1478 = rdi_8
            int64_t* var_1480 = &rdi_8[2]
            sub_140918950(&var_1480, &rdi_8[2])
            var_16a8_1 = 0xa78
            char* var_1470_1 = &var_1698
            int64_t* var_11f8
            rax_60 =
                sub_140de51f0(&var_1480, &var_11f8, rax_58, sub_140e23ed0(&rdi_8[2], "SWindow"))
            rbx_21 = 0xe
        int64_t* rdi_10 = rax_60[1]
        int64_t* r15_3 = *rax_60
        
        if (rdi_10 != 0)
            rdi_10[1].d += 1
        
        if ((rbx_21.b & 0x40) != 0)
            rbx_21 &= 0xffffffbf
            int64_t* var_1200
            
            if (var_1200 != 0)
                var_1200[1].d -= 1
                
                if (var_1200[1].d == 1)
                    (**var_1200)(var_1200)
                    int32_t temp34_1 = *(var_1200 + 0xc)
                    *(var_1200 + 0xc) -= 1
                    
                    if (temp34_1 == 1)
                        (*(*var_1200 + 8))(var_1200, 1)
        
        if ((rbx_21.b & 0x20) != 0)
            rbx_21 &= 0xffffffdf
            
            if (var_1490 != 0)
                var_1490[1].d -= 1
                
                if (var_1490[1].d == 1)
                    (**var_1490)(var_1490)
                    int32_t temp38_1 = *(var_1490 + 0xc)
                    *(var_1490 + 0xc) -= 1
                    
                    if (temp38_1 == 1)
                        (*(*var_1490 + 8))(var_1490, 1)
        
        if ((rbx_21.b & 0x10) != 0)
            rbx_21 &= 0xffffffef
            sub_140ddefc0(&var_558)
        
        if ((rbx_21.b & 8) != 0)
            rbx_21 &= 0xfffffff7
            int64_t* var_11f0
            
            if (var_11f0 != 0)
                var_11f0[1].d -= 1
                
                if (var_11f0[1].d == 1)
                    (**var_11f0)(var_11f0)
                    int32_t temp50_1 = *(var_11f0 + 0xc)
                    *(var_11f0 + 0xc) -= 1
                    
                    if (temp50_1 == 1)
                        (*(*var_11f0 + 8))(var_11f0, 1)
        
        if ((rbx_21.b & 4) != 0)
            rbx_21 &= 0xfffffffb
            
            if (var_1478 != 0)
                var_1478[1].d -= 1
                
                if (var_1478[1].d == 1)
                    (**var_1478)(var_1478)
                    int32_t temp55_1 = *(var_1478 + 0xc)
                    *(var_1478 + 0xc) -= 1
                    
                    if (temp55_1 == 1)
                        (*var_1478)[1](var_1478, 1)
        
        if ((rbx_21.b & 2) != 0)
            sub_140ddefc0(&var_2e8)
        
        sub_140ebd660()
        int128_t zmm1_6 = sub_140edadd0(r15_3, data_143e2a070 + 0x1a0)
        int64_t var_15e0 = 0
        int64_t var_15d8_1 = 0
        int64_t* var_1580 = r15_3
        
        if (rdi_10 != 0)
            rdi_10[1].d += 1
        
        if (var_1670 != 0)
            var_1670[1].d += 1
        
        void* var_12d8 = var_1678
        int64_t* var_12d0_1 = var_1670
        
        if (var_1670 != 0)
            var_1670[1].d += 1
        
        char rax_73 = sub_140eae1f0(var_1660, &var_15e0, &var_12d8, &var_1580, zmm1_6, arg7)
        
        if (var_1670 != 0)
            var_1670[1].d -= 1
            
            if (var_1670[1].d == 1)
                int64_t rdx_23 = *var_1670
                (*rdx_23)(var_1670, rdx_23)
                int32_t temp71_1 = *(var_1670 + 0xc)
                *(var_1670 + 0xc) -= 1
                
                if (temp71_1 == 1)
                    (*(*var_1670 + 8))(var_1670, 1)
            
            var_1670[1].d -= 1
            
            if (var_1670[1].d == 1)
                (**var_1670)(var_1670)
                int32_t temp74_1 = *(var_1670 + 0xc)
                *(var_1670 + 0xc) -= 1
                
                if (temp74_1 == 1)
                    (*(*var_1670 + 8))(var_1670, 1)
        
        if (rdi_10 != 0)
            rdi_10[1].d -= 1
            
            if (rdi_10[1].d == 1)
                (**rdi_10)(rdi_10)
                int32_t temp73_1 = *(rdi_10 + 0xc)
                *(rdi_10 + 0xc) -= 1
                
                if (temp73_1 == 1)
                    (*(*rdi_10 + 8))(rdi_10, 1)
        
        if (rax_73 == 0)
            rbx_27 = var_1648:8.q
        else
            void**** r12_3
            int128_t zmm1_9
            uint128_t zmm0_4
            
            if (r12_2 == 0)
                int64_t* rsi_15 = data_143e29f28
                int64_t* var_1418 = r15_3
                int64_t* var_1410_1 = rdi_10
                
                if (rdi_10 != 0)
                    rdi_10[1].d += 1
                
                zmm0_4 = var_1678.o
                uint128_t var_13e8 = zmm0_4
                void* rax_101 = _mm_bsrli_si128(zmm0_4, 8).q
                
                if (rax_101 != 0)
                    *(rax_101 + 8) += 1
                
                r12_3 = var_1660
                int64_t* rbx_28 = r12_3[2]
                
                if (rbx_28 != 0)
                    int32_t rax_102 = rbx_28[1].d
                    
                    if (rax_102 != 0)
                        rbx_28[1].d = rax_102 + 1
                        rax_102.b = 1
                    
                    if (rax_102.b == 0)
                        rbx_28 = nullptr
                    
                    if (rbx_28 != 0)
                        r14 = r12_3[1]
                
                int64_t var_1560 = r14
                
                if (rbx_28 != 0)
                    int32_t rax_103 = rbx_28[1].d
                    rbx_28[1].d = rax_103
                    
                    if (rax_103 == 0)
                        (**rbx_28)(rbx_28)
                        int32_t temp77_1 = *(rbx_28 + 0xc)
                        *(rbx_28 + 0xc) -= 1
                        
                        if (temp77_1 == 1)
                            (*(*rbx_28 + 8))(rbx_28, 1)
                
                int64_t* var_1428 = &var_1560
                uint128_t* var_1420_1 = &var_13e8
                void*** rax_106 = sub_140e919a0()
                void* var_15c0 = &rax_106[2]
                sub_140918950(&var_15c0, &rax_106[2])
                int64_t** var_15b0_1 = &var_1428
                int64_t var_16a8_3 = 0x400
                sub_140e23ed0(var_15c0, "SDockingArea")
                void var_8e8
                int64_t* rax_107
                int128_t zmm1_10
                rax_107, zmm1_10 = sub_140e93de0(&var_8e8)
                void* rax_108
                int128_t zmm1_11
                rax_108, zmm1_11 = sub_140e99c30(rax_107, &var_1418, zmm1_10)
                void var_11b8
                int64_t* rax_110
                int64_t r9_9
                rax_110, r9_9 =
                    sub_140e9bd90(sub_140dd3250(&var_15c0, &var_1648), &var_11b8, rax_108, zmm1_11)
                int64_t var_13f8 = *rax_110
                void* rcx_116 = rax_110[1]
                void* var_13f0_1 = rcx_116
                
                if (rcx_116 != 0)
                    *(rcx_116 + 8) += 1
                
                int64_t* var_1408 = r15_3
                int64_t* var_1400_1 = rdi_10
                
                if (rdi_10 != 0)
                    rdi_10[1].d += 1
                
                r9_9.b = 1
                void var_11c8
                sub_140e23de0(*(*(*rsi_15 + 0x10))(rsi_15, &var_11c8, &var_1408, r9_9, var_16a8_3), 
                    &var_13f8)
                int64_t* var_11c0
                
                if (var_11c0 != 0)
                    var_11c0[1].d -= 1
                    
                    if (var_11c0[1].d == 1)
                        (**var_11c0)(var_11c0)
                        int32_t temp81_1 = *(var_11c0 + 0xc)
                        *(var_11c0 + 0xc) -= 1
                        
                        if (temp81_1 == 1)
                            (*(*var_11c0 + 8))(var_11c0, 1)
                
                int64_t* var_11b0
                
                if (var_11b0 != 0)
                    var_11b0[1].d -= 1
                    
                    if (var_11b0[1].d == 1)
                        (**var_11b0)(var_11b0)
                        int32_t temp83_1 = *(var_11b0 + 0xc)
                        *(var_11b0 + 0xc) -= 1
                        
                        if (temp83_1 == 1)
                            (*(*var_11b0 + 8))(var_11b0, 1)
                
                if (rax_106 != 0)
                    rax_106[1].d -= 1
                    
                    if (rax_106[1].d == 1)
                        (**rax_106)(rax_106)
                        int32_t temp85_1 = *(rax_106 + 0xc)
                        *(rax_106 + 0xc) -= 1
                        
                        if (temp85_1 == 1)
                            (*rax_106)[1](rax_106, 1)
                
                if (rbx_28 != 0)
                    rbx_28[1].d -= 1
                    
                    if (rbx_28[1].d == 1)
                        (**rbx_28)(rbx_28)
                        int32_t temp88_1 = *(rbx_28 + 0xc)
                        *(rbx_28 + 0xc) -= 1
                        
                        if (temp88_1 == 1)
                            (*(*rbx_28 + 8))(rbx_28, 1)
                
                int64_t* rbx_34 = var_13e8:8.q
                
                if (rbx_34 != 0)
                    rbx_34[1].d -= 1
                    
                    if (rbx_34[1].d == 1)
                        (**rbx_34)(rbx_34)
                        int32_t temp91_1 = *(rbx_34 + 0xc)
                        *(rbx_34 + 0xc) -= 1
                        
                        if (temp91_1 == 1)
                            (*(*rbx_34 + 8))(rbx_34, 1)
                
                zmm1_9 = sub_140e97ce0(&var_8e8)
                rbx_27 = var_1648:8.q
            else
                int64_t* var_12b8 = r15_3
                int64_t* var_12b0_1 = rdi_10
                
                if (rdi_10 != 0)
                    rdi_10[1].d += 1
                
                zmm0_4 = var_1678.o
                uint128_t var_1438 = zmm0_4
                void* rax_79 = _mm_bsrli_si128(zmm0_4, 8).q
                
                if (rax_79 != 0)
                    *(rax_79 + 8) += 1
                
                r12_3 = var_1660
                int64_t* rbx_25 = r12_3[2]
                
                if (rbx_25 != 0)
                    int32_t rax_80 = rbx_25[1].d
                    
                    if (rax_80 != 0)
                        rbx_25[1].d = rax_80 + 1
                        rax_80.b = 1
                    
                    if (rax_80.b == 0)
                        rbx_25 = nullptr
                    
                    if (rbx_25 != 0)
                        r14 = r12_3[1]
                
                int64_t var_1570 = r14
                
                if (rbx_25 != 0)
                    int32_t rax_81 = rbx_25[1].d
                    rbx_25[1].d = rax_81
                    
                    if (rax_81 == 0)
                        (**rbx_25)(rbx_25)
                        int32_t temp78_1 = *(rbx_25 + 0xc)
                        *(rbx_25 + 0xc) -= 1
                        
                        if (temp78_1 == 1)
                            (*(*rbx_25 + 8))(rbx_25, 1)
                
                int64_t* var_12c8 = &var_1570
                uint128_t* var_12c0_1 = &var_1438
                void*** rax_84 = sub_140e919a0()
                void* var_1468 = &rax_84[2]
                sub_140918950(&var_1468, &rax_84[2])
                char var_16a8_2 = 0
                int64_t** var_1458_1 = &var_12c8
                sub_140e23ed0(&rax_84[2], "SDockingArea")
                
                if (rax_84 != 0)
                    rax_84[1].d += 1
                
                var_1648.q = &rax_84[2]
                rbx_27 = var_1648:8.q
                
                if (rax_84 != 0)
                    rbx_27 = rax_84
                
                var_1648:8.q = rbx_27
                void var_ab0
                int64_t* rax_85
                int128_t zmm1_7
                rax_85, zmm1_7 = sub_140e93de0(&var_ab0)
                void* rax_86
                int128_t zmm1_8
                rax_86, zmm1_8 = sub_140e99c30(rax_85, &var_12b8, zmm1_7)
                void var_11d8
                int64_t* rax_87 = sub_140e9bd90(&var_1468, &var_11d8, rax_86, zmm1_8)
                int64_t var_1288 = *rax_87
                void* rcx_92 = rax_87[1]
                void* var_1280_1 = rcx_92
                
                if (rcx_92 != 0)
                    *(rcx_92 + 8) += 1
                
                int64_t* rcx_93 = var_1658
                int64_t var_12a8 = *rcx_93
                void* rax_89 = rcx_93[1]
                void* var_12a0_1 = rax_89
                
                if (rax_89 != 0)
                    *(rax_89 + 8) += 1
                
                int64_t* var_1298 = r15_3
                int64_t* var_1290_1 = rdi_10
                
                if (rdi_10 != 0)
                    rdi_10[1].d += 1
                
                void var_11e8
                sub_140e23de0(*sub_140e595a0(data_143e29f28, &var_11e8, &var_1298, &var_12a8, 1), 
                    &var_1288)
                int64_t* var_11e0
                
                if (var_11e0 != 0)
                    var_11e0[1].d -= 1
                    
                    if (var_11e0[1].d == 1)
                        (**var_11e0)(var_11e0)
                        int32_t temp90_1 = *(var_11e0 + 0xc)
                        *(var_11e0 + 0xc) -= 1
                        
                        if (temp90_1 == 1)
                            (*(*var_11e0 + 8))(var_11e0, 1)
                
                int64_t* var_11d0
                
                if (var_11d0 != 0)
                    var_11d0[1].d -= 1
                    
                    if (var_11d0[1].d == 1)
                        (**var_11d0)(var_11d0)
                        int32_t temp93_1 = *(var_11d0 + 0xc)
                        *(var_11d0 + 0xc) -= 1
                        
                        if (temp93_1 == 1)
                            (*(*var_11d0 + 8))(var_11d0, 1)
                
                if (rax_84 != 0)
                    rax_84[1].d -= 1
                    
                    if (rax_84[1].d == 1)
                        (**rax_84)(rax_84)
                        int32_t temp95_1 = *(rax_84 + 0xc)
                        *(rax_84 + 0xc) -= 1
                        
                        if (temp95_1 == 1)
                            (*rax_84)[1](rax_84, 1)
                
                if (rbx_25 != 0)
                    rbx_25[1].d -= 1
                    
                    if (rbx_25[1].d == 1)
                        (**rbx_25)(rbx_25)
                        int32_t temp97_1 = *(rbx_25 + 0xc)
                        *(rbx_25 + 0xc) -= 1
                        
                        if (temp97_1 == 1)
                            (*(*rbx_25 + 8))(rbx_25, 1)
                
                int64_t* rsi_14 = var_1438:8.q
                
                if (rsi_14 != 0)
                    rsi_14[1].d -= 1
                    
                    if (rsi_14[1].d == 1)
                        (**rsi_14)(rsi_14)
                        int32_t temp98_1 = *(rsi_14 + 0xc)
                        *(rsi_14 + 0xc) -= 1
                        
                        if (temp98_1 == 1)
                            (*(*rsi_14 + 8))(rsi_14, 1)
                
                zmm1_9 = sub_140e97ce0(&var_ab0)
            
            if (arg7 != 0)
                if (rbx_27 != 0)
                    rbx_27[1].d += 1
                
                uint128_t var_1278 = var_1648
                
                if (rbx_27 != 0)
                    rbx_27[1].d += 1
                
                sub_140ed8090(r12_3, &var_15e0, &var_1278)
                
                if (rbx_27 != 0)
                    rbx_27[1].d -= 1
                    
                    if (rbx_27[1].d == 1)
                        (**rbx_27)(rbx_27)
                        int32_t temp101_1 = *(rbx_27 + 0xc)
                        *(rbx_27 + 0xc) -= 1
                        
                        if (temp101_1 == 1)
                            (*rbx_27)[1](rbx_27, 1)
                    
                    rbx_27[1].d -= 1
                    
                    if (rbx_27[1].d == 1)
                        (**rbx_27)(rbx_27)
                        int32_t temp102_1 = *(rbx_27 + 0xc)
                        *(rbx_27 + 0xc) -= 1
                        
                        if (temp102_1 == 1)
                            (*rbx_27)[1](rbx_27, 1)
            else
                int64_t* var_1550 = r15_3
                
                if (rdi_10 != 0)
                    rdi_10[1].d += 1
                
                if (rbx_27 != 0)
                    rbx_27[1].d += 1
                
                uint128_t var_1198 = var_1648
                
                if (rbx_27 != 0)
                    rbx_27[1].d += 1
                
                if (var_1670 != 0)
                    var_1670[1].d += 1
                
                void* var_13d8 = var_1678
                int64_t* var_13d0_1 = var_1670
                
                if (var_1670 != 0)
                    var_1670[1].d += 1
                
                sub_140ed8460(r12_3, &var_13d8, &var_1198, &var_1550, zmm1_9)
                
                if (var_1670 != 0)
                    var_1670[1].d -= 1
                    
                    if (var_1670[1].d == 1)
                        (**var_1670)(var_1670)
                        int32_t temp106_1 = *(var_1670 + 0xc)
                        *(var_1670 + 0xc) -= 1
                        
                        if (temp106_1 == 1)
                            (*(*var_1670 + 8))(var_1670, 1)
                    
                    var_1670[1].d -= 1
                    
                    if (var_1670[1].d == 1)
                        (**var_1670)(var_1670)
                        int32_t temp110_1 = *(var_1670 + 0xc)
                        *(var_1670 + 0xc) -= 1
                        
                        if (temp110_1 == 1)
                            (*(*var_1670 + 8))(var_1670, 1)
                
                if (rbx_27 != 0)
                    rbx_27[1].d -= 1
                    
                    if (rbx_27[1].d == 1)
                        (**rbx_27)(rbx_27)
                        int32_t temp109_1 = *(rbx_27 + 0xc)
                        *(rbx_27 + 0xc) -= 1
                        
                        if (temp109_1 == 1)
                            (*rbx_27)[1](rbx_27, 1)
                    
                    rbx_27[1].d -= 1
                    
                    if (rbx_27[1].d == 1)
                        (**rbx_27)(rbx_27)
                        int32_t temp112_1 = *(rbx_27 + 0xc)
                        *(rbx_27 + 0xc) -= 1
                        
                        if (temp112_1 == 1)
                            (*rbx_27)[1](rbx_27, 1)
                
                if (rdi_10 != 0)
                    rdi_10[1].d -= 1
                    
                    if (rdi_10[1].d == 1)
                        (**rdi_10)(rdi_10)
                        int32_t temp111_1 = *(rdi_10 + 0xc)
                        *(rdi_10 + 0xc) -= 1
                        
                        if (temp111_1 == 1)
                            (*(*rdi_10 + 8))(rdi_10, 1)
        
        sub_140596d80(&var_15e0)
        
        if (rdi_10 != 0)
            rdi_10[1].d -= 1
            
            if (rdi_10[1].d == 1)
                (**rdi_10)(rdi_10)
                int32_t temp76_1 = *(rdi_10 + 0xc)
                *(rdi_10 + 0xc) -= 1
                
                if (temp76_1 == 1)
                    (*(*rdi_10 + 8))(rdi_10, 1)
    
    *arg2 = var_1648.q
    arg2[1] = rbx_27
    
    if (rbx_27 != 0)
        int32_t rax_162 = rbx_27[1].d
        rbx_27[1].d = rax_162
        
        if (rax_162 == 0)
            (**rbx_27)(rbx_27)
            int32_t temp32_1 = *(rbx_27 + 0xc)
            *(rbx_27 + 0xc) -= 1
            
            if (temp32_1 == 1)
                (*rbx_27)[1](rbx_27, 1)
    
    if (var_1670 != 0)
        var_1670[1].d -= 1
        
        if (var_1670[1].d == 1)
            (**var_1670)(var_1670)
            int32_t temp37_1 = *(var_1670 + 0xc)
            *(var_1670 + 0xc) -= 1
            
            if (temp37_1 == 1)
                (*(*var_1670 + 8))(var_1670, 1)
    
    if (var_1610 != 0)
        var_1610[1].d -= 1
        
        if (var_1610[1].d == 1)
            (**var_1610)(var_1610)
            int32_t temp40_1 = *(var_1610 + 0xc)
            *(var_1610 + 0xc) -= 1
            
            if (temp40_1 == 1)
                (*(*var_1610 + 8))(var_1610, 1)
    
    if (var_1620 != 0)
        var_1620[1].d -= 1
        
        if (var_1620[1].d == 1)
            (**var_1620)(var_1620)
            int32_t temp46_1 = *(var_1620 + 0xc)
            *(var_1620 + 0xc) -= 1
            
            if (temp46_1 == 1)
                (*(*var_1620 + 8))(var_1620, 1)
    
    result = arg2
__security_check_cookie(rax_1 ^ &var_16c8)
return result
