// 函数: sub_141d093d0
// 地址: 0x141d093d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
void* var_1b8 = arg1
int64_t* rcx = *(arg1 + 8)
uint64_t r12
r12.b = 0
int64_t rax_3 = (*(*rcx + 0xc0))(rcx, arg5, 0)
void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_142d42ea8
    *(rax_4 + 0xc) = 1
    rax_4[2] = rax_3

void*** rbx_3

if (rax_3 == 0)
    rbx_3 = rax_4
else
    int64_t* rax_5 = j_sub_140a82f30(0x198)
    int64_t* rcx_2
    
    if (rax_5 == 0)
        rcx_2 = nullptr
    else
        rcx_2 = sub_141cf7a70(rax_5, *(arg1 + 8), arg2, *(arg1 + 0x30), arg6)
    
    int64_t* var_1c8 = rcx_2
    
    if (*(rcx_2 + 0x149) == 0)
        sub_141cfa620(rcx_2, 1)
        rbx_3 = rax_4
    else
        if ((*(rcx_2 + 0xdc) | rcx_2[0x1b].d | *(rcx_2 + 0xd4) | rcx_2[0x1a].d) == 0)
            goto label_141d096c1
        
        sub_141d050e0()
        int32_t var_1e0
        
        if (*sub_141d02ac0(&data_143a210b0, &var_1e0, &rcx_2[0x1a]) != 0xffffffff)
            rcx_2 = var_1c8
        label_141d096c1:
            int64_t rdi_4 = -1
            
            if (arg4 != 0)
                if (rcx_2[0x1e] != arg4)
                    int32_t rbx_5
                    
                    if (*arg4 == 0)
                        rbx_5 = 0
                    else
                        int64_t rbx_4 = -1
                        
                        do
                            rbx_4 += 1
                        while (arg4[rbx_4] != 0)
                        
                        rbx_5 = rbx_4.d + 1
                    
                    int32_t rdx_9 = 0
                    rcx_2[0x1f].d = 0
                    
                    if (*(rcx_2 + 0xfc) != rbx_5)
                        sub_1405947f0(&rcx_2[0x1e], rbx_5)
                        rdx_9 = rcx_2[0x1f].d
                    
                    int32_t rax_19 = rdx_9 + rbx_5
                    rcx_2[0x1f].d = rax_19
                    
                    if (rax_19 s> *(rcx_2 + 0xfc))
                        sub_140594770(&rcx_2[0x1e])
                    
                    if (rbx_5 != 0)
                        memcpy(rcx_2[0x1e], arg4, rbx_5 * 2)
                
                int32_t rcx_17 = rcx_2[0x1f].d
                int32_t rax_20 = rcx_17 - 1
                
                if (rcx_17 == 0)
                    rax_20 = -1
                
                int32_t rdx_12 = rcx_17 - 1
                
                if (rcx_17 == 0)
                    rax_20 = 0
                
                if (rcx_17 == 0)
                    rdx_12 = -1
                
                if (rax_20 s> 0)
                    if (rcx_17 == 0)
                        rdx_12 = 0
                    
                    if (*(rcx_2[0x1e] + (sx.q(rdx_12) << 1) - 2) != 0x2f)
                        sub_140a20ba0(&rcx_2[0x1e], &data_142d5a024, 1)
            
            uint64_t var_1f8 = 0
            int32_t rdx_14 = 0
            int32_t var_1f0_1 = 0
            int32_t rcx_19 = 0
            int32_t var_1ec_1 = 0
            
            if (arg2 != 0 && *arg2 != 0)
                int64_t rbx_6 = -1
                
                do
                    rbx_6 += 1
                while (arg2[rbx_6] != 0)
                
                if (rbx_6.d + 1 s> 0)
                    sub_1405947f0(&var_1f8, rbx_6.d + 1)
                    rcx_19 = var_1ec_1
                    rdx_14 = var_1f0_1
                
                int32_t rax_22 = rbx_6.d + 1 + rdx_14
                var_1f0_1 = rax_22
                
                if (rax_22 s> rcx_19)
                    sub_140594770(&var_1f8)
                
                UnDecorator::getReferenceType(var_1f8, arg2, (rbx_6.d + 1) * 2)
            
            int32_t var_218
            int16_t* var_208
            int32_t var_200
            int64_t var_1a8
            
            if (sub_140a237d0(&var_1f8, u"_P.pak", 1) == 0)
                r12 = zx.q(arg3)
            else
                int16_t* const _String = &data_142d40450
                var_1e0 = 1
                int32_t rbx_9
                uint64_t r14_1
                
                if (var_1f0_1 == 0)
                    rbx_9 = 0
                    r14_1 = &data_142d40450
                else
                    r14_1 = var_1f8
                    rbx_9 = var_1f0_1 - 1
                
                if (rbx_9 - 6 s< 0)
                    rbx_9 = 0
                else if (rbx_9 - 6 s< rbx_9)
                    rbx_9 -= 6
                
                var_208 = nullptr
                int32_t rdx_17 = 0
                var_200 = 0
                int32_t rax_25 = 0
                int32_t var_1fc_1 = 0
                int16_t* r13_3 = nullptr
                
                if (r14_1 != 0 && *r14_1 != 0 && rbx_9 s> 0)
                    if (rbx_9 + 1 s> 0)
                        sub_1405947f0(&var_208, rbx_9 + 1)
                        rax_25 = var_1fc_1
                        rdx_17 = var_200
                        r13_3 = var_208
                    
                    int32_t r15_5 = rbx_9 + 1 + rdx_17
                    
                    if (r15_5 s> rax_25)
                        sub_140594770(&var_208)
                        r13_3 = var_208
                    
                    UnDecorator::getReferenceType(r13_3, r14_1, rbx_9 * 2)
                    r13_3[sx.q(r15_5) - 1] = 0
                
                var_218.q = 0
                int32_t var_210_1 = 0
                sub_1405947f0(&var_218, 2)
                int32_t rbx_10 = var_210_1 + 2
                
                if (rbx_10 s> 0)
                    sub_140594770(&var_218)
                
                int16_t* r14_2 = var_218.q
                char var_228
                var_228.w = 0x3f
                sub_1405a7220(r14_2, 2, U"_", 2, var_228)
                var_228.d = 0xffffffff
                int16_t* rdx_21 = &data_142d40450
                
                if (rbx_10 != 0)
                    rdx_21 = r14_2
                
                int32_t rax_27 = sub_140a23cf0(&var_1f8, rdx_21, 0, 1, var_228)
                
                if (r14_2 != 0)
                    sub_140a74f90(r14_2)
                
                if (rax_27 s>= 1)
                    var_208 = nullptr
                    var_200.q = 0
                    sub_1405947f0(&var_208, 2)
                    int32_t rbx_11 = var_200 + 2
                    
                    if (rbx_11 s> var_1fc_1)
                        sub_140594770(&var_208)
                    
                    var_228.w = 0x3f
                    sub_1405a7220(var_208, 2, U"_", 2, var_228)
                    int16_t* rdx_23 = &data_142d40450
                    var_228.d = rax_27 - 1
                    
                    if (rbx_11 != 0)
                        rdx_23 = var_208
                    
                    int32_t rax_29 = sub_140a23cf0(&var_1f8, rdx_23, 0, 1, var_228)
                    int16_t* rcx_37 = var_208
                    
                    if (rcx_37 != 0)
                        sub_140a74f90(rcx_37)
                    
                    if (rax_29 != 0xffffffff)
                        var_218.q = 0
                        int32_t var_210_2 = 0
                        
                        if (rax_27 - (rax_29 + 1) s>= 0)
                            int32_t rbx_12 = var_1f0_1 - 1
                            
                            if (var_1f0_1 == 0)
                                rbx_12 = 0
                            
                            int32_t rcx_38
                            
                            if (rax_29 + 1 s>= 0)
                                rcx_38 = rbx_12
                                
                                if (rax_29 + 1 s< rbx_12)
                                    rcx_38 = rax_29 + 1
                            else
                                rcx_38 = 0
                            
                            int64_t rdx_25 = sx.q(rax_27 - (rax_29 + 1)) + sx.q(rax_29 + 1)
                            int64_t r9_1 = sx.q(rcx_38)
                            
                            if (rdx_25 s< r9_1)
                                rbx_12 = rcx_38
                            else if (rdx_25 s< sx.q(rbx_12))
                                rbx_12 = rdx_25.d
                            
                            var_208 = nullptr
                            uint64_t rax_32 = &data_142d40450
                            var_200.q = 0
                            
                            if (var_1f0_1 != 0)
                                rax_32 = var_1f8
                            
                            int16_t* r15_8 = nullptr
                            int32_t rbx_13 = rbx_12 - rcx_38
                            int32_t r14_5 = 0
                            int32_t r12_1 = 0
                            int64_t rax_33 = rax_32 + (r9_1 << 1)
                            var_1a8 = rax_33
                            
                            if (rax_33 != 0 && *rax_33 != 0 && rbx_13 s> 0)
                                if (rbx_13 + 1 s> 0)
                                    sub_1405947f0(&var_208, rbx_13 + 1)
                                    r12_1 = var_1fc_1
                                    r14_5 = var_200
                                    r15_8 = var_208
                                
                                r14_5 = r14_5 + 1 + rbx_13
                                
                                if (r14_5 s> r12_1)
                                    sub_140594770(&var_208)
                                    r12_1 = var_1fc_1
                                    r15_8 = var_208
                                
                                UnDecorator::getReferenceType(r15_8, var_1a8, rbx_13 * 2)
                                r15_8[sx.q(r14_5) - 1] = 0
                                int64_t rcx_42 = var_218.q
                                
                                if (rcx_42 != 0)
                                    sub_140a74f90(rcx_42)
                            
                            var_210_2 = r12_1
                            _String = &data_142d40450
                            var_218.q = r15_8
                            var_210_2 = r14_5
                        
                        if (sub_140a24720(&var_218) != 0)
                            if (var_210_2 != 0)
                                _String = var_218.q
                            
                            int32_t rax_36 = _wtoi(_String)
                            
                            if (rax_36 s>= 1)
                                var_1e0 = rax_36 + 1
                        
                        int64_t rcx_45 = var_218.q
                        
                        if (rcx_45 != 0)
                            sub_140a74f90(rcx_45)
                
                r12 = zx.q(arg3 + var_1e0 * 0x64)
                
                if (r13_3 != 0)
                    sub_140a74f90(r13_3)
            
            void* r14_7 = var_1b8
            EnterCriticalSection(r14_7 + 0x38)
            int64_t r15_9 = sx.q(*(r14_7 + 0x18))
            int64_t* r13_4 = var_1c8
            var_218 = r12.d
            int64_t* var_210_3 = r13_4
            int32_t rax_39 = (r15_9 + 1).d
            *(r14_7 + 0x18) = rax_39
            
            if (rax_39 s> *(r14_7 + 0x1c))
                sub_1405a4f90(r14_7 + 0x10)
            
            *(*(r14_7 + 0x10) + r15_9 * 0x10) = var_218.o
            int32_t rdx_32 = *(r14_7 + 0x18)
            int32_t* rcx_49 = *(r14_7 + 0x10)
            void var_1e8
            var_1b8 = &var_1e8
            sub_141cf65f0(rcx_49, rdx_32)
            
            if (r14_7 != -0x38)
                LeaveCriticalSection(r14_7 + 0x38)
            
            uint64_t rcx_51 = var_1f8
            r12.b = 1
            
            if (rcx_51 != 0)
                sub_140a74f90(rcx_51)
            
            if (Concurrency::details::are_vista_sync_apis_available() != 0)
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_1f8)
                var_218.q = 0
                int32_t rdx_33 = 0
                var_210_3.d = 0
                int32_t rcx_53 = 0
                var_210_3:4.d = 0
                
                if (arg2 != 0 && *arg2 != 0)
                    do
                        rdi_4 += 1
                    while (arg2[rdi_4] != 0)
                    
                    if (rdi_4.d + 1 s> 0)
                        sub_1405947f0(&var_218, rdi_4.d + 1)
                        rcx_53 = var_210_3:4.d
                        rdx_33 = var_210_3.d
                    
                    int32_t rax_42 = rdx_33 + rdi_4.d + 1
                    var_210_3.d = rax_42
                    
                    if (rax_42 s> rcx_53)
                        sub_140594770(&var_218)
                    
                    UnDecorator::getReferenceType(var_218.q, arg2, (rdi_4.d + 1) * 2)
                
                var_208 = nullptr
                var_200.q = 0
                var_1b8.o = *sub_140a1dfc0(sub_140b0f020(&var_1a8, &var_218, &var_208), &var_1c8)
                wWinMainCRTStartup(&var_1f8, &var_1b8)
                int64_t rcx_60 = var_1a8
                
                if (rcx_60 != 0)
                    sub_140a74f90(rcx_60)
                
                int16_t* rcx_61 = var_208
                
                if (rcx_61 != 0)
                    sub_140a74f90(rcx_61)
                
                int64_t rcx_62 = var_218.q
                
                if (rcx_62 != 0)
                    sub_140a74f90(rcx_62)
                
                int32_t var_158[0x4]
                sub_140ab54c0(sub_140aae600(), &var_158, &var_1f8)
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                    &var_1f8)
            
            void* r14_8
            r14_8.b = 0
            int32_t rdx_40 = data_14399fba0
            int32_t rcx_66 = data_14399fbac + 1
            data_14399fbac = rcx_66
            int64_t rbx_15 = sx.q(rdx_40 - 1)
            
            if (rdx_40 - 1 s>= 0)
                int64_t rdi_7 = rbx_15 << 4
                int64_t temp5_1
                
                do
                    int64_t rax_47 = data_14399fb98
                    
                    if (*(rdi_7 + rax_47 + 8) == 0)
                        r14_8.b = 1
                    else
                        int64_t* rcx_67 = *(rdi_7 + rax_47)
                        
                        if (rcx_67 == 0)
                            r14_8.b = 1
                        else if ((*(*rcx_67 + 0x50))(rcx_67, arg2) == 0)
                            r14_8.b = 1
                    
                    rdi_7 -= 0x10
                    temp5_1 = rbx_15
                    rbx_15 -= 1
                while (temp5_1 - 1 s>= 0)
                rcx_66 = data_14399fbac
                rdx_40 = data_14399fba0
            
            data_14399fbac = rcx_66 - 1
            
            if (r14_8.b != 0 && rcx_66 - 1 s<= 0)
                r14_8 = zx.q(rdx_40)
                int32_t rbx_16 = 0
                
                if (rdx_40 s> 0)
                    int64_t* rdi_8 = nullptr
                    
                    do
                        int64_t rax_50 = data_14399fb98
                        
                        if (*(rdi_8 + rax_50 + 8) == 0)
                            sub_1405a4880(&data_14399fb98, rbx_16, 1, 1)
                        else
                            int64_t* rcx_69 = *(rdi_8 + rax_50)
                            
                            if (rcx_69 == 0)
                                sub_1405a4880(&data_14399fb98, rbx_16, 1, 1)
                            else if ((*(*rcx_69 + 0x20))(rcx_69) != 0)
                                sub_1405a4880(&data_14399fb98, rbx_16, 1, 1)
                            else
                                rbx_16 += 1
                                rdi_8 = &rdi_8[2]
                        
                        rdx_40 = data_14399fba0
                    while (rbx_16 s< rdx_40)
                
                int32_t rax_53 = rdx_40 * 2
                
                if (rax_53 s<= 2)
                    rax_53 = 2
                
                data_14399fba8 = rax_53
                
                if (r14_8.d s> rax_53 && data_14399fba4 != rdx_40)
                    sub_1405a5410(&data_14399fb98, rdx_40)
            
            r14_8.b = 0
            int32_t rdx_43 = data_14399fb88
            int32_t rcx_71 = data_14399fb94 + 1
            int32_t r15_10 = *(r13_4 + 0x14c)
            data_14399fb94 = rcx_71
            int64_t rbx_17 = sx.q(rdx_43 - 1)
            
            if (rdx_43 - 1 s>= 0)
                int64_t rdi_10 = rbx_17 << 4
                int64_t temp6_1
                
                do
                    int64_t rax_55 = data_14399fb80
                    
                    if (*(rdi_10 + rax_55 + 8) == 0)
                        r14_8.b = 1
                    else
                        int64_t* rcx_72 = *(rdi_10 + rax_55)
                        
                        if (rcx_72 == 0)
                            r14_8.b = 1
                        else if ((*(*rcx_72 + 0x50))(rcx_72, arg2, zx.q(r15_10)) == 0)
                            r14_8.b = 1
                    
                    rdi_10 -= 0x10
                    temp6_1 = rbx_17
                    rbx_17 -= 1
                while (temp6_1 - 1 s>= 0)
                rcx_71 = data_14399fb94
                rdx_43 = data_14399fb88
            
            data_14399fb94 = rcx_71 - 1
            
            if (r14_8.b != 0 && rcx_71 - 1 s<= 0)
                int32_t rsi_1 = rdx_43
                int32_t rbx_18 = 0
                
                if (rdx_43 s> 0)
                    int64_t* rdi_11 = nullptr
                    
                    do
                        int64_t rax_58 = data_14399fb80
                        
                        if (*(rdi_11 + rax_58 + 8) == 0)
                            sub_1405a4880(&data_14399fb80, rbx_18, 1, 1)
                        else
                            int64_t* rcx_74 = *(rdi_11 + rax_58)
                            
                            if (rcx_74 == 0)
                                sub_1405a4880(&data_14399fb80, rbx_18, 1, 1)
                            else if ((*(*rcx_74 + 0x20))(rcx_74) != 0)
                                sub_1405a4880(&data_14399fb80, rbx_18, 1, 1)
                            else
                                rbx_18 += 1
                                rdi_11 = &rdi_11[2]
                        
                        rdx_43 = data_14399fb88
                    while (rbx_18 s< rdx_43)
                
                int32_t rax_61 = rdx_43 * 2
                
                if (rax_61 s<= 2)
                    rax_61 = 2
                
                data_14399fb90 = rax_61
                
                if (rsi_1 s> rax_61 && data_14399fb8c != rdx_43)
                    sub_1405a5410(&data_14399fb80, rdx_43)
            
            for (int64_t* i = data_14399fbb0; i != &i[sx.q(data_14399fbb8) * 2]; i = &i[2])
                if (i[1].d != 0 && *i != 0)
                    var_218.q = 0
                    int32_t var_210_4 = 0
                    sub_141d03aa0(r13_4, &var_218)
                    int64_t* r14_9 = var_218.q
                    int64_t rdi_12 = sx.q(var_210_4)
                    int64_t* rbx_19 = r14_9
                    void* rsi_4 = &r14_9[rdi_12 * 2]
                    
                    if (r14_9 != rsi_4)
                        do
                            sub_140920c10(&data_14399fbb0, rbx_19)
                            rbx_19 = &rbx_19[2]
                        while (rbx_19 != rsi_4)
                    
                    int64_t* rbx_20 = r14_9
                    
                    if (rdi_12.d != 0)
                        int32_t j
                        
                        do
                            int64_t rcx_79 = *rbx_20
                            
                            if (rcx_79 != 0)
                                sub_140a74f90(rcx_79)
                            
                            rbx_20 = &rbx_20[2]
                            j = rdi_12.d
                            rdi_12 = zx.q(rdi_12.d - 1)
                        while (j != 1)
                    
                    if (r14_9 != 0)
                        sub_140a74f90(r14_9)
                    
                    break
            
            rbx_3 = rax_4
        else
            int64_t rdi_1 = sx.q(*(arg1 + 0x28))
            int64_t var_174_1 = 0
            int64_t var_16c_1 = 0
            int32_t rax_12 = (rdi_1 + 1).d
            *(arg1 + 0x28) = rax_12
            
            if (rax_12 s> *(arg1 + 0x2c))
                sub_1407c3b60(arg1 + 0x20)
            
            int64_t rax_13 = *(arg1 + 0x20)
            int64_t rcx_4 = rdi_1 * 0x38
            int64_t rdi_2 = -1
            __builtin_memset(rcx_4 + rax_13, 0, 0x24)
            *(rcx_4 + rax_13 + 0x24) = var_174_1.o
            *(rcx_4 + rax_13 + 0x34) = 0
            int64_t* r15_2 = *(arg1 + 0x20) + rcx_4
            
            if (*r15_2 != arg2)
                int32_t rbx_2
                
                if (arg2 == 0 || *arg2 == 0)
                    rbx_2 = 0
                else
                    int64_t rbx_1 = -1
                    
                    do
                        rbx_1 += 1
                    while (arg2[rbx_1] != 0)
                    
                    rbx_2 = rbx_1.d + 1
                
                int32_t rdx_3 = 0
                r15_2[1].d = 0
                
                if (*(r15_2 + 0xc) != rbx_2)
                    sub_1405947f0(r15_2, rbx_2)
                    rdx_3 = r15_2[1].d
                
                int32_t rax_14 = rbx_2 + rdx_3
                r15_2[1].d = rax_14
                
                if (rax_14 s> *(r15_2 + 0xc))
                    sub_140594770(r15_2)
                
                if (rbx_2 != 0)
                    memcpy(*r15_2, arg2, rbx_2 * 2)
            
            if (r15_2[2] != arg4)
                int32_t rdi_3
                
                if (arg4 == 0 || *arg4 == 0)
                    rdi_3 = 0
                else
                    do
                        rdi_2 += 1
                    while (arg4[rdi_2] != 0)
                    
                    rdi_3 = rdi_2.d + 1
                
                int32_t rdx_6 = 0
                r15_2[3].d = 0
                
                if (*(r15_2 + 0x1c) != rdi_3)
                    sub_1405947f0(&r15_2[2], rdi_3)
                    rdx_6 = r15_2[3].d
                
                int32_t rax_15 = rdi_3 + rdx_6
                r15_2[3].d = rax_15
                
                if (rax_15 s> *(r15_2 + 0x1c))
                    sub_140594770(&r15_2[2])
                
                if (rdi_3 != 0)
                    memcpy(r15_2[2], arg4, rdi_3 * 2)
            
            r15_2[4].d = arg3
            int64_t* r13_2 = var_1c8
            *(r15_2 + 0x24) = *(rcx_2 + 0xd0)
            *(r15_2 + 0x34) = *(r13_2 + 0x14c)
            sub_141cfa620(r13_2, 1)
            rbx_3 = rax_4
            int64_t var_1d8_1 = 0
            
            if (rbx_3 != 0)
                void*** var_1d0_1 = nullptr
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp4_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*rbx_3)[1](rbx_3, 1)
                
                rbx_3 = var_1d0_1
            
            r12.b = 0

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            void** r8_22 = *rbx_3
            r8_22[1](rbx_3, 1, r8_22)

__security_check_cookie(rax_1 ^ &var_248)
return zx.q(r12.b)
