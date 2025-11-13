// 函数: sub_14188a020
// 地址: 0x14188a020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t rdi = *(arg1 + 0x28)
int16_t* var_228 = nullptr
sub_1405a4c70(&var_228, sbb.d(0, 0, rdi != 0) + 0xb + rdi, 0)
memcpy(var_228, *(arg1 + 0x20), rdi * 2)
sub_140a2cf70(&var_228, u"chunkdump", 9)
int64_t* rcx_3 = *(arg1 + 8)
int16_t* const r15 = &data_142d40450
int32_t var_8c = 0x80
int64_t var_b8 = 0
int16_t* const r8_2 = &data_142d40450

if (rdi != 0)
    r8_2 = var_228

int64_t var_b0
__builtin_memset(&var_b0, 0, 0x24)
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int64_t var_78 = 0
int32_t var_70 = 0
int64_t* var_230
(*(*rcx_3 + 0x50))(rcx_3, &var_230, r8_2, 0x10)
int64_t* rcx_4 = *(arg1 + 8)
int16_t* const r8_3 = &data_142d40450

if (rdi != 0)
    r8_3 = var_228

int64_t* var_238
(*(*rcx_4 + 0x48))(rcx_4, &var_238, r8_3, 4)
int64_t* rcx_5

if (var_238 != 0)
    rcx_5 = var_230

uint64_t r12

if (var_238 == 0 || rcx_5 == 0)
    r12.b = 0
else
    r12.b = 1
    (*(*rcx_5 + 0x178))(rcx_5, 0)

char var_c8 = 0xff
bool z

if (0 == *(arg1 + 0x140))
    *(arg1 + 0x140) = 0
    z = true
else
    *(arg1 + 0x140)
    z = false

