// 函数: sub_141975630
// 地址: 0x141975630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int32_t result = _statfp()
int32_t result_1 = result
int32_t rbx = 0
int32_t var_2e8 = 0

if (result s> 0)
    int64_t r12
    int64_t arg_10 = r12
    
    do
        void var_178
        sub_140ae6a10(&var_178)
        int64_t var_2a8 = 0
        int64_t var_2a0_1 = 0
        int512_t entry_zmm2
        sub_140b1ed90(rbx, &var_178, &var_2a8, entry_zmm2)
        int32_t var_2cc_1 = 1
        int32_t rcx_3 = 0
        int32_t var_2d0_1 = 0
        int32_t r8_2 = 0
        void var_168
        void* var_2c8_1 = &var_168
        int32_t var_2c0_1 = 0xffffffff
        int64_t var_2bc_1 = 0
        int32_t var_150
        
        if (var_150 != 0)
            void* r9_1 = &var_168
            void* var_158
            
            if (var_158 != 0)
                r9_1 = var_158
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_150 - 1)
            int32_t rdx_4 = *r9_1
            
            if (rdx_4 != 0)
            label_14197576b:
                int32_t rax_9 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_2cc_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                int32_t rax_11 = r8_2 - rax_10 + 0x1f
                
                if (rax_11 s> var_150)
                    rax_11 = var_150
                
                var_2bc_1.d = rax_11
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_3)
                    r8_2 += 0x20
                    rcx_3 += 1
                    var_2bc_1:4.d = r8_2
                    var_2d0_1 = rcx_3
                    
                    if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        var_2bc_1.d = var_150
                        break
                    
                    rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                    int32_t var_2c0_2 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_14197576b
        
        entry_zmm2.o = 0xffffffff
        int128_t var_240_1 = 0xffffffff
        var_2bc_1.d = var_150
        int128_t var_250_1 = var_2d0_1.o
        uint64_t rax_13 = (0xffffffff << (var_150.b & 0x1f)).q u>> 0x20
        uint64_t var_298_1 = rax_13
        entry_zmm2.o = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_290 = (&var_178).o
        int128_t var_280_1 = var_250_1
        int64_t var_270_1 = (entry_zmm2.o).q
        
        while (true)
            int64_t rdx_7 = sx.q(var_280_1:0xc.d)
            int64_t rcx_7 = var_290.q
            
            if (rdx_7.d != rax_13.d || var_280_1.q != &var_168 || rcx_7 != &var_178)
                rax_13.b = 1
            else
                rax_13.b = 0
            
            if (rax_13.b == 0)
                break
            
            int64_t* rbx_2 = rdx_7 * 0xb8 + *rcx_7
            int16_t* var_228
            sub_140596d10(&var_228, rbx_2)
            int64_t var_218
            __builtin_memset(&var_218, 0, 0x2c)
            int32_t var_1ec_1 = 0x80
            int32_t var_1e8_1 = 0xffffffff
            int32_t var_1e4_1 = 0
            int64_t var_1d8_1 = 0
            int32_t var_1d0_1 = 0
            sub_140a3c5e0(&var_218, &rbx_2[2])
            uint64_t var_1c8 = 0
            int64_t var_1c0
            __builtin_memset(&var_1c0, 0, 0x24)
            int32_t var_19c_1 = 0x80
            int32_t var_198_1 = 0xffffffff
            int32_t var_194_1 = 0
            int64_t var_188_1 = 0
            int32_t var_180_1 = 0
            sub_140747450(&var_1c8, &rbx_2[0xc])
            
            if (sub_140a32ae0(&var_228, u"ShaderPlatform ", 1) != 0)
                int32_t var_220
                int32_t rbx_3 = var_220 - 1
                
                if (var_220 == 0)
                    rbx_3 = 0
                
                int16_t* var_2f8 = nullptr
                int32_t rdx_11 = rbx_3
                int32_t var_2f0_1 = 0
                
                if (rbx_3 s> 0xf)
                    rdx_11 = 0xf
                
                int16_t* const rax_15 = &data_142d40450
                int16_t* r13_1 = nullptr
                int32_t rdi_1 = 0
                
                if (var_220 != 0)
                    rax_15 = var_228
                
                int32_t rbx_4 = rbx_3 - rdx_11
                void* rsi_1 = &rax_15[sx.q(rdx_11)]
                int32_t rax_16 = 0
                int32_t var_2ec_1 = 0
                
                if (rsi_1 != 0 && *rsi_1 != 0 && rbx_4 s> 0)
                    if (rbx_4 + 1 s> 0)
                        sub_1405947f0(&var_2f8, rbx_4 + 1)
                        rax_16 = var_2ec_1
                        rdi_1 = var_2f0_1
                        r13_1 = var_2f8
                    
                    rdi_1 += rbx_4 + 1
                    
                    if (rdi_1 s> rax_16)
                        sub_140594770(&var_2f8)
                        r13_1 = var_2f8
                    
                    UnDecorator::getReferenceType(r13_1, rsi_1, rbx_4 * 2)
                    r13_1[sx.q(rdi_1) - 1] = 0
                
                var_2f8 = nullptr
                int16_t* const r14_1 = &data_142d40450
                var_2f0_1.q = 0
                
                if (rdi_1 != 0)
                    r14_1 = r13_1
                
                uint32_t var_2b0_1 = 0x31
                r12.b = 0
                uint32_t rbx_9
                
                while (true)
                    int16_t* var_2e0 = nullptr
                    int32_t rax_18 = 0
                    int32_t var_2d4_1 = 0
                    int16_t* rsi_2 = nullptr
                    int32_t var_2d8_1 = 0
                    int32_t rdi_3 = 0
                    
                    if (r14_1 != 0 && *r14_1 != 0)
                        int64_t rbx_5 = -1
                        
                        do
                            rbx_5 += 1
                        while (r14_1[rbx_5] != 0)
                        
                        if (rbx_5.d + 1 s> 0)
                            sub_1405947f0(&var_2e0, rbx_5.d + 1)
                            rax_18 = var_2d4_1
                            rdi_3 = var_2d8_1
                            rsi_2 = var_2e0
                        
                        rdi_3 += rbx_5.d + 1
                        
                        if (rdi_3 s> rax_18)
                            sub_140594770(&var_2e0)
                            rsi_2 = var_2e0
                        
                        UnDecorator::getReferenceType(rsi_2, r14_1, (rbx_5.d + 1) * 2)
                    
                    uint32_t r15_1 = zx.d(r12.b)
                    int64_t var_268
                    int64_t* rax_19
                    rax_19, entry_zmm2 = sub_141976960(&var_268, r15_1)
                    int16_t* const rdx_19 = &data_142d40450
                    
                    if (rdi_3 != 0)
                        rdx_19 = rsi_2
                    
                    void* rax_20
                    
                    if (rax_19[1].d == 0)
                        rax_20 = &data_142d40450
                    else
                        rax_20 = *rax_19
                    
                    void* rdx_20 = rdx_19 - rax_20
                    uint32_t i
                    uint32_t rbx_7
                    
                    do
                        rbx_7 = zx.d(*rax_20)
                        i = zx.d(*(rax_20 + rdx_20))
                        
                        if (rbx_7 != i)
                            break
                        
                        rax_20 += 2
                    while (i != 0)
                    
                    int64_t rcx_20 = var_268
                    
                    if (rcx_20 != 0)
                        sub_140a74f90(rcx_20)
                    
                    if (rsi_2 != 0)
                        sub_140a74f90(rsi_2)
                    
                    if (rbx_7 - i == 0)
                        rbx_9 = r15_1
                        break
                    
                    r12.b += 1
                    
                    if (r12.b u>= 0x31)
                        rbx_9 = var_2b0_1
                        break
                
                if (r13_1 != 0)
                    sub_140a74f90(r13_1)
                
                if (rbx_9 != 0x31)
                    uint64_t rbx_10 = zx.q(rbx_9) * 0x14
                    entry_zmm2 = sub_14197a240(&var_218, rbx_10 + &data_143f025f0)
                    *(rbx_10 + 0x143f02600) |= 2
            
            sub_140a3c110(&var_218)
            int16_t* rcx_26 = var_228
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            var_280_1:8.d &= not.d(var_290:0xc.d)
            sub_14059bdd0(&var_290:8)
            rax_13 = var_298_1
        
        int64_t rcx_28 = var_2a8
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        result = sub_140ae7280(&var_178)
        rbx = var_2e8 + 1
        var_2e8 = rbx
    while (rbx s< result_1)

__security_check_cookie(rax_1 ^ &var_318)
return result
