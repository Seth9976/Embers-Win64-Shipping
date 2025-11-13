// 函数: _Open_dir
// 地址: 0x140afc2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int16_t** var_250 = arg5
int64_t** rsi = arg3
int32_t result = *(arg1 + 0x68) - *(arg1 + 0x94)
int64_t* r9 = arg6
int64_t* var_2a8 = r9
int32_t* i_3
int32_t var_298
int64_t var_290

if (result s> 0)
    result = sub_140a32ae0(r9, &data_142e5c1c0, 1)
    
    if (result.b != 0 || rsi[1].d s> 1)
        int64_t var_1e0
        __builtin_memset(&var_1e0, 0, 0x2c)
        int64_t rsi_1 = -1
        int32_t rbx_1 = 0
        int32_t var_1b0_1 = 0xffffffff
        int32_t var_1ac_1 = 0
        int64_t var_1a0_1 = 0
        int32_t var_198_1 = 0
        void** const var_1e8 = &data_142e6e248
        int16_t var_190_1 = 0
        i_3 = nullptr
        int32_t var_298_1 = 0
        int32_t var_1b4_1 = 0x80
        char var_18e_1 = 1
        sub_140ae5630(arg1 + 0x60, &i_3)
        
        for (int32_t* i = i_3; i != &i[sx.q(var_298_1)]; i = &i[1])
            int32_t rax_5 = rbx_1
            rbx_1 = *i
            
            if (rbx_1 s<= rax_5)
                rbx_1 = rax_5
        
        int32_t* rcx_5
        
        if (*(arg1 + 0x68) == *(arg1 + 0x94))
        label_140afc42b:
            rcx_5 = nullptr
        else
            void* rcx_2 = *(arg1 + 0xa0)
            void* r8 = arg1 + 0x98
            
            if (rcx_2 != 0)
                r8 = rcx_2
            
            int32_t rax_8 = *(r8 + (((sx.q(*(arg1 + 0xa8)) - 1) & sx.q(rbx_1)) << 2))
            
            if (rax_8 == 0xffffffff)
            label_140afc42b_1:
                rcx_5 = nullptr
            else
                while (true)
                    rcx_5 = sx.q(rax_8) * 0x38 + *(arg1 + 0x60)
                    
                    if (*rcx_5 == rbx_1)
                        break
                    
                    rax_8 = rcx_5[0xc]
                    
                    if (rax_8 == 0xffffffff)
                        goto label_140afc42b_2
                
                if (rax_8 == 0xffffffff)
                label_140afc42b_2:
                    rcx_5 = nullptr
        
        void* var_2b8 = &rcx_5[2]
        void var_188
        int64_t* var_270 = sub_140ae4b00(&var_1e0, &rcx_5[2], sub_140ae6a10(&var_188))
        sub_140ae7280(&var_188)
        int32_t r11_1 = *(arg1 + 0x88)
        var_290:4.d = 1
        int32_t rcx_9 = 0
        var_290.d = 0
        int32_t r8_3 = 0
        void* var_288_1 = arg1 + 0x70
        int32_t var_280_1 = 0xffffffff
        int64_t var_27c_1 = 0
        
        if (r11_1 != 0)
            void* rax_11 = *(arg1 + 0x80)
            void* r9_1 = arg1 + 0x70
            
            if (rax_11 != 0)
                r9_1 = rax_11
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_8 = *r9_1
            
            if (rdx_8 != 0)
            label_140afc4eb:
                int32_t rax_18 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
                var_290:4.d = rax_18
                int32_t rax_19
                
                if (rax_18 == 0)
                    rax_19 = 0x20
                else
                    rax_19 = 0x1f - temp0_2
                
                var_27c_1.d = r8_3 - rax_19 + 0x1f
                
                if (r8_3 - rax_19 + 0x1f s> r11_1)
                    var_27c_1.d = r11_1
            else
                while (true)
                    int64_t rdx_9 = sx.q(rcx_9)
                    r8_3 += 0x20
                    rcx_9 += 1
                    var_27c_1:4.d = r8_3
                    var_290.d = rcx_9
                    
                    if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
                    var_280_1 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_140afc4eb
                
                var_27c_1.d = r11_1
        
        int32_t rdx_10 = *(arg1 + 0x88)
        double zmm2_1[0x2] = var_280_1.o
        double var_200_1[0x2] = zmm2_1
        int32_t r12_1 = 0xffffffff << (rdx_10.b & 0x1f)
        int128_t var_210_1 = var_290.o
        int32_t r8_6 = rdx_10 s>> 5
        int32_t r9_3 = rdx_10 & 0xffffffe0
        int64_t var_220_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
        int32_t var_280_2 = r12_1
        var_27c_1.d = rdx_10
        int128_t var_240 = (arg1 + 0x60).o
        int128_t var_230_1 = var_210_1
        
        if (rdx_10 != r11_1)
            void* rax_21 = *(arg1 + 0x80)
            void* r10_1 = arg1 + 0x70
            
            if (rax_21 != 0)
                r10_1 = rax_21
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_14 = *(r10_1 + (sx.q(r8_6) << 2)) & r12_1
            
            if (rdx_14 != 0)
            label_140afc5c3:
                int32_t rax_28 = neg.d(rdx_14) & rdx_14
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_28)
                int32_t rbx_3
                
                if (rax_28 == 0)
                    rbx_3 = 0x20
                else
                    rbx_3 = 0x1f - temp0_4
                
                var_27c_1.d = r9_3 - rbx_3 + 0x1f
                
                if (r9_3 - rbx_3 + 0x1f s> r11_1)
                    var_27c_1.d = r11_1
            else
                while (true)
                    int64_t rcx_14 = sx.q(r8_6)
                    r9_3 += 0x20
                    r8_6 += 1
                    
                    if (rcx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_14 = *(r10_1 + (rcx_14 << 2) + 4)
                    var_280_2 = 0xffffffff
                    
                    if (rdx_14 != 0)
                        goto label_140afc5c3
                
                var_27c_1.d = r11_1
        
        int64_t* r15_1 = var_270
        
        while (true)
            int64_t rax_30 = sx.q(var_230_1:0xc.d)
            int64_t rcx_16 = var_240.q
            
            if (rax_30.d == (var_280_2.q u>> 0x20).d && var_230_1.q == arg1 + 0x70
                    && rcx_16 == arg1 + 0x60)
                break
            
            int32_t* rdx_16 = rax_30 * 0x38 + *rcx_16
            
            if (*rdx_16 s< arg2)
                sub_140aeb680(r15_1, &rdx_16[2])
            
            var_230_1:8.d &= not.d(var_240:0xc.d)
            sub_14059bdd0(&var_240:8)
        
        void* rbx_6 = var_2b8
        int16_t* const r14_1 = &data_142d40450
        var_270 = nullptr
        int32_t var_268_1 = 0
        int16_t* rbx_7
        
        if (*(rbx_6 + 8) == 0)
            rbx_7 = &data_142d40450
        else
            rbx_7 = *rbx_6
        
        var_2b8 = nullptr
        int32_t rdx_18 = 0
        int32_t var_2b0_1 = 0
        int32_t rcx_19 = 0
        int32_t var_2ac_1 = 0
        
        if (rbx_7 != 0 && *rbx_7 != 0)
            do
                rsi_1 += 1
            while (rbx_7[rsi_1] != 0)
            
            if (rsi_1.d + 1 s> 0)
                sub_1405947f0(&var_2b8, rsi_1.d + 1)
                rcx_19 = var_2ac_1
                rdx_18 = var_2b0_1
            
            int32_t rax_33 = rdx_18 + rsi_1.d + 1
            int32_t var_2b0_2 = rax_33
            
            if (rax_33 s> rcx_19)
                sub_140594770(&var_2b8)
            
            UnDecorator::getReferenceType(var_2b8, rbx_7, (rsi_1.d + 1) * 2)
        
        int64_t* rax_34 = sub_140a300d0(var_2a8, &var_290, &data_142e5c1c0, &data_142d40450, 1)
        int16_t* r8_9
        
        if (rax_34[1].d == 0)
            r8_9 = &data_142d40450
        else
            r8_9 = *rax_34
        
        int16_t** rax_35 = var_250
        
        if (rax_35[1].d != 0)
            r14_1 = *rax_35
        
        int32_t var_2c8_1
        var_2c8_1.q = &var_2b8
        sub_140af2c50(&var_1e8, r14_1, r8_9, &var_270, var_2c8_1)
        int64_t rcx_25 = var_290
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        void* rcx_26 = var_2b8
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t* r14_2 = var_270
        int64_t rsi_3 = sx.q(var_268_1)
        int64_t* rbx_8 = r14_2
        void* r15_4 = &r14_2[rsi_3 * 2]
        
        if (r14_2 != r15_4)
            do
                sub_140a300d0(var_2a8, &var_2b8, &data_142e5c1c0, &data_142d404b0, 1)
                sub_140a1dfc0(sub_140af2330(&var_290, &var_2b8, rbx_8), &var_250)
                int32_t var_248
                int64_t r14_3 = sx.q(var_248)
                int64_t rcx_30 = arg4[1]
                int16_t** r13_2 = var_250
                int64_t r12_3 = r14_3 * 2
                
                if (rcx_30 + r12_3 u>= arg4[2])
                    sub_140b38e20(arg4, r14_3)
                    rcx_30 = arg4[1]
                
                arg4[1] = rcx_30 + (r14_3 << 1)
                memcpy(rcx_30, r13_2, r12_3.d)
                int64_t rcx_32 = var_290
                
                if (rcx_32 != 0)
                    sub_140a74f90(rcx_32)
                
                void* rcx_33 = var_2b8
                
                if (rcx_33 != 0)
                    sub_140a74f90(rcx_33)
                
                rbx_8 = &rbx_8[2]
            while (rbx_8 != r15_4)
            
            rsi_3 = zx.q(var_268_1)
            r14_2 = var_270
        
        int64_t* rbx_9 = r14_2
        
        if (rsi_3.d != 0)
            int32_t i_1
            
            do
                int64_t rcx_34 = *rbx_9
                
                if (rcx_34 != 0)
                    sub_140a74f90(rcx_34)
                
                rbx_9 = &rbx_9[2]
                i_1 = rsi_3.d
                rsi_3 = zx.q(rsi_3.d - 1)
            while (i_1 != 1)
        
        if (r14_2 != 0)
            sub_140a74f90(r14_2)
        
        int32_t* i_4 = i_3
        
        if (i_4 != 0)
            sub_140a74f90(i_4)
        
        i_3 = nullptr
        var_1e8 = &data_142e6e248
        var_298 = 0
        sub_140af04f0(&var_1e8, 1, &i_3)
        int32_t var_198_2 = 0
        
        if (var_1a0_1 != 0)
            sub_140a74f90(var_1a0_1)
        
        result = sub_140aeee70(&var_1e0, 0)
        int64_t var_1c0
        
        if (var_1c0 != 0)
            result = sub_140a74f90(var_1c0)
        
        int64_t rcx_41 = var_1e0
        
        if (rcx_41 != 0)
            result = sub_140a74f90(rcx_41)
        
        rsi = arg3
    
    r9 = var_2a8

int64_t* i_2 = *rsi

for (void* r14_6 = &i_2[sx.q(rsi[1].d) * 4]; i_2 != r14_6; i_2 = &i_2[4])
    sub_140a1dfc0(sub_140af2330(&var_290, r9, i_2), &i_3)
    int64_t rsi_5 = sx.q(var_298)
    int64_t rcx_44 = arg4[1]
    int32_t* i_5 = i_3
    int64_t r15_5 = rsi_5 * 2
    
    if (rcx_44 + r15_5 u>= arg4[2])
        sub_140b38e20(arg4, rsi_5)
        rcx_44 = arg4[1]
    
    arg4[1] = rcx_44 + (rsi_5 << 1)
    result = memcpy(rcx_44, i_5, r15_5.d)
    int64_t rcx_46 = var_290
    
    if (rcx_46 != 0)
        result = sub_140a74f90(rcx_46)
    
    r9 = var_2a8

__security_check_cookie(rax_1 ^ &var_2e8)
return result
