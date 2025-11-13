// 函数: sub_1425c1520
// 地址: 0x1425c1520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx
void* var_10 = rbx
int32_t rdi = 0
int64_t r13 = arg1
uint64_t var_78 = 0
int32_t var_70 = 0
sub_140b2acc0(arg3, u"-Sandbox=", &var_78, 1)
int16_t* const r14 = &data_142d40450
int16_t* var_68
int32_t var_60
int32_t var_5c
int16_t* var_58

if (var_70 s<= 1 && *(r13 + 0x90) != 0)
    uint64_t* rax_1 = sub_1425c1060(&var_58)
    
    if (&var_78 != rax_1)
        uint64_t rcx_2 = var_78
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        var_78 = *rax_1
        *rax_1 = 0
        var_70 = rax_1[1].d
        var_70 = *(rax_1 + 0xc)
        rax_1[1] = 0
    
    int16_t* rcx_4 = var_58
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    var_68 = nullptr
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 9)
    int32_t r12_1 = var_60_1 + 9
    
    if (r12_1 s> var_5c)
        sub_140594770(&var_68)
    
    int16_t* r13_1 = var_68
    UnDecorator::getReferenceType(r13_1, u"*.uasset", 0x12)
    int64_t* rax_4 = *(arg1 + 0x70)
    int64_t* rbx_2 = rax_4
    void* r15_3 = &rax_4[sx.q(*(arg1 + 0x78)) * 2]
    int32_t arg_20
    arg_20.q = rax_4
    
    if (rax_4 != r15_3)
        while (true)
            int16_t* const rdx_1 = &data_142d40450
            
            if (r12_1 != 0)
                rdx_1 = r13_1
            
            int16_t* const rcx_8
            
            if (rbx_2[1].d == 0)
                rcx_8 = &data_142d40450
            else
                rcx_8 = *rbx_2
            
            if (sub_140a54510(rcx_8, rdx_1) == 0)
                break
            
            rbx_2 = &rbx_2[2]
            
            if (rbx_2 == r15_3)
                goto label_1425c167d
    
    if (rax_4 == r15_3 || ((rbx_2 - arg_20.q) s>> 4).d == 0xffffffff)
    label_1425c167d:
        int64_t rbx_3 = sx.q(*(arg1 + 0x78))
        int32_t rax_6 = (rbx_3 + 1).d
        *(arg1 + 0x78) = rax_6
        
        if (rax_6 s> *(arg1 + 0x7c))
            sub_1405a4f90(arg1 + 0x70)
        
        int64_t* rax_9 = (rbx_3 << 4) + *(arg1 + 0x70)
        *rax_9 = r13_1
        rax_9[1].d = r12_1
        *(rax_9 + 0xc) = var_5c
    else if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    var_68 = nullptr
    var_60 = 0
    sub_1405947f0(&var_68, 7)
    int32_t r12_2 = var_60 + 7
    var_60 = r12_2
    
    if (r12_2 s> var_5c)
        sub_140594770(&var_68)
        r12_2 = var_60
    
    int16_t* r13_2 = var_68
    UnDecorator::getReferenceType(r13_2, u"*.umap", 0xe)
    int64_t* rax_10 = *(arg1 + 0x70)
    int64_t* rbx_4 = rax_10
    void* r15_6 = &rax_10[sx.q(*(arg1 + 0x78)) * 2]
    arg_20.q = rax_10
    
    if (rax_10 != r15_6)
        while (true)
            int16_t* rdx_4 = &data_142d40450
            
            if (r12_2 != 0)
                rdx_4 = r13_2
            
            int16_t* const rcx_14
            
            if (rbx_4[1].d == 0)
                rcx_14 = &data_142d40450
            else
                rcx_14 = *rbx_4
            
            if (sub_140a54510(rcx_14, rdx_4) == 0)
                break
            
            rbx_4 = &rbx_4[2]
            
            if (rbx_4 == r15_6)
                goto label_1425c1774
    
    if (rax_10 == r15_6 || ((rbx_4 - arg_20.q) s>> 4).d == 0xffffffff)
    label_1425c1774:
        rbx = sx.q(*(arg1 + 0x78))
        int32_t rax_12 = (rbx + 1).d
        *(arg1 + 0x78) = rax_12
        
        if (rax_12 s> *(arg1 + 0x7c))
            sub_1405a4f90(arg1 + 0x70)
        
        int16_t** rax_15 = (rbx << 4) + *(arg1 + 0x70)
        *rax_15 = r13_2
        rax_15[1].d = r12_2
        *(rax_15 + 0xc) = var_5c
    else if (r13_2 != 0)
        sub_140a74f90(r13_2)
    
    r13 = arg1

*(r13 + 8) = arg2

