// 函数: sub_1426691e0
// 地址: 0x1426691e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rax_2 = 1
void* const r13 = nullptr
int32_t r9 = 0
uint64_t rdx = 0
int64_t i_4 = sx.q(arg1[0x10].d)
int32_t var_e8 = 0
int32_t var_f8 = 1

if (i_4.d s> 0)
    do
        int32_t rdi_1 = r9
        bool rcx = false
        
        if (rdx.d u<= 0xf)
            rcx = (arg1[0x11].d & rax_2) != 0
        
        r9 += 1
        
        if (rcx == 0)
            r9 = rdi_1
        
        rdx = zx.q(rdx.d + 1)
        rax_2 = rol.d(rax_2, 1)
    while (rdx.d s< i_4.d)
    
    var_e8 = r9

uint32_t rbx_1 = (i_4 + 0x1f).d u>> 5
int64_t* r12 = nullptr
int64_t* var_a8 = nullptr
int32_t var_9c = 0x80
int32_t var_a0 = i_4.d
int64_t var_b8

if (rbx_1 u<= 4)
    var_b8 = 0
    int64_t var_b0_1 = 0
else
    sub_1405a4a00(&var_b8, 0, rbx_1, 4)
    int64_t* rsi_1 = &var_b8
    uint32_t var_9c_1 = rbx_1 << 5
    
    if (var_a8 != 0)
        rsi_1 = var_a8
    
    if (rbx_1 u> 8)
        memset(rsi_1, 0, zx.q(rbx_1) << 2)
    else if (rbx_1 != 0)
        __builtin_memset(rsi_1, 0, zx.q(rbx_1) << 2)
    
    rdx = rsi_1 + (zx.q(rbx_1 - 1) << 2)
    *rdx &= 0xffffffff u>> ((neg.d(var_a0)).b & 0x1f)
    r12 = var_a8

int64_t* rbx_2 = arg1
uint64_t r14
r14.b = 0
char var_108 = 0
uint64_t rax_9 = (*(*rbx_2 + 0x150))(rbx_2, rdx)
void* rax_10 = sub_14269c200()
void* var_c0 = rax_10
char var_98
sub_142640410(&var_98, rax_9, rax_10, 5)
int64_t i_3 = i_4
int64_t i_2 = i_4
void* var_90
int64_t var_88
char var_74
int64_t var_60

