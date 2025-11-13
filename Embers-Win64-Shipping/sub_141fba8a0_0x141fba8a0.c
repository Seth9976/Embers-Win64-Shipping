// 函数: sub_141fba8a0
// 地址: 0x141fba8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t r15 = arg1
int64_t* rcx = *(arg1 + 0x770)
int64_t* rax_3 = (*(*rcx + 0x28))(rcx)
int64_t* r13 = rax_3
int64_t* var_298 = rax_3
int64_t r8 = *rax_3
(*(r8 + 0xf8))(rax_3, zx.q(*(r15 + 0xbec)), r8)
int64_t r8_1 = *r13
(*(r8_1 + 0x100))(r13, zx.q(*(r15 + 0xbf0)), r8_1)
r13[7] = 0x1000000
char rax_4 = *(r15 + 0xe29)
int32_t var_260 = 0
int32_t var_2a8

if (rax_4 != 0 && (*(*r13 + 0x28))(r13) s> 0)
    int64_t* rcx_4 = r13[1]
    var_2a8 = 0
    int32_t* rdx_2 = *rcx_4
    
    if (&rdx_2[1] u> rcx_4[1])
        int32_t* rdx_3 = &var_2a8
        
        if ((*(r13 + 0x29) & 0x20) != 0)
            sub_140b54070(r13, rdx_3, arg3)
        else
            (*(*r13 + 0x150))(r13, rdx_3, 4)
    else
        var_2a8 = *rdx_2
        *rcx_4 += 4

uint64_t var_268

if (*(r15 + 0xe28) != 0)
    if ((*(*r13 + 0x28))(r13) s> 0)
        int64_t* rcx_7 = r13[1]
        var_268 = 0
        int64_t* rdx_4 = *rcx_7
        
        if (&rdx_4[1] u> rcx_7[1])
            uint64_t* rdx_5 = &var_268
            
            if ((*(r13 + 0x29) & 0x20) != 0)
                sub_140b540d0(r13, rdx_5, arg3)
            else
                (*(*r13 + 0x150))(r13, rdx_5, 8)
        else
            var_268 = *rdx_4
            *rcx_7 += 8
    
    arg3 = sub_141fc5230(r15)

bool cond:0 = *(r15 + 0xbe4) u< 6
*(r15 + 0xe20) = 0

if (not(cond:0) && (*(*r13 + 0x28))(r13) s> 0)
    int64_t* rcx_11 = r13[1]
    int32_t* rdx_6 = *rcx_11
    
    if (&rdx_6[1] u> rcx_11[1])
        int32_t* rdx_7 = &var_260
        
        if ((*(r13 + 0x29) & 0x20) != 0)
            sub_140b54070(r13, rdx_7, arg3)
        else
            (*(*r13 + 0x150))(r13, rdx_7, 4)
    else
        var_260 = *rdx_6
        int64_t* rax_19 = r13[1]
        *rax_19 += 4

void* result
int32_t var_f8
int64_t* var_f0
int64_t** var_e8
int32_t var_e0
int32_t var_d8
char i_4
int32_t var_d0
int64_t* var_c8
int64_t var_c0
int32_t var_b8
int64_t var_a8