if (arg2 != 0 && var_70 s> 1)
    sub_140597df0(r13 + 0x30, sub_140b1ad00())
    int64_t* rax_18 = sub_140b11c80(&var_58, r13 + 0x30)
    
    if (r13 + 0x40 != rax_18)
        int64_t rcx_20 = *(r13 + 0x40)
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        *(r13 + 0x40) = *rax_18
        *rax_18 = 0
        *(r13 + 0x48) = rax_18[1].d
        *(r13 + 0x4c) = *(rax_18 + 0xc)
        rax_18[1] = 0
    
    int16_t* rcx_22 = var_58
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int64_t arg_10
    arg_10.b = 0
    sub_140b21570(&var_78)
    int64_t rsi_3 = -1
    int32_t rax_21 = sub_140a23cf0(&var_78, &data_142d84ee0, 0, 0, 0xffffffff)
    void* var_88
    int32_t var_50
    int64_t* rbx_7
    
    if (rax_21 != 0xffffffff)
        var_58 = nullptr
        var_50 = 0
        
        if (rax_21 + 1 s>= 0)
            int32_t rbx_8 = var_70 - 1
            
            if (var_70 == 0)
                rbx_8 = 0
            
            int64_t r8_1 = sx.q(rax_21 + 1)
            int32_t rcx_25 = rbx_8
            
            if (rbx_8 s> 0)
                rcx_25 = 0
            
            int64_t r9_1 = sx.q(rcx_25)
            
            if (r8_1 s< r9_1)
                rbx_8 = rcx_25
            else if (r8_1 s< sx.q(rbx_8))
                rbx_8 = rax_21 + 1
            
            var_68 = nullptr
            int16_t* const rax_23 = &data_142d40450
            var_60 = 0
            
            if (var_70 != 0)
                rax_23 = var_78
            
            int16_t* r13_3 = nullptr
            rbx_7 = zx.q(rbx_8 - rcx_25)
            int32_t r15_7 = 0
            void* rdx_9 = &rax_23[r9_1]
            int32_t rax_24 = 0
            var_5c = 0
            var_88 = rdx_9
            
            if (rdx_9 != 0 && *rdx_9 != 0 && rbx_7.d s> 0)
                int32_t rdx_10 = (rbx_7 + 1).d
                
                if (rdx_10 s> 0)
                    sub_1405947f0(&var_68, rdx_10)
                    rax_24 = var_5c
                    r15_7 = var_60
                    r13_3 = var_68
                
                r15_7 += (rbx_7 + 1).d
                var_60 = r15_7
                
                if (r15_7 s> rax_24)
                    sub_140594770(&var_68)
                    r15_7 = var_60
                    r13_3 = var_68
                
                UnDecorator::getReferenceType(r13_3, var_88, rbx_7.d * 2)
                r13_3[sx.q(r15_7) - 1] = 0
                int16_t* rcx_30 = var_58
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                rax_24 = var_5c
            
            var_58 = r13_3
            r13 = arg1
            var_50 = r15_7
            var_50 = rax_24
        
        if (sub_140b1c8b0(&var_58) == 0)
            int32_t rcx_32 = var_70
            int32_t rbx_10 = rcx_32 - 1
            
            if (rcx_32 == 0)
                rbx_10 = 0
            
            int32_t rdx_13
            
            if (rax_21 + 1 s>= 0)
                rdx_13 = rbx_10
                
                if (rax_21 + 1 s< rbx_10)
                    rdx_13 = rax_21 + 1
            else
                rdx_13 = 0
            
            int64_t r9_2 = sx.q(rdx_13)
            
            if (sx.q(rax_21 + 1) + 0x7fffffff s< r9_2)
                rbx_10 = rdx_13
            else if (sx.q(rax_21 + 1) + 0x7fffffff s< sx.q(rbx_10))
                rbx_10 = rax_21 - -0x80000000
            
            uint64_t r10_1 = var_78
            uint64_t rax_28 = &data_142d40450
            var_68 = nullptr
            
            if (rcx_32 != 0)
                rax_28 = r10_1
            
            var_60 = 0
            int32_t rbx_11 = rbx_10 - rdx_13
            int16_t* r12_4 = nullptr
            int32_t r15_9 = 0
            int64_t r8_6 = rax_28 + (r9_2 << 1)
            int32_t rax_29 = 0
            var_5c = 0
            
            if (r8_6 != 0 && *r8_6 != 0 && rbx_11 s> 0)
                if (rbx_11 + 1 s> 0)
                    sub_1405947f0(&var_68, rbx_11 + 1)
                    rax_29 = var_5c
                    r15_9 = var_60
                    r12_4 = var_68
                
                r15_9 += rbx_11 + 1
                var_60 = r15_9
                
                if (r15_9 s> rax_29)
                    sub_140594770(&var_68)
                    r15_9 = var_60
                    r12_4 = var_68
                
                UnDecorator::getReferenceType(r12_4, r8_6, rbx_11 * 2)
                r12_4[sx.q(r15_9) - 1] = 0
                rcx_32 = var_70
                r10_1 = var_78
            
            int32_t rax_31 = rcx_32 - 1
            
            if (rcx_32 == 0)
                rax_31 = 0
            
            int32_t r9_3
            
            if (rax_21 s>= 0)
                r9_3 = rax_31
                
                if (rax_21 s< rax_31)
                    r9_3 = rax_21
            else
                r9_3 = 0
            
            int32_t rax_32 = rax_31 - r9_3
            int32_t rbx_12 = rcx_32 - 1
            
            if (rcx_32 == 0)
                rbx_12 = 0
            
            int32_t rbx_13 = rbx_12 - r9_3
            
            if (rax_32 s>= 0)
                if (rax_32 s< rbx_13)
                    rbx_13 = rax_32
                
                if (rbx_13 != 0)
                    int32_t rax_34 = rcx_32 - rbx_13
                    
                    if (rax_34 != r9_3)
                        memmove(r10_1 + (sx.q(r9_3) << 1), r10_1 + (sx.q(rbx_13 + r9_3) << 1), 
                            (rax_34 - r9_3) * 2)
                        rcx_32 = var_70
                    
                    var_70 = rcx_32 - rbx_13
            
            int16_t* rcx_39 = &data_142d40450
            
            if (r15_9 != 0)
                rcx_39 = r12_4
            
            rbx_7 = zx.q(arg_10.b)
            
            if (sub_140a54510(rcx_39, u"wipe") == 0)
                rbx_7 = 1
            
            arg_10.d = rbx_7.d
            
            if (r12_4 != 0)
                sub_140a74f90(r12_4)
        
        int16_t* rcx_41 = var_58
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
    
    uint64_t rcx_42 = &data_142d40450
    
    if (var_70 != 0)
        rcx_42 = var_78
    
    if (sub_140a54510(rcx_42, u"User") != 0)
        uint64_t rcx_48 = &data_142d40450
        
        if (var_70 != 0)
            rcx_48 = var_78
        
        if (sub_140a54510(rcx_48, u"Unique") == 0)
            void* rax_43
            int32_t rdx_22
            rax_43, rdx_22 = sub_140b1ad00()
            bool c_1 = *(rax_43 + 8) != 0
            var_58 = nullptr
            int32_t rbx_15 = *(rax_43 + 8)
            int64_t rdi_1 = *rax_43
            var_50 = rbx_15
            sub_1405a4c70(&var_58, sbb.d(rdx_22, rdx_22, c_1) + 2 + rbx_15, 0)
            memcpy(var_58, rdi_1, rbx_15 * 2)
            sub_140a2cf70(&var_58, &data_142d40450, 0)
            void var_48
            sub_140b291e0(sub_140b214c0(&var_48), &var_68, 0)
            int16_t* r8_16 = &data_142d40450
            
            if (var_60 != 0)
                r8_16 = var_68
            
            rbx = r13 + 0x10
            sub_140597da0(rbx, sub_140b11f00(&var_88, &var_58, r8_16))
            void* rcx_57 = var_88
            
            if (rcx_57 != 0)
                sub_140a74f90(rcx_57)
            
            goto label_1425c1e52
        
        if (sub_140a32ae0(&var_78, &data_142d409b8, 1) == 0)
            int32_t rax_47 = sub_140a23cf0(&var_78, &data_142d5a024, 0, 0, 0xffffffff)
            var_58 = nullptr
            var_50 = 0
            
            if (rax_47 s>= 0)
                int32_t rbx_16 = var_70 - 1
                
                if (var_70 == 0)
                    rbx_16 = 0
                
                int64_t r8_17 = sx.q(rax_47)
                int32_t rcx_61 = rbx_16
                
                if (rbx_16 s> 0)
                    rcx_61 = 0
                
                int64_t r9_4 = sx.q(rcx_61)
                
                if (r8_17 s< r9_4)
                    rbx_16 = rcx_61
                else if (r8_17 s< sx.q(rbx_16))
                    rbx_16 = r8_17.d
                
                var_68 = nullptr
                uint64_t rax_49 = &data_142d40450
                int32_t var_60_2 = 0
                
                if (var_70 != 0)
                    rax_49 = var_78
                
                int16_t* r15_12 = nullptr
                rbx_7 = zx.q(rbx_16 - rcx_61)
                int32_t rsi_5 = 0
                int32_t r12_5 = 0
                int64_t rax_50 = rax_49 + (r9_4 << 1)
                
                if (rax_50 != 0 && *rax_50 != 0 && rbx_7.d s> 0)
                    int32_t rdx_32 = (rbx_7 + 1).d
                    
                    if (rdx_32 s> 0)
                        sub_1405947f0(&var_68, rdx_32)
                        r12_5 = var_5c
                        rsi_5 = var_60_2
                        r15_12 = var_68
                    
                    rsi_5 = rsi_5 + 1 + rbx_7.d
                    
                    if (rsi_5 s> r12_5)
                        sub_140594770(&var_68)
                        r12_5 = var_5c
                        r15_12 = var_68
                    
                    UnDecorator::getReferenceType(r15_12, rax_50, rbx_7.d * 2)
                    r15_12[sx.q(rsi_5) - 1] = 0
                    int16_t* rcx_65 = var_58
                    
                    if (rcx_65 != 0)
                        sub_140a74f90(rcx_65)
                
                var_50 = r12_5
                var_58 = r15_12
                var_50 = rsi_5
            
            char rax_52 = sub_140b1c8b0(&var_58)
            int16_t* rcx_67 = var_58
            rbx_7.b = rax_52 == 0
            
            if (rcx_67 != 0)
                sub_140a74f90(rcx_67)
            
            if (rbx_7.b != 0)
                void* rax_53
                int32_t rdx_35
                rax_53, rdx_35 = sub_140b1ad00()
                bool c_2 = *(rax_53 + 8) != 0
                var_58 = nullptr
                int32_t rbx_17 = *(rax_53 + 8)
                int64_t rdi_2 = *rax_53
                var_50 = rbx_17
                sub_1405a4c70(&var_58, sbb.d(rdx_35, rdx_35, c_2) + 2 + rbx_17, 0)
                memcpy(var_58, rdi_2, rbx_17 * 2)
                sub_140a2cf70(&var_58, &data_142d40450, 0)
                int16_t* r8_22 = &data_142d40450
                
                if (var_70 != 0)
                    r8_22 = var_78
                
                rbx = r13 + 0x10
                sub_140597da0(rbx, sub_140b11f00(&var_68, &var_58, r8_22))
            label_1425c1e52:
                int16_t* rcx_74 = var_68
                
                if (rcx_74 != 0)
                    sub_140a74f90(rcx_74)
                
                int16_t* rcx_75 = var_58
                
                if (rcx_75 != 0)
                    sub_140a74f90(rcx_75)
                
                goto label_1425c1e71
            
            rbx = r13 + 0x10
            sub_140597df0(rbx, &var_78)
        else
            rbx = r13 + 0x10
            sub_140597df0(rbx, &var_78)
        label_1425c1e71:
            sub_140b20c40(rbx)
            sub_140597da0(rbx, sub_140b11c80(&var_58, rbx))
            int16_t* rcx_79 = var_58
            
            if (rcx_79 != 0)
                sub_140a74f90(rcx_79)
    else
        int16_t* rax_40 = sub_140b738f0()
        rbx = r13 + 0x10
        
        if (*rbx != rax_40)
            int32_t rsi_4
            
            if (rax_40 == 0 || *rax_40 == 0)
                rsi_4 = 0
            else
                do
                    rsi_3 += 1
                while (rax_40[rsi_3] != 0)
                
                rsi_4 = rsi_3.d + 1
            
            *(rbx + 8) = 0
            
            if (*(rbx + 0xc) != rsi_4)
                sub_1405947f0(rbx, rsi_4)
                rdi = *(rbx + 8)
            
            int32_t rax_41 = rsi_4 + rdi
            *(rbx + 8) = rax_41
            
            if (rax_41 s> *(rbx + 0xc))
                sub_140594770(rbx)
            
            if (rsi_4 != 0)
                memcpy(*rbx, rax_40, rsi_4 * 2)
        
        sub_140a20ba0(rbx, u"My Games/", 9)
        sub_140a20ba0(rbx, u"UE4/", 4)
    
    if (arg_10.b != 0)
        int16_t* rdx_45
        
        if (*(rbx + 8) == 0)
            rdx_45 = &data_142d40450
        else
            rdx_45 = *rbx
        
        sub_1425c0260(r13, rdx_45, 1)
    
    if (sub_140a237d0(rbx, &data_142d5a024, 1) == 0)
        sub_140a20ba0(rbx, &data_142d5a024, 1)
    
    if (*(r13 + 0x90) != 0)
        int16_t* const r8_23
        
        if (*(rbx + 8) == 0)
            r8_23 = &data_142d40450
        else
            r8_23 = *rbx
        
        sub_140a2e390(&var_58, u"-sandbox=%s", r8_23)
        
        if (var_50 != 0)
            r14 = var_58
        
        sub_140aea7e0(r14)
        int16_t* rcx_86 = var_58
        
        if (rcx_86 != 0)
            sub_140a74f90(rcx_86)

uint64_t rcx_87 = var_78
rbx.b = *(r13 + 8) != 0

if (rcx_87 != 0)
    sub_140a74f90(rcx_87)

return zx.q(rbx.b)