if (var_74 == 0)
    int64_t* var_68
    int64_t* rsi_2 = var_68
    
    while (zx.d(r14.b) s< i_4.d)
        if (rsi_2 != 0)
            int32_t rax_12 = *(rsi_2 + 0xc)
            void* const rax_18
            
            if (rax_12 s>= data_143e1d9b4)
                rax_18 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_12)
                uint32_t rdx_3 = zx.d(temp0_1)
                int32_t rax_14 = temp1_1 + rdx_3
                rax_18 = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_14.w) - rdx_3) * 0x18
            
            if (((*(rax_18 + 8) u>> 0x1d).b & 1) == 0)
                if (sub_140d226f0(rsi_2, sub_1425be5e0()) == rax_9)
                label_142669418:
                    r14 = 0
                    int64_t r15 = 0
                    
                    if (i_3 s> 0)
                        int64_t* rdi_5 = &var_b8
                        
                        if (r12 != 0)
                            rdi_5 = r12
                        
                        int64_t r12_1 = 0
                        int64_t* var_d8_1 = rdi_5
                        
                        do
                            int32_t temp5_1
                            int32_t temp6_1
                            temp5_1:temp6_1 = sx.q(r14.d)
                            int64_t r8_5 = sx.q((temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                            int32_t rdx_10 = 1 << (r14.b & 0x1f)
                            
                            if ((*(rdi_5 + (r8_5 << 2)) & rdx_10) == 0)
                                int64_t r13_1 = rsi_2[2]
                                int32_t* rbx_5 = rbx_2[0xf] + 0x50 + r12_1
                                uint64_t rax_28 = sub_140d3c6e0(rbx_5)
                                uint64_t rdi_6 = rax_28
                                
                                if (rax_28 != 0)
                                label_1426694f4:
                                    void* rax_32 = sub_140bdf2e0()
                                    void* rdx_12 = *(rdi_6 + 0x10)
                                    int64_t rax_33 = sx.q(*(rax_32 + 0x38))
                                    
                                    if (rax_33.d s> *(rdx_12 + 0x38)
                                            || *(*(rdx_12 + 0x30) + (rax_33 << 3))
                                            != rax_32 + 0x30)
                                        rdi_6 = 0
                                    else
                                        void* rax_35 = sub_142452380()
                                        
                                        if (rax_35 == 0)
                                            rdi_6 = 0
                                        else
                                            int64_t rax_36 = sx.q(*(rax_35 + 0x38))
                                            
                                            if (rax_36.d s> *(rdi_6 + 0x38)
                                                    || *(*(rdi_6 + 0x30) + (rax_36 << 3))
                                                    != rax_35 + 0x30)
                                                rdi_6 = 0
                                            else
                                                void* rax_38 = sub_14269c200()
                                                
                                                if (rax_38 == 0)
                                                    rdi_6 = 0
                                                else
                                                    int64_t rax_39 = sx.q(*(rax_38 + 0x38))
                                                    
                                                    if (rax_39.d s> *(rdi_6 + 0x38)
                                                            || *(*(rdi_6 + 0x30) + (rax_39 << 3))
                                                            != rax_38 + 0x30)
                                                        rdi_6 = 0
                                else if (*(rbx_5 + 0x10) == rax_28)
                                    rdi_6 = 0
                                else
                                    if (rax_28.d == data_1439aaa30)
                                        data_1439aaa30 = 0
                                    else
                                        rax_28 = zx.q(data_1439aaa30)
                                    
                                    if (rax_28.d != rbx_5[2] || *rbx_5 != 0xffffffff)
                                        void* rax_29 = sub_140d2bce0(&rbx_5[4])
                                        sub_140d3a3a0(rbx_5, rax_29)
                                        
                                        if (rax_29 != 0 || data_143e1d7b4 == rax_29.b)
                                            int32_t rax_30 = 0
                                            
                                            if (0 == data_1439aaa30)
                                                data_1439aaa30 = 0
                                            else
                                                rax_30 = data_1439aaa30
                                            
                                            rbx_5[2] = rax_30
                                        
                                        uint64_t rax_31 = sub_140d3c6e0(rbx_5)
                                        rdi_6 = rax_31
                                        
                                        if (rax_31 != 0)
                                            goto label_1426694f4
                                        
                                        rdi_6 = 0
                                    else
                                        rdi_6 = 0
                                
                                rbx_2 = arg1
                                
                                if (r13_1 == rdi_6 &&
                                        (*(*rsi_2 + 0x678))(rsi_2, sx.q(r14.d) * 0x78 + rbx_2[0xf]) == 1)
                                    *(var_d8_1 + (r8_5 << 2)) |= rdx_10
                                    r14.b = var_108 + 1
                                    var_108 = r14.b
                                    break
                                
                                rdi_5 = var_d8_1
                            
                            r14 = zx.q(r14.d + 1)
                            r15 += 1
                            r12_1 += 0x78
                        while (r15 s< i_2)
                else
                    int64_t i = sub_141dc9840(rsi_2)
                    int64_t* rax_23 = sub_141baa510(rax_9)
                    int64_t* rdx_7 = *rax_23
                    void* rcx_17 = &rdx_7[sx.q(rax_23[1].d)]
                    
                    if (rdx_7 != rcx_17)
                        while (*rdx_7 != i)
                            rdx_7 = &rdx_7[1]
                            
                            if (rdx_7 == rcx_17)
                                goto label_1426695c8
                        
                        i_3 = i_2
                        goto label_142669418
        
    label_1426695c8:
        int32_t var_78
        int32_t r15_2 = var_78 + 1
        int32_t var_80
        int32_t rdx_18 = var_80
        int32_t var_58
        
        if (r15_2 s>= var_58 + rdx_18)
        label_142669766:
            rbx_2 = arg1
            r13 = nullptr
            r14 = zx.q(var_108)
            i_3 = i_2
            int64_t var_68_1 = 0
            char var_74_1 = 1
            break
        
        int64_t r12_2 = sx.q(r15_2) << 3
        
        while (true)
            if (r15_2 s>= rdx_18)
                rsi_2 = *(var_60 + (sx.q(r15_2 - rdx_18) << 3))
            else
                rsi_2 = *(r12_2 + var_88)
            
            int32_t var_70 = var_70 + 1
            
            if (rsi_2 != 0)
                void* rax_49 = sub_141dc9840(rsi_2)
                
                if (rax_49 != 0)
                    void* const rax_56
                    
                    if ((var_98 & 1) != 0)
                        int32_t rax_50 = *(rsi_2 + 0xc)
                        
                        if (rax_50 s>= data_143e1d9b4)
                            rax_56 = nullptr
                        else
                            int16_t temp7_1
                            int32_t temp8_1
                            temp7_1:temp8_1 = sx.q(rax_50)
                            uint32_t rdx_20 = zx.d(temp7_1)
                            int32_t rax_52 = temp8_1 + rdx_20
                            rax_56 = *(data_143e1d9a0 + (sx.q(rax_52 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_52.w) - rdx_20) * 0x18
                    
                    if ((var_98 & 1) == 0 || ((*(rax_56 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_38 = var_98.d
                        
                        if (((rcx_38 u>> 1).b & 1) == 0)
                            goto label_142669693
                        
                        uint64_t rax_60 = sub_1405949a0()
                        
                        if (rax_60.b != 0)
                            rcx_38 = var_98.d
                        label_142669693:
                            
                            if (((rcx_38 u>> 2).b & 1) == 0)
                            label_14266970f:
                                
                                if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_49) == var_90)
                                    if (rax_49 == *(var_90 + 0x30))
                                        break
                                    
                                    void* rax_62 = sub_1425bd0d0()
                                    void* rdx_23 = rsi_2[2]
                                    int64_t rax_63 = sx.q(*(rax_62 + 0x38))
                                    
                                    if (rax_63.d s> *(rdx_23 + 0x38))
                                        break
                                    
                                    if (*(*(rdx_23 + 0x30) + (rax_63 << 3)) != rax_62 + 0x30)
                                        break
                            else
                                if ((*(rax_49 + 0x1f4) & 0x20) == 0 || (*(rax_49 + 0x1f6) & 8) != 0)
                                    rax_60 = zx.q(*(rax_49 + 0x1f5))
                                
                                if (((*(rax_49 + 0x1f4) & 0x20) != 0
                                        && (*(rax_49 + 0x1f6) & 8) == 0) || (rax_60.b & 0x40) != 0
                                        || rax_60.b s< 0)
                                    r14.b = 1
                                else
                                    r14.b = 0
                                
                                void* rcx_40 = *(rax_49 + 0xb8)
                                char* rbx_6 = *(rax_49 + 0x248)
                                
                                if (rcx_40 != 0)
                                    rax_60 = sub_1424359b0(rcx_40)
                                
                                if (rcx_40 == 0 || rax_60 == 0 || rbx_6 == rax_60)
                                    rcx_40.b = 1
                                else
                                    rcx_40.b = 0
                                
                                if (rbx_6 == 0 || *rbx_6 == 2)
                                    rax_60.b = 1
                                else
                                    rax_60.b = 0
                                
                                if (rcx_40.b != 0 || rax_60.b != 0)
                                    rax_60.b = 1
                                
                                if (r14.b != 0 && rax_60.b != 0)
                                    goto label_14266970f
                
                rdx_18 = var_80
            
            r15_2 += 1
            r12_2 += 8
            
            if (r15_2 s>= var_58 + rdx_18)
                goto label_142669766
        
        rbx_2 = arg1
        r13 = nullptr
        r14 = zx.q(var_108)
        i_3 = i_2
        int64_t* var_68_2 = rsi_2
        var_78 = r15_2
        
        if (var_74 != 0)
            break
        
        r12 = var_a8
        i_4 = zx.q(i_3.d)

char var_40

if (var_40 != 0)
    char var_40_1 = 0
    int64_t var_48
    sub_142441560(var_90, var_48)
    
    if (var_60 != 0)
        sub_140a74f90(var_60)
    
    if (var_88 != 0)
        sub_140a74f90(var_88)

if (zx.d(r14.b) s< var_e8)
    int32_t rsi_3 = 0
    
    if (i_3 s> 0)
        int64_t* r12_3 = &var_b8
        int64_t r14_1 = 0
        
        if (var_a8 != 0)
            r12_3 = var_a8
        
        int64_t i_1
        
        do
            int32_t rax_66 = rsi_3
            void* r15_4 = rbx_2[0xf] + r14_1
            
            if (rsi_3 s< 0)
                rax_66 = rsi_3 + 0x1f
            
            if ((*(r12_3 + (sx.q(rax_66 s>> 5) << 2)) & var_f8) == 0)
                bool rax_69 = false
                
                if (rsi_3 u<= 0xf)
                    rax_69 = (rbx_2[0x11].d & var_f8) != 0
                
                if (rax_69 != 0)
                    uint64_t rax_70 = sub_140d3c6e0(r15_4 + 0x50)
                    uint64_t rdi_11 = rax_70
                    
                    if (rax_70 != 0)
                    label_14266989c:
                        void* rax_74 = sub_140bdf2e0()
                        void* rdx_26 = *(rdi_11 + 0x10)
                        int64_t rax_75 = sx.q(*(rax_74 + 0x38))
                        
                        if (rax_75.d s> *(rdx_26 + 0x38)
                                || *(*(rdx_26 + 0x30) + (rax_75 << 3)) != rax_74 + 0x30)
                            rbx_2 = arg1
                        else
                            void* rax_77 = sub_142452380()
                            
                            if (rax_77 == 0)
                                rbx_2 = arg1
                            else
                                int64_t rax_78 = sx.q(*(rax_77 + 0x38))
                                
                                if (rax_78.d s> *(rdi_11 + 0x38)
                                        || *(*(rdi_11 + 0x30) + (rax_78 << 3)) != rax_77 + 0x30)
                                    rbx_2 = arg1
                                else
                                    void* rax_80 = sub_14269c200()
                                    
                                    if (rax_80 == 0)
                                        rbx_2 = arg1
                                    else
                                        int64_t rax_81 = sx.q(*(rax_80 + 0x38))
                                        
                                        if (rax_81.d s> *(rdi_11 + 0x38)
                                                || *(*(rdi_11 + 0x30) + (rax_81 << 3))
                                                != rax_80 + 0x30)
                                            rbx_2 = arg1
                                        else
                                            uint64_t rax_83 = sub_140d3c6e0(r15_4 + 0x50)
                                            uint64_t rdi_13 = rax_83
                                            
                                            if (rax_83 != 0)
                                            label_1426699a2:
                                                void* rax_87 = sub_140bdf2e0()
                                                void* rdx_30 = *(rdi_13 + 0x10)
                                                int64_t rax_88 = sx.q(*(rax_87 + 0x38))
                                                
                                                if (rax_88.d s> *(rdx_30 + 0x38)
                                                        || *(*(rdx_30 + 0x30) + (rax_88 << 3))
                                                        != rax_87 + 0x30)
                                                    rdi_13 = 0
                                                else
                                                    void* rax_90 = sub_142452380()
                                                    
                                                    if (rax_90 == 0)
                                                        rdi_13 = 0
                                                    else
                                                        int64_t rax_91 = sx.q(*(rax_90 + 0x38))
                                                        
                                                        if (rax_91.d s> *(rdi_13 + 0x38)
                                                                || *(*(rdi_13 + 0x30) + (rax_91 << 3))
                                                                != rax_90 + 0x30)
                                                            rdi_13 = 0
                                                        else
                                                            void* rax_93 = sub_14269c200()
                                                            
                                                            if (rax_93 == 0)
                                                                rdi_13 = 0
                                                            else
                                                                int64_t rax_94 = sx.q(*(rax_93 + 0x38))
                                                                
                                                                if (rax_94.d s> *(rdi_13 + 0x38)
                                                                        || *(*(rdi_13 + 0x30) + (rax_94 << 3))
                                                                        != rax_93 + 0x30)
                                                                    rdi_13 = 0
                                            else if (*(r15_4 + 0x60) == rax_83)
                                                rdi_13 = 0
                                            else
                                                if (rax_83.d == data_1439aaa30)
                                                    data_1439aaa30 = 0
                                                else
                                                    rax_83 = zx.q(data_1439aaa30)
                                                
                                                if (rax_83.d != *(r15_4 + 0x58)
                                                        || *(r15_4 + 0x50) != 0xffffffff)
                                                    void* rax_84 = sub_140d2bce0(r15_4 + 0x60)
                                                    sub_140d3a3a0(r15_4 + 0x50, rax_84)
                                                    
                                                    if (rax_84 != 0 || data_143e1d7b4 == rax_84.b)
                                                        int32_t rax_85 = 0
                                                        
                                                        if (0 == data_1439aaa30)
                                                            data_1439aaa30 = 0
                                                        else
                                                            rax_85 = data_1439aaa30
                                                        
                                                        *(r15_4 + 0x58) = rax_85
                                                    
                                                    uint64_t rax_86 = sub_140d3c6e0(r15_4 + 0x50)
                                                    rdi_13 = rax_86
                                                    
                                                    if (rax_86 != 0)
                                                        goto label_1426699a2
                                                    
                                                    rdi_13 = 0
                                                else
                                                    rdi_13 = 0
                                            
                                            void* rcx_65 = *(rdi_13 + 0x118)
                                            
                                            if (rcx_65 != 0)
                                                if (((*(rcx_65 + 0x2a8) u>> 4).b & 1) != 0 && (
                                                        *(rax_9 + 0x11a) == 2
                                                        || *(rcx_65 + 0x2ac) != 0))
                                                    goto label_142669a5c
                                                
                                                rbx_2 = arg1
                                            else
                                                (*(*rdi_13 + 0x390))(rdi_13)
                                                rcx_65 = *(rdi_13 + 0x118)
                                                
                                                if (rcx_65 == 0
                                                        || ((*(rcx_65 + 0x2a8) u>> 4).b & 1) == 0
                                                        || (*(rax_9 + 0x11a) != 2
                                                        && *(rcx_65 + 0x2ac) == 0))
                                                    rbx_2 = arg1
                                                else
                                                label_142669a5c:
                                                    rbx_2 = arg1
                                                    int64_t rax_101 =
                                                        (*(*rbx_2 + 0x2d0))(rbx_2, r15_4, 0)
                                                    
                                                    if (rax_101 != 0)
                                                        (*(*rbx_2 + 0x310))(rbx_2, rax_101)
                    else if (*(r15_4 + 0x60) == rax_70)
                        rbx_2 = arg1
                    else
                        if (rax_70.d == data_1439aaa30)
                            data_1439aaa30 = 0
                        else
                            rax_70 = zx.q(data_1439aaa30)
                        
                        if (rax_70.d != *(r15_4 + 0x58) || *(r15_4 + 0x50) != 0xffffffff)
                            void* rax_71 = sub_140d2bce0(r15_4 + 0x60)
                            sub_140d3a3a0(r15_4 + 0x50, rax_71)
                            
                            if (rax_71 != 0 || data_143e1d7b4 == rax_71.b)
                                int32_t rax_72 = 0
                                
                                if (0 == data_1439aaa30)
                                    data_1439aaa30 = 0
                                else
                                    rax_72 = data_1439aaa30
                                
                                *(r15_4 + 0x58) = rax_72
                            
                            uint64_t rax_73 = sub_140d3c6e0(r15_4 + 0x50)
                            rdi_11 = rax_73
                            
                            if (rax_73 != 0)
                                goto label_14266989c
                            
                            rbx_2 = arg1
                        else
                            rbx_2 = arg1
            
            rsi_3 += 1
            r14_1 += 0x78
            i_1 = i_2
            i_2 -= 1
            var_f8 = rol.d(var_f8, 1)
        while (i_1 != 1)

uint64_t result = rbx_2[5]

if (result == 0)
    result = sub_142657070(rbx_2, 0)
    rbx_2[5] = result
else
    if ((*(result + 0x5c) & 8) == 0)
        int32_t rax_104 = *(result + 0xc)
        
        if (rax_104 s< data_143e1d9b4)
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_104)
            uint32_t rdx_36 = zx.d(temp2_1)
            int32_t rax_106 = temp3_1 + rdx_36
            r13 = *(data_143e1d9a0 + (sx.q(rax_106 s>> 0x10) << 3))
                + sx.q(zx.d(rax_106.w) - rdx_36) * 0x18
    
    if ((*(result + 0x5c) & 8) != 0 || ((*(r13 + 8) u>> 0x1d).b & 1) != 0)
        result.b = 1
    else
        result.b = 0
    
    if (result.b != 0)
        result = sub_142657070(rbx_2, 0)
        rbx_2[5] = result

if (var_a8 != 0)
    result = sub_140a74f90(var_a8)

__security_check_cookie(rax_1 ^ &var_128)
return result
