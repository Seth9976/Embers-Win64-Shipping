// 函数: sub_141925230
// 地址: 0x141925230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int32_t* r14 = arg2
sub_14193c890()
int32_t* result_1 = nullptr
int64_t* rdx_4

if (data_1439c7588 == data_1439c75b4)
label_1419252e4_1:
    rdx_4 = nullptr
else
    void* r9_1 = &data_1439c75b8
    void* rdx_1 = data_1439c75c0
    
    if (rdx_1 != 0)
        r9_1 = rdx_1
    
    int32_t rax_2 = *(r9_1 + (((sx.q(data_1439c75c8) - 1) & sx.q(*r14)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_1419252e4_2:
        rdx_4 = nullptr
    else
        while (true)
            rdx_4 = (sx.q(rax_2) << 6) + data_1439c7580
            
            if (*rdx_4 == *r14 && rdx_4[1] == *(r14 + 8) && rdx_4[2].d == r14[4])
                break
            
            rax_2 = rdx_4[7].d
            
            if (rax_2 == 0xffffffff)
                goto label_1419252e4
        
        if (rax_2 == 0xffffffff)
        label_1419252e4:
            rdx_4 = nullptr

void* rdi = &rdx_4[3]

if (rdx_4 == 0)
    rdi = nullptr

int32_t* result
int32_t var_148

if (rdi == 0)
    int64_t rsi_1 = *arg1
    int64_t rdi_1 = sx.q(arg1[1].d)
    void** const var_218
    memset(&var_218, 0, 0x90)
    sub_140b4c2a0(&var_218)
    int32_t var_188_1 = 0
    var_218 = &data_142ef5568
    int64_t var_180_1 = rsi_1
    int64_t var_170_1 = 0x7fffffffffffffff
    int32_t var_178_1 = rdi_1.d
    sub_140b55290(&var_218, 1)
    var_218[0x1b](&var_218, 1)
    int32_t rax_8 = 0
    
    if (rdi_1.d u>= 4)
        rax_8 = *(rdi_1 + rsi_1 - 4)
    
    uint64_t var_170_2 = zx.q(rdi_1.d - rax_8)
    int64_t var_128
    __builtin_memset(&var_128, 0, 0x4c)
    char var_72_1 = 0
    int64_t var_d8
    __builtin_memset(&var_d8, 0, 0x3c)
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x16)
    int64_t var_82_1 = -1
    int64_t var_7a_1 = -1
    int64_t var_70
    __builtin_memset(&var_70, 0, 0x20)
    sub_14192bee0(&var_218, &var_128, arg4)
    uint64_t r9_2 = zx.q(var_128.d)
    int16_t rax_10 = var_128:4.w
    void* var_120
    int64_t var_60
    int32_t* result_2
    
    if (r9_2.d != 0x474c534c || (rax_10 != 0x4353 && data_1439c74e8 != 0))
        uint32_t var_288_1 = zx.d(rax_10)
        sub_140af98a0("Unknown", 0x308, 
            Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x", r9_2)
        sub_140afbb40()
        result_2 = nullptr
    else
        char* var_258 = nullptr
        int32_t var_250_1 = 0
        sub_141930a30(&var_258, sx.q(var_188_1) + rsi_1)
        char* rsi_2 = var_258
        int64_t rdi_3 = sx.q(var_250_1)
        char* var_270 = rsi_2
        int64_t r15_1 = sx.q(sub_140b212b0(rsi_2, rdi_3.d, 0))
        int32_t var_268_1 = r15_1.d
        int32_t var_238_1 = r15_1.d
        void* var_248_1 = nullptr
        var_148.q = 0
        int64_t var_144 = 0
        int32_t var_240 = 0x91b9
        int32_t var_23c_1 = rdi_3.d
        sub_14193c900()
        int32_t var_278
        int32_t rdi_4
        
        if (data_1439c75d8 == data_1439c7604)
        label_1419255f5:
            rdi_4 = 0
            var_278 = 0
        else
            void* r9_3 = &data_1439c7608
            void* rdx_15 = data_1439c7610
            
            if (rdx_15 != 0)
                r9_3 = rdx_15
            
            int32_t rax_12 =
                *(r9_3 + (((rdi_3 ^ r15_1 ^ 0x91b9) & (sx.q(data_1439c7618) - 1)) << 2))
            
            if (rax_12 == 0xffffffff)
                goto label_1419255f5
            
            void* r8_8 = data_1439c75d0
            int64_t rdx_17
            
            while (true)
                rdx_17 = sx.q(rax_12) * 0x18
                
                if (*(rdx_17 + r8_8) == 0x91b9 && *(rdx_17 + r8_8 + 4) == rdi_3.d
                        && *(rdx_17 + r8_8 + 8) == r15_1.d)
                    break
                
                rax_12 = *(rdx_17 + r8_8 + 0x10)
                
                if (rax_12 == 0xffffffff)
                    goto label_1419255f5
            
            if (rax_12 == 0xffffffff)
                goto label_1419255f5
            
            void* rax_23 = r8_8 + rdx_17
            
            if (rax_23 == 0)
                goto label_1419255f5
            
            rdi_4 = *(rax_23 + 0xc)
            var_278 = rdi_4
        
        void* var_260
        int32_t* result_4
        int64_t var_160
        int64_t var_158
        
        if (rdi_4 == 0)
            TEB* gsbase
            void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
            int32_t r12_1 = 0x91b9
            uint64_t rcx_19 = zx.q(data_14401b1a0)
            var_278 = 0x91b9
            int32_t* r13_2 = *(ThreadLocalStoragePointer + (rcx_19 << 3)) + 0x14
            
            if (data_143eff6c0 s> *r13_2)
                _Init_thread_header(&data_143eff6c0)
                
                if (data_143eff6c0 == 0xffffffff)
                    __builtin_memset(&data_143eff670, 0, 0x2c)
                    data_143eff69c = 0x80
                    data_143eff6a0 = 0xffffffff
                    data_143eff6a4 = 0
                    data_143eff6b0 = 0
                    data_143eff6b8 = 0
                    atexit(sub_142cee650)
                    _Init_thread_footer(&data_143eff6c0)
            
            int64_t* rdi_5
            
            if (data_143eff678 == data_143eff6a4)
            label_1419256ac:
                int64_t* rax_17 = sub_141926c80(&data_143eff670, 0x91b9, &var_278)
                r12_1 = var_278
                rdi_5 = rax_17
            else
                void* rdx_18 = data_143eff6b0
                void* rax_15 = &data_143eff6a8
                
                if (rdx_18 != 0)
                    rax_15 = rdx_18
                
                int32_t rax_16 = *(rax_15 + ((zx.q((data_143eff6b8.q).d - 1) & 0x91b9) << 2))
                
                if (rax_16 == 0xffffffff)
                    goto label_1419256ac
                
                int64_t r8_9 = data_143eff670
                int64_t rcx_24
                
                while (true)
                    rcx_24 = sx.q(rax_16) << 5
                    
                    if (*(rcx_24 + r8_9) == 0x91b9)
                        break
                    
                    rax_16 = *(rcx_24 + r8_9 + 0x18)
                    
                    if (rax_16 == 0xffffffff)
                        goto label_1419256ac
                
                if (rax_16 == 0xffffffff)
                    goto label_1419256ac
                
                void* rdi_7 = rcx_24 + r8_9
                
                if (rdi_7 == 0)
                    goto label_1419256ac
                
                rdi_5 = rdi_7 + 8
            
            int32_t i = rdi_5[1].d
            
            if (i == 0)
                do
                    int32_t rax_18 = data_143effd88(zx.q(r12_1))
                    int64_t rsi_3 = sx.q(rdi_5[1].d)
                    int32_t rcx_26 = (rsi_3 + 1).d
                    rdi_5[1].d = rcx_26
                    
                    if (rcx_26 s> *(rdi_5 + 0xc))
                        sub_1405a4cf0(rdi_5)
                    
                    *(*rdi_5 + (rsi_3 << 2)) = rax_18
                    i = rdi_5[1].d
                while (i s< 0x400)
            
            int32_t r15_3 = *(*rdi_5 + (sx.q(i) << 2) - 4)
            rdi_5[1].d = i - 1
            sub_1405dac90(rdi_5)
            var_278 = r15_3
            bool cond:2_1 = data_143eff5c7 == 0
            result_4 = nullptr
            result_4.d = 1
            var_160 = 0
            var_158 = 0
            
            if (not(cond:2_1))
                var_160.b = 0
                var_160:2.b = 0
                var_160:4.w = 0
                var_160:6.b = 0
                var_158.d = data_1439c74c0
                result_4.d = 2
                var_158:4.b = 0
            
            char rdi_6 = data_143eff5c6
            result_4:4.d = data_143f0f1a0
            var_160:1.b = rdi_6
            int32_t var_288
            var_288.q = &var_148
            sub_14193add0(&var_258, &var_70, 0x91b9, &result_4, var_288)
            void* rsi_4 = var_148.q
            var_248_1 = rsi_4
            var_270.d = r15_3
            
            if (data_143eff640 == 0)
                var_260 = rsi_4
                var_270.d = var_144:4.d - 1
                data_143effe58(zx.q(r15_3), 1, &var_260, &var_270)
                data_143effd78(zx.q(r15_3))
            else
                result_4 = nullptr
                var_160 = 0
                sub_1419345a0(&var_148, &result_4)
                sub_141925f10(data_143eff640 + 0x20, &var_270, &result_4)
                int32_t* result_5 = result_4
                
                if (result_5 != 0)
                    sub_140a74f90(result_5)
            
            if (rdi_6 != 0)
                if (data_143eff6d8 s> *r13_2)
                    _Init_thread_header(&data_143eff6d8)
                    
                    if (data_143eff6d8 == 0xffffffff)
                        data_143eff6c8 = 0
                        data_143eff6d0.q = 0
                        atexit(sub_142cee5d0)
                        _Init_thread_footer(&data_143eff6d8)
                
                int32_t i_1 = data_143eff6d0
                
                if (i_1 == 0)
                    do
                        int32_t rax_27 = data_143effd80()
                        int64_t rdi_8 = sx.q(data_143eff6d0)
                        int32_t rcx_36 = (rdi_8 + 1).d
                        bool cond:5_1 = rcx_36 s<= data_143eff6d4
                        data_143eff6d0 = rcx_36
                        
                        if (not(cond:5_1))
                            sub_1405a4cf0(&data_143eff6c8)
                        
                        *(data_143eff6c8 + (rdi_8 << 2)) = rax_27
                        i_1 = data_143eff6d0
                    while (i_1 s< 0x400)
                
                int64_t r10_1 = data_143eff6c8
                int32_t rdi_9 = *(r10_1 + (sx.q(i_1 - 1) << 2))
                
                if (0 != 0)
                    memmove(r10_1 + (sx.q(i_1 - 1) << 2), r10_1 + (sx.q(i_1) << 2), 0 << 2)
                    i_1 = data_143eff6d0
                
                data_143eff6d0 = i_1 - 1
                sub_1405dac90(&data_143eff6c8)
                data_143f00468(zx.q(rdi_9), 0x8258, 1)
                data_143effd60(zx.q(rdi_9), zx.q(r15_3))
                data_143effe50(zx.q(rdi_9))
                sub_141950290(zx.q(rdi_9), 1)
                var_278 = rdi_9
            
            sub_14193c900()
            sub_141926720(&data_1439c75d0, &var_240, &var_278)
            rdi_4 = var_278
            var_270 = var_258
            var_278 = rdi_4
        
        void*** rax_35 = j_sub_140a82f30(0xf0)
        
        if (rax_35 == 0)
            result_2 = nullptr
        else
            result_2 = sub_141929ff0(rax_35)
        
        result_2[4] = rdi_4
        sub_14192bc70(&result_2[6], &var_120)
        sub_14192bbf0(&result_2[0x36], &var_60)
        int32_t var_a0
        int32_t rax_37 = var_a0
        
        if (rax_37 s> result_2[0x35])
            sub_1405c5510(&result_2[0x32], rax_37)
            rax_37 = var_a0
        
        int32_t* var_a8
        int32_t* r12_2 = var_a8
        int64_t r15_4 = 0
        void* rcx_48 = &r12_2[sx.q(rax_37)]
        uint64_t rax_42 = (rcx_48 - r12_2 + 3) u>> 2
        
        if (r12_2 u> rcx_48)
            rax_42 = 0
        
        if (rax_42 != 0)
            do
                void* rax_43 = sub_1419ce110(*r12_2)
                int64_t rdi_10 = sx.q(result_2[0x34])
                int32_t rdx_34 = result_2[0x35]
                var_260 = rax_43
                int32_t rcx_50 = (rdi_10 + 1).d
                result_2[0x34] = rcx_50
                
                if (rax_43 == 0)
                    if (rcx_50 s> rdx_34)
                        sub_1405daba0(&result_2[0x32])
                    
                    *(rdi_10 + *(result_2 + 0xc8)) = 0xff
                else
                    if (rcx_50 s> rdx_34)
                        sub_1405daba0(&result_2[0x32])
                        rax_43 = var_260
                    
                    *(rdi_10 + *(result_2 + 0xc8)) = *(rax_43 + 0x34)
                
                r12_2 = &r12_2[1]
                r15_4 += 1
            while (r15_4 != rax_42)
            
            r14 = arg2
            rdi_4 = var_278
        
        if (data_143eff5c6 != 0)
            var_148 = var_268_1
            
            if (arg3 != 0)
                *(arg3 + 0x18) = var_148.o
                *(arg3 + 0x28) = zx.o(0):0xc.d
        
        if (*r14 != 0 || *(r14 + 8) != 0 || r14[4] != 0)
            sub_14193c890()
            
            if (data_1439c7588 == data_1439c75b4)
            label_141925b3d:
                var_158 = 0
                int64_t var_150_1 = 0
                var_160:4.d = rdi_4
                void* rax_48 = j_sub_140a82f30(0xd8)
                
                if (rax_48 == 0)
                    result_4 = nullptr
                else
                    int32_t* result_3 = sub_141929f40(rax_48)
                    result_1 = result_3
                    result_4 = result_3
                
                *result_1 = var_128.d
                result_1[1].w = var_128:4.w
                sub_14192bc70(&result_1[2], &var_120)
                sub_140597df0(&result_1[0x2e], &var_70)
                sub_14192bbf0(&result_1[0x32], &var_60)
                var_160.d = var_268_1
                
                if (&var_158 != &result_2[0x32])
                    uint32_t count = result_2[0x34]
                    int64_t rdi_11 = *(result_2 + 0xc8)
                    var_150_1.d = count
                    
                    if (count != 0)
                        sub_1405da9e0(&var_158, count, 0)
                        memcpy(var_158, rdi_11, count)
                
                sub_14193c890()
                sub_141926970(&data_1439c7580, r14, &result_4)
                int64_t rcx_66 = var_158
                
                if (rcx_66 != 0)
                    sub_140a74f90(rcx_66)
            else
                void* r9_7 = &data_1439c75b8
                void* rdx_37 = data_1439c75c0
                
                if (rdx_37 != 0)
                    r9_7 = rdx_37
                
                int32_t rax_47 = *(r9_7 + (((sx.q(data_1439c75c8) - 1) & sx.q(*r14)) << 2))
                
                if (rax_47 == 0xffffffff)
                    goto label_141925b3d
                
                while (true)
                    int64_t* rdx_40 = (sx.q(rax_47) << 6) + data_1439c7580
                    
                    if (*rdx_40 == *r14 && rdx_40[1] == *(r14 + 8) && rdx_40[2].d == r14[4])
                        break
                    
                    rax_47 = rdx_40[7].d
                    
                    if (rax_47 == 0xffffffff)
                        goto label_141925b3d
                
                if (rax_47 == 0xffffffff)
                    goto label_141925b3d
        
        if (var_248_1 != 0)
            sub_140a74f90(var_248_1)
        
        char* rax_51 = var_270
        
        if (rax_51 != 0)
            sub_140a74f90(rax_51)
    
    int64_t rcx_69 = var_60
    
    if (rcx_69 != 0)
        sub_140a74f90(rcx_69)
    
    int64_t rcx_70 = var_70
    
    if (rcx_70 != 0)
        sub_140a74f90(rcx_70)
    
    sub_14192b980(&var_120)
    sub_140b4cb40(&var_218)
    result = result_2
else
    void*** rax_3 = j_sub_140a82f30(0xf0)
    
    if (rax_3 != 0)
        result_1 = sub_141929ff0(rax_3)
    
    result_1[4] = *(rdi + 0xc)
    sub_14192bc70(&result_1[6], *rdi + 8)
    sub_14192bbf0(&result_1[0x36], *rdi + 0xc8)
    sub_14081d8c0(&result_1[0x32], rdi + 0x10)
    
    if (data_143eff5c6 != 0)
        var_148 = *(rdi + 8)
        int128_t var_144_1 = zx.o(0)
        
        if (arg3 != 0)
            *(arg3 + 0x18) = var_148.o
            *(arg3 + 0x28) = 0
    
    result = result_1
__security_check_cookie(rax_1 ^ &var_2a8)
return result
