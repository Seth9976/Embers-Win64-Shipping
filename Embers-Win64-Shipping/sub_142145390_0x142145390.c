// 函数: sub_142145390
// 地址: 0x142145390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_708
void* result = __security_cookie ^ &var_708
void* result_1 = result
int128_t* rsi = arg4
void* var_650 = arg3
int64_t* r12 = arg2
int64_t* r13 = arg1

if (arg1[0x1a].d u> 0)
    int32_t i = 0
    int64_t var_6b0
    void* const var_668
    int64_t var_660
    
    if (arg1[0x17].d s> 0)
        int64_t* rbx_1 = nullptr
        void* r12_1 = arg3
        
        do
            int64_t* rcx = *(rbx_1 + *(r12_1 + 0x18))
            
            if (rcx == 0)
                var_668 = nullptr
                var_660 = 0
                int128_t zmm0 = var_668.o
                var_6b0 = 0
                int64_t var_6a8_1 = 0
                *rsi = zmm0
                rsi[1] = var_6b0.o
            else
                arg3.b = 1
                (*(*rcx + 0x28))(rcx, rsi, arg3)
            
            rsi = &rsi[2]
            i += 1
            rbx_1 = &rbx_1[1]
        while (i s< r13[0x17].d)
        
        r12 = arg2
    
    int32_t i_1 = 0
    void* var_6b8
    
    if (r13[0x11].d s> 0)
        int64_t r12_2 = 0
        
        do
            void* rax_3 = r13[0x10]
            void* rbx_2 = rax_3
            char rcx_1 = r13[0x10].b & 1
            
            if (rcx_1 != 0)
                rbx_2 = (rbx_2 s>> 1) + &r13[0x10]
            
            var_6b8 = rsi
            rsi = &rsi[1]
            void* var_630 = nullptr
            
            if (rcx_1 != 0)
                rax_3 = (rax_3 s>> 1) + &r13[0x10]
            
            void* rcx_2 = rax_3 + r12_2
            sub_14214a9c0(rcx_2, *(rcx_2 + 0x20), arg2, &var_630)
            
            if (var_630 == 0)
                void* rax_10 = r13[0x10]
                int64_t* rcx_7 = arg2[1]
                
                if ((rax_10.b & 1) != 0)
                    rax_10 = (rax_10 s>> 1) + &r13[0x10]
                
                int64_t rdi_3 = sx.q(*(rax_10 + r12_2 + 0x20))
                int64_t var_5f0
                (*(*rcx_7 + 0x358))(rcx_7, &var_5f0)
                int32_t var_5e8
                char rax_13
                
                if (rdi_3.d s< 0 || rdi_3.d s>= var_5e8)
                    rax_13 = 0
                else
                    rax_13 = 1
                
                void* rdi_4
                
                if (rax_13 != 0)
                    rdi_4 = *(var_5f0 + (rdi_3 << 3))
                
                if (rax_13 != 0 && rdi_4 != 0)
                    void* rax_15 = sub_142582280()
                    void* rcx_9 = *(rdi_4 + 0x10)
                    int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                    
                    if (rax_16.d s<= *(rcx_9 + 0x38)
                            && *(*(rcx_9 + 0x30) + (rax_16 << 3)) == rax_15 + 0x30)
                        int64_t* rax_18 = sub_1418e8df0(rdi_4)
                        
                        if (rax_18 != 0)
                            int64_t r9_1 = *rax_18
                            (*(r9_1 + 0x30))(rax_18, var_6b8, zx.q(*(rbx_2 + r12_2 + 0x25)), r9_1)
                else if (data_143f4ce49 == 0)
                    data_143f4ce49 = 1
            else
                int32_t rbx_4 = 0
                int16_t rdx_5
                
                if (r13[0x17].d s<= 0)
                label_142145527:
                    rbx_4 = 0xffff
                    rdx_5 = -1
                else
                    while (true)
                        void* rdx_3 = r13[0x16]
                        
                        if ((rdx_3.b & 1) != 0)
                            rdx_3 = (rdx_3 s>> 1) + &r13[0x16]
                        
                        int32_t rax_6 = sub_142124580(rdx_3 + sx.q(rbx_4) * 0x28, i_1)
                        rdx_5 = rax_6.w
                        
                        if (rax_6 s>= 0)
                            break
                        
                        rbx_4 += 1
                        
                        if (rbx_4 s>= r13[0x17].d)
                            goto label_142145527
                
                int64_t* rcx_6 = *(*(var_650 + 0x18) + (zx.q(rbx_4.w) << 3))
                
                if (rcx_6 != 0)
                    (*(*rcx_6 + 0x30))(rcx_6, var_6b8, zx.q(rdx_5))
            
            i_1 += 1
            r12_2 += 0x28
        while (i_1 s< r13[0x11].d)
        
        r12 = arg2
    
    int64_t var_68_1 = 0
    void* rdi_5 = r13[0x14]
    int32_t var_60_1 = 0
    int32_t var_5c_1 = 0x40
    
    if ((rdi_5.b & 1) != 0)
        rdi_5 = (rdi_5 s>> 1) + &r13[0x14]
    
    int32_t i_2 = 0
    int32_t var_6e8
    uint64_t var_6e0
    void var_468
    
    if (r13[1].d s> 0)
        void* rbx_5 = nullptr
        
        do
            void* rax_21 = *r13
            int128_t var_5e0 = zx.o(0)
            
            if ((rax_21.b & 1) != 0)
                rax_21 = (rax_21 s>> 1) + r13
            
            var_6e0 = &var_5e0
            var_6e8 = *(rbx_5 + rax_21 + 4)
            sub_142142120(r13, r12, &var_468, zx.q(*(rbx_5 + rax_21)) + rdi_5, var_6e8, var_6e0)
            i_2 += 1
            rbx_5 += 8
            *rsi = var_5e0
            rsi = &rsi[1]
        while (i_2 s< r13[1].d)
    
    int32_t rax_26 = r13[3].d
    int32_t r15_1 = 0
    
    if (rax_26 s> 0)
        void* r14_2 = nullptr
        
        do
            void* rax_24 = r13[2]
            int32_t var_5d0 = 0
            
            if ((rax_24.b & 1) != 0)
                rax_24 = (rax_24 s>> 1) + &r13[2]
            
            var_6e0 = &var_5d0
            var_6e8 = *(r14_2 + rax_24 + 4)
            sub_142142120(r13, r12, &var_468, zx.q(*(r14_2 + rax_24)) + rdi_5, var_6e8, var_6e0)
            r15_1 += 1
            *rsi = var_5d0.d
            r14_2 += 8
            rax_26 = r13[3].d
            rsi += 4
        while (r15_1 s< rax_26)
    
    int32_t rax_29 = rax_26 & 0x80000003
    
    if (rax_29 s< 0)
        rax_29 = ((rax_29 - 1) | 0xfffffffc) + 1
    
    int32_t rcx_15 = (4 - rax_29) & 0x80000003
    
    if (rcx_15 s< 0)
        rcx_15 = ((rcx_15 - 1) | 0xfffffffc) + 1
    
    int32_t var_6c0_1 = 0
    void* r12_3 = rsi + (sx.q(rcx_15) << 2)
    void* var_6d8_1 = r12_3
    void* var_6c8
    
    if (r13[9].d s> 0)
        int64_t r9_6 = 0
        int64_t var_6d8_2 = 0
        void* rdx_12 = &r13[8]
        bool cond:12_1
        
        do
            void* rax_31 = *rdx_12
            void* rsi_1 = rax_31
            char rcx_18 = *rdx_12 & 1
            
            if (rcx_18 != 0)
                rsi_1 = (rsi_1 s>> 1) + rdx_12
            
            int64_t r14_3 = r9_6 * 5
            var_6c8 = nullptr
            
            if (rcx_18 != 0)
                rax_31 = (rax_31 s>> 1) + rdx_12
            
            void* rcx_19 = rax_31 + (r14_3 << 3)
            sub_14214a9c0(rcx_19, *(rcx_19 + 0x20), arg2, &var_6c8)
            void* rcx_20 = var_6c8
            
            if (rcx_20 != 0)
                sub_140d23de0(rcx_20)
                void* rcx_21 = var_6c8
                
                if ((*(*rcx_21 + 0x308))(rcx_21) == 0x800)
                    int64_t* rcx_22 = arg2[1]
                    int64_t var_5a0
                    int64_t* rax_36 = (*(*rcx_22 + 0x298))(rcx_22, &var_5a0)
                    int16_t* rdi_7
                    
                    if (rax_36[1].d == 0)
                        rdi_7 = &data_142d40450
                    else
                        rdi_7 = *rax_36
                    
                    int64_t var_678 = 0
                    int32_t rdx_15 = 0
                    int32_t var_670_1 = 0
                    int32_t rcx_23 = 0
                    int32_t var_66c_1 = 0
                    
                    if (rdi_7 != 0 && *rdi_7 != 0)
                        int64_t rbx_8 = -1
                        
                        do
                            rbx_8 += 1
                        while (rdi_7[rbx_8] != 0)
                        
                        if (rbx_8.d + 1 s> 0)
                            sub_1405947f0(&var_678, rbx_8.d + 1)
                            rcx_23 = var_66c_1
                            rdx_15 = var_670_1
                        
                        int32_t rax_37 = rdx_15 + rbx_8.d + 1
                        int32_t var_670_2 = rax_37
                        
                        if (rax_37 s> rcx_23)
                            sub_140594770(&var_678)
                        
                        UnDecorator::getReferenceType(var_678, rdi_7, (rbx_8.d + 1) * 2)
                    
                    void* rax_39 = rsi_1 + ((r14_3 + 2) << 3)
                    void* rdi_8
                    
                    if (*(rsi_1 + ((r14_3 + 2) << 3) + 8) == 0)
                        rdi_8 = &data_142d40450
                    else
                        rdi_8 = *rax_39
                        
                        if ((rdi_8.b & 1) != 0)
                            rdi_8 = (rdi_8 s>> 1) + rax_39
                    
                    int64_t var_688 = 0
                    int32_t rdx_18 = 0
                    int32_t var_680_1 = 0
                    int32_t rcx_27 = 0
                    int32_t var_67c_1 = 0
                    
                    if (rdi_8 != 0 && *rdi_8 != 0)
                        int64_t rbx_10 = -1
                        
                        do
                            rbx_10 += 1
                        while (*(rdi_8 + (rbx_10 << 1)) != 0)
                        
                        if (rbx_10.d + 1 s> 0)
                            sub_1405947f0(&var_688, rbx_10.d + 1)
                            rcx_27 = var_67c_1
                            rdx_18 = var_680_1
                        
                        int32_t rax_40 = rdx_18 + rbx_10.d + 1
                        int32_t var_680_2 = rax_40
                        
                        if (rax_40 s> rcx_27)
                            sub_140594770(&var_688)
                        
                        UnDecorator::getReferenceType(var_688, rdi_8, (rbx_10.d + 1) * 2)
                    
                    void var_530
                    int64_t* rax_41 = sub_140aae2f0(&var_530, &var_678)
                    void var_518
                    int64_t* rax_42 = sub_140aae2f0(&var_518, &var_688)
                    void var_578
                    char* var_560
                    char** rax_44 = sub_140a96390(&var_560, 
                        _vfprintf_p_l(&var_578, 
                             applied to a non-external Texture2D sampler. This may work by chance on some "
                    "platforms but is not portable. Please change sampler type", 
                        MaterialExpressions"))
                    int64_t var_4e8_1 = *rax_42
                    void* rcx_36 = rax_42[1]
                    int32_t var_4f8_1 = 4
                    void* var_4e0_1 = rcx_36
                    
                    if (rcx_36 != 0)
                        *(rcx_36 + 8) += 1
                    
                    int32_t var_4d8_1 = rax_42[2].d
                    int64_t var_4c0_1 = sx.q(var_6c0_1)
                    int64_t var_488_1 = *rax_41
                    void* rax_48 = rax_41[1]
                    char var_4d0_1 = 1
                    int32_t var_4c8_1 = 0
                    char var_4a0_1 = 0
                    int32_t var_498_1 = 4
                    void* var_480_1 = rax_48
                    
                    if (rax_48 != 0)
                        *(rax_48 + 8) += 1
                    
                    int32_t rax_49 = rax_41[2].d
                    var_668 = nullptr
                    int32_t var_478_1 = rax_49
                    char var_470_1 = 1
                    var_660.d = 3
                    sub_1405a4b40(&var_668, 3, 0)
                    void var_4f0
                    void* rdx_24 = &var_4f0
                    int64_t* rcx_39 = var_668 + 8
                    int32_t i_9 = 3
                    int32_t i_3
                    
                    do
                        rcx_39[-1].d = *(rdx_24 - 8)
                        *rcx_39 = *rdx_24
                        *rcx_39 = *rdx_24
                        *rcx_39 = *rdx_24
                        *rcx_39 = *rdx_24
                        rcx_39[4].b = 0
                        
                        if (*(rdx_24 + 0x20) != 0)
                            rcx_39[1] = *(rdx_24 + 8)
                            void* rax_56 = *(rdx_24 + 0x10)
                            rcx_39[2] = rax_56
                            
                            if (rax_56 != 0)
                                *(rax_56 + 8) += 1
                            
                            rcx_39[3].d = *(rdx_24 + 0x18)
                            rcx_39[4].b = 1
                        
                        rcx_39 = &rcx_39[6]
                        rdx_24 += 0x30
                        i_3 = i_9
                        i_9 -= 1
                    while (i_3 != 1)
                    char* var_5c0 = *rax_44
                    void* rax_59 = rax_44[1]
                    void* var_5b8_1 = rax_59
                    
                    if (rax_59 != 0)
                        *(rax_59 + 8) += 1
                    
                    void var_590
                    int64_t* rax_60 = sub_140aac870(&var_590, &var_5c0, &var_668)
                    int64_t var_608 = *rax_60
                    int64_t* rcx_42 = rax_60[1]
                    
                    if (rcx_42 != 0)
                        rcx_42[1].d += 1
                    
                    int32_t var_5f8_1 = rax_60[2].d
                    int64_t* var_588
                    
                    if (var_588 != 0)
                        var_588[1].d -= 1
                        
                        if (var_588[1].d == 1)
                            (**var_588)(var_588)
                            int32_t rax_64 = *(var_588 + 0xc)
                            *(var_588 + 0xc) -= 1
                            
                            if (rax_64 == 1)
                                (*(*var_588 + 8))(var_588, 1)
                    
                    sub_140596f50(&var_668)
                    int64_t i_4 = 3
                    void var_450
                    void* rdi_10 = &var_450
                    
                    do
                        i_4 -= 1
                        rdi_10 -= 0x30
                        
                        if (*(rdi_10 + 0x10) != 0)
                            *(rdi_10 + 0x10) = 0
                            int64_t* rbx_14 = *rdi_10
                            
                            if (rbx_14 != 0)
                                rbx_14[1].d -= 1
                                
                                if (rbx_14[1].d == 1)
                                    (**rbx_14)(rbx_14)
                                    int32_t rax_68 = *(rbx_14 + 0xc)
                                    *(rbx_14 + 0xc) -= 1
                                    
                                    if (rax_68 == 1)
                                        (*(*rbx_14 + 8))(rbx_14, 1)
                    while (i_4 != 0)
                    
                    int64_t* rbx_15 = rax_44[1]
                    int32_t rax_70
                    
                    if (rbx_15 != 0)
                        rax_70 = rbx_15[1].d
                        rbx_15[1].d -= 1
                    
                    int32_t rdi_11
                    
                    if (rbx_15 == 0 || rax_70 != 1)
                        rdi_11 = 1
                    else
                        (**rbx_15)(rbx_15)
                        int32_t rax_72 = *(rbx_15 + 0xc)
                        *(rbx_15 + 0xc) -= 1
                        rdi_11 = (i_4 + 1).d
                        
                        if (rax_72 == rdi_11)
                            (*(*rbx_15 + 8))(rbx_15, zx.q(rdi_11))
                    
                    int64_t* rbx_17 = rax_42[1]
                    
                    if (rbx_17 != 0)
                        rbx_17[1].d -= 1
                        
                        if (rbx_17[1].d == 1)
                            (**rbx_17)(rbx_17)
                            int32_t rax_76 = *(rbx_17 + 0xc)
                            *(rbx_17 + 0xc) -= 1
                            
                            if (rax_76 == 1)
                                (*(*rbx_17 + 8))(rbx_17, zx.q(rdi_11))
                    
                    int64_t* rbx_18 = rax_41[1]
                    
                    if (rbx_18 != 0)
                        rbx_18[1].d -= 1
                        
                        if (rbx_18[1].d == 1)
                            (**rbx_18)(rbx_18)
                            int32_t rax_80 = *(rbx_18 + 0xc)
                            *(rbx_18 + 0xc) -= 1
                            
                            if (rax_80 == 1)
                                (*(*rbx_18 + 8))(rbx_18, zx.q(rdi_11))
                    
                    int64_t* var_570
                    
                    if (var_570 != 0)
                        var_570[1].d -= 1
                        
                        if (var_570[1].d == 1)
                            (**var_570)(var_570)
                            int32_t rax_84 = *(var_570 + 0xc)
                            *(var_570 + 0xc) -= 1
                            
                            if (rax_84 == 1)
                                (*(*var_570 + 8))(var_570, zx.q(rdi_11))
                    
                    int64_t rcx_56 = var_688
                    
                    if (rcx_56 != 0)
                        sub_140a74f90(rcx_56)
                    
                    int64_t rcx_57 = var_678
                    
                    if (rcx_57 != 0)
                        sub_140a74f90(rcx_57)
                    
                    int64_t rcx_58 = var_5a0
                    
                    if (rcx_58 != 0)
                        sub_140a74f90(rcx_58)
                    
                    int64_t* rax_86 = sub_140ac6680(&var_608)
                    int16_t* const rbx_20
                    
                    if (rax_86[1].d == 0)
                        rbx_20 = &data_142d40450
                    else
                        rbx_20 = *rax_86
                    
                    sub_140b19e60()
                    sub_140b1f850(&data_1439a8bd0, 3, u"%s", rbx_20)
                    
                    if (rcx_42 != 0)
                        rcx_42[1].d -= 1
                        
                        if (rcx_42[1].d == 1)
                            (**rcx_42)(rcx_42)
                            int32_t rax_89 = *(rcx_42 + 0xc)
                            *(rcx_42 + 0xc) -= 1
                            
                            if (rax_89 == 1)
                                (*(*rcx_42 + 8))(rcx_42, zx.q(rdi_11))
                
                rcx_20 = var_6c8
            
            void* rbx_22 = r12_3
            void* rdi_12 = r12_3 + 8
            r12_3 += 0x10
            int64_t rax_96
            int64_t r9_10
            
            if (rcx_20 == 0 || *(rcx_20 + 0x78) == 0 || *(rcx_20 + 0x90) == 0)
                r9_10 = var_6d8_2
                *rbx_22 = *(data_143f10dc8 + 0x10)
                rax_96 = *(data_143f10dc8 + 0x18)
            else
                r9_10 = var_6d8_2
                
                if (((*(*rcx_20 + 0x308))() & 0x1810) == 0)
                    *rbx_22 = *(data_143f10dc8 + 0x10)
                    rax_96 = *(data_143f10dc8 + 0x18)
                else
                    void* rdx_31 = var_6c8
                    char rax_94 = *(rsi_1 + r9_10 * 0x28 + 0x24)
                    int64_t* rcx_63 = *(rdx_31 + 0x78) + 0x18
                    
                    if (rax_94 == 1)
                        rcx_63 = data_143f56328 + 0x10
                    else if (rax_94 == 2)
                        rcx_63 = data_143f56330 + 0x10
                    
                    if (*rcx_63 == 0)
                        *rbx_22 = *(data_143f10dc8 + 0x10)
                        rax_96 = *(data_143f10dc8 + 0x18)
                    else
                        *rbx_22 = *(rdx_31 + 0x90)
                        rax_96 = *rcx_63
            
            r9_6 = r9_10 + 1
            *rdi_12 = rax_96
            cond:12_1 = var_6c0_1 + 1 s< r13[9].d
            var_6c0_1 += 1
            rdx_12 = &r13[8]
            var_6d8_2 = r9_6
        while (cond:12_1)
        var_6d8_1 = r12_3
    
    int32_t i_5 = 0
    
    if (r13[0xb].d s> 0)
        void* rsi_3 = nullptr
        
        do
            void* rax_99 = r13[0xa]
            void* rbx_23 = rax_99
            char rcx_66 = r13[0xa].b & 1
            
            if (rcx_66 != 0)
                rbx_23 = (rbx_23 s>> 1) + &r13[0xa]
            
            int64_t* var_648 = nullptr
            
            if (rcx_66 != 0)
                rax_99 = (rax_99 s>> 1) + &r13[0xa]
            
            sub_14214a9c0(rsi_3 + rax_99, *(rsi_3 + rax_99 + 0x20), arg2, &var_648)
            int64_t* rcx_68 = var_648
            var_6d8_1 += 0x10
            char rax_102
            
            if (rcx_68 != 0 && rcx_68[0xf] != 0)
                rax_102 = (*(*rcx_68 + 0x308))(rcx_68)
            
            int64_t rcx_71
            
            if (rcx_68 == 0 || rcx_68[0xf] == 0 || (rax_102 & 0x20) == 0)
                *r12_3 = *(data_143f115e8 + 0x10)
                rcx_71 = *(data_143f115e8 + 0x18)
            else
                int64_t* rcx_69 = var_648
                *r12_3 = rcx_69[0x12]
                char rcx_70 = *(rbx_23 + rsi_3 + 0x24)
                int64_t* rax_105 = rcx_69[0xf] + 0x18
                
                if (rcx_70 != 1)
                    if (rcx_70 == 2)
                        rax_105 = data_143f56330 + 0x10
                    
                    rcx_71 = *rax_105
                else
                    rcx_71 = *(data_143f56328 + 0x10)
            
            *(r12_3 + 8) = rcx_71
            i_5 += 1
            r12_3 = var_6d8_1
            rsi_3 += 0x28
        while (i_5 s< r13[0xb].d)
    
    int32_t r15_3 = 0
    
    if (r13[0xd].d s> 0)
        void* rsi_4 = nullptr
        
        while (true)
            void* rax_111 = r13[0xc]
            void* rbx_25 = rax_111
            char rcx_73 = r13[0xc].b & 1
            
            if (rcx_73 != 0)
                rbx_25 = (rbx_25 s>> 1) + &r13[0xc]
            
            if (rcx_73 != 0)
                rax_111 = (rax_111 s>> 1) + &r13[0xc]
            
            int64_t* var_620
            sub_14214a9c0(rsi_4 + rax_111, *(rsi_4 + rax_111 + 0x20), arg2, &var_620)
            int64_t* rcx_75 = var_620
            var_6d8_1 += 0x10
            char rax_114
            
            if (rcx_75 != 0 && rcx_75[0xf] != 0)
                rax_114 = (*(*rcx_75 + 0x308))(rcx_75)
            
            if (rcx_75 == 0 || rcx_75[0xf] == 0 || (rax_114 & 0x40) == 0)
                *r12_3 = *(data_143f11448 + 0x10)
                *r12_3 = *(data_143f11448 + 0x18)
            else
                int64_t* rcx_76 = var_620
                *r12_3 = rcx_76[0x12]
                char rcx_77 = *(rsi_4 + rbx_25 + 0x24)
                int64_t* rax_117 = rcx_76[0xf] + 0x18
                
                if (rcx_77 != 1)
                    if (rcx_77 == 2)
                        rax_117 = data_143f56330 + 0x10
                    
                    *(r12_3 + 8) = *rax_117
                else
                    *(r12_3 + 8) = *(data_143f56328 + 0x10)
            
            r15_3 += 1
            rsi_4 += 0x28
            
            if (r15_3 s>= r13[0xd].d)
                break
            
            r12_3 = var_6d8_1
    
    int32_t i_6 = 0
    
    if (r13[0xf].d s> 0)
        void* rsi_5 = nullptr
        
        do
            void* rax_125 = r13[0xe]
            void* rbx_27 = rax_125
            char rcx_80 = r13[0xe].b & 1
            
            if (rcx_80 != 0)
                rbx_27 = (rbx_27 s>> 1) + &r13[0xe]
            
            int64_t* var_640 = nullptr
            
            if (rcx_80 != 0)
                rax_125 = (rax_125 s>> 1) + &r13[0xe]
            
            sub_14214a9c0(rsi_5 + rax_125, *(rsi_5 + rax_125 + 0x20), arg2, &var_640)
            int64_t* rcx_82 = var_640
            void* r14_6 = var_6d8_1
            void* r12_4 = var_6d8_1 + 8
            var_6d8_1 += 0x10
            char rax_130
            
            if (rcx_82 != 0 && rcx_82[0xf] != 0)
                rax_130 = (*(*rcx_82 + 0x308))(rcx_82)
            
            int64_t rcx_85
            
            if (rcx_82 == 0 || rcx_82[0xf] == 0 || rax_130 s>= 0)
                *r14_6 = *(data_143f111a8 + 0x10)
                rcx_85 = *(data_143f111a8 + 0x18)
            else
                int64_t* rcx_83 = var_640
                *r14_6 = rcx_83[0x12]
                char rcx_84 = *(rsi_5 + rbx_27 + 0x24)
                int64_t* rax_133 = rcx_83[0xf] + 0x18
                
                if (rcx_84 != 1)
                    if (rcx_84 == 2)
                        rax_133 = data_143f56330 + 0x10
                    
                    rcx_85 = *rax_133
                else
                    rcx_85 = *(data_143f56328 + 0x10)
            
            i_6 += 1
            *r12_4 = rcx_85
            rsi_5 += 0x28
        while (i_6 s< r13[0xf].d)
    
    int64_t* rdx_37 = arg2
    int32_t r12_5 = 0
    int32_t r15_4 = 0
    int64_t* rax_140 = *rdx_37 + 0x170
    *rax_140 = 0
    rax_140[1] = 0
    void* var_690
    
    if (r13[0x13].d s> 0)
        void* rax_141 = &r13[0x12]
        int64_t* rdi_15 = nullptr
        
        while (true)
            void** rcx_87 = var_6d8_1
            var_6b8 = nullptr
            int64_t* var_6a0 = nullptr
            var_6d8_1 = &rcx_87[2]
            void* rcx_89 = *rax_141
            
            if ((rcx_89.b & 1) != 0)
                rcx_89 = (rcx_89 s>> 1) + rax_141
            
            bool cond:9_1 = (*(rdi_15 + rcx_89 + 0x14) | *(rdi_15 + rcx_89 + 0x10)
                | *(rdi_15 + rcx_89 + 0xc) | *(rdi_15 + rcx_89 + 8)) == 0
            int64_t rbx_29 = sx.q(*(rdi_15 + rcx_89 + 0x18))
            var_6b0 = 0
            int64_t var_6a8_2 = 0
            
            if (cond:9_1)
                int64_t rax_146 = *(rdi_15 + rcx_89)
                var_690 = nullptr
                
                if (rax_146 == 0)
                    goto label_1421461d1
                
                int64_t* rcx_91 = *rdx_37
                
                if (rcx_91 == 0)
                    goto label_1421461d1
                
                int64_t var_618 = rax_146
                int32_t var_610_1 = 0xffffffff
                char var_60c_1 = 2
                char rax_148 = (*(*rcx_91 + 0x70))(rcx_91, &var_618, &var_690, rdx_37, var_6e8, 
                    var_6e0, var_6d8_1, arg2)
                void* rcx_92
                
                if (rax_148 != 0)
                    rcx_92 = var_690
                
                void var_550
                
                if (rax_148 == 0 || rcx_92 == 0)
                    rdx_37 = arg2
                label_1421461d1:
                    
                    if (rbx_29.d != 0xffffffff)
                        int64_t* rcx_93 = rdx_37[1]
                        int64_t var_5b0
                        (*(*rcx_93 + 0x358))(rcx_93, &var_5b0)
                        int32_t var_5a8
                        char rax_152
                        
                        if (rbx_29.d s< 0 || rbx_29.d s>= var_5a8)
                            rax_152 = 0
                        else
                            rax_152 = 1
                        
                        int64_t* rbx_30
                        
                        if (rax_152 != 0)
                            rbx_30 = *(var_5b0 + (rbx_29 << 3))
                        
                        if (rax_152 != 0 && rbx_30 != 0)
                            void* rax_154 = sub_1425b3bb0()
                            void* rcx_94 = rbx_30[2]
                            int64_t rax_155 = sx.q(*(rax_154 + 0x38))
                            void var_540
                            
                            if (rax_155.d s<= *(rcx_94 + 0x38)
                                    && *(*(rcx_94 + 0x30) + (rax_155 << 3)) == rax_154 + 0x30)
                                var_6b0.o = *(*(*rbx_30 + 0x348))(rbx_30, &var_540)
                        else if (data_143f4ce48 == 0)
                            data_143f4ce48 = 1
                else
                    var_6b0.o = *(*(*rcx_92 + 0x348))(rcx_92, &var_550)
            else
                var_6b0.o = *(rdi_15 + rcx_89 + 8)
            
            var_6e8.q = &var_6a0
            int64_t* rbx_31
            
            if (sub_142004670(sub_142003380(), *arg2, &var_6b0, &var_6b8, var_6e8) == 0)
                rbx_31 = var_6a0
                *rcx_87 = *(data_143f10dc8 + 0x10)
                rcx_87[1] = *(data_143f10dc8 + 0x18)
            else
                int64_t* rcx_97 = var_6a0
                *rcx_87 = var_6b8
                rcx_87[1] = rcx_97
                char rax_164 = (*(*rcx_97 + 8))()
                rbx_31 = var_6a0
                
                if (rax_164 != 0)
                    uint64_t rax_165 = zx.q(r12_5)
                    r12_5 += 1
                    rax_140[rax_165] = rbx_31
            
            if (rbx_31 != 0)
                int32_t rax_168 = rbx_31[1].d
                rbx_31[1].d -= 1
                
                if (rax_168 == 1)
                    char rax_169
                    
                    if (rbx_31[2].b == rax_168.b - 1 && data_143f0f1d0 == rax_168.b - 1)
                        rax_169 = sub_1405949a0()
                    
                    if (rbx_31[2].b != rax_168.b - 1
                            || (data_143f0f1d0 == rax_168.b - 1 && rax_169 != 0))
                        rax_169 = 0
                    else
                        rax_169 = 1
                    
                    if (rax_169 != 0)
                        bool z_1
                        
                        if (0 == *(rbx_31 + 0xc))
                            *(rbx_31 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_31 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_172 = sub_140a20af0()
                            uint64_t rdx_44 = zx.q(rax_172)
                            void* const rax_173
                            
                            if (rax_172 != 0)
                                rax_173 = *((rdx_44 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_44.d) & 0x3fff) * 0x18
                            else
                                rax_173 = nullptr
                            
                            *(rax_173 + 8) = rbx_31
                            sub_1405a42f0(&data_143f02390, rdx_44.d)
                    else
                        (**rbx_31)(rbx_31, 1)
            
            void* rbx_32 = var_6b8
            
            if (rbx_32 != 0)
                int32_t rax_177 = *(rbx_32 + 8)
                *(rbx_32 + 8) -= 1
                
                if (rax_177 == 1)
                    char rax_178
                    
                    if (*(rbx_32 + 0x10) == rax_177.b - 1 && data_143f0f1d0 == rax_177.b - 1)
                        rax_178 = sub_1405949a0()
                    
                    if (*(rbx_32 + 0x10) != rax_177.b - 1
                            || (data_143f0f1d0 == rax_177.b - 1 && rax_178 != 0))
                        rax_178 = 0
                    else
                        rax_178 = 1
                    
                    if (rax_178 != 0)
                        bool z_2
                        
                        if (0 == *(rbx_32 + 0xc))
                            *(rbx_32 + 0xc) = 1
                            z_2 = true
                        else
                            *(rbx_32 + 0xc)
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_181 = sub_140a20af0()
                            uint64_t rdx_45 = zx.q(rax_181)
                            void* const rax_182
                            
                            if (rax_181 != 0)
                                rax_182 = *((rdx_45 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_45.d) & 0x3fff) * 0x18
                            else
                                rax_182 = nullptr
                            
                            *(rax_182 + 8) = rbx_32
                            sub_1405a42f0(&data_143f02390, rdx_45.d)
                    else
                        (**rbx_32)(rbx_32, 1)
            
            r15_4 += 1
            rax_141 = &r13[0x12]
            rdi_15 = &rdi_15[4]
            
            if (r15_4 s>= r13[0x13].d)
                break
            
            rdx_37 = arg2
    
    int32_t i_7 = 0
    
    if (r13[0x17].d s> 0)
        int64_t* r15_5 = nullptr
        int32_t* r14_8 = nullptr
        
        do
            void* rax_186 = r13[0x16]
            void* rdx_46 = var_6d8_1
            void* r12_6 = var_6d8_1
            void* r8_20 = var_6d8_1 + 8
            var_6d8_1 = r8_20
            void* rbx_33 = r8_20
            
            if ((rax_186.b & 1) != 0)
                rax_186 = (rax_186 s>> 1) + &r13[0x16]
            
            int32_t temp1_1 = *(r14_8 + rax_186)
            
            if (temp1_1 u> 4)
                var_6d8_1 = rdx_46 + 0x10
            
            if (temp1_1 u<= 4)
                rbx_33 = nullptr
            
            int64_t* rdi_16 = *(r15_5 + *(var_650 + 0x18))
            
            if (rdi_16 == 0)
                *r12_6 = *(data_143f11928 + 0x10)
                
                if (rbx_33 != 0)
                    *rbx_33 = *(data_143f11928 + 0x10)
            else
                *r12_6 = (**rdi_16)(rdi_16, 0)
                
                if (rbx_33 != 0)
                    *rbx_33 = (**rdi_16)(rdi_16, 1)
            
            i_7 += 1
            r14_8 = &r14_8[0xa]
            r15_5 = &r15_5[1]
        while (i_7 s< arg1[0x17].d)
        
        r13 = arg1
    
    int32_t i_8 = 0
    
    if (r13[0x11].d s> 0)
        void* rbx_34 = nullptr
        void* rsi_7 = &r13[0x10]
        var_6c8 = nullptr
        
        do
            void* rax_196 = *rsi_7
            void* r15_6 = rax_196
            char rcx_111 = *rsi_7 & 1
            
            if (rcx_111 != 0)
                r15_6 = (r15_6 s>> 1) + rsi_7
            
            void* r12_7 = var_6d8_1
            var_690 = var_6d8_1
            void* const var_658 = nullptr
            var_6b8 = var_6d8_1 + 8
            var_6d8_1 += 0x10
            
            if (rcx_111 != 0)
                rax_196 = (rax_196 s>> 1) + rsi_7
            
            int64_t* rdi_17 = arg2
            void* rcx_112 = rbx_34 + rax_196
            sub_14214a9c0(rcx_112, *(rcx_112 + 0x20), rdi_17, &var_658)
            void* const rax_198 = var_658
            
            if (rax_198 == 0 || *(rax_198 + 0x78) == 0)
                goto label_142146654
            
            int32_t j = 0
            int16_t rdx_52
            
            if (r13[0x17].d s> 0)
                do
                    void* rdx_50 = r13[0x16]
                    
                    if ((rdx_50.b & 1) != 0)
                        rdx_50 = (rdx_50 s>> 1) + &r13[0x16]
                    
                    int32_t rax_200 = sub_142124580(rdx_50 + sx.q(j) * 0x28, i_8)
                    rdx_52 = rax_200.w
                    
                    if (rax_200 s>= 0)
                        rax_198 = var_658
                        goto label_1421465dc
                    
                    j += 1
                while (j s< r13[0x17].d)
                
                rax_198 = var_658
            
            j = 0xffff
            rdx_52 = -1
        label_1421465dc:
            void* rdi_19 = *(rax_198 + 0x78)
            int64_t* rcx_116 = *(*(var_650 + 0x18) + (zx.q(j.w) << 3))
            int64_t rax_205
            
            if (rcx_116 == 0)
                rbx_34 = var_6c8
            label_14214664f:
                rdi_17 = arg2
            label_142146654:
                void* rax_209 = *rsi_7
                
                if ((rax_209.b & 1) != 0)
                    rax_209 = (rax_209 s>> 1) + rsi_7
                
                void* rax_210 = sub_142136860(rdi_17[1], *(rbx_34 + rax_209 + 0x20))
                
                if (rax_210 == 0)
                    *var_690 = *(data_143f10cc8 + 0x48)
                    rax_205 = data_143a2eaf8
                else
                    int64_t* rax_211 = sub_1418e8df0(rax_210)
                    
                    if (rax_211 == 0)
                        r13 = arg1
                        *var_690 = *(data_143f10cc8 + 0x48)
                        rax_205 = data_143a2eaf8
                    else
                        uint32_t rbx_35 = zx.d(*(rbx_34 + r15_6 + 0x25))
                        int64_t rax_213 = (*(*rax_211 + 0x10))(rax_211, zx.q(rbx_35), 
                            zx.q(sub_14243ae20(rax_210, rbx_35)))
                        rbx_34 = var_6c8
                        r13 = arg1
                        
                        if (rax_213 == 0)
                            *var_690 = *(data_143f10cc8 + 0x48)
                            rax_205 = data_143a2eaf8
                        else
                            *var_690 = rax_213
                            rax_205 = data_143a2eae0
            else
                int64_t rax_204 =
                    (*(*rcx_116 + 0x10))(rcx_116, zx.q(rdx_52), zx.q(*(rdi_19 + 0x46)))
                rbx_34 = var_6c8
                
                if (rax_204 == 0)
                    goto label_14214664f
                
                *r12_7 = rax_204
                rax_205 = *(rdi_19 + 0x18)
            
            void* rcx_124 = var_6b8
            rbx_34 += 0x28
            i_8 += 1
            var_6c8 = rbx_34
            *rcx_124 = rax_205
        while (i_8 s< r13[0x11].d)
    
    *var_6d8_1 = *(data_143f56328 + 0x10)
    result = data_143f56330
    *(var_6d8_1 + 8) = *(result + 0x10)
    
    if (var_68_1 != 0)
        result = sub_140a74f90(var_68_1)

__security_check_cookie(result_1 ^ &var_708)
return result
