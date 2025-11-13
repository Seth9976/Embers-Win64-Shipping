// 函数: sub_140ce6d40
// 地址: 0x140ce6d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a08
int64_t rax_1 = __security_cookie ^ &var_a08
int64_t* rsi = arg1
void* rcx = arg1[2]
void* r12 = arg4
int16_t* r13 = arg3
int32_t var_99c = 0
uint64_t result = zx.q(*(rcx + 0xcc) u>> 2)

if ((result.b & 1) != 0)
    int16_t* var_9c0
    int64_t var_9b8
    int16_t* var_908
    int64_t* rax_4
    int32_t r15_1
    
    if (arg3 == 0)
        sub_140bdd520(rcx, &var_908)
        rax_4 = &var_908
        r15_1 = 2
    else
        int32_t rdx = 0
        var_9c0 = nullptr
        int32_t rcx_1 = 0
        var_9b8 = 0
        
        if (*arg3 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg3[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_9c0, rbx_1.d + 1)
                rcx_1 = var_9b8:4.d
                rdx = var_9b8.d
            
            int32_t rax_3 = rdx + rbx_1.d + 1
            var_9b8.d = rax_3
            
            if (rax_3 s> rcx_1)
                sub_140594770(&var_9c0)
            
            UnDecorator::getReferenceType(var_9c0, r13, (rbx_1.d + 1) * 2)
        
        rax_4 = &var_9c0
        r15_1 = 1
    
    uint64_t result_1 = *rax_4
    *rax_4 = 0
    int32_t r14_1 = rax_4[1].d
    int32_t var_99c_1 = r14_1
    rax_4[1] = 0
    
    if ((r15_1.b & 2) != 0)
        int16_t* rcx_5 = var_908
        r15_1 &= 0xfffffffd
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    if ((r15_1.b & 1) != 0)
        int16_t* rcx_6 = var_9c0
        r15_1 &= 0xfffffffe
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    
    int32_t r15_2 = r15_1 | 4
    int64_t* rax_5 = sub_140cdcc40(rsi, &var_908)
    int16_t* rdx_5
    
    if (rax_5[1].d == 0)
        rdx_5 = &data_142d40450
    else
        rdx_5 = *rax_5
    
    int16_t* const result_2 = &data_142d40450
    
    if (r14_1 != 0)
        result_2 = result_1
    
    int32_t rax_6 = sub_140a54510(result_2, rdx_5)
    char var_9c7_1
    int16_t* var_988
    int32_t var_980
    void* var_898
    int32_t rax_9
    
    if (rax_6 != 0)
        r15_2 |= 8
        int64_t* rax_7 = sub_140b63b70(rsi[2] + 0xe8, &var_898)
        
        if (rax_7[1].d != 0)
            *rax_7
        
        sub_140a2e390(&var_988, u"%sUnreal Engine/Engine/Config/User%s.ini", sub_140b73bf0())
        void* rcx_11 = var_898
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int16_t* rdx_7 = &data_142d40450
        uint64_t result_3 = &data_142d40450
        
        if (var_980 != 0)
            rdx_7 = var_988
        
        if (r14_1 != 0)
            result_3 = result_1
        
        rax_9 = sub_140a54510(result_3, rdx_7)
        var_9c7_1 = 0
    
    if (rax_6 == 0 || rax_9 == 0)
        var_9c7_1 = 1
    
    if ((r15_2.b & 8) != 0)
        int16_t* rcx_12 = var_988
        r15_2 &= 0xfffffff7
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    int16_t* rcx_13 = var_908
    int32_t r15_3 = r15_2 & 0xfffffffb
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    uint64_t rax_11
    
    if (((*(rsi[2] + 0xcc) u>> 0xa).b & 1) == 0 || ((rsi[1].d u>> 4).b & 1) != 0)
        rax_11.b = 0
    else
        rax_11.b = 1
    
    char var_9c8_1 = rax_11.b
    int16_t* var_998 = nullptr
    int32_t var_990_1 = 0
    int16_t* var_9b0
    int32_t var_9a8
    int32_t var_9a4
    void* var_968
    int16_t* var_960
    int16_t* var_950
    
    if (rax_11.b == 1)
        var_950 = nullptr
        int32_t var_948_1 = 0
        void* rax_12 = sub_140d21d80(rsi)
        
        if (rax_12 != data_143e1b7d0)
            sub_140d21e40(rsi, rax_12, &var_950)
        else
            var_968 = rsi[3]
            sub_140b63b70(&var_968, &var_988)
            int16_t* rcx_18 = var_950
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            var_950 = var_988
            var_948_1 = var_980
            int32_t var_97c
            var_948_1 = var_97c
        
        var_968 = *(rsi[2] + 0x18)
        int32_t rcx_22 = sub_140b63b70(&var_968, &var_9b0)
        var_9c0 = nullptr
        int16_t* rbx_4 = var_950
        var_9b8.d = var_948_1
        sub_1405a4c70(&var_9c0, sbb.d(rcx_22, rcx_22, var_948_1 != 0) + 2 + var_948_1, 0)
        memcpy(var_9c0, rbx_4, var_948_1 * 2)
        sub_140a20ba0(&var_9c0, &data_142d404d4, 1)
        int32_t rax_20 = var_9b8.d
        int16_t* rdi_2 = var_9c0
        int32_t r8_6 = var_9b8:4.d
        var_9c0 = nullptr
        var_9b8 = 0
        int16_t* rbx_5
        int32_t rsi_1
        int32_t r14_2
        
        if (rax_20 s> 1)
            int32_t rbx_7
            
            if (var_9a8 == 0)
                rbx_7 = 0
            else
                rbx_7 = var_9a8 - 1
            
            int32_t rcx_27
            
            if (rax_20 == 0)
                rcx_27 = rax_20 + 1
            
            if (rax_20 != 0 || rbx_7 == 0)
                rcx_27 = 0
            
            var_960 = rdi_2
            int32_t rdx_15 = rbx_7 + rax_20 + rcx_27
            
            if (rdx_15 s> r8_6)
                sub_1405947f0(&var_960, rdx_15)
            
            sub_140a20ba0(&var_960, var_9b0, rbx_7)
            rbx_5 = var_960
            rsi_1 = rax_20
            rdi_2 = nullptr
            r14_2 = r8_6
            var_960 = nullptr
            int32_t var_958_1
            var_958_1.q = 0
        else
            rbx_5 = var_9b0
            rsi_1 = var_9a8
            r14_2 = var_9a4
            var_9b0 = nullptr
            var_9a8.q = 0
        
        int16_t* rcx_30 = var_998
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        var_998 = rbx_5
        var_990_1 = rsi_1
        var_990_1 = r14_2
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)
        
        int16_t* rcx_32 = var_9b0
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        rsi = arg1
        (*(*rsi + 0x208))(rsi, &var_998)
        int16_t* rcx_34 = var_950
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        r14_1 = var_99c_1
    
    int64_t* rbx_8 = rsi[2]
    void* rcx_35 = rbx_8[0x23]
    var_968 = rcx_35
    
    if (rcx_35 == 0)
        (*(*rbx_8 + 0x390))(rbx_8)
        rcx_35 = rbx_8[0x23]
        rbx_8 = rsi[2]
        var_968 = rcx_35
    
    int64_t rax_68 = data_143ddb400
    char var_9c6_1
    
    if (rsi != rcx_35)
        var_9c6_1 = 1
    
    if (rsi == rcx_35 || r12 != rax_68)
        var_9c6_1 = 0
    
    int64_t* i = rbx_8[0xe]
    int64_t* i_1 = i
    
    if (i != 0)
        do
            int64_t rcx_37 = i[8]
            
            if (test_bit(rcx_37, 0xe) && (rcx_37 & arg2) == arg2)
                void* rbx_9 = rsi[2]
                
                if (test_bit(rcx_37, 0x12))
                    rbx_9 = sub_140cbd010(i)
                
                sub_140b63b70(&i[5], &var_9c0)
                
                if (var_9c8_1 == 0)
                    int64_t var_868
                    int64_t* rax_26 = sub_140d21e10(rbx_9, &var_868, 0)
                    
                    if (&var_998 != rax_26)
                        int16_t* rcx_41 = var_998
                        
                        if (rcx_41 != 0)
                            sub_140a74f90(rcx_41)
                        
                        var_998 = *rax_26
                        *rax_26 = 0
                        var_990_1 = rax_26[1].d
                        var_990_1 = *(rax_26 + 0xc)
                        rax_26[1] = 0
                    
                    int64_t rcx_43 = var_868
                    
                    if (rcx_43 != 0)
                        sub_140a74f90(rcx_43)
                
                uint64_t var_8d8
                int64_t var_858
                int64_t* rax_31
                int32_t rcx_46
                
                if (not(test_bit(zx.q(i[8].d), 0x12)) || r13 != 0)
                    r13 = nullptr
                    int32_t var_8d0_1 = r14_1
                    var_8d8 = 0
                    
                    if (r14_1 != 0)
                        sub_1405a4c70(&var_8d8, r14_1, 0)
                        memcpy(var_8d8, result_1, r14_1 * 2)
                    else
                        int32_t var_8cc_1 = 0
                    
                    rax_31 = &var_8d8
                    rcx_46 = 0x20
                else
                    rax_31 = sub_140bdd520(sub_140cbd010(i), &var_858)
                    rcx_46 = (&r13[8]).d
                
                int32_t r14_3 = rax_31[1].d
                int32_t r15_4 = r15_3 | rcx_46
                int64_t rbx_11 = *rax_31
                int32_t var_9a0_1 = r15_4
                uint64_t var_918 = r13
                
                if (r14_3 != 0)
                    sub_1405a4c70(&var_918, r14_3, 0)
                    memcpy(var_918, rbx_11, r14_3 * 2)
                else
                    int32_t var_90c_1 = r13.d
                
                if ((r15_4.b & 0x20) != 0)
                    uint64_t rax_32 = var_8d8
                    r15_4 &= 0xffffffdf
                    var_9a0_1 = r15_4
                    
                    if (rax_32 != 0)
                        sub_140a74f90(rax_32)
                
                if ((r15_4.b & 0x10) != 0)
                    int64_t rcx_52 = var_858
                    var_9a0_1 = r15_4 & 0xffffffef
                    
                    if (rcx_52 != 0)
                        sub_140a74f90(rcx_52)
                
                uint64_t r13_2 = zx.q(i[8].d) & 0x20000000
                bool cond:2_1 = sub_140cbd010(i) != rsi[2]
                void* rbx_13 = rsi[2]
                char r12_1
                
                if (((*(rbx_13 + 0xcc) u>> 0x1e).b & 1) != 0 || var_9c8_1 != 0 || cond:2_1 == 0)
                    r12_1 = 0
                else
                    r12_1 = 1
                
                int64_t* rbx_14 = *(rbx_13 + 0x40)
                void* r15_6 = rbx_14[0x23]
                
                if (r15_6 == 0)
                    (*(*rbx_14 + 0x390))(rbx_14)
                    r15_6 = rbx_14[0x23]
                
                int64_t* var_9e8
                int32_t var_9e0
                int64_t var_9d8
                
                if (((zx.q(*(i[1] + 0x10)) u>> 0x15).b & 1) == 0)
                    wchar16 var_848[0x400]
                    memset(&var_848, 0, 0x800)
                    int32_t rax_49 = i[7].d
                    int32_t rbx_20 = 0
                    int32_t rsi_4 = 0
                    
                    if (rax_49 s> 0)
                        do
                            if (rax_49 != 1)
                                sub_140b63b70(&i[5], &var_908)
                                int16_t* const r8_23 = &data_142d40450
                                int32_t var_900
                                
                                if (var_900 != 0)
                                    r8_23 = var_908
                                
                                sub_140b01a80(&var_848, u"%s[%i]", r8_23)
                                int16_t* rcx_85 = var_908
                                
                                if (rcx_85 != 0)
                                    sub_140a74f90(rcx_85)
                                
                                if (var_9c0 != &var_848)
                                    if (var_848[0] != 0)
                                        int64_t rbx_21 = -1
                                        
                                        do
                                            rbx_21 += 1
                                        while (var_848[rbx_21] != 0)
                                        
                                        rbx_20 = rbx_21.d + 1
                                    
                                    int32_t rcx_86 = var_9b8:4.d
                                    int32_t rdx_40 = 0
                                    var_9b8.d = 0
                                    
                                    if (rcx_86 != rbx_20)
                                        sub_1405947f0(&var_9c0, rbx_20)
                                        rcx_86 = var_9b8:4.d
                                        rdx_40 = var_9b8.d
                                    
                                    int32_t rax_50 = rbx_20 + rdx_40
                                    var_9b8.d = rax_50
                                    
                                    if (rax_50 s> rcx_86)
                                        sub_140594770(&var_9c0)
                                    
                                    if (rbx_20 != 0)
                                        memcpy(var_9c0, &var_848, rbx_20 * 2)
                            
                            char rax_52
                            
                            if (r13_2 == 0 && r12_1 != 0)
                                int64_t r9_4 = sx.q(*(i + 0x4c))
                                int32_t rcx_91 = *(i + 0x3c) * rsi_4
                                void* r8_28
                                
                                if (r15_6 == 0)
                                    r8_28 = nullptr
                                else
                                    r8_28 = sx.q(rcx_91) + r15_6 + r9_4
                                
                                rax_52 = (*(*i + 0x80))(i, sx.q(rcx_91) + r9_4 + arg1, r8_28, 0, 
                                    var_9e8, var_9e0, var_9d8)
                            
                            if (r13_2 != 0 || (r12_1 != 0 && rax_52 != 0))
                                var_9b0 = nullptr
                                int16_t* const rdi_6 = &data_142d40450
                                var_9a8.q = 0
                                
                                if (r14_3 != 0)
                                    rdi_6 = var_918
                                
                                int32_t rdx_51 = 0
                                int32_t rcx_101 = 0
                                
                                if (rdi_6 != 0 && *rdi_6 != 0)
                                    int64_t rbx_24 = -1
                                    
                                    do
                                        rbx_24 += 1
                                    while (rdi_6[rbx_24] != 0)
                                    
                                    if (rbx_24.d + 1 s> 0)
                                        sub_1405947f0(&var_9b0, rbx_24.d + 1)
                                        rcx_101 = var_9a4
                                        rdx_51 = var_9a8
                                    
                                    int32_t rax_59 = rbx_24.d + 1 + rdx_51
                                    var_9a8 = rax_59
                                    
                                    if (rax_59 s> rcx_101)
                                        sub_140594770(&var_9b0)
                                    
                                    UnDecorator::getReferenceType(var_9b0, rdi_6, 
                                        (rbx_24.d + 1) * 2)
                                
                                int16_t* rdx_54 = &data_142d40450
                                
                                if (var_990_1 != 0)
                                    rdx_54 = var_998
                                
                                var_9e8 = &var_9b0
                                int64_t* rax_60 = sub_140af5690(arg4, rdx_54, 1, 0, var_9e8)
                                int16_t* rcx_106 = var_9b0
                                
                                if (rcx_106 != 0)
                                    sub_140a74f90(rcx_106)
                                
                                if (rax_60 != 0)
                                    int16_t* rdx_55 = &data_142d40450
                                    
                                    if (var_9b8.d != 0)
                                        rdx_55 = var_9c0
                                    
                                    sub_140a4f230(rax_60, *sub_140b58260(&var_960, rdx_55, 1))
                            else
                                int64_t r8_29 = sx.q(*(i + 0x4c))
                                int32_t rax_54 = *(i + 0x3c) * rsi_4
                                var_9d8 = 0
                                var_9e0 = 0
                                int16_t* var_8b8 = nullptr
                                int32_t var_8b0_1 = 0
                                void* r8_30 = r8_29 + sx.q(rax_54) + arg1
                                (*(*i + 0xa0))(i, &var_8b8, r8_30, r8_30, arg1, var_9e0, var_9d8)
                                int64_t var_930 = 0
                                int16_t* const rdi_5 = &data_142d40450
                                int64_t var_928_1 = 0
                                
                                if (r14_3 != 0)
                                    rdi_5 = var_918
                                
                                int32_t rdx_47 = 0
                                int32_t rcx_94 = 0
                                
                                if (rdi_5 != 0 && *rdi_5 != 0)
                                    int64_t rbx_22 = -1
                                    
                                    do
                                        rbx_22 += 1
                                    while (rdi_5[rbx_22] != 0)
                                    
                                    if (rbx_22.d + 1 s> 0)
                                        sub_1405947f0(&var_930, rbx_22.d + 1)
                                        rcx_94 = var_928_1:4.d
                                        rdx_47 = var_928_1.d
                                    
                                    int32_t rax_58 = rdx_47 + rbx_22.d + 1
                                    var_928_1.d = rax_58
                                    
                                    if (rax_58 s> rcx_94)
                                        sub_140594770(&var_930)
                                    
                                    UnDecorator::getReferenceType(var_930, rdi_5, 
                                        (rbx_22.d + 1) * 2)
                                
                                int16_t* r9_7 = &data_142d40450
                                
                                if (var_8b0_1 != 0)
                                    r9_7 = var_8b8
                                
                                int16_t* r8_33 = &data_142d40450
                                int16_t* rdx_50 = &data_142d40450
                                var_9e8 = &var_930
                                
                                if (var_9b8.d != 0)
                                    r8_33 = var_9c0
                                
                                if (var_990_1 != 0)
                                    rdx_50 = var_998
                                
                                sub_140b00d80(arg4, rdx_50, r8_33, r9_7, var_9e8)
                                int64_t rcx_99 = var_930
                                
                                if (rcx_99 != 0)
                                    sub_140a74f90(rcx_99)
                                
                                int16_t* rcx_100 = var_8b8
                                
                                if (rcx_100 != 0)
                                    sub_140a74f90(rcx_100)
                            
                            i = i_1
                            rsi_4 += 1
                            rbx_20 = 0
                            rax_49 = i[7].d
                        while (rsi_4 s< rax_49)
                else
                    int64_t var_940 = 0
                    int16_t* const rdi_3 = &data_142d40450
                    
                    if (r14_3 != 0)
                        rdi_3 = var_918
                    
                    int32_t rdx_25 = 0
                    int32_t rcx_58 = 0
                    int64_t var_938_1 = 0
                    
                    if (rdi_3 != 0 && *rdi_3 != 0)
                        int64_t rbx_15 = -1
                        
                        do
                            rbx_15 += 1
                        while (rdi_3[rbx_15] != 0)
                        
                        if (rbx_15.d + 1 s> 0)
                            sub_1405947f0(&var_940, rbx_15.d + 1)
                            rcx_58 = var_938_1:4.d
                            rdx_25 = var_938_1.d
                        
                        int32_t rax_38 = rbx_15.d + 1 + rdx_25
                        var_938_1.d = rax_38
                        
                        if (rax_38 s> rcx_58)
                            sub_140594770(&var_940)
                        
                        UnDecorator::getReferenceType(var_940, rdi_3, (rbx_15.d + 1) * 2)
                    
                    int16_t* rdx_28 = &data_142d40450
                    
                    if (var_990_1 != 0)
                        rdx_28 = var_998
                    
                    var_9e8 = &var_940
                    int64_t* rax_39 = sub_140af5690(arg4, rdx_28, 1, 0, var_9e8)
                    int64_t rcx_63 = var_940
                    int64_t* rbx_17 = rax_39
                    
                    if (rcx_63 != 0)
                        sub_140a74f90(rcx_63)
                    
                    int16_t* const r8_15 = &data_142d40450
                    
                    if (var_9c7_1 != 0)
                        r8_15 = &data_142e5c1c0
                    
                    sub_140a2e390(&var_988, u"%s%s", r8_15)
                    
                    if (rbx_17 != 0)
                        int16_t* rdx_29 = &data_142d40450
                        
                        if (var_980 != 0)
                            rdx_29 = var_988
                        
                        sub_140a4f230(rbx_17, *sub_140b58260(&var_950, rdx_29, 1))
                    
                    i = i_1
                    
                    if (r13_2 == 0)
                        char rax_42
                        
                        if (r12_1 != 0)
                            int64_t rcx_67 = sx.q(*(i + 0x4c))
                            void* r8_16
                            
                            if (r15_6 == 0)
                                r8_16 = nullptr
                            else
                                r8_16 = r15_6 + rcx_67
                            
                            rax_42 = (*(*i + 0x80))(i, rcx_67 + rsi, r8_16, 0)
                        
                        if (r12_1 == 0 || rax_42 == 0)
                            int32_t r15_7 = 0
                            int64_t* rdx_32 = arg1
                            int32_t r14_4 = 0
                            void* rsi_3 = sx.q(*(i + 0x4c)) + rdx_32
                            int32_t r13_3 = *(i[0xf] + 0x3c)
                            char r12_2 = not.b((i[0x10].d).b) & 1
                            
                            while (true)
                                int32_t rcx_69 = *(rsi_3 + 8)
                                
                                if (r15_7 s>= rcx_69)
                                    break
                                
                                int16_t* var_8c8 = nullptr
                                int32_t var_8c0_1 = 0
                                *rsi_3
                                void* r8_17
                                
                                if (rcx_69 != 0)
                                    void* rax_45 = *rsi_3
                                    
                                    if (r12_2 == 0 && (rax_45.b & 1) != 0)
                                        rax_45 = (rax_45 s>> 1) + rsi_3
                                    
                                    r8_17 = sx.q(r14_4) + rax_45
                                else
                                    r8_17 = nullptr
                                
                                int64_t* rcx_70 = i[0xf]
                                var_9d8 = 0
                                var_9e0 = 0
                                var_9e8 = rdx_32
                                (*(*rcx_70 + 0xa0))(rcx_70, &var_8c8, r8_17)
                                int16_t* const rdi_4 = &data_142d40450
                                
                                if (var_8c0_1 != 0)
                                    rdi_4 = var_8c8
                                
                                int64_t var_8f8 = 0
                                int32_t rdx_34 = 0
                                int64_t var_8f0_1 = 0
                                int32_t rcx_71 = 0
                                
                                if (rdi_4 != 0 && *rdi_4 != 0)
                                    int64_t rbx_18 = -1
                                    
                                    do
                                        rbx_18 += 1
                                    while (rdi_4[rbx_18] != 0)
                                    
                                    if (rbx_18.d + 1 s> 0)
                                        sub_1405947f0(&var_8f8, rbx_18.d + 1)
                                        rcx_71 = var_8f0_1:4.d
                                        rdx_34 = var_8f0_1.d
                                    
                                    int32_t rax_48 = rbx_18.d + 1 + rdx_34
                                    var_8f0_1.d = rax_48
                                    
                                    if (rax_48 s> rcx_71)
                                        sub_140594770(&var_8f8)
                                    
                                    UnDecorator::getReferenceType(var_8f8, rdi_4, 
                                        (rbx_18.d + 1) * 2)
                                    rbx_17 = rax_39
                                
                                int64_t var_8e8_1 = 0
                                int64_t var_8e0_1 = 0
                                sub_140aef990(&var_8f8)
                                int16_t* rdx_37 = &data_142d40450
                                
                                if (var_980 != 0)
                                    rdx_37 = var_988
                                
                                void var_884
                                sub_140b58260(&var_884, rdx_37, 1)
                                var_898 = &var_884
                                int64_t* var_890_1 = &var_8f8
                                int32_t var_888
                                sub_140b76950(rbx_17, &var_888, &var_898, nullptr)
                                
                                if (var_8e8_1 != 0)
                                    sub_140a74f90(var_8e8_1)
                                
                                int64_t rcx_79 = var_8f8
                                
                                if (rcx_79 != 0)
                                    sub_140a74f90(rcx_79)
                                
                                int16_t* rcx_80 = var_8c8
                                
                                if (rcx_80 != 0)
                                    sub_140a74f90(rcx_80)
                                
                                i = i_1
                                r15_7 += 1
                                rdx_32 = arg1
                                r14_4 += r13_3
                    
                    int16_t* rcx_81 = var_988
                    
                    if (rcx_81 != 0)
                        sub_140a74f90(rcx_81)
                
                rsi = arg1
                
                if (var_9c6_1 != 0)
                    int64_t rax_62 = sx.q(*(i + 0x4c))
                    void* rcx_110 = var_968 + rax_62
                    void* rdx_57 = rax_62 + rsi
                    
                    if (rcx_110 != rdx_57)
                        if (not(test_bit(zx.q(i[8].d), 0x1e)))
                            (*(*i + 0xb0))(i, rcx_110, rdx_57, zx.q(i[7].d), var_9e8, var_9e0, 
                                var_9d8)
                        else
                            memcpy(rcx_110, rdx_57, *(i + 0x3c) * i[7].d)
                
                uint64_t rax_67 = var_918
                
                if (rax_67 != 0)
                    sub_140a74f90(rax_67)
                
                int16_t* rcx_113 = var_9c0
                
                if (rcx_113 != 0)
                    sub_140a74f90(rcx_113)
                
                r13 = arg3
                r15_3 = var_9a0_1
            
            i = i[0xb]
            r14_1 = var_99c_1
            i_1 = i
        while (i != 0)
        
        rax_68 = data_143ddb400
        r12 = arg4
    
    if (r12 == rax_68)
        var_988 = nullptr
        var_980.q = 0
        sub_140af04f0(r12, 0, &var_988)
        int16_t* rcx_115 = var_988
        
        if (rcx_115 != 0)
            sub_140a74f90(rcx_115)
    
    int16_t* rcx_116 = var_998
    
    if (rcx_116 != 0)
        sub_140a74f90(rcx_116)
    
    result = result_1
    
    if (result != 0)
        result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_a08)
return result