if (not(z))
    uint64_t rsi_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    bool z_1
    
    do
        void* rdi_1 = **(arg1 + 0x158)
        
        if (rdi_1 == 0)
            if (r12.b == 0)
                int64_t* rcx_67 = *(arg1 + 8)
                int16_t* r8_16 = &data_142d40450
                
                if (rdi != 0)
                    r8_16 = var_228
                
                int64_t* var_160
                int64_t** rax_64 = (*(*rcx_67 + 0x50))(rcx_67, &var_160, r8_16, 0x10)
                
                if (&var_230 != rax_64)
                    int64_t* rcx_68 = var_230
                    var_230 = *rax_64
                    *rax_64 = nullptr
                    
                    if (rcx_68 != 0)
                        (**rcx_68)(rcx_68, 1)
                
                int64_t* rcx_69 = var_160
                
                if (rcx_69 != 0)
                    (**rcx_69)(rcx_69, 1)
                
                int64_t* rcx_70 = *(arg1 + 8)
                int16_t* r8_17 = &data_142d40450
                
                if (rdi != 0)
                    r8_17 = var_228
                
                int64_t* var_158
                int64_t** rax_68 = (*(*rcx_70 + 0x48))(rcx_70, &var_158, r8_17, 4)
                
                if (&var_238 != rax_68)
                    int64_t* rcx_71 = var_238
                    var_238 = *rax_68
                    *rax_68 = nullptr
                    
                    if (rcx_71 != 0)
                        (**rcx_71)(rcx_71, 1)
                
                int64_t* rcx_72 = var_158
                
                if (rcx_72 != 0)
                    (**rcx_72)(rcx_72, 1)
                
                if (var_238 == 0 || var_230 == 0)
                    r12.b = 0
                else
                    r12.b = 1
                
                goto label_14188aa62
            
            int64_t* rcx_61 = var_238
            int64_t* rdi_6 = var_230
            int64_t rax_55 = (*(*rcx_61 + 0x28))(rcx_61)
            int64_t rdx_38 = *rdi_6
            
            if (rax_55 == (*(rdx_38 + 0x28))(rdi_6, rdx_38))
                int64_t* rcx_66 = var_230
                (*(*rcx_66 + 0x1b0))(rcx_66)
                r12.b = not.b(*(var_230 + 0x29))
                r12.b &= 1
            label_14188aa62:
                
                if (data_143efac54 s> *(0x14 + *(ThreadLocalStoragePointer + (rsi_1 << 3))))
                    _Init_thread_header(&data_143efac54)
                    
                    if (data_143efac54 == 0xffffffff)
                        uint128_t zmm0_1
                        zmm0_1.q = *(arg1 + 0x38) f* 0x408f400000000000
                        data_143efac50 = (int.q(zmm0_1.q)).d
                        _Init_thread_footer(&data_143efac54)
                
                int64_t* rcx_74 = *(arg1 + 0x180)
                (*(*rcx_74 + 0x20))(rcx_74, zx.q(data_143efac50), 0)
                int64_t* rcx_75 = *(arg1 + 0x180)
                (*(*rcx_75 + 0x18))(rcx_75)
            else
                int64_t* rcx_63 = *(arg1 + 8)
                int16_t* r8_15 = &data_142d40450
                
                if (rdi != 0)
                    r8_15 = var_228
                
                int64_t* var_168
                int64_t** rax_58 = (*(*rcx_63 + 0x48))(rcx_63, &var_168, r8_15, 4)
                
                if (&var_238 != rax_58)
                    int64_t* rcx_64 = var_238
                    var_238 = *rax_58
                    *rax_58 = nullptr
                    
                    if (rcx_64 != 0)
                        (**rcx_64)(rcx_64, 1)
                
                int64_t* rcx_65 = var_168
                
                if (rcx_65 != 0)
                    (**rcx_65)(rcx_65, 1)
                
                r12.b = var_238 != 0
        else
            uint64_t rax_9 = zx.q(*(rdi_1 + 0x20))
            uint128_t var_e0
            CRITICAL_SECTION** var_d0
            
            if (rax_9.d u> 0xff)
                sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", 0xff)
                sub_140afbb40()
            else if (rax_9.d != 0xff)
                if (rax_9.d u> 5)
                    sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", 0xff)
                    sub_140afbb40()
                else
                    switch (rax_9)
                        case 0
                            uint64_t rdx_6 = zx.q(var_c8)
                            
                            if (rdx_6.d u<= 5)
                                switch (rdx_6)
                                    case 0
                                        if (rdx_6.b == 0)
                                            char var_c8_1 = 0xff
                                    case 1
                                        if (rdx_6.b == 1)
                                            char var_c8_2 = 0xff
                                    case 2, 3, 4
                                        if (rdx_6.b == 2)
                                            char var_c8_3 = 0xff
                                    case 5
                                        char rax_11 = rdx_6.b
                                        
                                        if (rdx_6.b == 2)
                                            rax_11 = -1
                                        
                                        char var_c8_4 = rax_11
                            
                            var_e0 = *(rdi_1 + 8)
                            var_d0 = *(rdi_1 + 0x18)
                            var_c8 = 0
                        case 1
                            uint64_t rdx_7 = zx.q(var_c8)
                            
                            if (rdx_7.d u<= 5)
                                switch (rdx_7)
                                    case 0
                                        if (rdx_7.b == 0)
                                            char var_c8_5 = 0xff
                                    case 1
                                        if (rdx_7.b == 1)
                                            char var_c8_6 = 0xff
                                    case 2, 3, 4
                                        if (rdx_7.b == 2)
                                            char var_c8_7 = 0xff
                                    case 5
                                        char rax_13 = rdx_7.b
                                        
                                        if (rdx_7.b == 2)
                                            rax_13 = -1
                                        
                                        char var_c8_8 = rax_13
                            
                            var_e0 = *(rdi_1 + 8)
                            var_d0 = *(rdi_1 + 0x18)
                            var_c8 = 1
                        case 2, 3, 4, 5
                            var_c8 = 2
            
            uint64_t rbx_1 = *(arg1 + 0x158)
            *(arg1 + 0x158) = rdi_1
            char var_50_1 = 0xff
            void var_68
            sub_141869140(rdi_1 + 8, &var_68)
            
            if (rbx_1 != 0)
                sub_14186c530(rbx_1, 1)
            
            *(arg1 + 0x160) -= 1
            int64_t* rcx_14 = *(arg1 + 0x168)
            (*(*rcx_14 + 0x10))(rcx_14)
            
            if (var_c8 == 0)
                int64_t* rcx_15 = *(arg1 + 0x18)
                CRITICAL_SECTION** var_178 = var_d0
                (*(*rcx_15 + 0x10))(rcx_15, &var_e0)
                char var_208 = 2
                int64_t var_200_1 = 0
                void var_188
                int32_t* rax_17
                double zmm1_1[0x2]
                rax_17, zmm1_1 = sub_140cba0f0(&var_b8, &var_188, &var_e0)
                int128_t entry_zmm2
                int128_t entry_zmm3
                
                if (*rax_17 != 0xffffffff)
                    int32_t var_218
                    zmm1_1 = sub_140cba0f0(&var_b8, &var_218, &var_e0)
                    int64_t rax_18 = sx.q(var_218)
                    void* const r14_3
                    
                    if (rax_18.d == 0xffffffff)
                        r14_3 = nullptr
                    else
                        r14_3 = (rax_18 << 5) + var_b8
                    
                    if (r12.b == 0)
                    label_14188a546:
                        
                        if (var_208 != 0)
                            goto label_14188a55c
                    else
                        int64_t* rcx_18 = var_238
                        int64_t* rsi_2 = var_230
                        int64_t rax_20 = (*(*rcx_18 + 0x28))(rcx_18)
                        int64_t rdx_12 = *rsi_2
                        int64_t* rcx_23
                        
                        if (rax_20 == (*(rdx_12 + 0x28))(rsi_2, rdx_12))
                            rcx_23 = var_238
                        else
                            int64_t* rcx_20 = *(arg1 + 8)
                            int16_t* r8_6 = &data_142d40450
                            
                            if (rdi != 0)
                                r8_6 = var_228
                            
                            int64_t* var_180
                            int64_t* rax_23 = (*(*rcx_20 + 0x48))(rcx_20, &var_180, r8_6, 4)
                            
                            if (&var_238 != rax_23)
                                int64_t* rcx_21 = var_238
                                var_238 = *rax_23
                                *rax_23 = 0
                                
                                if (rcx_21 != 0)
                                    (**rcx_21)(rcx_21, 1)
                            
                            int64_t* rcx_22 = var_180
                            
                            if (rcx_22 != 0)
                                (**rcx_22)(rcx_22, 1)
                            
                            rcx_23 = var_238
                            r12.b = rcx_23 != 0
                        
                        if (r12.b == 0)
                            goto label_14188a546
                        
                        int64_t rax_27 = (*(*rcx_23 + 0x28))(rcx_23)
                        
                        if (*(r14_3 + 0x10) s>= rax_27)
                            goto label_14188a546
                        
                        int64_t* rcx_24 = var_230
                        (*(*rcx_24 + 0x1b0))(rcx_24)
                        int64_t* rcx_25 = var_238
                        (*(*rcx_25 + 0x178))(rcx_25, *(r14_3 + 0x10))
                        int64_t* rcx_26 = *(arg1 + 0x10)
                        int64_t* rax_31 = (*(*rcx_26 + 0x18))(rcx_26, var_238, &var_208)
                        int64_t* var_200_2 = rax_31
                        
                        if ((*(var_238 + 0x29) & 1) == 0 && (*(var_230 + 0x29) & 1) == 0)
                            r12.b = 1
                            
                            if (rax_31 == 0)
                                goto label_14188a7c9
                            
                            void var_150
                            sub_141821460(&var_150, rax_31)
                            void* rax_32 = sub_1405948a0(&var_150)
                            int32_t r15_2 = *(rax_32 + 0xc) ^ var_e0:4.d
                            int32_t r14_5 = *(rax_32 + 0x10) ^ var_e0:8.d
                            int32_t rdi_4 = *(rax_32 + 0x14) ^ var_e0:0xc.d
                            int32_t rsi_4 = *(rax_32 + 8) ^ var_e0.d
                            sub_141822d90(&var_150)
                            r15 = &data_142d40450
                            
                            if ((rsi_4 | rdi_4 | r14_5 | r15_2) != 0)
                                goto label_14188a7c9
                            
                            goto label_14188a546
                        
                        r12.b = 0
                    label_14188a7c9:
                        var_208 = 7
                    label_14188a55c:
                        sub_140ccd8d0(&var_b8, &var_e0)
                        sub_141881900(arg1, &var_e0)
                        int64_t* rcx_34 = *(arg1 + 8)
                        int16_t* rdx_20 = &data_142d40450
                        int64_t var_1f8 = 0
                        
                        if (rdi != 0)
                            rdx_20 = var_228
                        
                        (*(*rcx_34 + 0x18))(rcx_34, rdx_20, &var_1f8)
                        int32_t var_1a8 = 0
                        int64_t var_a8
                        int64_t* var_1a0_1 = &var_a8
                        int32_t var_1a4_1 = 1
                        int32_t var_198_1 = 0xffffffff
                        int64_t var_194_1 = 0
                        int32_t var_90
                        
                        if (var_90 != 0)
                            sub_14059bdd0(&var_1a8)
                        
                        double zmm4_1[0x2] = var_198_1.o
                        int16_t var_1b0_1 = 0
                        int64_t* var_e8_1 = &var_b8
                        int64_t* var_1b8_1 = &var_b8
                        entry_zmm2 = (&var_b8).o
                        double var_120_1[0x2] = zmm4_1
                        entry_zmm3 = var_1a8.o
                        double rcx_36 = zmm4_1[0]
                        zmm1_1 = _mm_unpackhi_pd(zmm4_1, zmm4_1[0])
                        int128_t zmm0_2
                        zmm0_2.q = zmm1_1.q
                        int128_t var_1e8 = entry_zmm2
                        int128_t var_1d8_1 = entry_zmm3
                        int128_t var_f0 = zmm0_2
                        
                        if ((rcx_36 u>> 0x20).d s< *(entry_zmm3.q + 0x18))
                            int32_t i = var_1d8_1:0xc.d
                            
                            do
                                void* rdx_23 = (sx.q(i) << 5) + *var_1e8.q
                                
                                if (*(rdx_23 + 0x10) s>= var_1f8)
                                    sub_141881900(arg1, rdx_23)
                                    sub_1405c3390(zmm0_2:8.q, i)
                                    var_1b0_1.b = 1
                                
                                var_1d8_1:8.d &= not.d(var_1e8:0xc.d)
                                sub_14059bdd0(&var_1e8:8)
                                i = var_1d8_1:0xc.d
                            while (i s< *(var_1d8_1.q + 0x18))
                            
                            if (var_1b0_1.b != 0 && var_1b0_1:1.b != 0)
                                zmm1_1 = sub_140cb1970(var_1b8_1, 
                                    var_1b8_1[1].d - *(var_1b8_1 + 0x34), 1)
                    
                    ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                
                CRITICAL_SECTION* rcx_42 = *var_d0
                rcx_42->__offset(0x80).o = var_208.o
                entry_zmm2, entry_zmm3 = sub_1405fc0f0(rcx_42, zmm1_1, entry_zmm2, entry_zmm3)
                int64_t* rcx_43 = *(arg1 + 0x18)
                (*(*rcx_43 + 0x18))(rcx_43, &var_e0, &var_228, zx.q(var_208))
                sub_14186ad20(&var_178, var_d0)
            else if (var_c8 == 1)
                void var_184
                
                if (*sub_140cba0f0(&var_b8, &var_184, &var_e0) == 0xffffffff)
                    rbx_1.b = 1
                    
                    if (r12.b == 0)
                        sub_141881900(arg1, &var_e0)
                    else
                        int64_t* rbx_3 = var_230
                        int64_t rsi_8 = *rbx_3
                        (*(rsi_8 + 0x178))(rbx_3, (*(rsi_8 + 0x28))(rbx_3))
                        int64_t* rcx_53 = var_230
                        int64_t rax_49 = (*(*rcx_53 + 0x20))(rcx_53)
                        int64_t* rcx_54 = *(arg1 + 0x10)
                        int64_t* rdx_33 = var_230
                        int64_t var_170 = rax_49
                        char rax_51 = (*(*rcx_54 + 0x30))(rcx_54, rdx_33, var_d0)
                        int64_t* rcx_55 = var_230
                        rbx_1 = zx.q(rax_51)
                        int64_t rdx_34 = *rcx_55
                        (*(rdx_34 + 0x20))(rcx_55, rdx_34)
                        r12.b = not.b(*(var_230 + 0x29))
                        r12.b &= 1
                        
                        if (rbx_1.b != 0 || r12.b == 0)
                            sub_141881900(arg1, &var_e0)
                        else
                            sub_1418182f0(&var_b8, &var_e0, &var_170)
                    
                    int64_t* rcx_59 = *(arg1 + 0x18)
                    (*(*rcx_59 + 8))(rcx_59, &var_e0, &var_228, zx.q(rbx_1.b))
                
                if (var_d0 != 0)
                    (*var_d0)->DebugInfo(var_d0, 1)
            
            rsi_1 = zx.q(data_14401b1a0)
        
        if (0 == *(arg1 + 0x140))
            *(arg1 + 0x140) = 0
            z_1 = true
        else
            *(arg1 + 0x140)
            z_1 = false
    while (not(z_1))

