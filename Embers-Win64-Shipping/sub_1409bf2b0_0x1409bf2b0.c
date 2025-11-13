// 函数: sub_1409bf2b0
// 地址: 0x1409bf2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
uint64_t (* var_170)(void* arg1)

if (arg1 + 0x5b8 != &var_170)
    int64_t rcx = *(arg1 + 0x5b8)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 0x5b8) = 0
    *(arg1 + 0x5c0) = 0

uint128_t var_168

if (arg1 + 0x5c8 != &var_168:8)
    int32_t i_10 = *(arg1 + 0x5d0)
    int64_t* rdi_1 = *(arg1 + 0x5c8)
    
    if (i_10 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rdi_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rdi_1 = &rdi_1[2]
            i = i_10
            i_10 -= 1
        while (i != 1)
        rdi_1 = *(arg1 + 0x5c8)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    *(arg1 + 0x5c8) = 0
    *(arg1 + 0x5d0) = 0

double var_158[0x2]
void* result = &var_158[1]

if (arg1 + 0x5d8 != &var_158[1])
    int64_t rcx_3 = *(arg1 + 0x5d8)
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
    
    *(arg1 + 0x5d8) = 0
    *(arg1 + 0x5e0) = 0

int64_t rcx_4 = sx.q(*(arg1 + 0x520))

if (rcx_4.d s> 0)
    int64_t* rsi_1 = *(arg1 + 0x528)
    int64_t* var_1b8 = rsi_1
    
    if (rsi_1 != 0)
        void* rax = *(arg1 + 0x28)
        int64_t* var_218 = rsi_1
        int64_t rax_1 = rcx_4 * 3
        int64_t rcx_5 = rsi_1[0xb]
        int32_t var_1d0 = *(rax + 0x120) - *(rax + 0x14c)
        int32_t* rax_2 = *(rcx_5 + (rax_1 << 3))
        float rcx_6 = rax_2[2]
        int32_t j_1 = *rax_2
        uint64_t rax_4 = zx.q(data_14401b1a0)
        float arg_20 = rcx_6
        TEB* gsbase
        int64_t r13_1 = *(gsbase->ThreadLocalStoragePointer + (rax_4 << 3))
        
        if (data_143cee0a0 s> *(0x14 + r13_1))
            _Init_thread_header(&data_143cee0a0)
            
            if (data_143cee0a0 == 0xffffffff)
                data_143cee090 = 0
                data_143cee098.q = 0
                atexit(&data_142cb8940)
                _Init_thread_footer(&data_143cee0a0)
        
        int32_t rax_6 = data_143cee09c
        data_143cee098 = 0
        
        if (rax_6 s< 0 && rax_6 != 0)
            sub_140638cc0(&data_143cee090, 0)
        
        if (data_143cee0b8 s> *(0x14 + r13_1))
            _Init_thread_header(&data_143cee0b8)
            
            if (data_143cee0b8 == 0xffffffff)
                data_143cee0a8 = 0
                data_143cee0b0.q = 0
                atexit(&data_142cb8960)
                _Init_thread_footer(&data_143cee0b8)
        
        int32_t rax_8 = data_143cee0b4
        data_143cee0b0 = 0
        
        if (rax_8 s< 0 && rax_8 != 0)
            sub_140638cc0(&data_143cee0a8, 0)
        
        if (data_143cee0d0 s> *(0x14 + r13_1))
            _Init_thread_header(&data_143cee0d0)
            
            if (data_143cee0d0 == 0xffffffff)
                data_143cee0c0 = 0
                data_143cee0c8 = 0
                atexit(sub_142cba5a0)
                _Init_thread_footer(&data_143cee0d0)
        
        if (data_143cee0e8 s> *(0x14 + r13_1))
            _Init_thread_header(&data_143cee0e8)
            
            if (data_143cee0e8 == 0xffffffff)
                data_143cee0d8 = 0
                data_143cee0e0 = 0
                atexit(sub_142cb8760)
                _Init_thread_footer(&data_143cee0e8)
        
        if (data_143cee100 s> *(0x14 + r13_1))
            _Init_thread_header(&data_143cee100)
            
            if (data_143cee100 == 0xffffffff)
                data_143cee0f0 = 0
                data_143cee0f8 = 0
                atexit(sub_142cb8780)
                _Init_thread_footer(&data_143cee100)
        
        int32_t rcx_8 = data_143cee0c8.d
        int64_t i_17 = sx.q(*(*(arg1 + 0x28) + 8))
        
        if (i_17.d s> rcx_8)
            bool cond:3_1 = i_17.d s<= data_143cee0c8:4.d
            data_143cee0c8.d = i_17.d
            
            if (not(cond:3_1))
                sub_140638a00(&data_143cee0c0)
        else if (i_17.d s< rcx_8)
            int32_t r14_2 = rcx_8 - i_17.d
            
            if (rcx_8 != i_17.d)
                int32_t rax_17 = rcx_8 - r14_2
                
                if (rax_17 != i_17.d)
                    int64_t rdi_3 = data_143cee0c0
                    memmove(rdi_3 + i_17 * 0xc, rdi_3 + sx.q(r14_2 + i_17.d) * 0xc, 
                        (rax_17 - i_17.d) * 0xc)
                    rcx_8 = data_143cee0c8.d
                
                data_143cee0c8.d = rcx_8 - r14_2
        
        void* arg_18
        sub_14090aa40(*(arg1 + 0x28) + 0x150, &arg_18, data_143f35cc8)
        int32_t r9_1 = 0
        int64_t i_12 = i_17
        
        if (i_17.d s> 0)
            void* rax_22 = arg_18
            int32_t r10_1 = 1
            uint64_t* r8_4 = nullptr
            int64_t i_1
            
            do
                void* rdx_6 = *(arg1 + 0x28)
                int32_t rcx_16
                void* rdx_7
                
                if (r9_1 s>= 0 && r9_1 s< *(rdx_6 + 8))
                    void* rcx_15 = *(rdx_6 + 0x20)
                    rdx_7 = rdx_6 + 0x10
                    
                    if (rcx_15 != 0)
                        rdx_7 = rcx_15
                    
                    rcx_16 = r9_1
                    
                    if (r9_1 s< 0)
                        rcx_16 = r9_1 + 0x1f
                
                if (r9_1 s< 0 || r9_1 s>= *(rdx_6 + 8)
                        || (*(rdx_7 + (sx.q(rcx_16 s>> 5) << 2)) & r10_1) == 0)
                    int64_t rdx_9 = data_143cee0c0
                    *(r8_4 + rdx_9) = data_143dbb1f8.q
                    *(r8_4 + rdx_9 + 8) = data_143dbb200
                else
                    int64_t rdi_4 = data_143cee0c0
                    int64_t rdx_8 = **(rax_22 + 0x18)
                    *(r8_4 + rdi_4) = *(r8_4 + rdx_8)
                    *(r8_4 + rdi_4 + 8) = *(r8_4 + rdx_8 + 8)
                
                r9_1 += 1
                r10_1 = rol.d(r10_1, 1)
                r8_4 += 0xc
                i_1 = i_12
                i_12 -= 1
            while (i_1 != 1)
        
        int32_t rax_23 = data_143cee0f8:4.d
        data_143cee0f8.d = 0
        
        if (rax_23 s< 0 && rax_23 != 0)
            sub_1405dadb0(&data_143cee0f0, 0)
        
        int32_t rax_24 = data_143cee0e0:4.d
        data_143cee0e0.d = 0
        
        if (rax_24 s< 0 && rax_24 != 0)
            sub_1409dab00(&data_143cee0d8, 0)
            rax_24 = data_143cee0e0:4.d
        
        int32_t rdx_10 = *(arg1 + 0x5a0)
        
        if (rdx_10 s> rax_24)
            sub_1409dab00(&data_143cee0d8, rdx_10)
        
        sub_14090a980(*(arg1 + 0x28) + 0x1a8, &arg_18, data_143f360f0)
        int32_t* var_210
        sub_14099afb0(*(arg1 + 0x28) + 0x1a8, &var_210, data_143f36110)
        int32_t rcx_26 = 0
        uint64_t (* r14_4)(void* arg1) = *(arg1 + 0x28) + 0x118
        int32_t var_1f0 = 0
        int32_t r11_1 = *(r14_4 + 0x28)
        void* r8_7 = r14_4 + 0x10
        int32_t rdi_5 = 0
        uint64_t (* var_1c0_1)(void* arg1) = r14_4
        int32_t var_1ec_1 = 1
        void* var_1e8_1 = r8_7
        int32_t var_1e0_1 = 0xffffffff
        int64_t var_1dc_1 = 0
        
        if (r11_1 != 0)
            void* rax_25 = *(r8_7 + 0x10)
            
            if (rax_25 != 0)
                r8_7 = rax_25
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(r11_1 - 1)
            int32_t rdx_15 = *r8_7
            
            if (rdx_15 != 0)
            label_1409bf818:
                int32_t rax_31 = ((rdx_15 - 1) & rdx_15) ^ rdx_15
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_31)
                int32_t var_1ec_2 = rax_31
                int32_t rax_32
                
                if (rax_31 == 0)
                    rax_32 = 0x20
                else
                    rax_32 = 0x1f - temp0_1
                
                var_1dc_1.d = rdi_5 - rax_32 + 0x1f
                
                if (rdi_5 - rax_32 + 0x1f s> r11_1)
                    var_1dc_1.d = r11_1
            else
                while (true)
                    int64_t rax_28 = sx.q(rcx_26)
                    rdi_5 += 0x20
                    rcx_26 += 1
                    var_1dc_1:4.d = rdi_5
                    var_1f0 = rcx_26
                    
                    if (rax_28.d s>= ((temp8_1 & 0x1f) + temp9_1) s>> 5)
                        break
                    
                    rdx_15 = *(r8_7 + (rax_28 << 2) + 4)
                    var_1e0_1 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_1409bf818
                
                var_1dc_1.d = r11_1
        
        int32_t rdx_16 = *(r14_4 + 0x28)
        uint64_t (* i_19)(void* arg1) = r14_4 + 0x10
        double zmm2[0x2] = var_1e0_1.o
        int32_t rbx_1 = *(i_19 + 0x18)
        uint128_t zmm0 = var_1f0.o
        var_170 = r14_4
        var_158 = zmm2
        var_168 = zmm0
        int32_t r11_2 = 0xffffffff << (rdx_16.b & 0x1f)
        zmm0 = var_170.o
        int32_t rdi_8 = rdx_16 s>> 5
        uint64_t r8_9 = zx.q(rdx_16) & 0xffffffe0
        int64_t var_f8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        uint64_t (* i_15)(void* arg1) = i_19
        int32_t var_1e0_2 = r11_2
        var_1dc_1.d = rdx_16
        uint128_t var_118 = zmm0
        uint128_t var_160
        uint128_t var_108_1 = var_160
        
        if (rdx_16 != rbx_1)
            uint64_t (* i_20)(void* arg1) = *(i_19 + 0x10)
            
            if (i_20 != 0)
                i_19 = i_20
            
            int32_t temp10_1
            int32_t temp11_1
            temp10_1:temp11_1 = sx.q(rbx_1 - 1)
            int32_t rcx_31 = *(i_19 + (sx.q(rdi_8) << 2)) & r11_2
            
            if (rcx_31 != 0)
            label_1409bf8f0:
                int32_t rax_40 = ((rcx_31 - 1) & rcx_31) ^ rcx_31
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_40)
                int32_t r10_2
                
                if (rax_40 == 0)
                    r10_2 = 0x20
                else
                    r10_2 = 0x1f - temp0_3
                
                r8_9 = zx.q(r8_9.d - r10_2)
                int32_t rax_41 = (r8_9 + 0x1f).d
                var_1dc_1.d = rax_41
                
                if (rax_41 s> rbx_1)
                    var_1dc_1.d = rbx_1
            else
                while (true)
                    int64_t rax_37 = sx.q(rdi_8)
                    r8_9 = zx.q(r8_9.d + 0x20)
                    rdi_8 += 1
                    
                    if (rax_37.d s>= ((temp10_1 & 0x1f) + temp11_1) s>> 5)
                        break
                    
                    rcx_31 = *(i_19 + (rax_37 << 2) + 4)
                    var_1e0_2 = 0xffffffff
                    
                    if (rcx_31 != 0)
                        goto label_1409bf8f0
                
                var_1dc_1.d = rbx_1
            
            i_19 = i_15
        
        void* rdi_9 = arg_18
        int32_t* rbx_2 = var_210
        uint64_t rdx_22 = var_1e0_2.q u>> 0x20
        uint64_t var_1a8_1 = rdx_22
        uint64_t var_128
        
        while (true)
            int32_t rax_42 = var_108_1:0xc.d
            int64_t rcx_33 = var_108_1.q
            
            if (rax_42 == rdx_22.d && rcx_33 == i_19 && var_118.q == r14_4)
                break
            
            int64_t r14_5 = sx.q(data_143cee0f8.d)
            int32_t r15_1 = data_143a1c6c4
            
            if (rax_42 s< *(rcx_33 + 0x18))
                r15_1 = rax_42
            
            int32_t rax_43 = (r14_5 + 1).d
            bool cond:8_1 = rax_43 s<= data_143cee0f8:4.d
            data_143cee0f8.d = rax_43
            
            if (not(cond:8_1))
                sub_1405a4cf0(&data_143cee0f0)
            
            void* r15_2 = arg1
            *(data_143cee0f0 + (r14_5 << 2)) = r12
            int64_t* rcx_36 = (sx.q(r15_1) << 4) + *(*(r15_2 + 0x28) + 0x118)
            int32_t* rsi_2 = *rcx_36
            int64_t rax_46 = sx.q(rcx_36[1].d)
            r12 += rax_46.d
            var_210 = rsi_2
            arg_18.d = r12
            void* rax_47 = &rsi_2[rax_46]
            
            if (rsi_2 != rax_47)
                do
                    int64_t rdx_24 = sx.q(*rsi_2) * 5
                    int64_t rcx_37 = *(*(r15_2 + 0x28) + 0xe0)
                    int32_t* r15_3 = *(rcx_37 + (rdx_24 << 3))
                    void* r13_2 = &r15_3[sx.q(*(rcx_37 + (rdx_24 << 3) + 8))]
                    
                    if (r15_3 != r13_2)
                        do
                            int64_t r14_6 = sx.q(data_143cee0e0.d)
                            int64_t r12_1 = sx.q(*r15_3)
                            int32_t rax_51 = (r14_6 + 1).d
                            bool cond:14_1 = rax_51 s<= data_143cee0e0:4.d
                            data_143cee0e0.d = rax_51
                            
                            if (not(cond:14_1))
                                sub_1409da320(&data_143cee0d8)
                            
                            int64_t r14_7 = r14_6 << 5
                            uint64_t* r14_8 = r14_7 + data_143cee0d8
                            
                            if (r14_7 == neg.q(data_143cee0d8))
                                r14_8 = nullptr
                            else
                                __builtin_memset(r14_8, 0, 0x20)
                            
                            int64_t* rax_53
                            
                            if (*(arg1 + 0x3d0) s<= 0)
                                uint64_t var_130
                                rax_53 = &var_130
                                var_130 = data_143dbb1f0
                            else
                                uint64_t var_138
                                rax_53 = &var_138
                                var_138 = *(**(rdi_9 + 0x18) + (r12_1 << 3))
                            
                            *r14_8 = *rax_53
                            uint64_t* rax_55
                            
                            if (*(arg1 + 0x3d0) s<= 1)
                                uint64_t var_180
                                rax_55 = &var_180
                                var_180 = data_143dbb1f0
                            else
                                rax_55 = &var_128
                                var_128 = *(*(*(rdi_9 + 0x18) + 0x10) + (r12_1 << 3))
                            
                            r14_8[1] = *rax_55
                            r15_3 = &r15_3[1]
                            *(r14_8 + 0x10) =
                                *sub_140acc970(&var_1f0, (r12_1 << 4) + **(rbx_2 + 0x18))
                        while (r15_3 != r13_2)
                        
                        rsi_2 = var_210
                    
                    r15_2 = arg1
                    rsi_2 = &rsi_2[1]
                    var_210 = rsi_2
                while (rsi_2 != rax_47)
                
                r12 = arg_18.d
            
            var_108_1:8.d &= not.d(var_118:0xc.d)
            r8_9 = sub_14059bdd0(&var_118:8)
            rdx_22 = var_1a8_1
            i_19 = i_15
            r14_4 = var_1c0_1
        
        int64_t* rsi_4 = var_1b8
        int64_t r13_3 = *(gsbase->ThreadLocalStoragePointer + (rax_4 << 3))
        
        if (data_143cee118 s> *(0x14 + r13_3))
            r8_9 = _Init_thread_header(&data_143cee118)
            
            if (data_143cee118 == 0xffffffff)
                data_143cee108 = 0
                data_143cee110.q = 0
                atexit(&data_142cb8920)
                r8_9 = _Init_thread_footer(&data_143cee118)
        
        int32_t rax_62 = data_143cee114
        data_143cee110 = 0
        
        if (rax_62 s< 0 && rax_62 != 0)
            r8_9 = sub_1409dab00(&data_143cee108, 0)
        
        int32_t r15_4 = 0
        
        if (data_143cee140 s> *(0x14 + r13_3))
            r8_9 = _Init_thread_header(&data_143cee140)
            
            if (data_143cee140 == 0xffffffff)
                __builtin_memset(&data_143cee120, 0, 0x20)
                atexit(sub_142cb9c50)
                r8_9 = _Init_thread_footer(&data_143cee140)
        
        int32_t rax_64 = data_143cee12c
        data_143cee128 = 0
        
        if (rax_64 s< 0 && rax_64 != 0)
            r8_9 = sub_140638cc0(&data_143cee120, 0)
        
        int32_t rax_65 = data_143cee13c
        data_143cee138 = 0
        
        if (rax_65 s< 0 && rax_65 != 0)
            r8_9 = sub_140638cc0(&data_143cee130, 0)
        
        int32_t i_2 = 1
        int64_t* r12_2 = 0x18
        float zmm6[0x4]
        float zmm7[0x4]
        float zmm8[0x4]
        float zmm9[0x4]
        float zmm10[0x4]
        float zmm11[0x4]
        
        if (*(arg1 + 0x520) s>= 1)
            int64_t* rsi_5 = 0x18
            
            do
                uint64_t rdi_10 = zx.q(r15_4)
                int64_t* rbx_3
                
                if (i_2 != 1)
                    rbx_3 = &(&data_143cee120)[(rdi_10 ^ 1) * 2]
                else
                    rbx_3 = &data_143cee0c0
                
                int32_t rcx_43 = *(*(rsi_5 + *(*(arg1 + 0x528) + 0x58)) + 8)
                int32_t rax_69 = (&data_143cee128)[rdi_10 * 4]
                
                if (rcx_43 s> rax_69)
                    (&data_143cee128)[rdi_10 * 4] = rcx_43
                    
                    if (rcx_43 s> (&data_143cee12c)[rdi_10 * 4])
                        sub_140638a00(&(&data_143cee120)[rdi_10 * 2])
                else if (rcx_43 s< rax_69 && rcx_43 != rax_69)
                    (&data_143cee128)[rdi_10 * 4] = rcx_43
                
                arg_18 = (&data_143cee120)[rdi_10 * 2]
                var_1b8 = *rbx_3
                r8_9, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 =
                    sub_14099c090(&var_218, i_2, &var_1b8, &arg_18)
                r15_4 ^= 1
                i_2 += 1
                rsi_5 = &rsi_5[3]
            while (i_2 s<= *(arg1 + 0x520))
            
            rsi_4 = var_218
            r12_2 = 0x18
        
        int64_t r13_5 = sx.q(arg_20)
        int64_t r14_9 = 0
        
        if (r15_4 == 0)
            r14_9 = 0x10
        
        var_210 = *(r14_9 + &data_143cee120)
        int32_t rax_73 = *(arg1 + 0x5c0)
        
        if (r13_5.d s> rax_73)
            *(arg1 + 0x5c0) = r13_5.d
            
            if (r13_5.d s> *(arg1 + 0x5c4))
                r8_9 = sub_140638a00(arg1 + 0x5b8)
        else if (r13_5.d s< rax_73 && r13_5.d != rax_73)
            *(arg1 + 0x5c0) = r13_5.d
            r8_9 = sub_140775970(arg1 + 0x5b8)
        
        i_15 = *(arg1 + 0x5b8)
        int32_t rax_75 = data_143cee098
        
        if (r13_5.d s> rax_75)
            bool cond:20_1 = r13_5.d s<= data_143cee09c
            data_143cee098 = r13_5.d
            
            if (not(cond:20_1))
                r8_9 = sub_140638a00(&data_143cee090)
        else if (r13_5.d s< rax_75)
            int32_t rbx_8 = rax_75 - r13_5.d
            
            if (rax_75 != r13_5.d)
                int32_t rcx_49 = rax_75 - rbx_8
                
                if (rcx_49 != r13_5.d)
                    int64_t rdi_13 = data_143cee090
                    memmove(rdi_13 + r13_5 * 0xc, rdi_13 + sx.q(rbx_8 + r13_5.d) * 0xc, 
                        (rcx_49 - r13_5.d) * 0xc)
                    rax_75 = data_143cee098
                
                data_143cee098 = rax_75 - rbx_8
                r8_9 = sub_140775970(&data_143cee090)
        
        arg_20.q = data_143cee090
        int32_t rax_81 = data_143cee0b0
        
        if (r13_5.d s> rax_81)
            bool cond:23_1 = r13_5.d s<= data_143cee0b4
            data_143cee0b0 = r13_5.d
            
            if (not(cond:23_1))
                r8_9 = sub_140638a00(&data_143cee0a8)
        else if (r13_5.d s< rax_81)
            int32_t rbx_10 = rax_81 - r13_5.d
            
            if (rax_81 != r13_5.d)
                int32_t rcx_56 = rax_81 - rbx_10
                
                if (rcx_56 != r13_5.d)
                    int64_t rdi_14 = data_143cee0a8
                    memmove(rdi_14 + r13_5 * 0xc, rdi_14 + sx.q(rbx_10 + r13_5.d) * 0xc, 
                        (rcx_56 - r13_5.d) * 0xc)
                    rax_81 = data_143cee0b0
                
                data_143cee0b0 = rax_81 - rbx_10
                r8_9 = sub_140775970(&data_143cee0a8)
        
        uint64_t rcx_62 = zx.q(rsi_4[1].d)
        arg_18 = data_143cee0a8
        void* rcx_65 = *(rsi_4[5] + ((zx.q((rcx_62 u>> 2).d) & 0xf) << 3))
        int32_t rax_90 = ((*(rcx_65 + 0x170) - *(rcx_65 + 0x168)) s>> 2).d
        float zmm12[0x4]
        uint128_t zmm13
        float zmm14[0x4]
        int128_t zmm15
        
        if (rax_90 != 0)
            int32_t rcx_67 = *rsi_4
            
            if (rcx_67 == 0)
                zmm6 = sub_1409a70a0(&var_218, &var_210, &i_15, &arg_20, &arg_18)
                rsi_4 = var_218
            else if (rcx_67 == 1)
                zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_1409a5e20(&var_218, &var_210, &i_15, &arg_20, &arg_18)
                rsi_4 = var_218
            else if (rcx_67 == 2)
                zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_1409a6760(&var_218, &var_210, &i_15, &arg_20, &arg_18)
                rsi_4 = var_218
        else
            sub_1429ced00(rax_90 + 4, 
                "Failure in PrimvarRefiner::Limit() -- last level of refinement does not include full "
            "topology.", 
                r8_9)
        
        int64_t* rcx_72 = data_143ceddd8
        
        if ((*(*rcx_72 + 0x90))(rcx_72) == 0 && arg1 + 0x5b8 != r14_9 + &data_143cee120)
            int64_t rdi_15 = sx.q(*(r14_9 + &data_143cee128))
            int64_t rbx_11 = *(r14_9 + &data_143cee120)
            int32_t r8_18 = *(arg1 + 0x5c4)
            *(arg1 + 0x5c0) = rdi_15.d
            
            if (rdi_15.d != 0 || r8_18 != 0)
                sub_1407c3650(arg1 + 0x5b8, rdi_15.d, r8_18)
                memcpy(*(arg1 + 0x5b8), rbx_11, (rdi_15 * 0xc).d)
            else
                *(arg1 + 0x5c4) = 0
        
        if (data_143cee168 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rax_4 << 3))))
            _Init_thread_header(&data_143cee168)
            
            if (data_143cee168 == 0xffffffff)
                __builtin_memset(&data_143cee148, 0, 0x20)
                atexit(sub_142cb9c00)
                _Init_thread_footer(&data_143cee168)
        
        int32_t rax_95 = data_143cee154
        data_143cee150 = 0
        
        if (rax_95 s< 0 && rax_95 != 0)
            sub_1409dab00(&data_143cee148, 0)
        
        int32_t rax_96 = data_143cee164
        data_143cee160 = 0
        
        if (rax_96 s< 0 && rax_96 != 0)
            sub_1409dab00(&data_143cee158, 0)
        
        int32_t i_3 = 1
        int32_t r15_6 = 0
        
        if (*(arg1 + 0x520) s>= 1)
            do
                uint64_t rdi_16 = zx.q(r15_6)
                int64_t* r14_11
                
                if (i_3 != 1)
                    r14_11 = &(&data_143cee148)[(rdi_16 ^ 1) * 2]
                else
                    r14_11 = &data_143cee0d8
                
                int32_t rax_98 = sub_1429cc9c0(*(r12_2 + *(*(arg1 + 0x528) + 0x58)), 0)
                int32_t rcx_78 = (&data_143cee150)[rdi_16 * 4]
                
                if (rax_98 s> rcx_78)
                    (&data_143cee150)[rdi_16 * 4] = rax_98
                    
                    if (rax_98 s> (&data_143cee154)[rdi_16 * 4])
                        sub_1409da320(&(&data_143cee148)[rdi_16 * 2])
                else if (rax_98 s< rcx_78 && rax_98 != rcx_78)
                    (&data_143cee150)[rdi_16 * 4] = rax_98
                
                int32_t rcx_80 = *rsi_4
                arg_18 = (&data_143cee148)[rdi_16 * 2]
                arg_20.q = *r14_11
                int64_t* var_228
                
                if (rcx_80 == 0)
                    var_228.d = 0
                    sub_1409a1d50(&var_218, i_3, &arg_20, &arg_18, 0)
                    var_228.d = 0
                    sub_1409a1730(&var_218, i_3, &arg_20, &arg_18, 0)
                    var_228.d = 0
                    zmm6, zmm7, zmm8, zmm9, zmm10 =
                        sub_1409a3710(&var_218, i_3, &arg_20, &arg_18, 0)
                    rsi_4 = var_218
                else if (rcx_80 == 1)
                    var_228.d = 0
                    sub_1409a1d50(&var_218, i_3, &arg_20, &arg_18, 0)
                    var_228.d = 0
                    sub_1409a05d0(&var_218, i_3, &arg_20, &arg_18, 0)
                    var_228.d = 0
                    zmm6, zmm7, zmm8, zmm9, zmm10 = _input_l(&var_218, i_3, &arg_20, &arg_18, 0)
                    rsi_4 = var_218
                else if (rcx_80 == 2)
                    var_228.d = 0
                    sub_1409a1d50(&var_218, i_3, &arg_20, &arg_18, 0)
                    var_228.d = 0
                    sub_1409a0e80(&var_218, i_3, &arg_20, &arg_18, 0)
                    var_228.d = 0
                    zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 =
                        sub_1409a2b80(&var_218, i_3, &arg_20, &arg_18, 0)
                    rsi_4 = var_218
                r15_6 ^= 1
                i_3 += 1
                r12_2 = &r12_2[3]
            while (i_3 s<= *(arg1 + 0x520))
        
        int64_t* rcx_91 = data_143cedde8
        int32_t rax_102
        int64_t r8_30
        rax_102, r8_30 = (*(*rcx_91 + 0x90))(rcx_91)
        int32_t* r12_3
        
        if (rax_102 == 0)
            r12_3 = nullptr
            int64_t rax_114 = 0
            
            if (r15_6 == 0)
                rax_114 = 0x10
            
            if (-0xffffffffffffffc0 != rax_114)
                int64_t rdi_20 = sx.q(*(rax_114 + &data_143cee150))
                int64_t rbx_14 = *(rax_114 + &data_143cee148)
                int32_t r8_36 = data_143cee114
                data_143cee110 = rdi_20.d
                
                if (rdi_20.d != 0 || r8_36 != 0)
                    sub_1409da170(&data_143cee108, rdi_20.d, r8_36)
                    memcpy(data_143cee108, rbx_14, (rdi_20 << 5).d)
                else
                    data_143cee114 = 0
        else
            int64_t rdi_19 = sx.q(sub_1429cc9c0(*(rcx_5 + (rax_1 << 3)), 0))
            int32_t rax_105 = data_143cee110
            
            if (rdi_19.d s> rax_105)
                bool cond:28_1 = rdi_19.d s<= data_143cee114
                data_143cee110 = rdi_19.d
                
                if (not(cond:28_1))
                    r8_30 = sub_1409da320(&data_143cee108)
            else if (rdi_19.d s< rax_105)
                int32_t rbx_13 = rax_105 - rdi_19.d
                
                if (rax_105 != rdi_19.d)
                    int32_t rcx_95 = rax_105 - rbx_13
                    
                    if (rcx_95 != rdi_19.d)
                        r8_30 = memmove((rdi_19 << 5) + data_143cee108, 
                            (sx.q(rbx_13 + rdi_19.d) << 5) + data_143cee108, 
                            (rcx_95 - rdi_19.d) << 5)
                        rax_105 = data_143cee110
                    
                    data_143cee110 = rax_105 - rbx_13
            
            r12_3 = nullptr
            int64_t rax_108 = 0
            
            if (r15_6 == 0)
                rax_108 = 0x10
            
            uint64_t rdx_58 = zx.q(rsi_4[1].d u>> 2) & 0xf
            arg_18 = *(rax_108 + &data_143cee148)
            void* rdx_59 = *(rsi_4[5] + (rdx_58 << 3))
            int32_t rax_113 = ((*(rdx_59 + 0x170) - *(rdx_59 + 0x168)) s>> 2).d
            
            if (rax_113 != 0)
                int32_t rcx_101 = *rsi_4
                
                if (rcx_101 == 0)
                    zmm6, zmm7, zmm8 = sub_1409a8da0(&var_218, &arg_18, data_143cee108, 0)
                else if (rcx_101 == 1)
                    zmm6, zmm7, zmm8 = sub_1409a79e0(&var_218, &arg_18, data_143cee108, 0)
                else if (rcx_101 == 2)
                    zmm6, zmm7, zmm8 = sub_1409a83c0(&var_218, &arg_18, data_143cee108, 0)
            else
                sub_1429ced00(rax_113 + 4, 
                    "Failure in PrimvarRefiner::LimitFaceVarying() -- last level of refinement does not "
                "include full topology.", 
                    r8_30)
        
        int64_t rsi_6 = sx.q(var_1d0)
        void* r14_15 = arg1 + 0x5c8
        int64_t rbx_15 = sx.q(*(r14_15 + 8))
        var_1b8 = r14_15
        
        if (rsi_6.d s> rbx_15.d)
            *(r14_15 + 8) = rsi_6.d
            int32_t i_11 = rsi_6.d - rbx_15.d
            
            if (rsi_6.d s> *(r14_15 + 0xc))
                sub_1405a4f90(r14_15)
            
            int64_t* rax_118 = (rbx_15 << 4) + *r14_15
            
            if (i_11 != 0)
                int32_t i_4
                
                do
                    *rax_118 = 0
                    rax_118[1] = 0
                    rax_118 = &rax_118[2]
                    i_4 = i_11
                    i_11 -= 1
                while (i_4 != 1)
        else if (rsi_6.d s< rbx_15.d)
            sub_140838580(r14_15, rsi_6.d, rbx_15.d - rsi_6.d, 0)
        
        int32_t r13_7 = 0
        
        if (sx.q(j_1) s> 0)
            float var_58_1[0x4] = zmm6
            int64_t r9_17 = rsi_6 - 1
            float var_68_1[0x4] = zmm7
            float var_78_1[0x4] = zmm8
            float var_88_1[0x4] = zmm9
            float var_98_1[0x4] = zmm10
            float var_a8_1[0x4] = zmm11
            float var_b8_1[0x4] = zmm12
            uint128_t var_c8_1 = zmm13
            float var_d8_1[0x4] = zmm14
            int128_t var_e8_1 = zmm15
            var_210 = nullptr
            int64_t var_1c0_2 = r9_17
            int64_t j_2
            
            do
                int64_t rsi_7 = 0
                int32_t rdx_67 = r13_7
                void* r10_3 = *(rcx_5 + (rax_1 << 3))
                int64_t rax_121 = *(r10_3 + 0x18)
                int64_t r15_7 = sx.q(*(rax_121 + (r12_3 << 3)))
                arg_20.q = *(r10_3 + 0x30) + (sx.q(*(rax_121 + (r12_3 << 3) + 4)) << 2)
                int64_t i_5 = sx.q(*(arg1 + 0x520))
                
                if (i_5 s> 0)
                    int64_t* r8_42 = *(*(arg1 + 0x528) + 0x58) + ((i_5 * 3 + 1) << 3)
                    
                    do
                        void* rax_127 = *r8_42
                        r8_42 = &r8_42[-3]
                        i_5 -= 1
                        rdx_67 = *(*(rax_127 + 0x108) + (sx.q(rdx_67) << 2))
                    while (i_5 s> 0)
                
                int64_t rax_128 = r9_17
                
                if (r9_17 s>= 0)
                    int64_t temp32_1
                    
                    do
                        if (rdx_67 s>= *(data_143cee0f0 + (rax_128 << 2)))
                            rsi_7 = rax_128
                            break
                        
                        temp32_1 = rax_128
                        rax_128 -= 1
                    while (temp32_1 - 1 s>= 0)
                
                sub_1429cc970(r10_3, &var_128, r13_7, 0)
                int64_t* rsi_9 = (rsi_7 << 4) + *r14_15
                int64_t rdi_22 = sx.q(rsi_9[1].d)
                int32_t rax_129 = (rdi_22 + 1).d
                rsi_9[1].d = rax_129
                
                if (rax_129 s> *(rsi_9 + 0xc))
                    sub_1409da4e0(rsi_9)
                
                int64_t rbx_17 = rdi_22 * 0xd0
                int32_t* rbx_18 = rbx_17 + *rsi_9
                
                if (rbx_17 == neg.q(*rsi_9))
                    rbx_18 = nullptr
                else
                    memset(rbx_18, 0, 0xd0)
                
                int32_t rsi_10 = 0
                int64_t r14_16 = 0
                
                if (r15_7 s> 0)
                    int64_t r12_4 = arg_20.q
                    
                    do
                        int32_t* rdi_23
                        
                        if (rsi_10 == 1)
                            rdi_23 = &rbx_18[0xd]
                        else if (rsi_10 == 2)
                            rdi_23 = &rbx_18[0x1a]
                        else if (rsi_10 == 3)
                            rdi_23 = &rbx_18[0x27]
                        else
                            rdi_23 = rbx_18
                        
                        *rdi_23 = *(r12_4 + (r14_16 << 2))
                        int64_t* rcx_121 = (sx.q(*(var_128 + (r14_16 << 2))) << 5) + data_143cee108
                        *(rdi_23 + 4) = *rcx_121
                        *(rdi_23 + 0xc) = rcx_121[1]
                        int32_t rcx_123 = *sub_140ae16d0(&rcx_121[2], &arg_18, 1)
                        int64_t rax_133 = sx.q(*rdi_23)
                        rdi_23[5] = rcx_123
                        zmm8 = data_143dbb200
                        zmm14 = data_143dbb1fc
                        zmm7 = data_143dbb1f8
                        int64_t rcx_124 = rax_133 * 3
                        int64_t rax_134 = data_143cee0a8
                        zmm6 = *(rax_134 + (rcx_124 << 2) + 4)
                        zmm11 = *(rax_134 + (rcx_124 << 2))
                        zmm12 = *(rax_134 + (rcx_124 << 2) + 8)
                        zmm11[0] = zmm11[0] * zmm11[0]
                        zmm6[0] = zmm6[0] * zmm6[0]
                        uint128_t zmm1
                        zmm1.d = zmm12.d f* zmm12[0]
                        zmm11[0] = zmm11[0] + zmm6[0]
                        zmm11[0] = zmm11[0] f+ zmm1.d
                        float zmm0_1[0x4]
                        float zmm4_1[0x4]
                        
                        if (not(zmm11[0] != 1f))
                            zmm0_1 = zx.o(*(rax_134 + (rcx_124 << 2)))
                            zmm10 = *(rax_134 + (rcx_124 << 2) + 8)
                            zmm9 = zmm0_1.d
                            zmm6 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                        else if (zmm11[0] >= 9.99999994e-09f)
                            zmm4_1 = _mm_rsqrt_ss(zmm11[0], zmm11[0])
                            zmm11[0] = zmm11[0] * 0.5f
                            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                            zmm11[0] = zmm11[0] * zmm4_1[0]
                            zmm1.d = 0.5f - zmm11[0]
                            zmm4_1[0] = zmm4_1[0] f* zmm1.d
                            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                            zmm11[0] = zmm11[0] * zmm4_1[0]
                            zmm4_1[0] = zmm4_1[0] * (0.5f - zmm11[0])
                            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                            zmm9 = zmm4_1
                            arg_20 = zmm4_1[0]
                            zmm10 = zmm9
                            zmm9[0] = zmm9[0] * zmm6[0]
                            zmm10[0] = zmm10[0] * zmm12[0]
                            zmm6 = zmm9
                            zmm9[0] = zmm9[0] * zmm11[0]
                        else
                            zmm9 = zmm7
                            zmm6 = zmm14
                            zmm10 = zmm8
                        
                        int64_t rax_136 = data_143cee090
                        zmm11 = *(rax_136 + (rcx_124 << 2) + 4)
                        zmm12 = *(rax_136 + (rcx_124 << 2))
                        zmm13 = *(rax_136 + (rcx_124 << 2) + 8)
                        zmm12[0] = zmm12[0] * zmm12[0]
                        zmm11[0] = zmm11[0] * zmm11[0]
                        zmm1.d = zmm13.d f* zmm13.d
                        zmm12[0] = zmm12[0] + zmm11[0]
                        zmm12[0] = zmm12[0] f+ zmm1.d
                        float zmm3[0x4]
                        
                        if (not(zmm12[0] != 1f))
                            zmm0_1 = zx.o(*(rax_136 + (rcx_124 << 2)))
                            zmm8 = *(rax_136 + (rcx_124 << 2) + 8)
                            zmm7 = zmm0_1.d
                            zmm3 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                        else if (zmm12[0] >= 9.99999994e-09f)
                            zmm4_1 = _mm_rsqrt_ss(zmm12[0], zmm12[0])
                            zmm12[0] = zmm12[0] * 0.5f
                            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                            zmm12[0] = zmm12[0] * zmm4_1[0]
                            zmm1.d = 0.5f - zmm12[0]
                            zmm4_1[0] = zmm4_1[0] f* zmm1.d
                            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                            zmm12[0] = zmm12[0] * zmm4_1[0]
                            zmm4_1[0] = zmm4_1[0] * (0.5f - zmm12[0])
                            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                            zmm7 = zmm4_1
                            arg_20 = zmm4_1[0]
                            zmm8 = zmm7
                            zmm7[0] = zmm7[0] * zmm11[0]
                            zmm8[0] = zmm8[0] f* zmm13.d
                            zmm3 = zmm7
                            zmm7[0] = zmm7[0] * zmm12[0]
                        else
                            zmm3 = zmm14
                        
                        zmm3[0] = zmm3[0] * zmm9[0]
                        rsi_10 += 1
                        r14_16 += 1
                        zmm3[0] = zmm3[0] * zmm10[0]
                        zmm8[0] = zmm8[0] * zmm6[0]
                        zmm1.d = zmm8.d f* zmm9[0]
                        zmm7[0] = zmm7[0] * zmm10[0]
                        zmm3[0] = zmm3[0] - zmm8[0]
                        zmm7[0] = zmm7[0] * zmm6[0]
                        zmm1.d = zmm1.d f- zmm7[0]
                        zmm7[0] = zmm7[0] - zmm3[0]
                        *(rdi_23 + 0x18) = (_mm_unpacklo_ps(zmm3, zmm1.q)).q
                        rdi_23[8] = zmm7[0]
                    while (r14_16 s< r15_7)
                    
                    r12_3 = var_210
                
                j_2 = sx.q(j_1)
                r12_3 += 1
                r14_15 = var_1b8
                r13_7 += 1
                r9_17 = var_1c0_2
                var_210 = r12_3
            while (r12_3 s< j_2)
        
        void* rsi_12 = arg1
        int32_t i_6 = 0
        
        if (*(rsi_12 + 0x5d0) s> 0)
            do
                var_158[0] = sub_1409cc090
                var_1f0.q = &var_170
                int64_t (* var_150_1)(void* arg1, int32_t* arg2, int32_t arg3, int32_t arg4) =
                    sub_1409cc190
                int64_t** var_1e8_2 = &var_1b8
                var_1b8 = arg1 + 0x5b8
                int32_t i_9 = i_6
                var_170 = sub_1409cc0f0
                var_168.q = sub_1405f78b0
                var_160.q = sub_1409cc110
                int64_t (* var_148_1)(void* arg1, int128_t* arg2, int64_t arg3 @ zmm2, 
                    int32_t arg4, int32_t arg5) = sub_1409cc200
                int64_t var_140_1 = 0
                int32_t var_1e0_3 = 1
                sub_1429c8af0(&var_1f0)
                i_6 += 1
            while (i_6 s< *(rsi_12 + 0x5d0))
        
        int64_t rdx_72 = rax_1
        int64_t r8_45 = rcx_5
        int32_t i_16 = *(*(r8_45 + (rdx_72 << 3)) + 4)
        
        if (i_16 s> 0)
            int32_t* rbx_19 = nullptr
            uint64_t i_13 = zx.q(i_16)
            uint64_t i_7
            
            do
                int64_t rsi_11 = sx.q(*(rsi_12 + 0x5e0))
                int64_t r14_18 = *(*(r8_45 + (rdx_72 << 3)) + 0x78)
                int32_t rax_141 = (rsi_11 + 1).d
                *(rsi_12 + 0x5e0) = rax_141
                
                if (rax_141 s> *(rsi_12 + 0x5e4))
                    sub_14083a7e0(rsi_12 + 0x5d8)
                    r8_45 = rcx_5
                
                int64_t* rcx_128 = *(rsi_12 + 0x5d8) + rsi_11 * 0xc
                
                if (rcx_128 == 0)
                    rcx_128 = nullptr
                else
                    *rcx_128 = 0
                    rcx_128[1].d = 0
                    rcx_128[1].d = data_143a1c6b0
                
                rdx_72 = rax_1
                *rcx_128 = *(rbx_19 + r14_18)
                int32_t rax_144 = *(rbx_19 + r14_18 + 4)
                rbx_19 = &rbx_19[2]
                *(rcx_128 + 4) = rax_144
                rcx_128[1].d = data_143a1c6bc
                i_7 = i_13
                i_13 -= 1
            while (i_7 != 1)
            rsi_12 = arg1
        
        uint64_t r13_8 = rax_4
        
        if (data_143cee1c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r13_8 << 3))))
            _Init_thread_header(&data_143cee1c0)
            
            if (data_143cee1c0 == 0xffffffff)
                __builtin_memset(&data_143cee170, 0, 0x2c)
                data_143cee19c = 0x80
                data_143cee1a0 = 0xffffffff
                data_143cee1a4 = 0
                data_143cee1b0 = 0
                data_143cee1b8 = 0
                atexit(sub_142cb7ea0)
                _Init_thread_footer(&data_143cee1c0)
        
        if (data_143cee178 != data_143cee1a4)
            int32_t rax_149 = data_143cee17c
            data_143cee178 = 0
            
            if (rax_149 s< 0 && rax_149 != 0)
                sub_140638cc0(&data_143cee170, 0)
            
            data_143cee1a0 = 0xffffffff
            data_143cee1a4 = 0
            sub_140774790(&data_143cee180)
            int64_t rcx_130 = sx.q(data_143cee1b8)
            
            if (rcx_130 s> 0)
                void* rdx_75 = data_143cee1b0
                void* rdi_25 = &data_143cee1a8
                
                if (rdx_75 != 0)
                    rdi_25 = rdx_75
                
                __builtin_memset(rdi_25, 0xffffffff, rcx_130 << 2)
        
        int64_t* r12_5 = *(*(rsi_12 + 0x528) + 0x58)
        var_1b8 = r12_5
        result = sx.q(**r12_5)
        void* result_2 = result
        
        if (result s> 0)
            int64_t rcx_131 = 0
            int64_t var_1f8_2 = 0
            
            do
                void* rdx_76 = *r12_5
                int64_t rax_152 = *(rdx_76 + 0x18)
                uint64_t i_18 = zx.q(*(rax_152 + (rcx_131 << 3)))
                result = *(rdx_76 + 0x48) + (sx.q(*(rax_152 + (rcx_131 << 3) + 4)) << 2)
                void* result_1 = result
                
                if (i_18.d s> 0)
                    int32_t* r14_19 = nullptr
                    var_210 = nullptr
                    uint64_t (* i_14)(void* arg1) = zx.q(i_18.d)
                    i_15 = i_18
                    uint64_t (* i_8)(void* arg1)
                    
                    do
                        int32_t rbx_20 = *(result + r14_19)
                        arg_18.d = rbx_20
                        j_1.b = 0
                        sub_14077a5e0(&data_143cee170, &var_1d0, &arg_18, &j_1)
                        
                        if (j_1.b == 0)
                            int64_t rdx_78 = sx.q(rbx_20 * 2)
                            int64_t rax_155 = *(*r12_5 + 0x78)
                            sub_141cdf680(*(rsi_12 + 0x28), &arg_20, *(rax_155 + (rdx_78 << 2)), 
                                *(rax_155 + (rdx_78 << 2) + 4))
                            
                            if (data_143cee1e8 s>
                                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r13_8 << 3))))
                                _Init_thread_header(&data_143cee1e8)
                                
                                if (data_143cee1e8 == 0xffffffff)
                                    __builtin_memset(&data_143cee1c8, 0, 0x20)
                                    atexit(sub_142cb9bb0)
                                    _Init_thread_footer(&data_143cee1e8)
                            
                            int32_t rcx_137 = data_143cee1d4
                            data_143cee1d0 = 0
                            
                            if (rcx_137 s< 0 && rcx_137 != 0)
                                sub_1405dadb0(&data_143cee1c8, 0)
                                rcx_137 = data_143cee1d4
                            
                            int32_t rax_157 = data_143cee1e4
                            data_143cee1e0 = 0
                            
                            if (rax_157 s< 0 && rax_157 != 0)
                                sub_1405dadb0(&data_143cee1d8, 0)
                                rcx_137 = data_143cee1d4
                            
                            int64_t rdi_26 = sx.q(data_143cee1d0)
                            int32_t rax_158 = (rdi_26 + 1).d
                            data_143cee1d0 = rax_158
                            
                            if (rax_158 s> rcx_137)
                                sub_1405a4cf0(&data_143cee1c8)
                            
                            int64_t rax_159 = data_143cee1c8
                            int32_t j = 0
                            j_1 = 0
                            *(rax_159 + (rdi_26 << 2)) = rbx_20
                            int32_t rbx_21 = 1
                            arg_18.d = 1
                            
                            if (*(rsi_12 + 0x520) s> 0)
                                int64_t r8_48 = 0
                                int64_t var_200_2 = 0
                                
                                do
                                    int64_t r9_20 = *(*(rsi_12 + 0x528) + 0x58)
                                    int64_t var_1c8_1 = r9_20
                                    int32_t rax_161 = (&data_143cee1d4)[zx.q(rbx_21) * 4]
                                    (&data_143cee1d0)[zx.q(rbx_21) * 4] = 0
                                    
                                    if (rax_161 s< 0 && rax_161 != 0)
                                        sub_1405dadb0(&(&data_143cee1c8)[zx.q(rbx_21) * 2], 0)
                                        r8_48 = var_200_2
                                        r9_20 = var_1c8_1
                                        j = j_1
                                    
                                    int32_t k = 0
                                    
                                    if ((&data_143cee1d0)[(zx.q(rbx_21) ^ 1) * 4] s> 0)
                                        int64_t r13_9 = 0
                                        
                                        do
                                            int64_t rsi_13 = 0
                                            int32_t* r14_20 = *(*(r8_48 + r9_20 + 0x10) + 0xc0) + (
                                                sx.q(
                                                *((&data_143cee1c8)[(zx.q(rbx_21) ^ 1) * 2] + r13_9)
                                                * 2) << 2)
                                            
                                            do
                                                int64_t rbx_22 =
                                                    sx.q((&data_143cee1d0)[zx.q(rbx_21) * 4])
                                                int32_t rax_164 = (rbx_22 + 1).d
                                                (&data_143cee1d0)[zx.q(rbx_21) * 4] = rax_164
                                                
                                                if (rax_164 s> (&data_143cee1d4)[zx.q(rbx_21) * 4])
                                                    sub_1405a4cf0(
                                                        &(&data_143cee1c8)[zx.q(rbx_21) * 2])
                                                
                                                int32_t rax_165 = *(r14_20 + rsi_13)
                                                rsi_13 += 4
                                                *((&data_143cee1c8)[zx.q(rbx_21) * 2]
                                                    + (rbx_22 << 2)) = rax_165
                                            while (rsi_13 s< 8)
                                            
                                            r8_48 = var_200_2
                                            k += 1
                                            r9_20 = var_1c8_1
                                            r13_9 += 4
                                        while (k s< (&data_143cee1d0)[(zx.q(rbx_21) ^ 1) * 4])
                                        
                                        rsi_12 = arg1
                                        j = j_1
                                        rbx_21 = arg_18.d
                                    
                                    rbx_21 ^= 1
                                    j += 1
                                    r8_48 += 0x18
                                    arg_18.d = rbx_21
                                    j_1 = j
                                    var_200_2 = r8_48
                                while (j s< *(rsi_12 + 0x520))
                                
                                r14_19 = var_210
                                i_14 = i_15
                                r12_5 = var_1b8
                                r13_8 = rax_4
                            
                            int64_t rax_166 = 0
                            int64_t r8_49 = 0
                            
                            if (rbx_21 == 0)
                                rax_166 = 0x10
                            
                            int32_t* rdi_30 = *(rax_166 + &data_143cee1c8)
                            uint64_t r9_22 = sx.q(*(rax_166 + &data_143cee1d0)) << 2 u>> 2
                            
                            if (rdi_30 u> &rdi_30[sx.q(*(rax_166 + &data_143cee1d0))])
                                r9_22 = 0
                            
                            if (r9_22 != 0)
                                do
                                    int64_t rax_169 = sx.q(*rdi_30)
                                    rdi_30 = &rdi_30[1]
                                    r8_49 += 1
                                    *(*(rsi_12 + 0x5d8) + rax_169 * 0xc + 8) = arg_20
                                while (r8_49 != r9_22)
                        
                        result = result_1
                        r14_19 = &r14_19[1]
                        i_8 = i_14
                        i_14 -= 1
                        var_210 = r14_19
                        i_15 = i_14
                    while (i_8 != 1)
                
                rcx_131 = var_1f8_2 + 1
                var_1f8_2 = rcx_131
            while (rcx_131 s< result_2)

return result
