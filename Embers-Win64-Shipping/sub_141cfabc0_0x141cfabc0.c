// 函数: sub_141cfabc0
// 地址: 0x141cfabc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
uint64_t result = 5
int16_t var_1d0 = 0
uint64_t var_188 = 5
int64_t rcx = sx.q(*(arg1 + 0x290))
int64_t rbx = -1
int64_t r12 = 0x74
int64_t var_190 = -1
int32_t var_1d8 = 5
uint64_t r14
r14.b = 0
int64_t var_1a0 = rcx

while (true)
    uint64_t var_1c8 = result
    
    if (result s< rcx && r14.b != 0)
    label_141cfadc6:
        result.b = 0
        __security_check_cookie(rax_1 ^ &var_228)
        return result
    
    result = 0
    int64_t var_208
    int32_t var_1f8
    int32_t var_1f0
    int64_t* var_1e8
    
    while (true)
        int32_t result_1 = result.d
        int64_t r15_1 = 0
        
        if (result.d == 0)
            r15_1 = *(arg1 + 0x30)
        
        uint16_t rdi_2 = (r15_1 u>> 0x30).w
        
        if (rbx == -1)
            while (zx.d(rdi_2) s< *(arg1 + 0xb0))
                r14 = zx.q(r14.b)
                int32_t* r8_2 = zx.q(rdi_2) * 0x98 + *(arg1 + 0xa8)
                int32_t rcx_1 = *(r8_2 + r12)
                
                if (*(r8_2 + r12 - 4) != 0)
                    r14 = 1
                
                if (rcx_1 != 0)
                    int64_t var_1a8 = *(r8_2 + 0x10) - 1
                    
                    if (rbx != -1 && (rbx u>> 0x30).w == rdi_2)
                        var_1a8 = (rbx & 0xffffffffffff) - 1
                    
                    int32_t* var_a8_1 = r8_2
                    int64_t* var_a0_1 = &var_190
                    void* var_b0 = arg1
                    int16_t* var_98_1 = &var_1d0
                    int64_t* var_88_1 = &var_1a8
                    void** var_158_1 = &var_b0
                    int64_t var_160
                    var_1e8 = &var_160
                    var_1f0 = r8_2[9]
                    var_1f8 = r8_2[8]
                    int64_t rax_10 = *(r8_2 + 0x18)
                    var_208 = 0
                    uint16_t var_90_1 = rdi_2
                    int64_t var_80_1 = r15_1
                    var_160 = sub_141cfc9c0
                    sub_141cf5b80(rcx_1, arg1 + 0xb8, r15_1 & 0xffffffffffff, &var_1a8, var_208, 
                        rax_10, var_1f8, var_1f0, var_1e8)
                    rbx = var_190
                
                rdi_2 += 1
                
                if (rbx != -1)
                    break
            
            result = zx.q(result_1)
        
        if (r15_1 == 0)
            break
        
        result = zx.q(result.d + 1)
    
    if (r12 == 0x38)
        if (rbx == -1)
            goto label_141cfadc6
        
    label_141cfadd0:
        uint64_t rax_13 = rbx u>> 0x30
        void* r14_2 = rax_13 * 0x98 + *(arg1 + 0xa8)
        uint64_t rbx_3 = rbx & 0xffffffff0000
        int64_t r12_1 = *(r14_2 + 0x10)
        int64_t rdx_5 = (sx.q(data_143a21044 << 0xa) + 0xffff + rbx_3) & 0xffffffffffff0000
        TEB* gsbase
        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        
        if (rdx_5 - 1 s<= r12_1 - 1)
            r12_1 = rdx_5
        
        int64_t r12_3 = r12_1 - 1
        var_1a0 = r12_3
        int64_t rax_20
        int16_t rdx_6
        rdx_6:rax_20 = sx.o(r12_3 - rbx_3 + 0x10000)
        int32_t rax_22 = ((rax_20 + zx.q(rdx_6)) s>> 0x10).d
        int32_t* rax_23 = 0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        uint64_t r13_4 = zx.q((rax_22 + 0x3f) u>> 6)
        int32_t var_1d4_1 = r13_4.d
        int32_t* var_170 = rax_23
        
        if (data_143f36940 s> *rax_23)
            _Init_thread_header(&data_143f36940)
            
            if (data_143f36940 == 0xffffffff)
                data_143f36930 = 0
                data_143f36938 = 0
                atexit(sub_142cf7b20)
                _Init_thread_footer(&data_143f36940)
        
        int32_t rcx_5 = data_143f36938:4.d
        int32_t rdi_3 = 0
        
        if (rcx_5 s< 0)
            data_143f36938.d = 0
            
            if (rcx_5 != 0)
                sub_1405c5570(&data_143f36930, 0)
                rcx_5 = data_143f36938:4.d
                rdi_3 = data_143f36938.d
        
        int32_t rax_24 = rdi_3 + r13_4.d
        data_143f36938.d = rax_24
        
        if (rax_24 s> rcx_5)
            sub_1405a4d70(&data_143f36930)
        
        int64_t rax_25 = data_143f36930
        uint64_t count = r13_4 << 3
        var_1c8 = count
        memset(rax_25 + (sx.q(rdi_3) << 3), 0, count)
        int32_t rax_27 = r13_4.d << 6
        uint64_t count_1
        
        if (rax_22 == rax_27)
            count_1 = var_1c8
        else
            count_1 = var_1c8
            *(count_1 + data_143f36930 - 8) = -1 << (rax_22.b - rax_27.b + 0x40)
        
        int32_t rcx_9 = *(r14_2 + 0x80)
        
        if (rcx_9 != 0)
            int64_t r9_2 = *(r14_2 + 0x18)
            int32_t var_110_1 = *(r14_2 + 0x28)
            int64_t var_108_1 = data_143f36930
            void* var_128
            void** var_1c0_1 = &var_128
            var_1e8 = &var_1c8
            var_1f0 = *(r14_2 + 0x24)
            var_1f8 = *(r14_2 + 0x20)
            var_128 = arg1 + 0xe0
            uint64_t var_120_1 = rbx_3
            int64_t var_118_1 = r12_3
            var_1c8 = sub_141cfc970
            sub_141cf54c0(rcx_9, arg1 + 0xe0, rbx_3, r12_3, 0, r9_2, var_1f8, var_1f0, var_1e8)
        
        int32_t rcx_10 = *(r14_2 + 0x7c)
        
        if (rcx_10 != 0)
            int64_t r9_4 = *(r14_2 + 0x18)
            int32_t var_e8_1 = *(r14_2 + 0x28)
            int64_t var_e0_1 = data_143f36930
            void* var_100
            void** var_148_1 = &var_100
            int64_t var_150
            var_1e8 = &var_150
            var_1f0 = *(r14_2 + 0x24)
            var_1f8 = *(r14_2 + 0x20)
            var_100 = arg1 + 0xe0
            uint64_t var_f8_1 = rbx_3
            int64_t var_f0_1 = r12_3
            var_150 = sub_141cfc970
            sub_141cf54c0(rcx_10, arg1 + 0xe0, rbx_3, r12_3, 0, r9_4, var_1f8, var_1f0, var_1e8)
        
        if (data_143f36958 s> *var_170)
            _Init_thread_header(&data_143f36958)
            
            if (data_143f36958 == 0xffffffff)
                data_143f36948 = 0
                data_143f36950 = 0
                atexit(sub_142cf7be0)
                _Init_thread_footer(&data_143f36958)
        
        int32_t rcx_11 = data_143f36950:4.d
        int32_t rdi_5 = 0
        
        if (rcx_11 s< 0)
            data_143f36950.d = 0
            
            if (rcx_11 != 0)
                sub_1405c5570(&data_143f36948, 0)
                rcx_11 = data_143f36950:4.d
                rdi_5 = data_143f36950.d
        
        int32_t rax_35 = rdi_5 + r13_4.d
        data_143f36950.d = rax_35
        
        if (rax_35 s> rcx_11)
            sub_1405a4d70(&data_143f36948)
        
        memset(data_143f36948 + (sx.q(rdi_5) << 3), 0, count_1)
        int32_t rax_37 = var_1d8
        
        if (rax_37 s<= 8)
            int64_t r13_5 = var_1a0
            void* r15_4 = r14_2 + 0x74
            int64_t rdi_6 = 5
            int32_t r12_2 = 8
            
            do
                int32_t rcx_14 = *r15_4
                
                if (rcx_14 != 0)
                    int64_t r10_1 = *(r14_2 + 0x18)
                    int32_t var_c0_1 = *(r14_2 + 0x28)
                    int64_t var_b8_1 = data_143f36948
                    void* var_d8
                    void** var_168_1 = &var_d8
                    var_1e8 = &var_170
                    var_1f0 = *(r14_2 + 0x24)
                    var_1f8 = *(r14_2 + 0x20)
                    var_208 = 0
                    var_d8 = arg1 + 0xb8
                    uint64_t var_d0_1 = rbx_3
                    int64_t var_c8_1 = r13_5
                    var_170 = sub_141cfc940
                    sub_141cf5820(rcx_14, arg1 + 0xb8, rbx_3, r13_5, var_208, r10_1, var_1f8, 
                        var_1f0, var_1e8)
                    rax_37 = var_1d8
                
                if (rdi_6 == 0)
                    break
                
                r12_2 -= 1
                rdi_6 -= 1
                r15_4 -= 0xc
            while (r12_2 s>= rax_37)
            
            r13_4 = zx.q(var_1d4_1)
            r12_3 = var_1a0
        
        int32_t i = 0
        uint64_t r8_13 = zx.q(r13_4.d << 0x16)
        
        if (r13_4.d != 0)
            do
                int64_t i_1 = sx.q(i)
                uint64_t rcx_17 =
                    not.q(*(data_143f36930 + (i_1 << 3))) & *(data_143f36948 + (i_1 << 3))
                
                if (rcx_17 != -1)
                    r8_13 = zx.q(i << 0x16)
                    
                    while ((rcx_17.b & 1) != 0)
                        r8_13 += 0x10000
                        rcx_17 u>>= 1
                    
                    break
                
                i += 1
            while (i u< r13_4.d)
        
        uint64_t rax_40 = r8_13 + rbx_3
        uint64_t r12_4 = r12_3 + 1
        
        if (rax_40 s<= r12_4)
            r12_4 = rax_40
        
        int64_t r8_14 = sx.q(sub_141cfc530(arg1 + 0xe0))
        uint64_t* r15_7 = (sx.q(not.d(*(arg1 + 0x104))) & r8_14) * 0x30 + *(arg1 + 0xe0)
        *r15_7 = rax_13 << 0x30 | rbx_3
        *(r15_7 + 0x1c) = r8_14.d
        r15_7[1] = r12_4 - rbx_3
        r15_7[3].d = 0
        r15_7[2] = 0
        *(r15_7 + 0x24) = 0
        var_208.d = *(r14_2 + 0x24)
        sub_141cf0d40(r14_2 + 0x7c, arg1 + 0xe0, r8_14.d, *(r14_2 + 0x20), var_208.d)
        int32_t* var_1b8 = nullptr
        uint64_t rax_48 = 5
        int32_t var_1b0_1 = 0
        void* rdi_7 = r14_2 + 0x74
        
        while (true)
            if (*rdi_7 != 0)
                int64_t rax_49 = sx.q(rax_48.d)
                int64_t* var_130_1 = &var_1b8
                var_1a0 = sub_141cfc920
                void* var_140
                int64_t* var_198_1 = &var_140
                var_140 = arg1
                uint64_t* var_138_1 = r15_7
                var_1e8 = &var_1a0
                var_1f0 = *(r14_2 + 0x24)
                var_1f8 = *(r14_2 + 0x20)
                sub_141cf4f50(r14_2 + ((rax_49 + ((rax_49 + 7) << 1)) << 2), arg1 + 0xb8, rbx_3, 
                    r12_4 - 1, 0, *(r14_2 + 0x18), var_1f8, var_1f0, var_1e8)
                rax_48 = var_188
            
            if (rax_48.d == 0)
                break
            
            rax_48 = zx.q(rax_48.d - 1)
            var_188 = rax_48
            rdi_7 -= 0xc
        
        int32_t* rbx_4 = var_1b8
        int64_t r12_5 = 0
        void* rcx_25 = &rbx_4[sx.q(var_1b0_1)]
        uint64_t rdi_11 = (rcx_25 - rbx_4 + 3) u>> 2
        
        if (rbx_4 u> rcx_25)
            rdi_11 = 0
        
        if (rdi_11 != 0)
            do
                int64_t r8_16 = sx.q(*rbx_4)
                void* rax_57 = (sx.q(not.d(*(arg1 + 0xdc))) & r8_16) * 0x30 + *(arg1 + 0xb8)
                *(rax_57 + 0x2c) = 2
                var_208.d = *(r14_2 + 0x24)
                sub_141cf0e10(r14_2 + (zx.q(*(rax_57 + 0x28)) + 5) * 0xc, arg1 + 0xb8, r8_16.d, 
                    *(r14_2 + 0x20), var_208.d)
                r12_5 += 1
                rbx_4 = &rbx_4[1]
            while (r12_5 != rdi_11)
            
            rbx_4 = var_1b8
        
        int32_t rcx_29 = data_143a21040
        int32_t rdx_23 = 0
        
        if (rcx_29 s> 0)
            result = arg1 + 0x168
            
            do
                if (*result == 0)
                    if (rdx_23 s>= 0)
                        int64_t* r8_18 = zx.q(*(r15_7 + 6)) * 0x98 + *(arg1 + 0xa8)
                        int64_t rcx_30 = sx.q(rdx_23)
                        int64_t rbx_6 = rcx_30 << 5
                        *(rbx_6 + arg1 + 0x170) = *(r15_7 + 0x1c)
                        *(rbx_6 + arg1 + 0x178) = r15_7[1]
                        *(((rcx_30 + 0xc) << 5) + arg1) = 0
                        data_143f36218 += r15_7[1]
                        int32_t var_178_1 = rdx_23
                        uint64_t rdx_24 = *r15_7
                        void** const var_58 = &data_142e86ed0
                        int64_t (* var_78)(int64_t* arg1, char* arg2, int64_t* arg3) = sub_141cfca30
                        void*** var_68_1 = nullptr
                        char var_174_1 = 1
                        int128_t var_50_1 = arg1.o
                        int64_t* rcx_31 = *r8_18
                        *(rbx_6 + arg1 + 0x168) = (*(*rcx_31 + 0x10))(rcx_31, 
                            rdx_24 & 0xffffffffffff, r15_7[1], 3, &var_78, 0, var_1f8, var_1f0, 
                            var_1e8)
                        int64_t rcx_32 = *(arg1 + 0x30)
                        *(arg1 + 0x30) = r15_7[1] + *r15_7
                        uint64_t rax_72 = *r15_7
                        
                        if (rcx_32 == rax_72)
                            data_143f36238 += 1
                        else if ((rcx_32 u>> 0x30).d == (rax_72 u>> 0x30).d)
                            data_143f36228 += 1
                        else
                            data_143f36230 += 1
                        
                        *(arg1 + 0x27c) += 1
                        *(arg1 + 0x288) += r15_7[1]
                        
                        if (var_78 != 0)
                            void** const* rcx_34 = &var_58
                            
                            if (var_68_1 != 0)
                                rcx_34 = var_68_1
                            
                            (*rcx_34)[2](rcx_34)
                        
                        rbx_4 = var_1b8
                    
                    break
                
                rdx_23 += 1
                result += 0x20
            while (rdx_23 s< rcx_29)
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)
        
        result.b = 1
        __security_check_cookie(rax_1 ^ &var_228)
        return result
    
    if (rbx != -1)
        goto label_141cfadd0
    
    var_1d8 -= 1
    result = var_1c8 - 1
    rcx = var_1a0
    r12 -= 0xc
