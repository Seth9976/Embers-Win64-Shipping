// 函数: sub_14083ae90
// 地址: 0x14083ae90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_20 = arg4
int32_t arg_28
bool cond:0 = arg_28 == 0
void* const var_f8 = *(arg3 + 0xc0)

if (not(cond:0))
    void* r9 = arg3 + 0xe0
    void* rax = *(arg3 + 0x100)
    
    if (rax != 0)
        r9 = rax
    
    uint32_t arg_60
    int64_t rax_2 = sx.q(arg_60) << 5
    void* rcx_2 = *(r9 + rax_2 + 8)
    void* rax_3 = *(r9 + rax_2)
    int32_t var_100 = *(rcx_2 + 0xc0)
    *(rcx_2 + 0xc4) = data_143ce3864
    int32_t rax_6 = var_100
    
    if (arg10 != 0)
        rax_6 = 0
    
    var_100 = rax_6
    void* rax_7 = sub_140790e00(arg5)
    void* var_110 = rax_7
    *(arg6 + 0x1b0) = rax_7
    sub_14198aa60(rax_7)
    void** rbx_1 = arg6 + 0x30
    void* rcx_7 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = rcx_7 + 0x18
    
    if (rax_8 u> rbx_1[1])
        sub_140b0e3d0(rbx_1, 0x20)
        rcx_7 = (*rbx_1 + 7) & 0xfffffffffffffff8
        rax_8 = rcx_7 + 0x18
    
    *rbx_1 = rax_8
    void** rax_9 = *(arg6 + 8)
    *(arg6 + 0x14) += 1
    *rax_9 = rcx_7
    *(arg6 + 8) = rcx_7 + 8
    *(rcx_7 + 8) = 0
    *rcx_7 = &data_142dd5b40
    *(rcx_7 + 0x10) = rax_7
    uint32_t rax_11
    rax_11.b = *(arg2 + 0x4f) != 0
    int16_t* r8_1 = *arg5 + 0x168
    uint32_t var_118 = rax_11
    sub_140741e30(arg6, &var_110, r8_1, &var_118, 0)
    int16_t rcx_12 = *(*arg5 + 0x166)
    
    if (rcx_12 != 0xffff && arg7 != 0)
        void* rcx_15 = (*rbx_1 + 7) & 0xfffffffffffffff8
        void* rax_13 = rcx_15 + 0x28
        
        if (rax_13 u> rbx_1[1])
            sub_140b0e3d0(rbx_1, 0x30)
            rcx_15 = (*rbx_1 + 7) & 0xfffffffffffffff8
            rax_13 = rcx_15 + 0x28
        
        *rbx_1 = rax_13
        void** rax_14 = *(arg6 + 8)
        *(arg6 + 0x14) += 1
        *rax_14 = rcx_15
        *(arg6 + 8) = rcx_15 + 8
        *(rcx_15 + 8) = 0
        *(rcx_15 + 0x18) = zx.d(rcx_12)
        *rcx_15 = &data_142da77a8
        *(rcx_15 + 0x10) = rax_7
        *(rcx_15 + 0x20) = arg7
    
    void* r10_1 = arg3
    int64_t rdx_1 = 0
    void* rax_16 = arg5[1]
    uint32_t r8_2 = 0
    uint32_t r9_2 = arg_60
    uint32_t var_108 = r9_2
    int64_t** r13_1 = *(r10_1 + 0xc8)
    void* rax_17 = *(rax_16 + 0x20)
    int64_t rax_18 = sx.q(*(r10_1 + 0xd0))
    var_118 = 0
    int64_t var_e8_1 = 0
    uint64_t rcx_20 = rax_18 << 3 u>> 3
    
    if (r13_1 u> &r13_1[rax_18])
        rcx_20 = 0
    
    if (rcx_20 != 0)
        do
            int64_t* r12_2 = *r13_1
            void* rcx_22 = *arg5 + 0x280
            void* rax_20 = *rcx_22
            
            if ((rax_20.b & 1) != 0)
                rax_20 = (rax_20 s>> 1) + rcx_22
            
            void* rsi_4 = (sx.q(r8_2) << 4) + rax_20
            void* r15_2 = rsi_4 + 8
            
            if (*(rsi_4 + 8) != 0)
                int64_t* var_a8_1 = r12_2
                void* var_90_1 = r10_1
                int128_t var_b8 = *arg5
                int64_t var_a0_1 = arg2[2]
                void* var_98_1 = arg1
                uint32_t var_88_1 = r9_2
                char var_84_1 = sub_140856cb0(r10_1, r12_2, zx.q(r9_2))
                char var_83_1 = sub_140856ba0(arg3, r12_2, zx.q(var_108))
                
                if ((*rsi_4 & 1) != 0)
                    rsi_4 = *(rax_17 + 0x88) + (sx.q((*rsi_4 u>> 1).d) << 3)
                
                void* rdx_4 = *r15_2
                int64_t* rcx_26 = *rsi_4
                
                if ((rdx_4.b & 1) != 0)
                    rdx_4 = (rdx_4 s>> 1) + r15_2
                
                (*(*rcx_26 + 0x278))(rcx_26, rdx_4, arg6, &var_b8)
                rdx_1 = var_e8_1
                r8_2 = var_118
                r9_2 = var_108
                r10_1 = arg3
            
            r8_2 += 1
            rdx_1 += 1
            r13_1 = &r13_1[1]
            var_118 = r8_2
            var_e8_1 = rdx_1
        while (rdx_1 != rcx_20)
        
        rbx_1 = arg6 + 0x30
    
    void* rcx_28 = *(var_f8 + 8)
    int64_t r15_3
    
    if ((*(rcx_28 + 0x28) & 1) == 0)
        TEB* gsbase
        
        if (data_143ce4010
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce4010)
            
            if (data_143ce4010 == 0xffffffff)
                sub_1408123e0(&data_143ce3fd0, 0x1d, u"NiagaraRenderer::DummyInt")
                atexit(sub_142cb5000)
                _Init_thread_footer(&data_143ce4010)
        
        r15_3 = data_143ce4000
    else
        r15_3 = *(rcx_28 + 0x80)
    
    void* rsi_5 = *arg5
    void* rax_35 = sub_140790e00(arg5)
    
    if (*(rsi_5 + 0x146) u> 0)
        uint32_t rsi_6 = zx.d(*(rsi_5 + 0x144))
        void* rcx_34 = (*rbx_1 + 7) & 0xfffffffffffffff8
        void* rdx_6 = rcx_34 + 0x28
        
        if (rdx_6 u> rbx_1[1])
            sub_140b0e3d0(rbx_1, 0x30)
            rcx_34 = (*rbx_1 + 7) & 0xfffffffffffffff8
            rdx_6 = rcx_34 + 0x28
        
        *rbx_1 = rdx_6
        void** rax_36 = *(arg6 + 8)
        *(arg6 + 0x14) += 1
        *rax_36 = rcx_34
        *(arg6 + 8) = rcx_34 + 8
        *(rcx_34 + 8) = 0
        *rcx_34 = &data_142d99560
        *(rcx_34 + 0x10) = rax_35
        *(rcx_34 + 0x18) = rsi_6
        *(rcx_34 + 0x20) = r15_3
    
    sub_14080ca00(rax_3, *arg5, arg6, 1)
    sub_14080ca00(rcx_2, *arg5, arg6, 0)
    void* rax_38 = *arg5
    
    if (*(rax_38 + 0x132) u> 0 || *(rax_38 + 0x136) u> 0)
        void* r15_4 = arg1
        void* rsi_9 = (*rbx_1 + 7) & 0xfffffffffffffff8
        void* const rax_39 = *(r15_4 + 0x48)
        void* rcx_40 = rsi_9 + 8
        var_f8 = rax_39
        
        if (rcx_40 u> rbx_1[1])
            sub_140b0e3d0(rbx_1, 0x10)
            rax_39 = var_f8
            rsi_9 = (*rbx_1 + 7) & 0xfffffffffffffff8
            rcx_40 = rsi_9 + 8
        
        *rbx_1 = rcx_40
        *rsi_9 = rax_39
        void* rcx_44 = (*rbx_1 + 7) & 0xfffffffffffffff8
        void* rax_40 = rcx_44 + 0x30
        
        if (rax_40 u> rbx_1[1])
            sub_140b0e3d0(rbx_1, 0x38)
            rcx_44 = (*rbx_1 + 7) & 0xfffffffffffffff8
            rax_40 = rcx_44 + 0x30
        
        *rbx_1 = rax_40
        *(arg6 + 0x14) += 1
        **(arg6 + 8) = rcx_44
        *(arg6 + 8) = rcx_44 + 8
        *(rcx_44 + 8) = 0
        *rcx_44 = &data_142da7798
        *(rcx_44 + 0x10) = 1
        *(rcx_44 + 0x18) = rsi_9
        *(rcx_44 + 0x20) = 3
        *(rcx_44 + 0x24) = 3
        *(rcx_44 + 0x28) = 0
        void* rsi_12 = *arg5
        int64_t r12_4 = *(r15_4 + 0x48)
        
        if (*(rsi_12 + 0x136) u> 0)
            uint32_t r15_5 = zx.d(*(rsi_12 + 0x134))
            void* rcx_50 = (*rbx_1 + 7) & 0xfffffffffffffff8
            void* rax_43 = rcx_50 + 0x28
            
            if (rax_43 u> rbx_1[1])
                sub_140b0e3d0(rbx_1, 0x30)
                rcx_50 = (*rbx_1 + 7) & 0xfffffffffffffff8
                rax_43 = rcx_50 + 0x28
            
            *rbx_1 = rax_43
            void** rax_44 = *(arg6 + 8)
            *(arg6 + 0x14) += 1
            *rax_44 = rcx_50
            *(arg6 + 8) = rcx_50 + 8
            *(rcx_50 + 8) = 0
            *rcx_50 = &data_142da77d8
            void* rax_46 = var_110
            *(rcx_50 + 0x18) = r15_5
            r15_4 = arg1
            *(rcx_50 + 0x10) = rax_46
            *(rcx_50 + 0x20) = r12_4
        
        if (*(rsi_12 + 0x136) u<= 0)
            int64_t r15_6 = *(r15_4 + 0x50)
            
            if (*(rsi_12 + 0x132) u> 0)
                uint32_t rsi_13 = zx.d(*(rsi_12 + 0x130))
                void* rcx_56 = (*rbx_1 + 7) & 0xfffffffffffffff8
                void* rax_47 = rcx_56 + 0x28
                
                if (rax_47 u> rbx_1[1])
                    sub_140b0e3d0(rbx_1, 0x30)
                    rcx_56 = (*rbx_1 + 7) & 0xfffffffffffffff8
                    rax_47 = rcx_56 + 0x28
                
                *rbx_1 = rax_47
                void** rax_48 = *(arg6 + 8)
                *(arg6 + 0x14) += 1
                *rax_48 = rcx_56
                *(arg6 + 8) = rcx_56 + 8
                *(rcx_56 + 8) = 0
                *rcx_56 = &data_142d99560
                *(rcx_56 + 0x10) = var_110
                *(rcx_56 + 0x18) = rsi_13
                *(rcx_56 + 0x20) = r15_6
        
        if (arg9 == 0)
            int64_t r8_12 = sx.q(arg_60)
            uint32_t rax_52
            void* rdx_11
            void* r9_7
            
            if (*(arg2 + 0x4f) == 0 || r8_12.d != 0)
                r9_7 = arg3 + 0xe0
                void* rcx_62 = r9_7
                rdx_11 = *(r9_7 + 0x20)
                
                if (rdx_11 != 0)
                    rcx_62 = rdx_11
                
                rax_52 = *(rcx_62 + (r8_12 << 5) + 0x18)
            else
                r9_7 = arg3 + 0xe0
                rax_52 = -1
                rdx_11 = *(r9_7 + 0x20)
            
            var_118 = rax_52
            
            if (rdx_11 != 0)
                r9_7 = rdx_11
            
            int16_t* r8_14 = *arg5 + 0x138
            var_108 = *(r9_7 + (r8_12 << 5) + 0x1c)
            sub_140741e30(arg6, &var_110, r8_14, &var_118, 0)
            sub_140741e30(arg6, &var_110, *arg5 + 0x13e, &var_108, 0)
        else
            void* r8_9 = *arg5 + 0x138
            var_118 = 0xffffffff
            sub_140741e30(arg6, &var_110, r8_9, &var_118, 0)
            void* r8_11 = *arg5 + 0x13e
            var_118 = 0xffffffff
            sub_140741e30(arg6, &var_110, r8_11, &var_118, 0)
    
    sub_140741e30(arg6, &var_110, *arg5 + 0x16e, &data_143ce3864, 0)
    void* rax_58 = *arg5
    uint64_t r15_7 = zx.q(*(rax_58 + 0x178))
    
    if (r15_7.d u>= 0x80)
        r15_7 = 0x80
    
    if (r15_7.d != 0)
        uint32_t rcx_66 = zx.d(*(rax_58 + 0x176))
        void* rsi_15 = *rbx_1 + 0xf
        var_118 = zx.d(*(rax_58 + 0x174))
        void* rsi_16 = rsi_15 & 0xfffffffffffffff0
        var_108 = rcx_66
        void* rax_60 = rsi_16 + r15_7
        
        if (rax_60 u> rbx_1[1])
            sub_140b0e3d0(rbx_1, (r15_7 + 0x10).d)
            rsi_16 = (*rbx_1 + 0xf) & 0xfffffffffffffff0
            rax_60 = rsi_16 + r15_7
        
        *rbx_1 = rax_60
        memcpy(rsi_16, arg8 + 0xc, r15_7.d)
        void* rcx_71 = (*rbx_1 + 7) & 0xfffffffffffffff8
        void* rax_61 = rcx_71 + 0x30
        
        if (rax_61 u> rbx_1[1])
            sub_140b0e3d0(rbx_1, 0x38)
            rcx_71 = (*rbx_1 + 7) & 0xfffffffffffffff8
            rax_61 = rcx_71 + 0x30
        
        *rbx_1 = rax_61
        void** rax_62 = *(arg6 + 8)
        *(arg6 + 0x14) += 1
        *rax_62 = rcx_71
        *(arg6 + 8) = rcx_71 + 8
        *(rcx_71 + 8) = 0
        *rcx_71 = &data_142d99550
        *(rcx_71 + 0x10) = var_110
        *(rcx_71 + 0x20) = var_118
        *(rcx_71 + 0x24) = var_108
        *(rcx_71 + 0x18) = rsi_16
        *(rcx_71 + 0x28) = r15_7.d
    
    void* rax_67 = *arg5
    uint64_t r15_8 = zx.q(*(rax_67 + 0x17e))
    
    if (r15_8.d u>= 0x200)
        r15_8 = 0x200
    
    if (r15_8.d != 0)
        uint32_t rcx_75 = zx.d(*(rax_67 + 0x17c))
        void* rsi_20 = *rbx_1 + 0xf
        var_118 = zx.d(*(rax_67 + 0x17a))
        void* rsi_21 = rsi_20 & 0xfffffffffffffff0
        var_108 = rcx_75
        void* rax_69 = rsi_21 + r15_8
        
        if (rax_69 u> rbx_1[1])
            sub_140b0e3d0(rbx_1, (r15_8 + 0x10).d)
            rsi_21 = (*rbx_1 + 0xf) & 0xfffffffffffffff0
            rax_69 = r15_8 + rsi_21
        
        *rbx_1 = rax_69
        memcpy(rsi_21, arg8 + 0x2c, r15_8.d)
        void* rcx_80 = (*rbx_1 + 7) & 0xfffffffffffffff8
        void* rax_70 = rcx_80 + 0x30
        
        if (rax_70 u> rbx_1[1])
            sub_140b0e3d0(rbx_1, 0x38)
            rcx_80 = (*rbx_1 + 7) & 0xfffffffffffffff8
            rax_70 = rcx_80 + 0x30
        
        *rbx_1 = rax_70
        void** rax_71 = *(arg6 + 8)
        *(arg6 + 0x14) += 1
        *rax_71 = rcx_80
        *(arg6 + 8) = rcx_80 + 8
        *(rcx_80 + 8) = 0
        *rcx_80 = &data_142d99550
        *(rcx_80 + 0x10) = var_110
        *(rcx_80 + 0x20) = var_118
        *(rcx_80 + 0x24) = var_108
        *(rcx_80 + 0x18) = rsi_21
        *(rcx_80 + 0x28) = r15_8.d
    
    sub_140741e30(arg6, &var_110, *arg5 + 0x198, &arg_20, 0)
    sub_140741e30(arg6, &var_110, *arg5 + 0x192, &var_100, 0)
    void arg_58
    sub_140741e30(arg6, &var_110, *arg5 + 0x19e, &arg_58, 0)
    sub_140741e30(arg6, &var_110, *arg5 + 0x1a4, &arg_60, 0)
    void* r8_30 = *arg5 + 0x1aa
    int32_t var_fc = 0xffffffff
    int32_t var_128_1 = 0
    sub_140741e30(arg6, &var_110, r8_30, &var_fc, 0)
    void* rcx_89 = arg1
    int32_t r15_9 = 0x40
    
    if (((*(rcx_89 + 0x14) - 2) & 0xfffffffd) != 0)
        r15_9 = 0x20
    
    int32_t rax_78 = arg_28
    
    if (arg9 != 0 && rax_78 u> r15_9)
        var_128_1 = 0
        sub_140741e30(arg6, &var_110, *arg5 + 0x1aa, &arg_28, 0)
        rax_78 = arg_28
        rcx_89 = arg1
    
    uint32_t rsi_24 = 1
    
    if (rax_78 u> r15_9)
        rsi_24 = divu.dp.d(0:(rax_78 - 1 + r15_9), r15_9)
        
        if (rsi_24 u>= 0xffff)
            rsi_24 = 0xffff
    
    var_128_1.q = arg3
    sub_14083c3c0(rcx_89, arg6, arg5, arg2, var_128_1)
    
    if (arg_28 != 0)
        var_128_1 = 1
        sub_1419cd1c0(arg6, *arg5, rsi_24, 1, 1)
    
    if (arg9 != 0)
        var_128_1 = 0
        sub_140741e30(arg6, &var_110, *arg5 + 0x1aa, &var_fc, 0)
    
    int64_t* rsi_25 = *(arg3 + 0xc8)
    int32_t r12_6 = 0
    void* r9_18 = *(arg5[1] + 0x20)
    int64_t r15_11 = 0
    void* arg_18 = r9_18
    uint64_t r13_5 = sx.q(*(arg3 + 0xd0)) << 3 u>> 3
    
    if (rsi_25 u> &rsi_25[sx.q(*(arg3 + 0xd0))])
        r13_5 = 0
    
    if (r13_5 != 0)
        do
            void* rcx_94 = *arg5 + 0x280
            void* rax_85 = *rcx_94
            
            if ((rax_85.b & 1) != 0)
                rax_85 = (rax_85 s>> 1) + rcx_94
            
            void* rdx_31 = (sx.q(r12_6) << 4) + rax_85
            void* r10_2 = *(rdx_31 + 8)
            
            if (r10_2 != 0)
                bool cond:10_1 = (*rdx_31 & 1) == 0
                int64_t var_70_1 = *rsi_25
                void* var_60_1 = arg1
                int64_t var_68_1 = arg2[2]
                int128_t var_80 = *arg5
                int64_t* r8_38
                
                if (cond:10_1)
                    r8_38 = rdx_31
                else
                    r8_38 = *(r9_18 + 0x88) + (sx.q((*rdx_31 u>> 1).d) << 3)
                
                int64_t* rcx_96 = *r8_38
                
                if ((r10_2.b & 1) != 0)
                    r10_2 = (r10_2 s>> 1) + 8 + rdx_31
                
                (*(*rcx_96 + 0x280))(rcx_96, r10_2, arg6, &var_80, var_128_1)
                r9_18 = arg_18
            
            r12_6 += 1
            rsi_25 = &rsi_25[1]
            r15_11 += 1
        while (r15_11 != r13_5)
        
        rbx_1 = arg6 + 0x30
    
    sub_14080f710(rax_3, *arg5, arg6)
    sub_14080f710(rcx_2, *arg5, arg6)
    void* rax_93 = *arg5
    
    if (*(rax_93 + 0x136) u> 0)
        uint32_t rsi_26 = zx.d(*(rax_93 + 0x134))
        void* rcx_101 = (*rbx_1 + 7) & 0xfffffffffffffff8
        void* rax_94 = rcx_101 + 0x28
        
        if (rax_94 u> rbx_1[1])
            sub_140b0e3d0(rbx_1, 0x30)
            rcx_101 = (*rbx_1 + 7) & 0xfffffffffffffff8
            rax_94 = rcx_101 + 0x28
        
        *rbx_1 = rax_94
        void** rax_95 = *(arg6 + 8)
        *(arg6 + 0x14) += 1
        *rax_95 = rcx_101
        *(arg6 + 8) = rcx_101 + 8
        *(rcx_101 + 8) = 0
        *rcx_101 = &data_142da77d8
        *(rcx_101 + 0x10) = var_110
        *(rcx_101 + 0x18) = rsi_26
        *(rcx_101 + 0x20) = 0
    
    var_f8 = nullptr
    int32_t i_3 = 0
    sub_1405c5570(&var_f8, 0x20)
    sub_140838e80(arg1, arg1 + 0x308, &var_f8)
    sub_140838e80(arg1, arg1 + 0x358, &var_f8)
    int64_t i_2 = sx.q(i_3)
    void* const r14_2 = var_f8
    void* rsi_30 = (*rbx_1 + 7) & 0xfffffffffffffff8
    int32_t rdx_37 = (i_2 << 3).d
    int64_t r12_7 = sx.q(rdx_37)
    void* rax_98 = r12_7 + rsi_30
    
    if (rax_98 u> rbx_1[1])
        sub_140b0e3d0(rbx_1, rdx_37 + 8)
        rsi_30 = (*rbx_1 + 7) & 0xfffffffffffffff8
        rax_98 = r12_7 + rsi_30
    
    *rbx_1 = rax_98
    int64_t i_1 = i_2
    
    if (i_2.d s> 0)
        void* rcx_109 = rsi_30
        int64_t i
        
        do
            *rcx_109 = *(r14_2 - rsi_30 + rcx_109)
            rcx_109 += 8
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rcx_112 = (*rbx_1 + 7) & 0xfffffffffffffff8
    void* rax_100 = rcx_112 + 0x30
    
    if (rax_100 u> rbx_1[1])
        sub_140b0e3d0(rbx_1, 0x38)
        rcx_112 = (*rbx_1 + 7) & 0xfffffffffffffff8
        rax_100 = rcx_112 + 0x30
    
    *rbx_1 = rax_100
    void** rax_101 = *(arg6 + 8)
    *(arg6 + 0x14) += 1
    *rax_101 = rcx_112
    *(arg6 + 8) = rcx_112 + 8
    *(rcx_112 + 8) = 0
    result = &data_142da7798
    *(rcx_112 + 0x10) = i_2.d
    *(rcx_112 + 0x28) = 0
    *rcx_112 = &data_142da7798
    *(rcx_112 + 0x18) = rsi_30
    *(rcx_112 + 0x20) = 3
    *(rcx_112 + 0x24) = 3
    
    if (r14_2 != 0)
        return sub_140a74f90(r14_2)

return result
