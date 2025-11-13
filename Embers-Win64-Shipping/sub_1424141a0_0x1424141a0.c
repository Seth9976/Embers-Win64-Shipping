// 函数: sub_1424141a0
// 地址: 0x1424141a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[0x16].d

if (arg4 == 0)
    rdi &= 0xfffffffe
    arg1[0x16].d = rdi

uint8_t rdi_1 = (rdi u>> 1).b & 1
int16_t arg_20
sub_140e679c0(data_143e29f28, &arg_20)
char rax = arg_20.b

if ((rax & 0x10) != 0 || (rax & 0x20) != 0 || (rax & 0x40) != 0 || rax s< 0 || (rax & 1) != 0
        || (rax & 2) != 0 || (rax & 4) != 0 || (rax & 8) != 0)
    rdi_1 = 1

int64_t* rax_1 = sub_1424c7800()
void* rax_2 = rax_1[0x23]

if (rax_2 == 0)
    (*(*rax_1 + 0x390))(rax_1)
    rax_2 = rax_1[0x23]

int64_t* rdx_1 = *(rax_2 + 0xe0)
void* rax_5 = &rdx_1[sx.q(*(rax_2 + 0xe8)) * 3]
int64_t result
int64_t* arg_8

if (rdx_1 == rax_5)
label_142414272:
    int32_t rcx_4 = arg1[0x1b].d
    arg_8 = arg1
    rcx_4.b = sub_140b5b8a0(rcx_4, 0).b == 0
    result.b = *(arg1 + 0xdc) != 0
    result.b |= rcx_4.b
    
    if (result.b == 0)
    label_142414f55:
        int64_t* rbx_3 = arg3[2]
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp1_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        result.b = 0
    else
        int64_t var_58 = *arg3
        int64_t var_50_1 = arg3[1]
        void* rax_8 = arg3[2]
        void* var_48_1 = rax_8
        
        if (rax_8 != 0)
            *(rax_8 + 8) += 1
        
        if ((*(*arg1 + 0x298))(arg1, &var_58, zx.q(arg4)).b == 0)
            var_58 = *arg3
            int64_t var_50_2 = arg3[1]
            void* rax_16 = arg3[2]
            void* var_48_2 = rax_16
            
            if (rax_16 != 0)
                *(rax_16 + 8) += 1
            
            char rax_18 = (*(*arg1 + 0x2a0))(arg1, &var_58, zx.q(arg4))
            
            if (rax_18 != 0)
                sub_140d430a0(arg3)
                result.b = 1
            else if (arg5 == rax_18)
                int64_t rcx_13 = *arg3
                int16_t* var_68
                
                if (rcx_13 == data_143e1e0f8 && arg4 == 1)
                    int64_t rax_19 = *arg1
                    int32_t rdi_4 = 0
                    
                    if (arg1[0x10].d s<= arg4)
                        arg_8 = nullptr
                        (*(rax_19 + 0x338))(arg1, 0)
                        sub_140d430a0(arg3)
                        result.b = 1
                    else
                        var_68 = nullptr
                        int64_t var_60_1 = 0
                        (*(rax_19 + 0x260))(arg1, &var_68)
                        int16_t* rcx_15 = var_68
                        
                        if (rcx_15 != 0)
                            sub_140a74f90(rcx_15)
                        
                        (*(*arg1 + 0x268))(arg1, 0)
                        *(arg1 + 0xcc) = 0
                        
                        if (&arg1[0x12] != &var_58)
                            int64_t rcx_17 = arg1[0x12]
                            
                            if (rcx_17 != 0)
                                sub_140a74f90(rcx_17)
                            
                            arg1[0x12] = 0
                            arg1[0x13] = 0
                        
                        if (arg1[0x14] != 0)
                            arg1[0x15].d = 0
                            
                            if (*(arg1 + 0xac) != 0)
                                sub_1405947f0(&arg1[0x14], 0)
                                rdi_4 = arg1[0x15].d
                            
                            arg1[0x15].d = rdi_4
                            
                            if (rdi_4 s> *(arg1 + 0xac))
                                sub_140594770(&arg1[0x14])
                        
                        sub_14240c790(&arg1[0x21], 0)
                        arg1[0x19].d &= 0xfffffffe
                        sub_140d430a0(arg3)
                        result.b = 1
                else
                    int16_t* const var_78
                    int64_t var_60
                    
                    if (rcx_13 != data_143e1e0b0 || arg4 != 1)
                        if ((arg4 & 0xfffffffd) != 0)
                            if (rcx_13 != data_143e1e008 && rcx_13 != data_143e1e038
                                    && rcx_13 != data_143e1e020)
                                sub_140d430a0(arg3)
                                return 1
                            
                            sub_140d430a0(arg3)
                            return 0
                        
                        result = data_143e1e098
                        
                        if (rcx_13 == data_143e1e1a0
                                || (rcx_13 == result && (arg1[0x16].b & 4) != 0))
                            int32_t rdx_44 = arg1[0x16].d
                            
                            if ((rdx_44.b & 2) == 0)
                                int32_t r8_24 = arg1[0x22].d
                                
                                if (r8_24 == 0)
                                    sub_14241f4d0(arg1)
                                else
                                    if (rcx_13 == result)
                                        arg1[0x16].d = rdx_44 | 1
                                    
                                    if (*(arg1[0x23] + 0x54) == 0)
                                        int32_t rdx_47 = arg1[0x1a].d + 1
                                        int32_t rax_70 = r8_24
                                        
                                        if (r8_24 s>= 0x14)
                                            rax_70 = 0x14
                                        
                                        if (rdx_47 s>= rax_70)
                                            int32_t rcx_115 = *(arg1 + 0xcc)
                                            
                                            if (rcx_115 s>= r8_24 - 0x14)
                                                *(arg1 + 0xcc) = 0
                                            else
                                                *(arg1 + 0xcc) = rcx_115 + 1
                                        else
                                            arg1[0x1a].d = rdx_47
                                    else
                                        sub_1423ffc90(&arg_8)
                                
                                sub_14241fa70(arg1)
                            
                            goto label_142414f55
                        
                        if (rcx_13 == data_143e1e1d0
                                || (rcx_13 == result && (arg1[0x16].b & 4) == 0))
                            int32_t rdx_40 = arg1[0x16].d
                            
                            if ((rdx_40.b & 2) != 0)
                                sub_140d430a0(arg3)
                                result.b = 1
                            else
                                int32_t r8_22 = arg1[0x22].d
                                
                                if (r8_22 == 0)
                                    sub_14241f4d0(arg1)
                                label_142414eaa:
                                    sub_14241fa70(arg1)
                                    sub_140d430a0(arg3)
                                    result.b = 1
                                else if (rcx_13 != result)
                                    if (r8_22 s<= 1)
                                        goto label_142414eaa
                                    
                                label_142414d40:
                                    int32_t rcx_94 = arg1[0x1a].d
                                    
                                    if (*(arg1[0x23] + 0x54) != 0)
                                        int32_t rdx_43 = arg1[0x22].d
                                        int32_t rax_59 = rdx_43
                                        
                                        if (rdx_43 s>= 0x14)
                                            rax_59 = 0x14
                                        
                                        if (rcx_94 + 1 s>= rax_59)
                                            int32_t rcx_97 = *(arg1 + 0xcc)
                                            
                                            if (rcx_97 s>= rdx_43 - 0x14)
                                                *(arg1 + 0xcc) = 0
                                                sub_14241fa70(arg1)
                                                sub_140d430a0(arg3)
                                                result.b = 1
                                            else
                                                *(arg1 + 0xcc) = rcx_97 + 1
                                                sub_14241fa70(arg1)
                                                sub_140d430a0(arg3)
                                                result.b = 1
                                        else
                                            arg1[0x1a].d = rcx_94 + 1
                                            sub_14241fa70(arg1)
                                            sub_140d430a0(arg3)
                                            result.b = 1
                                    else if (rcx_94 s<= 0)
                                        int32_t rax_63 = *(arg1 + 0xcc)
                                        
                                        if (rax_63 s<= 0)
                                            int32_t rax_66 = arg1[0x22].d - 0x15
                                            
                                            if (rax_66 s<= 0)
                                                rax_66 = 0
                                            
                                            *(arg1 + 0xcc) = rax_66
                                            int32_t rcx_106 = arg1[0x22].d
                                            
                                            if (rcx_106 u> 0x14)
                                                *(arg1 + 0xcc) = rax_66 + 1
                                                arg1[0x1a].d += 0x13
                                                arg1[0x19].d &= 0xfffffffe
                                                sub_14241fa70(arg1)
                                                sub_140d430a0(arg3)
                                                result.b = 1
                                            else
                                                arg1[0x1a].d += rcx_106 - 1
                                                arg1[0x19].d &= 0xfffffffe
                                                sub_14241fa70(arg1)
                                                sub_140d430a0(arg3)
                                                result.b = 1
                                        else
                                            *(arg1 + 0xcc) = rax_63 - 1
                                            arg1[0x19].d &= 0xfffffffe
                                            sub_14241fa70(arg1)
                                            sub_140d430a0(arg3)
                                            result.b = 1
                                    else
                                        arg1[0x1a].d = rcx_94 - 1
                                        sub_14241fa70(arg1)
                                        sub_140d430a0(arg3)
                                        result.b = 1
                                else
                                    arg1[0x16].d = rdx_40 | 1
                                    
                                    if (r8_22 s<= 1)
                                        goto label_142414eaa
                                    
                                    int16_t* const r14_4 = &data_142d40450
                                    int16_t* rdx_42
                                    
                                    if (arg1[0x10].d == 0)
                                        rdx_42 = &data_142d40450
                                    else
                                        rdx_42 = arg1[0xf]
                                    
                                    if (arg1[0x15].d != 0)
                                        r14_4 = arg1[0x14]
                                    
                                    if (sub_140a54510(r14_4, rdx_42) == 0)
                                        goto label_142414d40
                                    
                                    sub_14241fa70(arg1)
                                    sub_140d430a0(arg3)
                                    result.b = 1
                        else if (rcx_13 == data_143e1e080)
                            int32_t r8_4 = arg1[0x11].d
                            
                            if (r8_4 s<= 0)
                                sub_140d430a0(arg3)
                                result.b = 1
                            else
                                int32_t rax_29 = arg1[0x10].d
                                int16_t* const r14_2 = &data_142d40450
                                int64_t rsi_5 = -1
                                int32_t rdx_13 = rax_29 - 1
                                
                                if (rax_29 == 0)
                                    rdx_13 = -1
                                
                                int32_t rcx_41 = rax_29 - 1
                                
                                if (rax_29 == 0)
                                    rcx_41 = -1
                                
                                if (rax_29 == 0)
                                    rcx_41 = 0
                                
                                int32_t rcx_42 = rcx_41 - r8_4
                                int16_t* const r8_5
                                
                                if (rax_29 != 0)
                                    r8_5 = arg1[0xf]
                                else
                                    rdx_13 = 0
                                    r8_5 = &data_142d40450
                                
                                int32_t rax_30
                                
                                if (rcx_42 s>= 0)
                                    rax_30 = rdx_13
                                    
                                    if (rcx_42 s< rdx_13)
                                        rax_30 = rcx_42
                                else
                                    rax_30 = 0
                                
                                int16_t* const r13_1 = nullptr
                                int32_t rdx_14 = 0
                                var_78 = nullptr
                                int64_t var_70
                                var_70.d = 0
                                void* r15_1 = &r8_5[sx.q(rdx_13) - sx.q(rax_30)]
                                int32_t rcx_45 = 0
                                var_70:4.d = 0
                                
                                if (r15_1 != 0 && *r15_1 != 0)
                                    do
                                        rsi_5 += 1
                                    while (*(r15_1 + (rsi_5 << 1)) != 0)
                                    
                                    if (rsi_5.d + 1 s> 0)
                                        sub_1405947f0(&var_78, rsi_5.d + 1)
                                        rcx_45 = var_70:4.d
                                        rdx_14 = var_70.d
                                        r13_1 = var_78
                                    
                                    int32_t rax_32 = rsi_5.d + 1 + rdx_14
                                    var_70.d = rax_32
                                    
                                    if (rax_32 s> rcx_45)
                                        sub_140594770(&var_78)
                                        r13_1 = var_78
                                    
                                    UnDecorator::getReferenceType(r13_1, r15_1, (rsi_5.d + 1) * 2)
                                    var_78 = r13_1
                                
                                if (r15_1 == 0 || *r15_1 == 0 || var_70.d == 0)
                                    var_78 = &data_142d40450
                                
                                int32_t rdx_17 = arg1[0x11].d
                                int32_t rcx_49 = arg1[0x10].d
                                int64_t* rax_33
                                
                                if (rcx_49 == 0)
                                    rax_33 = &data_142d40450
                                else
                                    rax_33 = arg1[0xf]
                                
                                arg_8 = rax_33
                                int32_t rsi_7 = rcx_49 - 1
                                
                                if (rcx_49 == 0)
                                    rsi_7 = 0
                                
                                if (rdx_17 - 1 s< 0)
                                    rsi_7 = 0
                                else if (rdx_17 s<= rsi_7)
                                    rsi_7 = rdx_17 - 1
                                
                                var_68 = nullptr
                                int32_t rdx_18 = 0
                                var_60.d = 0
                                int32_t rcx_50 = 0
                                var_60:4.d = 0
                                int16_t* r15_2 = nullptr
                                
                                if (rax_33 != 0 && *rax_33 != 0 && rsi_7 s> 0)
                                    if (rsi_7 + 1 s> 0)
                                        sub_1405947f0(&var_68, rsi_7 + 1)
                                        rcx_50 = var_60:4.d
                                        rdx_18 = var_60.d
                                        r15_2 = var_68
                                    
                                    int32_t rax_36 = rdx_18 + 1 + rsi_7
                                    var_60.d = rax_36
                                    
                                    if (rax_36 s> rcx_50)
                                        sub_140594770(&var_68)
                                        r15_2 = var_68
                                    
                                    UnDecorator::getReferenceType(r15_2, arg_8, rsi_7 * 2)
                                    int64_t rcx_54 = sx.q(var_60.d)
                                    r15_2[rcx_54 - 1] = 0
                                    
                                    if (rcx_54.d != 0)
                                        r14_2 = r15_2
                                
                                sub_140a2e390(&var_58, u"%s%s", r14_2)
                                (*(*arg1 + 0x260))(arg1, &var_58)
                                int64_t rcx_57 = var_58
                                
                                if (rcx_57 != 0)
                                    sub_140a74f90(rcx_57)
                                
                                if (r15_2 != 0)
                                    sub_140a74f90(r15_2)
                                
                                if (r13_1 != 0)
                                    sub_140a74f90(r13_1)
                                
                                (*(*arg1 + 0x268))(arg1, zx.q(arg1[0x11].d - 1))
                                arg1[0x19].d &= 0xfffffffe
                                sub_140d430a0(arg3)
                                result.b = 1
                        else if (rcx_13 != data_143e1e200)
                            int32_t rdx_36
                            
                            if (rcx_13 == data_143e1e188)
                                int32_t rdx_34 = arg1[0x11].d
                                
                                if ((arg1[0x16].b & 2) == 0)
                                    rdx_36 = rdx_34 - 1
                                    
                                    if (rdx_36 s<= 0)
                                        rdx_36 = 0
                                else
                                    int32_t rsi_11 =
                                        sub_140a23cf0(&arg1[0xf], &data_142d404d4, 0, 1, rdx_34)
                                    int32_t rax_50 = sub_140a23cf0(&arg1[0xf], &data_142d404c4, 0, 
                                        1, arg1[0x11].d)
                                    
                                    if (rax_50 s>= rsi_11)
                                        rsi_11 = rax_50
                                    
                                    if (rsi_11 s<= 0)
                                        rsi_11 = 0
                                    
                                    rdx_36 = rsi_11
                                
                                goto label_142414c62
                            
                            if (rcx_13 == data_143e1e1b8)
                                if ((arg1[0x16].b & 2) == 0)
                                    int32_t rax_54 = arg1[0x10].d
                                    int32_t rcx_86 = rax_54 - 1
                                    
                                    if (rax_54 == 0)
                                        rcx_86 = 0
                                    
                                    rdx_36 = arg1[0x11].d + 1
                                    
                                    if (rcx_86 s<= rdx_36)
                                        rdx_36 = rcx_86
                                else
                                    int32_t rax_51 =
                                        sub_140a23cf0(&arg1[0xf], &data_142d404d4, 1, 0, 0xffffffff)
                                    int32_t rax_52 =
                                        sub_140a23cf0(&arg1[0xf], &data_142d404c4, 1, 0, 0xffffffff)
                                    int32_t r8_19 = rax_52
                                    
                                    if (rax_51 s>= 0)
                                        if (rax_52 s< 0)
                                            r8_19 = rax_51
                                        else if (rax_51 s<= r8_19)
                                            r8_19 = rax_51
                                    
                                    if (r8_19 == 0xffffffff)
                                        int32_t r8_20 = arg1[0x10].d
                                        
                                        if (r8_20 == 0)
                                            r8_19 = 0
                                        else
                                            r8_19 = r8_20 - 1
                                    
                                    int32_t rax_53 = arg1[0x10].d
                                    int32_t rcx_85 = arg1[0x11].d
                                    int32_t rdx_37 = rax_53 - 1
                                    
                                    if (rax_53 == 0)
                                        rdx_37 = 0
                                    
                                    if (rcx_85 s>= r8_19)
                                        r8_19 = rcx_85
                                    
                                    if (rdx_37 s<= r8_19)
                                        r8_19 = rdx_37
                                    
                                    rdx_36 = r8_19
                                
                                goto label_142414c62
                            
                            if (rcx_13 != data_143e1e170)
                                if (rcx_13 != data_143e1e158)
                                    goto label_142414f55
                                
                                int32_t rax_56 = arg1[0x10].d
                                int64_t r8_21 = *arg1
                                uint64_t rdx_39 = zx.q(rax_56 - 1)
                                
                                if (rax_56 == 0)
                                    rdx_39 = 0
                                
                                (*(r8_21 + 0x268))(arg1, rdx_39, r8_21)
                                sub_140d430a0(arg3)
                                result.b = 1
                            else
                                rdx_36 = 0
                            label_142414c62:
                                (*(*arg1 + 0x268))(arg1, rdx_36)
                                sub_140d430a0(arg3)
                                result.b = 1
                        else
                            int32_t rdx_24 = arg1[0x10].d
                            int64_t rsi_8 = -1
                            int32_t r8_12 = arg1[0x11].d
                            int32_t rcx_62 = rdx_24 - 1
                            
                            if (rdx_24 == 0)
                                rcx_62 = -1
                            
                            int32_t rax_39 = rdx_24 - 1
                            
                            if (rdx_24 == 0)
                                rax_39 = -1
                            
                            if (rdx_24 == 0)
                                rax_39 = 0
                            
                            if (r8_12 s>= rax_39)
                                sub_140d430a0(arg3)
                                result.b = 1
                            else
                                int16_t* r14_3 = &data_142d40450
                                int32_t rax_40 = rcx_62
                                
                                if (rdx_24 == 0)
                                    rax_40 = 0
                                
                                int32_t rax_41 = rax_40 - r8_12
                                int16_t* const r8_13
                                
                                if (rdx_24 != 0)
                                    r8_13 = arg1[0xf]
                                else
                                    rcx_62 = 0
                                    r8_13 = &data_142d40450
                                
                                int32_t rdx_25
                                
                                if (rax_41 - 1 s>= 0)
                                    rdx_25 = rcx_62
                                    
                                    if (rax_41 s<= rcx_62)
                                        rdx_25 = rax_41 - 1
                                else
                                    rdx_25 = 0
                                
                                int16_t* r13_2 = nullptr
                                int32_t rdx_26 = 0
                                var_68 = nullptr
                                var_60.d = 0
                                void* r15_3 = &r8_13[sx.q(rcx_62) - sx.q(rdx_25)]
                                int32_t rcx_65 = 0
                                var_60:4.d = 0
                                
                                if (r15_3 != 0 && *r15_3 != 0)
                                    do
                                        rsi_8 += 1
                                    while (*(r15_3 + (rsi_8 << 1)) != 0)
                                    
                                    if (rsi_8.d + 1 s> 0)
                                        sub_1405947f0(&var_68, rsi_8.d + 1)
                                        rcx_65 = var_60:4.d
                                        rdx_26 = var_60.d
                                        r13_2 = var_68
                                    
                                    int32_t rax_43 = rsi_8.d + 1 + rdx_26
                                    var_60.d = rax_43
                                    
                                    if (rax_43 s> rcx_65)
                                        sub_140594770(&var_68)
                                        r13_2 = var_68
                                    
                                    UnDecorator::getReferenceType(r13_2, r15_3, (rsi_8.d + 1) * 2)
                                    var_78 = r13_2
                                
                                if (r15_3 == 0 || *r15_3 == 0 || var_60.d == 0)
                                    var_78 = &data_142d40450
                                
                                int32_t rcx_69 = arg1[0x10].d
                                int32_t rdx_29 = arg1[0x11].d
                                int64_t* rax_44
                                
                                if (rcx_69 == 0)
                                    rax_44 = &data_142d40450
                                else
                                    rax_44 = arg1[0xf]
                                
                                arg_8 = rax_44
                                int32_t rsi_10 = rcx_69 - 1
                                
                                if (rcx_69 == 0)
                                    rsi_10 = 0
                                
                                if (rdx_29 s< 0)
                                    rsi_10 = 0
                                else if (rdx_29 s< rsi_10)
                                    rsi_10 = rdx_29
                                
                                var_68 = nullptr
                                int32_t rdx_30 = 0
                                var_60.d = 0
                                int32_t rcx_70 = 0
                                var_60:4.d = 0
                                int16_t* r15_4 = nullptr
                                
                                if (rax_44 != 0 && *rax_44 != 0 && rsi_10 s> 0)
                                    if (rsi_10 + 1 s> 0)
                                        sub_1405947f0(&var_68, rsi_10 + 1)
                                        rcx_70 = var_60:4.d
                                        rdx_30 = var_60.d
                                        r15_4 = var_68
                                    
                                    int32_t rax_47 = rdx_30 + 1 + rsi_10
                                    var_60.d = rax_47
                                    
                                    if (rax_47 s> rcx_70)
                                        sub_140594770(&var_68)
                                        r15_4 = var_68
                                    
                                    UnDecorator::getReferenceType(r15_4, arg_8, rsi_10 * 2)
                                    int64_t rcx_74 = sx.q(var_60.d)
                                    r15_4[rcx_74 - 1] = 0
                                    
                                    if (rcx_74.d != 0)
                                        r14_3 = r15_4
                                
                                sub_140a2e390(&var_58, u"%s%s", r14_3)
                                (*(*arg1 + 0x260))(arg1, &var_58)
                                int64_t rcx_77 = var_58
                                
                                if (rcx_77 != 0)
                                    sub_140a74f90(rcx_77)
                                
                                if (r15_4 != 0)
                                    sub_140a74f90(r15_4)
                                
                                if (r13_2 == 0)
                                    sub_140d430a0(arg3)
                                    result.b = 1
                                else
                                    sub_140a74f90(r13_2)
                                    sub_140d430a0(arg3)
                                    result.b = 1
                    else
                        int32_t rdi_5 = 0
                        
                        if (arg1[0x10].d s<= arg4)
                            int64_t rax_28 = *arg1
                            arg_8 = nullptr
                            (*(rax_28 + 0x338))(arg1, 0)
                        else
                            int32_t rsi_3 = arg1[0x10].d
                            int64_t r14_1 = arg1[0xf]
                            var_68 = nullptr
                            var_60.d = rsi_3
                            
                            if (rsi_3 != 0)
                                sub_1405a4c70(&var_68, rsi_3, 0)
                                memcpy(var_68, r14_1, rsi_3 * 2)
                            else
                                var_60:4.d = 0
                            
                            int64_t rax_21 = *arg1
                            var_78 = nullptr
                            int64_t var_70_1 = 0
                            (*(rax_21 + 0x260))(arg1, &var_78)
                            int16_t* const rcx_26 = var_78
                            
                            if (rcx_26 != 0)
                                sub_140a74f90(rcx_26)
                            
                            (*(*arg1 + 0x268))(arg1, 0)
                            (*(*arg1 + 0x270))(arg1, &var_68)
                            int64_t rax_24 = *arg1
                            var_78 = nullptr
                            int64_t var_70_2 = 0
                            (*(rax_24 + 0x280))(arg1, &var_78)
                            int16_t* const rcx_30 = var_78
                            
                            if (rcx_30 != 0)
                                sub_140a74f90(rcx_30)
                            
                            if (arg1[0x1b] == data_143f5bc58)
                                int64_t rax_26 = *arg1
                                arg_8 = nullptr
                                (*(rax_26 + 0x338))(arg1, 0)
                            
                            (*(*arg1 + 0x2c0))(arg1)
                            int16_t* rcx_33 = var_68
                            
                            if (rcx_33 != 0)
                                sub_140a74f90(rcx_33)
                        
                        if (&arg1[0x12] != &var_58)
                            int64_t rcx_35 = arg1[0x12]
                            
                            if (rcx_35 != 0)
                                sub_140a74f90(rcx_35)
                            
                            arg1[0x12] = 0
                            arg1[0x13] = 0
                        
                        if (arg1[0x14] == 0)
                            sub_140d430a0(arg3)
                            result.b = 1
                        else
                            arg1[0x15].d = 0
                            
                            if (*(arg1 + 0xac) != 0)
                                sub_1405947f0(&arg1[0x14], 0)
                                rdi_5 = arg1[0x15].d
                            
                            arg1[0x15].d = rdi_5
                            
                            if (rdi_5 s<= *(arg1 + 0xac))
                                sub_140d430a0(arg3)
                                result.b = 1
                            else
                                sub_140594770(&arg1[0x14])
                                sub_140d430a0(arg3)
                                result.b = 1
            else
                sub_140d430a0(arg3)
                result.b = 0
        else
            int64_t* rbx_1 = arg3[2]
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            result.b = 1
else
    while (*rdx_1 != *arg3)
        rdx_1 = &rdx_1[3]
        
        if (rdx_1 == rax_5)
            goto label_142414272
    
    if (arg4 != 0 || rdi_1 != 0)
        goto label_142414272
    
    int64_t rdi_2 = arg1[0x1b]
    int64_t rdx_3
    
    if (rdi_2 != data_143f5bc58)
        if (rdi_2 == data_143f5bcb8)
            arg_8 = nullptr
            rdx_3 = 0
            goto label_142414372
        
        int32_t rcx_8
        rcx_8.b = (rdi_2 u>> 0x20).d == 0
        
        if ((rcx_8.b & sub_140b5b8a0(arg1[0x1b].d, 0)) != 0)
            rdx_3 = data_143f5bc58
            goto label_142414372
        
        sub_140d430a0(arg3)
        result.b = 1
    else
        rdx_3 = data_143f5bcb8
    label_142414372:
        (*(*arg1 + 0x338))(arg1, rdx_3)
        arg1[0x16].d |= 1
        sub_140d430a0(arg3)
        result.b = 1
return result
