// 函数: sub_140b17fe0
// 地址: 0x140b17fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
TEB* gsbase

if (data_143de6890 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6890)
    
    if (data_143de6890 == 0xffffffff)
        atexit(sub_142cbf960)
        _Init_thread_footer(&data_143de6890)

if (data_143de688c == 0)
    data_143de688c = 1
    sub_140b18fc0()
    int32_t rsi_1 = 0
    int32_t r12_1 = data_143de6880
    int64_t var_1c8
    __builtin_memset(&var_1c8, 0, 0x2c)
    int32_t var_19c_1 = 0x80
    int32_t var_198_1 = 0xffffffff
    int32_t var_194_1 = 0
    int64_t var_188_1 = 0
    int32_t var_180_1 = 0
    int16_t* var_288
    int32_t var_280
    int16_t* var_278
    int64_t var_270
    int32_t var_268
    int32_t var_260
    
    if (r12_1 s> 0)
        do
            void var_178
            sub_140ae6a10(&var_178)
            var_278 = nullptr
            var_270 = 0
            arg3 = sub_140b1ed90(rsi_1, &var_178, &var_278, arg3)
            var_288 = nullptr
            var_280 = 0
            sub_1405947f0(&var_288, 0x17)
            int32_t rax_4 = var_280 + 0x17
            var_280 = rax_4
            
            if (rax_4 s> 0)
                sub_140594770(&var_288)
            
            int16_t* rbx_1 = var_288
            UnDecorator::getReferenceType(rbx_1, u"DataDrivenPlatformInfo", 0x2e)
            int32_t rdi_1 = *sub_140a452d0(&var_178, &var_268, &var_288)
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            if (rdi_1 != 0xffffffff)
                int64_t* var_238_1 = nullptr
                int32_t i_4 = 0
                __builtin_memset(&i_4:8, 0, 0x24)
                int32_t var_200_1 = 0xffffffff
                int32_t var_1fc_1 = 0
                void* rax_6 = sub_140b08220(&data_1439a49a0, &var_278)
                int32_t i_5
                int32_t i_2 = i_5
                int64_t* var_210
                int64_t* rbx_2 = var_210
                
                if (i_2 != 0)
                    int32_t i
                    
                    do
                        int64_t rcx_9 = *rbx_2
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                        
                        rbx_2 = &rbx_2[2]
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    rbx_2 = var_210
                
                if (rbx_2 != 0)
                    sub_140a74f90(rbx_2)
                
                int64_t var_220
                
                if (var_220 != 0)
                    sub_140a74f90(var_220)
                
                int32_t i_3 = i_4
                int64_t* rbx_3 = var_238_1
                
                if (i_3 != 0)
                    int32_t i_1
                    
                    do
                        int64_t rcx_12 = *rbx_3
                        
                        if (rcx_12 != 0)
                            sub_140a74f90(rcx_12)
                        
                        rbx_3 = &rbx_3[2]
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    rbx_3 = var_238_1
                
                if (rbx_3 != 0)
                    sub_140a74f90(rbx_3)
                
                sub_140b1eb60(&var_178, rax_6)
                var_260.q = 0
                int64_t var_258_1 = 0
                arg3 = sub_140af5d90(&var_178, u"DataDrivenPlatformInfo", u"IniParent", &var_260)
                sub_1406253f0(&var_1c8, &var_278, &var_260)
                int64_t rcx_17 = var_260.q
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
            
            int16_t* rcx_18 = var_278
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            sub_140ae7280(&var_178)
            rsi_1 += 1
        while (rsi_1 s< r12_1)
    
    int32_t r9_2 = (data_1439a49c8).d
    int32_t var_25c_1 = 1
    int32_t rcx_20 = 0
    var_260 = 0
    int32_t r8_4 = 0
    void* var_258_2 = &data_1439a49b0
    int32_t var_250_1 = 0xffffffff
    int64_t var_24c_1 = 0
    
    if (r9_2 != 0)
        void* rax_7 = data_1439a49c0
        void* r10_1 = &data_1439a49b0
        
        if (rax_7 != 0)
            r10_1 = rax_7
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r9_2 - 1)
        int32_t rdx_8 = *r10_1
        
        if (rdx_8 != 0)
        label_140b18348:
            int32_t rax_14 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
            int32_t var_25c_2 = rax_14
            int32_t rax_15
            
            if (rax_14 == 0)
                rax_15 = 0x20
            else
                rax_15 = 0x1f - temp0_2
            
            int32_t rax_16 = r8_4 - rax_15 + 0x1f
            
            if (rax_16 s> r9_2)
                rax_16 = r9_2
            
            var_24c_1.d = rax_16
        else
            while (true)
                int64_t rdx_9 = sx.q(rcx_20)
                r8_4 += 0x20
                rcx_20 += 1
                var_24c_1:4.d = r8_4
                var_260 = rcx_20
                
                if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_24c_1.d = r9_2
                    break
                
                rdx_8 = *(r10_1 + (rdx_9 << 2) + 4)
                var_250_1 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_140b18348
    
    arg3.o = var_250_1.o
    var_24c_1.d = r9_2
    int128_t var_220_1 = arg3.o
    int128_t var_230 = var_260.o
    arg3.o = _mm_unpackhi_pd(arg3.o, arg3.q)
    int128_t var_1f8 = (&data_1439a49a0).o
    int128_t var_1e8_1 = var_230
    int64_t var_1d8_1 = (arg3.o).q
    
    while (true)
        int64_t rax_17 = sx.q(var_1e8_1:0xc.d)
        int64_t rcx_24 = var_1f8.q
        
        if (rax_17.d == ((0xffffffff << (r9_2.b & 0x1f)).q u>> 0x20).d
                && var_1e8_1.q == &data_1439a49b0 && rcx_24 == &data_1439a49a0)
            break
        
        int64_t* r15_3 = rax_17 * 0x58 + *rcx_24
        int32_t var_240
        sub_14062d6e0(&var_1c8, &var_240, r15_3)
        int64_t rax_18 = sx.q(var_240)
        void* rcx_26
        
        if (rax_18.d != 0xffffffff)
            rcx_26 = var_1c8 + rax_18 * 0x28
        
        int32_t rbx_4
        int16_t* rdi_2
        
        if (rax_18.d == 0xffffffff || rcx_26 == 0)
            rbx_4 = 0
            var_288 = nullptr
            var_280 = 0
            rdi_2 = nullptr
            var_280 = 0
        else
            rbx_4 = *(rcx_26 + 0x18)
            rdi_2 = nullptr
            int64_t rsi_2 = *(rcx_26 + 0x10)
            var_288 = nullptr
            
            if (rbx_4 == 0)
                var_280 = 0
            else
                sub_1405a4c70(&var_288, rbx_4, 0)
                rdi_2 = var_288
                memcpy(rdi_2, rsi_2, rbx_4 * 2)
        
        while (true)
            int16_t* const rcx_29 = &data_142d40450
            
            if (rbx_4 != 0)
                rcx_29 = rdi_2
            
            if (sub_140a54510(rcx_29, &data_142d40450) == 0)
                break
            
            int64_t r14_2 = sx.q(r15_3[3].d)
            int32_t rax_21 = (r14_2 + 1).d
            r15_3[3].d = rax_21
            
            if (rax_21 s> *(r15_3 + 0x1c))
                sub_1405a4f90(&r15_3[2])
            
            int64_t rdx_15 = r15_3[2]
            memmove(rdx_15 + 0x10, rdx_15, (r14_2 << 4).d)
            int64_t* rsi_3 = r15_3[2]
            int32_t r14_3 = 0
            *rsi_3 = 0
            rsi_3[1].d = rbx_4
            
            if (rbx_4 != 0)
                sub_1405a4c70(rsi_3, rbx_4, 0)
                memcpy(*rsi_3, rdi_2, rbx_4 * 2)
            else
                *(rsi_3 + 0xc) = 0
            
            sub_14062d6e0(&var_1c8, &var_268, &var_288)
            int64_t rax_22 = sx.q(var_268)
            void* rcx_35
            
            if (rax_22.d != 0xffffffff)
                rcx_35 = var_1c8 + rax_22 * 0x28
            
            int16_t* rsi_4
            
            if (rax_22.d == 0xffffffff || rcx_35 == 0)
                rsi_4 = nullptr
                rbx_4 = 0
            else
                rbx_4 = *(rcx_35 + 0x18)
                rsi_4 = nullptr
                var_278 = nullptr
                int64_t r14_4 = *(rcx_35 + 0x10)
                var_270.d = rbx_4
                
                if (rbx_4 != 0)
                    sub_1405a4c70(&var_278, rbx_4, 0)
                    rsi_4 = var_278
                    memcpy(rsi_4, r14_4, rbx_4 * 2)
                    r14_3 = var_270:4.d
                    rbx_4 = var_270.d
                else
                    r14_3 = 0
            
            if (rdi_2 != 0)
                sub_140a74f90(rdi_2)
            
            var_280 = r14_3
            rdi_2 = rsi_4
            var_288 = rsi_4
            var_270 = 0
            var_278 = nullptr
            var_280 = rbx_4
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)
        
        var_1e8_1:8.d &= not.d(var_1f8:0xc.d)
        sub_14059bdd0(&var_1f8:8)
    
    int32_t var_180_2 = 0
    
    if (var_188_1 != 0)
        sub_140a74f90(var_188_1)
    
    sub_140681eb0(&var_1c8)

__security_check_cookie(rax_1 ^ &var_2a8)
return &data_1439a49a0
