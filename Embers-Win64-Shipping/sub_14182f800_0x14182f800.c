// 函数: sub_14182f800
// 地址: 0x14182f800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int32_t rax_2 = arg2[1].d
int32_t rsi = *(arg1 + 0x30)
int32_t rbx = rax_2 - 1
int64_t r15
r15.b = 0
char var_328 = 1

if (rax_2 == 0)
    rbx = 0

int32_t rax_4

if (rsi == 0)
    rax_4 = 2

if (rsi != 0 || rbx == 0xffffffff)
    rax_4 = 1

int64_t r12 = *(arg1 + 0x28)
int32_t rcx = rbx + rax_4
int16_t* var_2f8 = nullptr

if (rsi != 0 || rcx != 0)
    sub_1405a4c70(&var_2f8, rsi + rcx, 0)
    memcpy(var_2f8, r12, rsi * 2)
else
    int32_t var_2ec_1 = 0

sub_140a2cf70(&var_2f8, *arg2, rbx)
void var_118
sub_140b2f110(&var_118)
bool cond:2 = arg2[3].d s<= 1
int64_t var_130
__builtin_memset(&var_130, 0, 0x14)
int64_t* r12_1

if (cond:2)
    int64_t rsi_1 = 0
    int32_t i = 0
    int32_t i_2 = 0
    
    if (arg3 != 0)
        sub_140a464c0()
        int16_t* const rdx_3 = &data_142d40450
        
        if (rsi != 0)
            rdx_3 = var_2f8
        
        int64_t* rax_6 = (*(data_14399ea08 + 0x18))(&data_14399ea08, rdx_3, 0)
        
        if (rax_6 != 0)
            int64_t* var_318 = nullptr
            int64_t var_310_1 = 0
            sub_1405c5510(&var_318, 0x400000)
            int32_t rsi_2 = var_310_1.d
            
            if (rsi_2 s< 0x400000)
                bool cond:5_1 = var_310_1:4.d s>= 0x400000
                var_310_1.d = 0x400000
                
                if (not(cond:5_1))
                    sub_1405daba0(&var_318)
            else if (rsi_2 s> 0x400000 && rsi_2 != 0x400000)
                int32_t rsi_3
                
                if (rsi_3 != 0x400000)
                    int64_t* rcx_8 = var_318
                    memmove(&rcx_8[0x80000], sx.q(rsi_2) + rcx_8, 0)
                
                var_310_1.d = 0 + 0x400000
                sub_1405dac10(&var_318)
            
            rsi_1 = 0
            int32_t i_1 = 0
            int64_t r8_4 = (*(*rax_6 + 0x28))(rax_6) - 0x400
            
            if (r8_4 s<= 0)
                r8_4 = 0
            
            int64_t var_210_1 = r8_4
            
            if (arg2[0xa].d s<= 0)
            label_14182fbd6:
                r12_1 = var_318
            else
                void* rdx_7 = nullptr
                void* rcx_12 = arg1 + 0x74
                void* var_2e8_1 = nullptr
                
                do
                    bool z_1
                    
                    if (0 == *rcx_12)
                        *rcx_12 = 0
                        z_1 = true
                    else
                        *rcx_12
                        z_1 = false
                    
                    if (not(z_1))
                        goto label_14182fbd6
                    
                    int64_t rax_12 = arg2[9]
                    void* rcx_13 = rdx_7 + rax_12
                    uint64_t rcx_14 = zx.q(*(rdx_7 + rax_12 + 0x14))
                    int64_t r13_1 = rsi_1 + rcx_14
                    
                    if (r13_1 s> r8_4)
                        i = i_2
                        goto label_14182fbd6
                    
                    int32_t rsi_4 = var_310_1.d
                    
                    if (rcx_14.d s> rsi_4)
                        var_310_1.d = rcx_14.d
                        
                        if (rcx_14.d s> var_310_1:4.d)
                            sub_1405daba0(&var_318)
                        
                        r12_1 = var_318
                    else if (rcx_14.d s>= rsi_4)
                        r12_1 = var_318
                    else
                        int32_t rax_26 = rsi_4 - rcx_14.d
                        
                        if (rsi_4 == rcx_14.d)
                            r12_1 = var_318
                        else
                            r12_1 = var_318
                            int32_t rsi_7 = rsi_4 - rax_26
                            
                            if (rsi_7 != rcx_14.d)
                                memmove(sx.q(rcx_14.d) + r12_1, sx.q(rax_26 + rcx_14.d) + r12_1, 
                                    rsi_7 - rcx_14.d)
                            
                            var_310_1.d = rsi_7
                    
                    int64_t* rcx_16 = *(arg1 + 0xd8)
                    int64_t performanceCount_14
                    __builtin_memset(&performanceCount_14, 0, 0x18)
                    (*(*rcx_16 + 0x60))(rcx_16)
                    int64_t performanceCount_3
                    QueryPerformanceCounter(&performanceCount_3)
                    performanceCount_14 = performanceCount_3
                    (*(*rax_6 + 0x150))(rax_6, r12_1, zx.q(*(rcx_13 + 0x14)))
                    int64_t performanceCount_4
                    QueryPerformanceCounter(&performanceCount_4)
                    uint64_t r8_6 = zx.q(*(rcx_13 + 0x14))
                    int64_t performanceCount_15 = performanceCount_4
                    uint64_t var_268_1 = r8_6
                    sub_140b4ad80(&var_118, r12_1, r8_6)
                    int64_t* rcx_21 = *(arg1 + 0xd8)
                    (*(*rcx_21 + 0x68))(rcx_21, &performanceCount_14)
                    int64_t* rcx_22 = *(arg1 + 0xc0)
                    i = i_1 + 1
                    i_2 = i
                    char rax_19 = (*(*rcx_22 + 0x30))(rcx_22, rcx_13)
                    bool cond:12_1
                    
                    if (rax_19 != 0)
                        cond:12_1 = var_328 != 0
                        var_328 = 1
                    
                    if (rax_19 == 0 || not(cond:12_1))
                        var_328 = 0
                    
                    *(arg1 + 0xe8) += zx.q(*(rcx_13 + 0x14))
                    int64_t* rcx_23 = *(arg1 + 0xd8)
                    (*(*rcx_23 + 0x40))(rcx_23, *(arg1 + 0xe8))
                    int64_t rsi_6 = **(arg1 + 0xd8)
                    int64_t rax_24 = (*(*rax_6 + 0x20))(rax_6)
                    (*(rsi_6 + 0x28))(*(arg1 + 0xd8), arg2, rax_24)
                    sub_141853af0(arg1 + 0x70, arg1 + 0x74)
                    rcx_12 = arg1 + 0x74
                    rsi_1 = r13_1
                    rdx_7 = var_2e8_1 + 0x18
                    r8_4 = var_210_1
                    i_1 = i
                    var_2e8_1 = rdx_7
                while (i s< arg2[0xa].d)
            
            (*(*rax_6 + 0x1b8))(rax_6)
            
            if (r12_1 != 0)
                sub_140a74f90(r12_1)
            
            (**rax_6)(rax_6, 1)
    
    if (*(arg1 + 0x6c) != 0)
        goto label_14182fcd2
    
    *(arg1 + 0x6c) = 1
    int64_t* rax_30 = sub_141829f00(arg1, arg2, arg2[0xb] - rsi_1)
    EnterCriticalSection(arg1 + 0x78)
    *(arg1 + 0xf0) = rax_30
    uint64_t var_208 = 0
    *(arg1 + 0xf8) = 0
    char rax_31 = sub_140b67990(arg1 + 0x18, &var_208, arg1 + 0xf8)
    int64_t* r9_1
    
    if (rax_31 != 0)
        r9_1 = *(arg1 + 0xf8)
    
    if (rax_31 == 0 || r9_1 u>= rax_30)
        if (arg1 == -0x78)
            goto label_14182fcd2
        
        LeaveCriticalSection(arg1 + 0x78)
    label_14182fcd2:
        
        if (*(arg1 + 0x6b) == 0)
            int64_t* rcx_39 = *(arg1 + 0xd8)
            *(arg1 + 0x6b) = 1
            (*(*rcx_39 + 0x10))(rcx_39)
        
        int64_t* rcx_40 = *(arg1 + 0xd8)
        int64_t var_290_1 = 0
        int64_t var_288_1 = 0
        (*(*rcx_40 + 0x50))(rcx_40)
        int64_t performanceCount_5
        QueryPerformanceCounter(&performanceCount_5)
        int64_t* rcx_42 = *(arg1 + 0xb0)
        int16_t* r8_14 = &data_142d40450
        
        if (rsi != 0)
            r8_14 = var_2f8
        
        int64_t performanceCount_10 = performanceCount_5
        int64_t* var_308
        (*(*rcx_42 + 0x50))(rcx_42, &var_308, r8_14, zx.q(zx.d(arg3) << 3))
        enum WIN32_ERROR rax_38 = GetLastError()
        int64_t performanceCount_6
        QueryPerformanceCounter(&performanceCount_6)
        int64_t* rcx_44 = *(arg1 + 0xd8)
        int64_t performanceCount_11 = performanceCount_6
        int64_t var_288_2 = 0
        (*(*rcx_44 + 0x58))(rcx_44, &performanceCount_10)
        int64_t* rcx_45 = var_308
        r12_1.b = rcx_45 != 0
        char rax_89
        int64_t* rdx_48
        void* r8_24
        uint64_t r9_8
        
        if (rcx_45 == 0)
            r15.b = 1
        label_141830152:
            
            if (r12_1.b == 0)
                goto label_141830161
            
            sub_140b39010(&var_118)
            sub_140b3da80(&var_118, &var_130)
            int64_t rcx_111 = var_130
            uint64_t rcx_112 = rcx_111 - arg2[4]
            
            if (rcx_111 == arg2[4])
                int64_t var_128
                rcx_112 = var_128 - arg2[5]
                int32_t var_120
                
                if (var_128 == arg2[5])
                    rcx_112 = zx.q(var_120) - zx.q(arg2[6].d)
            
            r12_1.b = rcx_112 == 0
            
            if (r12_1.b != 0)
                goto label_14183055e
            
            int64_t* rcx_115 = *(arg1 + 0xc8)
            r15.b = 6
            
            if ((*(*rcx_115 + 8))(rcx_115) == 0)
                int64_t var_2b0 = 0
                int32_t var_2a8_1 = 0
                sub_1405947f0(&var_2b0, 0x17)
                int32_t rax_107 = var_2a8_1 + 0x17
                var_2a8_1 = rax_107
                
                if (rax_107 s> 0)
                    sub_140594770(&var_2b0)
                
                UnDecorator::getReferenceType(var_2b0, u"Serialised Verify Fail", 0x2e)
                int64_t* rcx_119 = *(arg1 + 0xd0)
                (*(*rcx_119 + 0x20))(rcx_119, arg2, 0xffffffff, &var_2b0)
                int64_t rcx_120 = var_2b0
                
                if (rcx_120 != 0)
                    sub_140a74f90(rcx_120)
            
            sub_1405d9400()
            int64_t var_178 = data_143cd6fd8
            void* rcx_121 = data_143cd6fe0
            void* var_170_1 = rcx_121
            
            if (rcx_121 != 0)
                *(rcx_121 + 8) += 1
            
            rdx_48 = &var_178
            r8_24 = data_1439c6798
            int32_t var_168_1 = data_143cd6fe8
        label_141830544:
            r9_8 = 0
        label_141830547:
            int64_t* rcx_122 = *(arg1 + 0xc8)
            (*(*rcx_122 + 0x38))(rcx_122, 2, r8_24, r9_8, rdx_48)
        label_14183055e:
            rax_89 = r15.b
            
            if (r12_1.b == 0)
            label_141830567:
                
                if (r15.b == 1 || rax_89 - 4 u<= 2)
                label_141830573:
                    int64_t* rcx_123 = *(arg1 + 0xb0)
                    int16_t* rdx_54 = &data_142d40450
                    
                    if (rsi != 0)
                        rdx_54 = var_2f8
                    
                    (*(*rcx_123 + 0x68))(rcx_123, rdx_54)
        else
            if ((*(*rcx_45 + 0x20))() != rsi_1)
                int64_t* rcx_46 = *(arg1 + 0xd8)
                (*(*rcx_46 + 0x50))(rcx_46)
                int64_t performanceCount_7
                QueryPerformanceCounter(&performanceCount_7)
                int64_t* rcx_48 = var_308
                performanceCount_10 = performanceCount_7
                (*(*rcx_48 + 0x178))(rcx_48, rsi_1)
                int64_t performanceCount_8
                QueryPerformanceCounter(&performanceCount_8)
                int64_t* rcx_50 = *(arg1 + 0xd8)
                int64_t performanceCount_12 = performanceCount_8
                int64_t var_288_3 = 0
                (*(*rcx_50 + 0x58))(rcx_50, &performanceCount_10)
            
            if (i s< arg2[0xa].d)
                int64_t rcx_52 = sx.q(i) * 0x18
                int64_t var_2e8_2 = rcx_52
                
                while (r12_1.b != 0)
                    bool z_2
                    
                    if (0 == *(arg1 + 0x74))
                        *(arg1 + 0x74) = 0
                        z_2 = true
                    else
                        *(arg1 + 0x74)
                        z_2 = false
                    
                    if (not(z_2))
                        break
                    
                    int64_t* rax_50 = var_308
                    r15.b = 0
                    void* rsi_10 = arg2[9] + rcx_52
                    int64_t* rcx_53 = *(arg1 + 0xd8)
                    int64_t performanceCount_16
                    __builtin_memset(&performanceCount_16, 0, 0x18)
                    (*(*rcx_53 + 0x18))(rcx_53, rsi_10)
                    int64_t* rcx_54 = *(arg1 + 0xb8)
                    int64_t* rax_53 = (*(*rcx_54 + 8))(rcx_54, rsi_10)
                    
                    if (rax_53 == 0)
                        r15.b = 3
                    else
                        int64_t var_248
                        (*(*rax_53 + 8))(rax_53, &var_248, 0)
                        int64_t* rcx_56 = *(arg1 + 0xd8)
                        (*(*rcx_56 + 0x70))(rcx_56)
                        int64_t performanceCount_9
                        QueryPerformanceCounter(&performanceCount_9)
                        void* rbx_5 = zx.q(*(rsi_10 + 0x10)) + var_248
                        uint64_t r8_15 = zx.q(*(rsi_10 + 0x14))
                        performanceCount_16 = performanceCount_9
                        sub_140b4ad80(&var_118, rbx_5, r8_15)
                        (*(*rax_50 + 0x150))(rax_50, rbx_5, zx.q(*(rsi_10 + 0x14)))
                        char rbx_6 = not.b(*(rax_50 + 0x29))
                        uint64_t var_250_1 = zx.q(*(rsi_10 + 0x14))
                        int64_t performanceCount
                        QueryPerformanceCounter(&performanceCount)
                        int64_t* rcx_61 = *(arg1 + 0xd8)
                        int64_t performanceCount_17 = performanceCount
                        (*(*rcx_61 + 0x78))(rcx_61, &performanceCount_16)
                        (*(*rax_53 + 0x18))(rax_53)
                        int64_t* rcx_63 = *(arg1 + 0xc0)
                        char rax_64 = (*(*rcx_63 + 0x30))(rcx_63, rsi_10)
                        
                        if ((rbx_6 & 1) == 0)
                            r15.b = 4
                        else if (rax_64 == 0)
                            r15.b = 5
                    
                    int64_t* rcx_64 = var_308
                    r12_1.b = r15.b == 0
                    int64_t rbx_7 = **(arg1 + 0xd8)
                    int64_t rax_67 = (*(*rcx_64 + 0x20))(rcx_64)
                    (*(rbx_7 + 0x28))(*(arg1 + 0xd8), arg2, rax_67)
                    
                    if (r15.b != 0)
                        int64_t* rcx_75 = *(arg1 + 0xc8)
                        
                        if ((*(*rcx_75 + 8))(rcx_75) == 0)
                            if (r15.b == 3)
                                int64_t var_2e0 = 0
                                int32_t var_2d8_1 = 0
                                sub_1405947f0(&var_2e0, 0xe)
                                int32_t rax_79 = var_2d8_1 + 0xe
                                var_2d8_1 = rax_79
                                
                                if (rax_79 s> 0)
                                    sub_140594770(&var_2e0)
                                
                                UnDecorator::getReferenceType(var_2e0, u"Missing Chunk", 0x1c)
                                int64_t* rcx_79 = *(arg1 + 0xd0)
                                (*(*rcx_79 + 0x20))(rcx_79, arg2, 0xffffffff, &var_2e0)
                                int64_t rcx_80 = var_2e0
                                
                                if (rcx_80 != 0)
                                    sub_140a74f90(rcx_80)
                            else if (r15.b == 5)
                                int64_t var_2d0 = 0
                                int32_t var_2c8_1 = 0
                                sub_1405947f0(&var_2d0, 0xf)
                                int32_t rax_81 = var_2c8_1 + 0xf
                                var_2c8_1 = rax_81
                                
                                if (rax_81 s> 0)
                                    sub_140594770(&var_2d0)
                                
                                UnDecorator::getReferenceType(var_2d0, u"Tracking Error", 0x1e)
                                int64_t* rcx_84 = *(arg1 + 0xd0)
                                (*(*rcx_84 + 0x20))(rcx_84, arg2, 0xffffffff, &var_2d0)
                                int64_t rcx_85 = var_2d0
                                
                                if (rcx_85 != 0)
                                    sub_140a74f90(rcx_85)
                    else
                        *(arg1 + 0xe8) += zx.q(*(rsi_10 + 0x14))
                        int64_t* rcx_66 = *(arg1 + 0xd8)
                        (*(*rcx_66 + 0x40))(rcx_66, *(arg1 + 0xe8))
                        sub_141853af0(arg1 + 0x70, arg1 + 0x74)
                    
                    int32_t i_3 = i_2 + 1
                    rcx_52 = var_2e8_2 + 0x18
                    i_2 = i_3
                    var_2e8_2 = rcx_52
                    
                    if (i_3 s>= arg2[0xa].d)
                        break
            
            int64_t* rcx_69 = *(arg1 + 0xd8)
            (*(*rcx_69 + 0x50))(rcx_69)
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            int64_t* rcx_71 = var_308
            performanceCount_10 = performanceCount_1
            char rax_73 = (*(*rcx_71 + 0x1b8))(rcx_71)
            int64_t* rcx_72 = var_308
            
            if (rcx_72 != 0)
                var_308 = nullptr
                (**rcx_72)(rcx_72, 1)
            
            int64_t performanceCount_2
            QueryPerformanceCounter(&performanceCount_2)
            int64_t* rcx_74 = *(arg1 + 0xd8)
            int64_t performanceCount_13 = performanceCount_2
            int64_t var_288_4 = 0
            (*(*rcx_74 + 0x58))(rcx_74, &performanceCount_10)
            
            if (r15.b != 0 || rax_73 != 0)
                goto label_141830152
            
            r15.b = 4
            r12_1.b = 0
        label_141830161:
            int16_t* rdx_43 = &data_142d40450
            int64_t* rcx_86 = *(arg1 + 0xb0)
            int64_t var_280 = arg2[0xb]
            
            if (rsi != 0)
                rdx_43 = var_2f8
            
            (*(*rcx_86 + 0x18))(rcx_86, rdx_43, &var_280)
            int64_t* rax_85 = sub_141829f00(arg1, arg2, arg2[0xb] - var_280)
            uint64_t var_228 = 0
            uint64_t var_2a0 = 0
            char rbx_3 = 1
            
            if (sub_140b67990(arg1 + 0x18, &var_228, &var_2a0) != 0)
                rbx_3 = 1
                
                if (var_2a0 u< rax_85)
                    rbx_3 = 0
            
            if (rbx_3 != 0)
                int64_t* rcx_93 = *(arg1 + 0xc8)
                bool cond:8_1 = (*(*rcx_93 + 8))(rcx_93) == 0
                uint32_t rcx_94 = zx.d(r15.b)
                
                if (rcx_94 == 1)
                    enum WIN32_ERROR rbx_9
                    
                    if (cond:8_1 == 0)
                        rbx_9 = rax_38
                    else
                        int64_t var_2c0 = 0
                        int32_t var_2b8_1 = 0
                        sub_1405947f0(&var_2c0, 0x16)
                        int32_t rax_100 = var_2b8_1 + 0x16
                        var_2b8_1 = rax_100
                        
                        if (rax_100 s> 0)
                            sub_140594770(&var_2c0)
                        
                        UnDecorator::getReferenceType(var_2c0, u"Could Not Create File", 0x2c)
                        int64_t* rcx_106 = *(arg1 + 0xd0)
                        rbx_9 = rax_38
                        (*(*rcx_106 + 0x20))(rcx_106, arg2, zx.q(rbx_9), &var_2c0)
                        int64_t rcx_107 = var_2c0
                        
                        if (rcx_107 != 0)
                            sub_140a74f90(rcx_107)
                    
                    sub_1405d9400()
                    int64_t var_190 = data_143cd6fd8
                    void* rcx_108 = data_143cd6fe0
                    void* var_188_1 = rcx_108
                    
                    if (rcx_108 != 0)
                        *(rcx_108 + 8) += 1
                    
                    r9_8 = zx.q(rbx_9)
                    r8_24 = data_1439c6780
                    rdx_48 = &var_190
                    int32_t var_180_1 = data_143cd6fe8
                    goto label_141830547
                
                if (rcx_94 == 3)
                    sub_1405d9400()
                    int64_t var_1a8 = data_143cd6fd8
                    void* rcx_101 = data_143cd6fe0
                    void* var_1a0_1 = rcx_101
                    
                    if (rcx_101 != 0)
                        *(rcx_101 + 8) += 1
                    
                    int64_t* rcx_102 = *(arg1 + 0xc8)
                    int32_t var_198_1 = data_143cd6fe8
                    (*(*rcx_102 + 0x38))(rcx_102, 2, data_1439c6788, 0, &var_1a8)
                    rax_89 = r15.b
                    goto label_141830567
                
                if (rcx_94 == 4)
                    sub_1405d9400()
                    int64_t var_1c0 = data_143cd6fd8
                    void* rcx_99 = data_143cd6fe0
                    void* var_1b8_1 = rcx_99
                    
                    if (rcx_99 != 0)
                        *(rcx_99 + 8) += 1
                    
                    int64_t* rcx_100 = *(arg1 + 0xc8)
                    int32_t var_1b0_1 = data_143cd6fe8
                    (*(*rcx_100 + 0x38))(rcx_100, 2, data_1439c67a0, 0, &var_1c0)
                    rax_89 = r15.b
                    goto label_141830567
                
                if (rcx_94 != 5)
                    goto label_14183055e
                
                sub_1405d9400()
                int64_t var_1d8 = data_143cd6fd8
                void* rcx_98 = data_143cd6fe0
                void* var_1d0_1 = rcx_98
                
                if (rcx_98 != 0)
                    *(rcx_98 + 8) += 1
                
                rdx_48 = &var_1d8
                r8_24 = data_1439c67a8
                int32_t var_1c8_1 = data_143cd6fe8
                goto label_141830544
            
            EnterCriticalSection(arg1 + 0x78)
            *(arg1 + 0xf8) = var_2a0
            *(arg1 + 0xf0) = rax_85
            LeaveCriticalSection(arg1 + 0x78)
            int64_t* rbx_8 = *(arg1 + 0xc8)
            int64_t rsi_11 = *rbx_8
            void var_148
            int64_t* rax_88 = sub_1418a3070(&var_148, arg1 + 0x18, rax_85, var_2a0, nullptr)
            (*(rsi_11 + 0x38))(rbx_8, 0xb, data_1439c6760, 0, rax_88)
            
            if (2 - 4 u<= 2)
                goto label_141830573
        int64_t* rcx_124 = var_308
        
        if (rcx_124 != 0)
            int64_t r8_28 = *rcx_124
            (*r8_28)(rcx_124, 1, r8_28)
    else
        int64_t rsi_8 = **(arg1 + 0xc8)
        void var_160
        int64_t* rax_33 = sub_1418a3070(&var_160, arg1 + 0x18, rax_30, r9_1, nullptr)
        (*(rsi_8 + 0x38))(*(arg1 + 0xc8), 0xb, data_1439c6758, 0, rax_33)
        
        if (arg1 != -0x78)
            LeaveCriticalSection(arg1 + 0x78)
        
        r12_1.b = 0
else
    r12_1.b = 0

sub_140b30ae0(&var_118)
int16_t* rcx_126 = var_2f8

if (rcx_126 != 0)
    sub_140a74f90(rcx_126)

__security_check_cookie(rax_1 ^ &var_358)
return zx.q(r12_1.b)