if (var_260 == *(r15 + 0x760))
    int64_t* rcx_55 = *(r15 + 0x768)
    
    if (rcx_55 != 0)
        sub_141fa9570(r15, rcx_55)
        rcx_55 = *(r15 + 0x768)
    
    int32_t var_230 = 0
    
    if (rcx_55 != 0 && (*(*rcx_55 + 0x698))(rcx_55) != 0)
        int64_t* rcx_57 = *(r15 + 0x768)
        sub_140d3a3a0(&var_268, (*(*rcx_57 + 0x698))(rcx_57))
        void* rbx_6 = *(r15 + 0x150)
        sub_141f87aa0(rbx_6 + 0x50, &var_2a8, var_268)
        int64_t rax_65 = sx.q(var_2a8)
        void* rcx_60
        
        if (rax_65.d != 0xffffffff)
            rcx_60 = *(rbx_6 + 0x50) + rax_65 * 0x14
        
        int32_t rax_67
        
        if (rax_65.d == 0xffffffff || rcx_60 == 0)
            rax_67 = 0
        else
            rax_67 = *(rcx_60 + 8)
        
        var_230 = rax_67
        
        if (rax_67 != 0)
            int64_t* rcx_61 = *(r15 + 0x768)
            sub_141fa9570(r15, (*(*rcx_61 + 0x698))(rcx_61))
    
    sub_141fbf040(r15, 0)
    uint64_t i_6
    i_6.b = 0
    int32_t i = data_143a30408
    int32_t rcx_65 = data_143a30414 + 1
    int64_t r14_2 = *(r15 + 0x140)
    data_143a30414 = rcx_65
    int64_t rdi_4 = sx.q(i - 1)
    
    if (i - 1 s>= 0)
        int64_t rbx_8 = rdi_4 << 4
        int64_t temp0_1
        
        do
            int64_t rcx_66 = data_143a30400
            
            if (*(rbx_8 + rcx_66 + 8) == 0)
                i_6.b = 1
            else
                int64_t* rcx_67 = *(rbx_8 + rcx_66)
                
                if (rcx_67 == 0)
                    i_6.b = 1
                else if ((*(*rcx_67 + 0x50))(rcx_67, r14_2) == 0)
                    i_6.b = 1
            
            rbx_8 -= 0x10
            temp0_1 = rdi_4
            rdi_4 -= 1
        while (temp0_1 - 1 s>= 0)
        rcx_65 = data_143a30414
        i = data_143a30408
    
    data_143a30414 = rcx_65 - 1
    
    if (i_6.b != 0 && rcx_65 - 1 s<= 0)
        i_6 = zx.q(i)
        rdi_4 = 0
        
        if (i s> 0)
            int64_t* rbx_9 = nullptr
            
            do
                int64_t rcx_69 = data_143a30400
                
                if (*(rbx_9 + rcx_69 + 8) == 0)
                    sub_1405a4880(&data_143a30400, rdi_4.d, 1, 1)
                else
                    int64_t* rcx_70 = *(rbx_9 + rcx_69)
                    
                    if (rcx_70 == 0)
                        sub_1405a4880(&data_143a30400, rdi_4.d, 1, 1)
                    else if ((*(*rcx_70 + 0x20))(rcx_70) != 0)
                        sub_1405a4880(&data_143a30400, rdi_4.d, 1, 1)
                    else
                        rdi_4 = zx.q(rdi_4.d + 1)
                        rbx_9 = &rbx_9[2]
                
                i = data_143a30408
            while (rdi_4.d s< i)
        
        int32_t rax_75 = i * 2
        
        if (rax_75 s<= 2)
            rax_75 = 2
        
        data_143a30410 = rax_75
        
        if (i_6.d s> rax_75 && data_143a3040c != i)
            sub_1405a5410(&data_143a30400, i)
    
    *(r15 + 0xb0c) = 1
    int32_t var_2a0_1 = 0
    var_268 = 0
    uint64_t var_258 = 0
    int32_t r12_2 = 0
    int32_t var_24c_1 = 0
    
    if (*(r15 + 0xd18) != *(r15 + 0xd44))
        sub_14084eee0(r15 + 0xd10, 0)
    
    int64_t rbx_10 = *(r15 + 0x140)
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    void* rax_77 = sub_142452380()
    var_f8 = 5
    char var_a0_3 = 0
    sub_1405ab0f0(&var_f0, rbx_10, rax_77)
    char var_a0_4 = 1
    sub_1405b0c60(&var_f8)
    int64_t* var_270
    int64_t* var_238
    int64_t* var_228
    int64_t* var_1f0
    char r14_3
    
    if (i_4 == 0)
        int64_t* rbx_11 = var_c8
        
        while (true)
            if ((rbx_11[0xb].b & 8) != 0)
                sub_141fa9570(r15, rbx_11)
                rbx_11 = var_c8
            
            void** rcx_75 = *(r15 + 0xcf0)
            void* rdx_33 = &rcx_75[sx.q(*(r15 + 0xcf8))]
            
            if (rcx_75 == rdx_33)
            label_141fbb273:
                rdi_4.b = 0
            else
                while (true)
                    void* rax_79 = *rcx_75
                    
                    if (rbx_11 == rax_79 || rbx_11 == *(rax_79 + 0x548) || rbx_11[0x1c] == rax_79)
                        rdi_4.b = 1
                        break
                    
                    rcx_75 = &rcx_75[1]
                    
                    if (rcx_75 == rdx_33)
                        goto label_141fbb273
                    
                    continue
            
            if ((*(rbx_11 + 0x59) & 0x10) == 0)
                i_6.b = 0
            else
                uint8_t rax_80 = sub_141dce3a0(rbx_11)
                rbx_11 = var_c8
                
                if (rax_80 != 0)
                    i_6.b = 0
                else
                    i_6.b = 1
            
            int64_t* r9_4
            
            if (rdi_4.b != 0 || i_6.b != 0)
                sub_140d3a3a0(&var_238, rbx_11)
                void* rbx_12 = *(r15 + 0x150)
                sub_141f87aa0(rbx_12 + 0x50, &var_2a8, var_238)
                int64_t rax_83 = sx.q(var_2a8)
                
                if (rax_83.d != 0xffffffff)
                    void* rcx_82 = *(rbx_12 + 0x50) + rax_83 * 0x14
                    
                    if (rcx_82 != 0)
                        int32_t rbx_13 = *(rcx_82 + 8)
                        var_270.d = rbx_13
                        
                        if (rbx_13 != 0)
                            int64_t rdi_5 = sx.q(var_2a0_1)
                            int32_t rcx_83 = (rdi_5 + 1).d
                            var_2a0_1 = rcx_83
                            
                            if (rcx_83 s> r12_2)
                                sub_14119a860(&var_258)
                                var_2a0_1 = rcx_83
                                var_268 = var_258
                            
                            int32_t* rax_89 = (rdi_5 << 4) + var_268
                            *rax_89 = rbx_13
                            *(rax_89 + 8) = var_c8
                            
                            if (i_6.b != 0)
                                sub_141f77ab0(r15 + 0xd10, &var_228, &var_270, nullptr)
                
                var_270 = var_c8
                sub_140812a70(&var_98, &var_298, &var_270, nullptr)
            else if (sub_141dce3a0(rbx_11) == 0)
                r9_4.b = 1
                sub_1420e0c80(*(r15 + 0x140), var_c8, 1, r9_4.b)
            else
                int64_t* rcx_78 = var_c8
                
                if ((*(rcx_78 + 0x59) & 0x10) != 0)
                    (*(*rcx_78 + 0x2d0))(rcx_78)
                    rcx_78 = var_c8
                
                var_270 = rcx_78
                sub_140812a70(&var_98, &var_1f0, &var_270, nullptr)
            
            int32_t r8_15 = var_b8
            int32_t rdx_41 = var_e0
            var_270 = var_f0
            int32_t r15_2 = var_d8 + 1
            
            if (r15_2 s>= r8_15 + rdx_41)
            label_141fbb5b1:
                r15 = arg1
                var_c8 = nullptr
                i_4 = 1
                break
            
            int64_t r12_3 = sx.q(r15_2) << 3
            
            while (true)
                if (r15_2 s>= rdx_41)
                    rbx_11 = *(var_c0 + (sx.q(r15_2 - rdx_41) << 3))
                else
                    rbx_11 = *(var_e8 + r12_3)
                
                var_d0 += 1
                
                if (rbx_11 != 0)
                    int64_t rax_98 = sub_141dc9840(rbx_11)
                    
                    if (rax_98 != 0)
                        void* const rax_105
                        
                        if ((var_f8.b & 1) != 0)
                            int32_t rax_99 = *(rbx_11 + 0xc)
                            
                            if (rax_99 s>= data_143e1d9b4)
                                rax_105 = nullptr
                            else
                                int16_t temp9_1
                                int32_t temp10_1
                                temp9_1:temp10_1 = sx.q(rax_99)
                                uint32_t rdx_43 = zx.d(temp9_1)
                                int32_t rax_101 = temp10_1 + rdx_43
                                rax_105 = *(data_143e1d9a0 + (sx.q(rax_101 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_101.w) - rdx_43) * 0x18
                        
                        if ((var_f8.b & 1) == 0 || ((*(rax_105 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_94 = var_f8
                            
                            if (((rcx_94 u>> 1).b & 1) == 0)
                                goto label_141fbb4ce
                            
                            uint64_t rax_109 = sub_1405949a0()
                            
                            if (rax_109.b != 0)
                                rcx_94 = var_f8
                            label_141fbb4ce:
                                
                                if (((rcx_94 u>> 2).b & 1) == 0)
                                label_141fbb54a:
                                    int64_t rax_110 = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_98)
                                    r9_4 = var_270
                                    
                                    if (rax_110 == r9_4)
                                        if (rax_98 == r9_4[6])
                                            break
                                        
                                        void* rax_111
                                        rax_111, r9_4 = sub_1425bd0d0()
                                        void* rdx_45 = rbx_11[2]
                                        int64_t rax_112 = sx.q(*(rax_111 + 0x38))
                                        
                                        if (rax_112.d s> *(rdx_45 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_45 + 0x30) + (rax_112 << 3)) != rax_111 + 0x30)
                                            break
                                else
                                    if ((*(rax_98 + 0x1f4) & 0x20) == 0
                                            || (*(rax_98 + 0x1f6) & 8) != 0)
                                        rax_109 = zx.q(*(rax_98 + 0x1f5))
                                    
                                    if (((*(rax_98 + 0x1f4) & 0x20) != 0
                                            && (*(rax_98 + 0x1f6) & 8) == 0) || (rax_109.b & 0x40) != 0
                                            || rax_109.b s< 0)
                                        r14_3 = 1
                                    else
                                        r14_3 = 0
                                    
                                    void* rcx_96 = *(rax_98 + 0xb8)
                                    i_6 = *(rax_98 + 0x248)
                                    
                                    if (rcx_96 != 0)
                                        rax_109 = sub_1424359b0(rcx_96)
                                    
                                    if (rcx_96 == 0 || rax_109 == 0 || i_6 == rax_109)
                                        rcx_96.b = 1
                                    else
                                        rcx_96.b = 0
                                    
                                    if (i_6 == 0 || *i_6 == 2)
                                        rax_109.b = 1
                                    else
                                        rax_109.b = 0
                                    
                                    if (rcx_96.b != 0 || rax_109.b != 0)
                                        rax_109.b = 1
                                    
                                    if (r14_3 != 0 && rax_109.b != 0)
                                        goto label_141fbb54a
                    
                    r8_15 = var_b8
                    rdx_41 = var_e0
                
                r15_2 += 1
                r12_3 += 8
                
                if (r15_2 s>= r8_15 + rdx_41)
                    goto label_141fbb5b1
            
            var_d8 = r15_2
            r15 = arg1
            var_c8 = rbx_11
            
            if (i_4 != 0)
                break
            
            r12_2 = var_24c_1
    
    if (var_a0_4 != 0)
        char var_a0_5 = 0
        sub_142441560(var_f0, var_a8)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)
    
    sub_1424384c0(*(r15 + 0x140))
    void* rcx_103 = *(r15 + 0x88)
    int32_t rax_115 = *(rcx_103 + 0x78)
    int64_t rdi_6 = sx.q(rax_115 - 1)
    
    if (rax_115 - 1 s>= 0)
        int64_t temp2_1
        
        do
            void* rbx_14 = *(*(*(r15 + 0x88) + 0x70) + (rdi_6 << 3))
            
            if (rbx_14 != 0)
                void* rax_118 = sub_142458ee0()
                void* rdx_47 = *(rbx_14 + 0x10)
                int64_t rax_119 = sx.q(*(rax_118 + 0x38))
                
                if (rax_119.d s<= *(rdx_47 + 0x38)
                        && *(*(rdx_47 + 0x30) + (rax_119 << 3)) == rax_118 + 0x30
                        && *sub_1408296b0(&var_98, &var_298, *(rbx_14 + 0x70)) != 0xffffffff)
                    *(rbx_14 + 0x70) = 0
            
            temp2_1 = rdi_6
            rdi_6 -= 1
        while (temp2_1 - 1 s>= 0)
        rcx_103 = *(r15 + 0x88)
    
    if (*(rcx_103 + 0x98) == *(r15 + 0x768))
        *(rcx_103 + 0x98) = 0
    
    sub_141fb05f0(r15 + 0xa08, 0)
    int32_t i_8 = *(r15 + 0xa60)
    int64_t* rbx_15 = *(r15 + 0xa58)
    var_1f0 = r15 + 0xa58
    
    if (i_8 != 0)
        int32_t i_1
        
        do
            int64_t rcx_108 = *rbx_15
            
            if (rcx_108 != 0)
                sub_140a74f90(rcx_108)
            
            rbx_15 = &rbx_15[4]
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
    
    bool cond:5_1 = *(r15 + 0xa64) == 0
    *(r15 + 0xa60) = 0
    
    if (not(cond:5_1))
        sub_1405a51b0(r15 + 0xa58, 0)
    
    sub_141fb0570(r15 + 0xc98, 0)
    int64_t rbx_16 = *(r15 + 0x140)
    void* rax_123 = sub_142452380()
    var_f8 = 5
    char var_a0_6 = 0
    sub_1405ab0f0(&var_f0, rbx_16, rax_123)
    char var_a0_7 = 1
    sub_1405b0c60(&var_f8)
    int64_t* var_288
    
    if (i_4 == 0)
        int64_t* rsi_4 = var_c8
        int64_t* rbx_17 = r15 + 0x840
        var_228 = rbx_17
        
        while (true)
            int32_t* rax_125 = sub_141fb2f50(rbx_17, &var_298, sub_140d21830(rsi_4, &var_288, 0, 0))
            int64_t* rcx_115 = var_288
            int32_t rbx_18 = *rax_125
            
            if (rcx_115 != 0)
                sub_140a74f90(rcx_115)
            
            if (rbx_18 != 0xffffffff)
                sub_1420e0c80(*(r15 + 0x140), var_c8, 1, 1)
            
            int32_t r8_22 = var_b8
            int32_t rdx_53 = var_e0
            var_238 = var_f0
            int32_t r15_4 = var_d8 + 1
            
            if (r15_4 s>= r8_22 + rdx_53)
            label_141fbb9cf:
                r15 = arg1
                var_c8 = nullptr
                i_4 = 1
                break
            
            int64_t r12_4 = sx.q(r15_4) << 3
            
            while (true)
                if (r15_4 s>= rdx_53)
                    rsi_4 = *(var_c0 + (sx.q(r15_4 - rdx_53) << 3))
                else
                    rsi_4 = *(var_e8 + r12_4)
                
                var_d0 += 1
                
                if (rsi_4 != 0)
                    void* rax_133 = sub_141dc9840(rsi_4)
                    
                    if (rax_133 != 0)
                        void* const rax_140
                        
                        if ((var_f8.b & 1) != 0)
                            int32_t rax_134 = *(rsi_4 + 0xc)
                            
                            if (rax_134 s>= data_143e1d9b4)
                                rax_140 = nullptr
                            else
                                int16_t temp7_1
                                int32_t temp8_1
                                temp7_1:temp8_1 = sx.q(rax_134)
                                uint32_t rdx_55 = zx.d(temp7_1)
                                int32_t rax_136 = temp8_1 + rdx_55
                                rax_140 = *(data_143e1d9a0 + (sx.q(rax_136 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_136.w) - rdx_55) * 0x18
                        
                        if ((var_f8.b & 1) == 0 || ((*(rax_140 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_124 = var_f8
                            
                            if (((rcx_124 u>> 1).b & 1) == 0)
                                goto label_141fbb8e9
                            
                            uint64_t rax_144 = sub_1405949a0()
                            
                            if (rax_144.b != 0)
                                rcx_124 = var_f8
                            label_141fbb8e9:
                                
                                if (((rcx_124 u>> 2).b & 1) == 0)
                                label_141fbb968:
                                    int64_t rax_145 = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_133)
                                    int64_t* r9_6 = var_238
                                    
                                    if (rax_145 == r9_6)
                                        if (rax_133 == r9_6[6])
                                            break
                                        
                                        void* rax_146 = sub_1425bd0d0()
                                        void* rdx_57 = rsi_4[2]
                                        int64_t rax_147 = sx.q(*(rax_146 + 0x38))
                                        
                                        if (rax_147.d s> *(rdx_57 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_57 + 0x30) + (rax_147 << 3)) != rax_146 + 0x30)
                                            break
                                else
                                    if ((*(rax_133 + 0x1f4) & 0x20) == 0
                                            || (*(rax_133 + 0x1f6) & 8) != 0)
                                        rax_144 = zx.q(*(rax_133 + 0x1f5))
                                    
                                    if (((*(rax_133 + 0x1f4) & 0x20) != 0
                                            && (*(rax_133 + 0x1f6) & 8) == 0) || (rax_144.b & 0x40) != 0
                                            || rax_144.b s< 0)
                                        r14_3 = 1
                                    else
                                        r14_3 = 0
                                    
                                    void* rcx_126 = *(rax_133 + 0xb8)
                                    char* rdi_7 = *(rax_133 + 0x248)
                                    
                                    if (rcx_126 != 0)
                                        rax_144 = sub_1424359b0(rcx_126)
                                    
                                    if (rcx_126 == 0 || rax_144 == 0 || rdi_7 == rax_144)
                                        rcx_126.b = 1
                                    else
                                        rcx_126.b = 0
                                    
                                    if (rdi_7 == 0 || *rdi_7 == 2)
                                        rax_144.b = 1
                                    else
                                        rax_144.b = 0
                                    
                                    if (rcx_126.b != 0 || rax_144.b != 0)
                                        rax_144.b = 1
                                    
                                    if (r14_3 != 0 && rax_144.b != 0)
                                        goto label_141fbb968
                    
                    r8_22 = var_b8
                    rdx_53 = var_e0
                
                r15_4 += 1
                r12_4 += 8
                
                if (r15_4 s>= r8_22 + rdx_53)
                    goto label_141fbb9cf
            
            var_d8 = r15_4
            r15 = arg1
            var_c8 = rsi_4
            
            if (i_4 != 0)
                break
            
            rbx_17 = var_228
    
    if (var_a0_7 != 0)
        char var_a0_8 = 0
        sub_142441560(var_f0, var_a8)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)
    
    sub_141faa960(r15, 0)
    sub_14213f9e0(*(r15 + 0x88))
    int64_t* rcx_134 = *(r15 + 0x88)
    (*(*rcx_134 + 0x2d8))(rcx_134)
    
    if (*data_143f3d450 != 0)
        sub_1423dcef0(data_143f5b298, 1)
    
    void var_168
    sub_1423fd810(&var_168, nullptr)
    uint64_t var_140[0x9]
    sub_140597df0(&var_140, r15 + 0xb90)
    var_298 = nullptr
    int64_t* rax_152 = sub_14249aea0()
    char var_2c8
    var_2c8.q = 0
    int64_t var_2d0
    var_2d0.b = 0
    int32_t var_2d8
    var_2d8.q = 0
    void* rax_154
    int128_t zmm6_1
    rax_154, zmm6_1 =
        sub_140596910(sub_140cde0b0(), rax_152, var_298, 0, var_2d8, var_2d0.b, var_2c8)
    *(r15 + 0x88) = rax_154
    var_2d0.d = 0
    int32_t var_2d8_3 = 0xf4240
    (*(*rax_154 + 0x2f8))(rax_154, r15, 2, &var_168, var_2d8_3, var_2d0)
    *(*(r15 + 0x88) + 0x1358) = *(r15 + 0xbec)
    *(*(r15 + 0x88) + 0x135c) = *(r15 + 0xbf0)
    sub_142164160(r15)
    int32_t r12_5 = 0
    void** rbx_21 = *(r15 + 0xcf0)
    int64_t rdi_8 = 0
    uint64_t r14_6 = sx.q(*(r15 + 0xcf8)) << 3 u>> 3
    
    if (rbx_21 u> &rbx_21[sx.q(*(r15 + 0xcf8))])
        r14_6 = 0
    
    if (r14_6 != 0)
        do
            void* rsi_5 = *rbx_21
            
            if (rsi_5 != *(r15 + 0x768))
                sub_141fc5e40(r15, rsi_5, (*(*r15 + 0x360))(r15, *(r15 + 0x88)))
            
            rbx_21 = &rbx_21[1]
            rdi_8 += 1
        while (rdi_8 != r14_6)
    
    sub_140d3a3a0(&var_238, *(r15 + 0x768))
    sub_141f87aa0(*(r15 + 0x150) + 0x50, &var_298, var_238)
    sub_140bc7700(0xffffffff)
    sub_142175620(*(r15 + 0x150))
    uint64_t r14_7 = var_268
    uint64_t rdi_9 = r14_7
    int64_t rsi_8 = (sx.q(var_2a0_1) << 4) + r14_7
    
    if (r14_7 != rsi_8)
        do
            int64_t* rax_161 = sub_141fa2570(*(r15 + 0x150), *rdi_9, rdi_9)
            sub_140d3a3a0(&var_238, *(rdi_9 + 8))
            *rax_161 = var_238
            rax_161[4].b |= 1
            sub_141fa1990(*(r15 + 0x150) + 0x50, rax_161, rdi_9)
            rdi_9 += 0x10
        while (rdi_9 != rsi_8)
    
    int64_t rax_163 = (*(*r13 + 0x28))(r13)
    int64_t rax_165
    
    if (rax_163 != 0)
        rax_165 = (*(*r13 + 0x28))(r13)
    
    if (rax_163 == 0 || rax_165 == -1)
        sub_14059a980(r15 + 0x7a0, 0)
        var_288 = nullptr
        int64_t var_280_1 = 0
        sub_141fc5510(r15, &var_288, 0)
        *(r15 + 0x750) = 0
        *(r15 + 0xb0c) = 0
        int64_t rax_242 = *(arg2 + 0x10)
        
        if (rax_242 == -1)
            sub_141faaad0(r15)
        else
            int32_t zmm0_3 = (zx.o(0)).d
            int32_t zmm1_8 = float.s(rax_242) f* 0.00100000005f
            *(r15 + 0xb64) = zmm1_8
            
            if (not(zmm1_8 f< 0f))
                zmm0_3 = _mm_min_ss(*(r15 + 0x74c) f- 0.00999999978f, zmm1_8)
            
            *(r15 + 0x750) = zmm0_3
            *(r15 + 0xb09) = 0x101
        
        int64_t* rcx_257 = var_288
        
        if (rcx_257 != 0)
            sub_140a74f90(rcx_257)
    else
        int128_t var_38_1 = zmm6_1
        (*(*r13 + 0x178))(r13, 0)
        int64_t* r14_8 = r15 + 0x7a0
        sub_14059a980(r14_8, 0)
        int64_t* rsi_9 = r15 + 0x988
        var_238 = rsi_9
        int512_t zmm0_1
        int512_t zmm1
        zmm0_1, zmm1 = sub_141fb04e0(rsi_9, 0)
        zmm6_1 = zx.o(0)
        var_228 = nullptr
        var_288 = nullptr
        int32_t var_2a0_2 = 0
        int64_t var_280
        var_280:4.d = 0
        int32_t var_250
        int32_t var_220
        int64_t var_21c
        int64_t var_214
        int64_t var_208
        char var_200
        int64_t* rdi_10
        
        while (true)
            int64_t rax_167 = 0
            
            if (rax_4 != 0)
                var_2a8 = 0
                int64_t* rcx_159 = r13[1]
                int32_t* rdx_70 = *rcx_159
                
                if (&rdx_70[1] u> rcx_159[1])
                    int32_t* rdx_71 = &var_2a8
                    
                    if ((*(r13 + 0x29) & 0x20) != 0)
                        sub_140b54070(r13, rdx_71, zmm1)
                    else
                        (*(*r13 + 0x150))(r13, rdx_71, 4)
                else
                    var_2a8 = *rdx_70
                    *rcx_159 += 4
                
                rax_167 = (*(*r13 + 0x20))(r13) + zx.q(var_2a8)
            
            rdi_10 = arg1
            int64_t r15_5 = *(r15 + 0x10d0)
            rdi_10[0x21a] = rax_167
            
            if (rdi_10[0x1c5].b != 0)
                var_298 = nullptr
                int64_t* rcx_163 = r13[1]
                int64_t* rdx_72 = *rcx_163
                
                if (&rdx_72[1] u> rcx_163[1])
                    int64_t* rdx_73 = &var_298
                    
                    if ((*(r13 + 0x29) & 0x20) != 0)
                        sub_140b540d0(r13, rdx_73, zmm1)
                    else
                        (*(*r13 + 0x150))(r13, rdx_73, 8)
                else
                    var_298 = *rdx_72
                    *rcx_163 += 8
            
            if (*(rdi_10 + 0xbe4) u>= 6)
                int64_t* rcx_165 = r13[1]
                var_2a8 = 0xffffffff
                int32_t* rdx_74 = *rcx_165
                
                if (&rdx_74[1] u> rcx_165[1])
                    int32_t* rdx_75 = &var_2a8
                    
                    if ((*(r13 + 0x29) & 0x20) != 0)
                        sub_140b54070(r13, rdx_75, zmm1)
                    else
                        (*(*r13 + 0x150))(r13, rdx_75, 4)
                else
                    var_2a8 = *rdx_74
                    *rcx_165 += 4
            
            if (*(rdi_10 + 0xbe4) u>= 8)
                if (rax_4 == 0)
                    int512_t zmm1_4 = sub_14059ad90(r14_8, 0)
                    int32_t i_11 = r14_8[9].d
                    
                    if (i_11 s> 0)
                        int64_t r8_31 = 0
                        uint64_t i_9 = zx.q(i_11)
                        uint64_t i_2
                        
                        do
                            void* rcx_185 = r14_8[8]
                            void* rax_186 = &r14_8[7]
                            int64_t rdx_89 = (sx.q(r14_8[9].d) - 1) & r8_31
                            
                            if (rcx_185 != 0)
                                rax_186 = rcx_185
                            
                            r8_31 += 1
                            *(rax_186 + (rdx_89 << 2)) = 0xffffffff
                            i_2 = i_9
                            i_9 -= 1
                        while (i_2 != 1)
                    
                    zmm0_1, zmm1 = sub_141824070(r13, r14_8, zmm1_4)
                    
                    if ((r13[5].b & 1) != 0)
                        int64_t rcx_187 = r14_8[8]
                        
                        if (rcx_187 != 0)
                            r14_8[8] = sub_140a84c80(rcx_187, 0, 0)
                        
                        r14_8[9].d = 0
                        zmm0_1, zmm1 = sub_1405996f0(r14_8, r14_8[1].d - *(r14_8 + 0x34), 0)
                else
                    int32_t var_cc_1 = 0x80
                    __builtin_memset(&var_f8, 0, 0x2c)
                    var_c8:4.d = 0
                    var_b8.q = 0
                    int32_t var_b0_1 = 0
                    var_c8.d = 0xffffffff
                    int512_t zmm1_1 = sub_141814890(r14_8, &var_f8)
                    int64_t* rax_179 = j_sub_140a82f30(0xf0)
                    int64_t* rbx_24 = rax_179
                    
                    if (rax_179 == 0)
                        rbx_24 = nullptr
                    else
                        memset(&rax_179[2], 0, 0xe0)
                        *rbx_24 = 0
                        void* rcx_169 = &rbx_24[2]
                        rbx_24[1] = 0
                        *(rcx_169 + 0x10) = 0
                        *(rcx_169 + 0x18) = 0
                        *(rcx_169 + 0x1c) = 0x80
                        void* rax_180 = *(rcx_169 + 0x10)
                        
                        if (rax_180 != 0)
                            rcx_169 = rax_180
                        
                        *rcx_169 = 0
                        *(rcx_169 + 8) = 0
                        void* rcx_170 = &rbx_24[0xc]
                        rbx_24[6].d = 0xffffffff
                        *(rbx_24 + 0x34) = 0
                        rbx_24[8] = 0
                        rbx_24[9].d = 0
                        rbx_24[0xa] = 0
                        rbx_24[0xb] = 0
                        *(rcx_170 + 0x10) = 0
                        *(rcx_170 + 0x18) = 0
                        *(rcx_170 + 0x1c) = 0x80
                        void* rax_181 = *(rcx_170 + 0x10)
                        
                        if (rax_181 != 0)
                            rcx_170 = rax_181
                        
                        *rcx_170 = 0
                        *(rcx_170 + 8) = 0
                        void* rcx_171 = &rbx_24[0x16]
                        rbx_24[0x10].d = 0xffffffff
                        *(rbx_24 + 0x84) = 0
                        rbx_24[0x12] = 0
                        rbx_24[0x13].d = 0
                        rbx_24[0x14] = 0
                        rbx_24[0x15] = 0
                        *(rcx_171 + 0x10) = 0
                        *(rcx_171 + 0x18) = 0
                        *(rcx_171 + 0x1c) = 0x80
                        void* rax_182 = *(rcx_171 + 0x10)
                        
                        if (rax_182 != 0)
                            rcx_171 = rax_182
                        
                        *rcx_171 = 0
                        *(rcx_171 + 8) = 0
                        rbx_24[0x1a].d = 0xffffffff
                        *(rbx_24 + 0xd4) = 0
                        rbx_24[0x1c] = 0
                        rbx_24[0x1d].d = 0
                    
                    int64_t rdi_11 = sx.q(rsi_9[1].d)
                    int32_t rax_183 = (rdi_11 + 1).d
                    rsi_9[1].d = rax_183
                    
                    if (rax_183 s> *(rsi_9 + 0xc))
                        sub_1405a4d70(rsi_9)
                    
                    int64_t rsi_10 = *rsi_9
                    *(rsi_10 + (rdi_11 << 3)) = rbx_24
                    int512_t zmm1_2 = sub_141824070(r13, rbx_24, zmm1_1)
                    
                    if ((r13[5].b & 1) != 0)
                        int64_t rcx_174 = rbx_24[8]
                        
                        if (rcx_174 != 0)
                            rbx_24[8] = sub_140a84c80(rcx_174, 0, 0)
                        
                        rbx_24[9].d = 0
                        zmm1_2 = sub_1405996f0(rbx_24, rbx_24[1].d - *(rbx_24 + 0x34), 0)
                    
                    void* rbx_25 = *(rsi_10 + (rdi_11 << 3))
                    int512_t zmm1_3 = sub_141fa85b0(r13, rbx_25 + 0x50, zmm1_2)
                    
                    if ((r13[5].b & 1) != 0)
                        int64_t rcx_177 = *(rbx_25 + 0x90)
                        
                        if (rcx_177 != 0)
                            *(rbx_25 + 0x90) = sub_140a84c80(rcx_177, 0, 0)
                        
                        *(rbx_25 + 0x98) = 0
                        zmm1_3 =
                            sub_14084bc50(rbx_25 + 0x50, *(rbx_25 + 0x58) - *(rbx_25 + 0x84), 0)
                    
                    sub_141fa7d60(r13, *(rsi_10 + (rdi_11 << 3)) + 0xa0, zmm1_3)
                    sub_141814890(r14_8, *(rsi_10 + (rdi_11 << 3)))
                    int64_t rcx_181 = var_b8.q
                    int32_t var_b0_2 = 0
                    
                    if (rcx_181 != 0)
                        sub_140a74f90(rcx_181)
                    
                    zmm0_1, zmm1 = sub_14059ad90(&var_f8, 0)
                    int64_t rcx_183 = var_d8.q
                    
                    if (rcx_183 != 0)
                        zmm0_1, zmm1 = sub_140a74f90(rcx_183)
                    
                    int64_t rcx_184 = var_f8.q
                    
                    if (rcx_184 != 0)
                        zmm0_1, zmm1 = sub_140a74f90(rcx_184)
                    
                    rdi_10 = arg1
            
            int64_t* rcx_189 = r13[1]
            var_270.d = 0
            int32_t* rdx_93 = *rcx_189
            
            if (&rdx_93[1] u> rcx_189[1])
                int64_t** rdx_94 = &var_270
                
                if ((*(r13 + 0x29) & 0x20) != 0)
                    sub_140b54070(r13, rdx_94, zmm1)
                else
                    (*(*r13 + 0x150))(r13, rdx_94, 4)
            else
                var_270.d = *rdx_93
                *rcx_189 += 4
            
            int32_t i_3 = 0
            
            if (var_270.d s> 0)
                do
                    int64_t rax_191 = *r13
                    var_2a8 = 0
                    (*(rax_191 + 0x168))(r13, &var_2a8)
                    var_208 = zmm6_1.q
                    char rax_192 = (var_200 & 0xf0) | 0x10
                    var_220 = 0xffffffff
                    int64_t rax_193 = *r13
                    __builtin_memset(&var_21c, 0, 0x14)
                    var_258 = 0
                    var_250.q = 0
                    (*(rax_193 + 0x168))(r13, &var_21c:4)
                    int64_t r9_8
                    int512_t zmm1_5
                    r9_8, zmm1_5 = sub_140a1d9d0(r13, &var_258, zmm1)
                    int64_t* rcx_194 = r13[1]
                    int32_t* rdx_98 = *rcx_194
                    int32_t var_20c
                    
                    if (&rdx_98[1] u> rcx_194[1])
                        int32_t* rdx_99 = &var_20c
                        
                        if ((*(r13 + 0x29) & 0x20) != 0)
                            sub_140b54070(r13, rdx_99, zmm1_5)
                        else
                            (*(*r13 + 0x150))(r13, rdx_99, 4)
                    else
                        var_20c = *rdx_98
                        *rcx_194 += 4
                    int64_t* rcx_196 = data_143f5b298
                    r9_8.b = 1
                    (*(*rcx_196 + 0x400))(rcx_196, rdi_10, &var_258, r9_8, var_2d8_3)
                    uint64_t rdx_101 = &data_142d40450
                    
                    if (var_250 != 0)
                        rdx_101 = var_258
                    
                    void var_178
                    int64_t* rax_198
                    rax_198, zmm6_1 = sub_140b58260(&var_178, rdx_101, 1)
                    var_214 = *rax_198
                    int64_t* rcx_199 = r13[1]
                    char var_2a4 = 0
                    char* rdx_102 = *rcx_199
                    
                    if (&rdx_102[1] u> rcx_199[1])
                        (*(*r13 + 0x150))(r13, &var_2a4, 1)
                    else
                        var_2a4 = *rdx_102
                        *rcx_199 += 1
                    
                    var_200 = rax_192 ^ ((rax_192 ^ var_2a4) & 3)
                    zmm0_1, zmm1 = sub_141fa1c50(rdi_10[0x2a], &var_2a8, &var_220)
                    uint64_t rcx_203 = var_258
                    
                    if ((*(r13 + 0x29) & 1) != 0)
                        if (rcx_203 != 0)
                            zmm0_1, zmm1 = sub_140a74f90(rcx_203)
                        
                        break
                    
                    if (rcx_203 != 0)
                        zmm0_1, zmm1 = sub_140a74f90(rcx_203)
                    
                    i_3 += 1
                while (i_3 s< var_270.d)
            
            int32_t rsi_11 = -1
            void* rcx_204 = *(rdi_10[0x11] + 0x68)
            int512_t zmm1_6
            
            if (rax_4 == 0)
                zmm1_6 = sub_1421771f0(rcx_204, r13, 1, zmm1)
            else
                zmm1_6 = sub_142176e80(rcx_204, r13, zmm0_1, zmm1)
                rsi_11 = rdi_10[0x14c].d
                rdi_10[0x1c3].d = 0
                
                if (*(rdi_10 + 0xe1c) s<= 0xffffffff)
                    sub_1405dadb0(&rdi_10[0x1c2], 0)
            
            var_2d8_3.q = 0
            zmm0_1, zmm1, zmm6_1 = sub_141fc0ee0(rdi_10, r13, &rdi_10[0x14b], 0, zmm1_6, var_2d8_3)
            
            if (rax_4 != 0)
                int32_t rbx_28 = rdi_10[0x14c].d - 1
                
                if (rbx_28 s>= rsi_11)
                    int64_t rdi_12 = sx.q(var_2a0_2)
                    int32_t rcx_207 = (rdi_12 + 1).d
                    var_2a0_2 = rcx_207
                    var_280.d = rcx_207
                    int64_t* rcx_209
                    
                    if (rcx_207 s<= r12_5)
                        rcx_209 = var_228
                    else
                        zmm0_1 = sub_1405a4d70(&var_288)
                        rcx_209 = var_288
                        r12_5 = var_280:4.d
                        var_228 = rcx_209
                        var_2a0_2 = var_280.d
                    
                    rcx_209[rdi_12].d = rsi_11
                    *(&rcx_209[rdi_12] + 4) = rbx_28
                    rdi_10 = arg1
            
            rdi_10[0x21a] = r15_5
            
            if ((*(r13 + 0x29) & 1) != 0)
                break
            
            int64_t rax_206 = (*(*r13 + 0x28))(r13)
            int64_t rdx_108 = *r13
            rsi_9 = &rdi_10[0x131]
            
            if ((*(rdx_108 + 0x20))(r13, rdx_108) s>= rax_206)
                break
            
            r15 = arg1
        
        int64_t rdx_109 = rdi_10[0x28]
        
        if (rdx_109 != 0)
            sub_141fa4740(&var_f8, rdx_109, 5)
            
            while (i_4 == 0)
                sub_140d21830(var_c8, &var_288, 0, 0)
                
                if (*sub_140960120(r14_8, &var_298, &var_288) != 0xffffffff
                        && (*(var_c8 + 0x59) & 0x10) == 0)
                    (*(*rdi_10 + 0x438))(rdi_10, var_c8)
                    sub_1420e0c80(rdi_10[0x28], var_c8, 1, 1)
                
                int64_t* rcx_217 = var_288
                
                if (rcx_217 != 0)
                    sub_140a74f90(rcx_217)
                
                sub_1405b0c60(&var_f8)
            
            sub_141fa5d20(&var_f0)
            var_288 = nullptr
            var_280 = 0
            zmm0_1, zmm1 = sub_141fc5510(rdi_10, &var_288, 0)
            int64_t* rcx_221 = var_288
            
            if (rcx_221 != 0)
                zmm0_1, zmm1 = sub_140a74f90(rcx_221)
        
        int64_t* rsi_12 = &rdi_10[0x14b]
        zmm0_1.o = zx.o(0)
        
        if (rdi_10[0x14c].d s<= 0)
            zmm1.o = zx.o(0)
        else
            zmm1.o = *((sx.q(rsi_12[1].d) << 5) + *rsi_12 - 0x10)
        
        rdi_10[0xea].d = zmm1.d
        int64_t rax_212 = *(arg2 + 0x10)
        
        if (rax_212 == -1)
            zmm0_1, zmm1 = sub_141faaad0(rdi_10)
        else
            zmm1.o = zx.o(0)
            zmm1.d = float.s(rax_212)
            zmm1.d = zmm1.d f* 0.00100000005f
            *(rdi_10 + 0xb64) = zmm1.d
            zmm1.d = zmm1.d f+ rdi_10[0xea].d
            
            if (not(zmm1.d f< zmm0_1.d))
                zmm0_1.o = *(rdi_10 + 0x74c)
                zmm0_1.d = zmm0_1.d f- 0.00999999978f
                zmm0_1.o = _mm_min_ss(zmm0_1.d, zmm1.d)
            
            rdi_10[0xea].d = zmm0_1.d
            *(rdi_10 + 0xb09) = 0x101
        
        int32_t r9_10
        
        if (rax_4 == 0)
            var_288 = *rsi_12
            var_280.d = rsi_12[1].d
            zmm0_1.o = var_288.o
            var_288.o = zmm0_1.o
            sub_141fbfc50(rdi_10, &var_288)
            sub_141fb03a0(rsi_12, 0)
            r9_10 = sub_141fb0570(&rdi_10[0x193], 0)
        else
            void* const r13_2 = rdi_10[0x11]
            int64_t rax_213
            
            if (r13_2 != 0)
                rax_213, zmm0_1 = sub_141fa3f70(r13_2)
            
            if (r13_2 == 0 || rax_213.b == 0)
                r13_2 = nullptr
            
            int32_t rbx_30 = 0
            var_2a8 = 0
            
            if (var_2a0_2 s> 0)
                int64_t* r12_6 = var_228
                int64_t* rdi_13 = nullptr
                int64_t* rcx_226 = r12_6
                var_298 = nullptr
                int64_t* var_1f8_1 = rcx_226
                
                do
                    if (r13_2 != 0)
                        if (rdi_13 s< 0 || rbx_30 s>= *(arg1 + 0x990))
                            rax_213.b = 0
                        else
                            rax_213.b = 1
                        
                        if (rax_213.b != 0)
                            var_258.d = 0
                            var_258:4.d = 1
                            int32_t var_248_1 = 0xffffffff
                            int64_t var_244_1 = 0
                            void* r14_10 = *(*var_238 - rcx_226 + r12_6) + 0xa0
                            int32_t r8_36 = *(r14_10 + 0x28)
                            void* rsi_13 = r14_10 + 0x10
                            var_250.q = rsi_13
                            
                            if (r8_36 != 0)
                                sub_14059bdd0(&var_258)
                                r8_36 = *(rsi_13 + 0x18)
                            
                            int32_t rdx_115 = *(r14_10 + 0x28)
                            zmm0_1.o = var_258.o
                            double zmm2_1[0x2] = var_248_1.o
                            var_258.d = rdx_115 s>> 5
                            char rcx_229 = rdx_115.b & 0x1f
                            var_f0.o = zmm0_1.o
                            var_f8.q = r14_10
                            zmm0_1.o = var_f8.o
                            var_258:4.d = 1 << rcx_229
                            var_e0.o = zmm2_1
                            var_250.q = rsi_13
                            var_200.q = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                            var_244_1.d = rdx_115
                            var_244_1:4.d = rdx_115 & 0xffffffe0
                            zmm1.o = var_e8.o
                            var_220.o = zmm0_1.o
                            var_214:4.o = zmm1.o
                            
                            if (rdx_115 != r8_36)
                                sub_14059bdd0(&var_258)
                                rsi_13 = var_250.q
                            
                            while (true)
                                int64_t rdx_116 = sx.q(var_208:4.d)
                                int32_t rax_222
                                
                                if (rdx_116.d != ((0xffffffff << rcx_229).q u>> 0x20).d
                                        || var_214 != rsi_13)
                                    rax_222.b = 0
                                else
                                    rax_222.b = 1
                                
                                int64_t rcx_231 = var_220.q
                                
                                if (rax_222.b == 0 || rcx_231 != r14_10)
                                    rax_222.b = 1
                                else
                                    rax_222.b = 0
                                
                                if (rax_222.b == 0)
                                    break
                                
                                int32_t* rbx_33 = (rdx_116 << 4) + *rcx_231
                                sub_141fb2ed0(r13_2 + 0x1a50, &var_270, rbx_33)
                                int64_t rax_223 = sx.q(var_270.d)
                                
                                if (rax_223.d != 0xffffffff)
                                    void* rcx_233 = *(r13_2 + 0x1a50) + rax_223 * 0x18
                                    
                                    if (rcx_233 != 0)
                                        int64_t* rcx_234 = *(rcx_233 + 8)
                                        
                                        if (rcx_234 != 0)
                                            int64_t rdx_118
                                            rdx_118.b = 1
                                            sub_141f83fe0(rcx_234, rdx_118.b, rbx_33[1].b)
                                
                                var_208.d &= not.d(var_214.d)
                                sub_14059bdd0(&var_21c:4)
                            
                            rbx_30 = var_2a8
                            rdi_13 = var_298
                            rsi_12 = var_1f0
                    
                    int64_t rcx_236 = sx.q(*r12_6)
                    var_288 = (rcx_236 << 5) + *rsi_12
                    var_280.d = *(r12_6 + 4) - rcx_236.d
                    zmm0_1.o = var_288.o
                    var_258.o = zmm0_1.o
                    rax_213, zmm0_1, zmm1 = sub_141fbfc50(arg1, &var_258)
                    rcx_226 = var_1f8_1
                    rbx_30 += 1
                    rdi_13 += 1
                    var_2a8 = rbx_30
                    r12_6 = &r12_6[1]
                    var_298 = rdi_13
                while (rbx_30 s< var_2a0_2)
                
                rdi_10 = arg1
            
            sub_141fb03a0(rsi_12, 0)
            r9_10 = sub_141fb0570(&rdi_10[0x193], 0)
            
            if (r13_2 != 0)
                r9_10 = sub_140ba2630(r13_2 + 0x1a50, 0)
        
        void* rax_234 = rdi_10[0x28]
        *(rdi_10 + 0xb0c) = 0
        
        if (rax_234 != 0)
            void* rax_235 = *(rax_234 + 0x130)
            
            if (rax_235 != 0)
                rdi_10[0x16c].d = *(rax_235 + 0x24c)
        
        if (rdi_10[0xed] != 0 && var_230 u> 0)
            void* rax_237
            int512_t zmm1_7
            rax_237, zmm1_7 = sub_142168c50(rdi_10[0x2a], &var_230, 0, r9_10)
            
            if (rax_237 != 0 && sub_141fa3f30(rax_237) != 0)
                int64_t* rcx_246 = rdi_10[0xed]
                var_280:4.d &= 0xfffffffe
                zmm1_7.o = 0x40000000
                var_288:4.b = 1
                var_258:4.d = var_288:4.d
                int32_t var_250_1 = 0x40000000
                int32_t var_24c_2 = var_280:4.d
                var_258.d = 0
                (*(*rcx_246 + 0xd10))(rcx_246, zmm1_7, &var_258)
        
        int64_t* rax_240 = var_228
        
        if (rax_240 != 0)
            sub_140a74f90(rax_240)
        
        r14_7 = var_268
    
    sub_14094c030(&var_168)
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    sub_14100e680(&var_98)
    
    if (r14_7 != 0)
        sub_140a74f90(r14_7)
    
    result.b = 1
else
    int64_t* rcx_13 = *(*(r15 + 0x140) + 0x188)
    (*(*rcx_13 + 0x2e8))(rcx_13)
    int64_t rbx_1 = *(r15 + 0x140)
    void* rax_24 = sub_142452380()
    var_f8 = 5
    char var_a0 = 0
    sub_1405ab0f0(&var_f0, rbx_1, rax_24)
    char var_a0_1 = 1
    sub_1405b0c60(&var_f8)
    
    if (i_4 == 0)
        int64_t* rdi_1 = var_c8
        
        while (true)
            sub_1420e0c80(*(r15 + 0x140), rdi_1, 1, 1)
            int32_t r8_3 = var_b8
            int32_t rdx_10 = var_e0
            int64_t* r13_1 = var_f0
            int32_t rsi_1 = var_d8 + 1
            
            if (rsi_1 s>= r8_3 + rdx_10)
            label_141fbacdd:
                int64_t var_c8_1 = 0
                char var_d4 = 1
                break
            
            int64_t r12_1 = sx.q(rsi_1) << 3
            
            while (true)
                if (rsi_1 s>= rdx_10)
                    rdi_1 = *(var_c0 + (sx.q(rsi_1 - rdx_10) << 3))
                else
                    rdi_1 = *(r12_1 + var_e8)
                
                var_d0 += 1
                
                if (rdi_1 != 0)
                    void* rax_31 = sub_141dc9840(rdi_1)
                    
                    if (rax_31 != 0)
                        void* const rax_38
                        
                        if ((var_f8.b & 1) != 0)
                            int32_t rax_32 = *(rdi_1 + 0xc)
                            
                            if (rax_32 s>= data_143e1d9b4)
                                rax_38 = nullptr
                            else
                                int16_t temp4_1
                                int32_t temp5_1
                                temp4_1:temp5_1 = sx.q(rax_32)
                                uint32_t rdx_12 = zx.d(temp4_1)
                                int32_t rax_34 = temp5_1 + rdx_12
                                rax_38 = *(data_143e1d9a0 + (sx.q(rax_34 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_34.w) - rdx_12) * 0x18
                        
                        if ((var_f8.b & 1) == 0 || ((*(rax_38 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_24 = var_f8
                            
                            if (((rcx_24 u>> 1).b & 1) == 0)
                                goto label_141fbabfc
                            
                            uint64_t rax_42 = sub_1405949a0()
                            
                            if (rax_42.b != 0)
                                rcx_24 = var_f8
                            label_141fbabfc:
                                
                                if (((rcx_24 u>> 2).b & 1) == 0)
                                label_141fbac7c:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_31) == r13_1)
                                        if (rax_31 == r13_1[6])
                                            break
                                        
                                        void* rax_44 = sub_1425bd0d0()
                                        void* rdx_14 = rdi_1[2]
                                        int64_t rax_45 = sx.q(*(rax_44 + 0x38))
                                        
                                        if (rax_45.d s> *(rdx_14 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_14 + 0x30) + (rax_45 << 3)) != rax_44 + 0x30)
                                            break
                                else
                                    if ((*(rax_31 + 0x1f4) & 0x20) == 0
                                            || (*(rax_31 + 0x1f6) & 8) != 0)
                                        rax_42 = zx.q(*(rax_31 + 0x1f5))
                                    
                                    if (((*(rax_31 + 0x1f4) & 0x20) != 0
                                            && (*(rax_31 + 0x1f6) & 8) == 0) || (rax_42.b & 0x40) != 0
                                            || rax_42.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_26 = *(rax_31 + 0xb8)
                                    char* r14_1 = *(rax_31 + 0x248)
                                    
                                    if (rcx_26 != 0)
                                        rax_42 = sub_1424359b0(rcx_26)
                                    
                                    if (rcx_26 == 0 || rax_42 == 0 || r14_1 == rax_42)
                                        rcx_26.b = 1
                                    else
                                        rcx_26.b = 0
                                    
                                    if (r14_1 == 0 || *r14_1 == 2)
                                        rax_42.b = 1
                                    else
                                        rax_42.b = 0
                                    
                                    if (rcx_26.b != 0 || rax_42.b != 0)
                                        rax_42.b = 1
                                    
                                    if (r15.b != 0 && rax_42.b != 0)
                                        goto label_141fbac7c
                    
                    r8_3 = var_b8
                    rdx_10 = var_e0
                
                rsi_1 += 1
                r12_1 += 8
                
                if (rsi_1 s>= r8_3 + rdx_10)
                    goto label_141fbacdd
            
            int64_t* var_c8_2 = rdi_1
            var_d8 = rsi_1
            
            if (i_4 != 0)
                break
            
            r15 = arg1
        
        r13 = var_298
    
    if (var_a0_1 != 0)
        char var_a0_2 = 0
        sub_142441560(var_f0, var_a8)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)
    
    sub_142175620(*(arg1 + 0x150))
    int32_t rax_49 = sub_141faa960(arg1, 1) + 1
    *(arg1 + 0xcf8) = 0
    
    if (*(arg1 + 0xcfc) != rax_49)
        sub_1405c5570(arg1 + 0xcf0, rax_49)
    
    int64_t* rcx_35 = *(arg1 + 0x88)
    *(arg1 + 0x768) = 0
    sub_14213f9e0(rcx_35)
    int64_t* rcx_36 = *(arg1 + 0x88)
    (*(*rcx_36 + 0x2d8))(rcx_36)
    var_268 = 0
    int64_t* rax_51 = sub_14249aea0()
    void* rax_52 = sub_140cde0b0()
    
    if ((sub_140b5b8a0(0, 0) & 1) != 0)
        sub_140d19010(rax_52, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    *(arg1 + 0x88) = sub_140d2dfc0(rax_51, rax_52, var_268, 0, 0, 0, 0, 0, 0)
    int64_t var_1e8
    sub_1423fd810(&var_1e8, nullptr)
    uint64_t var_1c0
    
    if (&var_1c0 != arg1 + 0xb90)
        int32_t rbx_4 = *(arg1 + 0xb98)
        int64_t rdi_3 = *(arg1 + 0xb90)
        int32_t var_1b8_1 = rbx_4
        int32_t var_1b4
        
        if (rbx_4 != 0 || var_1b4 != 0)
            sub_1405a4c70(&var_1c0, rbx_4, var_1b4)
            memcpy(var_1c0, rdi_3, rbx_4 * 2)
        else
            int32_t var_1b4_1 = 0
    
    int64_t* rcx_42 = *(arg1 + 0x88)
    int64_t var_2d0_1
    var_2d0_1.d = 0
    (*(*rcx_42 + 0x2f8))(rcx_42, arg1, 2, &var_1e8, 0xf4240, var_2d0_1)
    sub_1423dcef0(data_143f5b298, 1)
    sub_141fc00f0(arg1, var_260)
    *(arg1 + 0x760) = var_260
    
    if ((*(*r13 + 0x28))(r13) != 0 && (*(*r13 + 0x28))(r13) != -1)
        (*(*r13 + 0x178))(r13, 0)
    
    int64_t var_190
    
    if (var_190 != 0)
        sub_140a74f90(var_190)
    
    int32_t i_10
    int32_t i_7 = i_10
    int64_t* var_1a0
    int64_t* rbx_5 = var_1a0
    
    if (i_7 != 0)
        int32_t i_5
        
        do
            int64_t rcx_49 = *rbx_5
            
            if (rcx_49 != 0)
                sub_140a74f90(rcx_49)
            
            rbx_5 = &rbx_5[2]
            i_5 = i_7
            i_7 -= 1
        while (i_5 != 1)
        rbx_5 = var_1a0
    
    if (rbx_5 != 0)
        sub_140a74f90(rbx_5)
    
    int64_t var_1b0
    
    if (var_1b0 != 0)
        sub_140a74f90(var_1b0)
    
    uint64_t rcx_52 = var_1c0
    
    if (rcx_52 != 0)
        sub_140a74f90(rcx_52)
    
    int64_t var_1d8
    
    if (var_1d8 != 0)
        sub_140a74f90(var_1d8)
    
    int64_t rcx_54 = var_1e8
    
    if (rcx_54 != 0)
        sub_140a74f90(rcx_54)
    
    result.b = 0
__security_check_cookie(rax_1 ^ &var_2f8)
return result