int64_t* rcx_45 = var_230

if (rcx_45 != 0)
    var_230 = nullptr
    (**rcx_45)(rcx_45, 1, &__dos_header, 0xff)

int64_t* rcx_46 = var_238

if (rcx_46 != 0)
    var_238 = nullptr
    (**rcx_46)(rcx_46, 1)

int64_t* rcx_47 = *(arg1 + 8)

if (rdi != 0)
    r15 = var_228

(*(*rcx_47 + 0x68))(rcx_47, r15)
uint64_t rdx_30 = zx.q(var_c8)

if (rdx_30.d u<= 5)
    switch (rdx_30)
        case 0
            if (rdx_30.b == 0)
                char var_c8_9 = 0xff
        case 1
            if (rdx_30.b == 1)
                char var_c8_10 = 0xff
        case 2, 3, 4
            if (rdx_30.b == 2)
                char var_c8_11 = 0xff
        case 5
            char rax_74 = rdx_30.b
            
            if (rdx_30.b == 2)
                rax_74 = -1
            
            char var_c8_12 = rax_74

int64_t* rcx_76 = var_238

if (rcx_76 != 0)
    (**rcx_76)(rcx_76, 1)

int64_t* rcx_77 = var_230

if (rcx_77 != 0)
    (**rcx_77)(rcx_77, 1)

void* result = sub_1405ae100(&var_b8)
int16_t* rcx_79 = var_228

if (rcx_79 != 0)
    result = sub_140a74f90(rcx_79)

__security_check_cookie(rax_1 ^ &var_258)
return result
