// 函数: sub_1414ff710
// 地址: 0x1414ff710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
void* rdi = arg1
uint64_t r9 = zx.q(data_14401b1a0)
void* const r15 = arg3
void* const var_300 = arg3
uint64_t result = zx.q(*(0x14 + *(ThreadLocalStoragePointer + (r9 << 3))))

if (data_143ef3280 s> result.d)
    result = _Init_thread_header(&data_143ef3280)
    
    if (data_143ef3280 == 0xffffffff)
        int64_t i_12 = 0x80
        void* rax_162 = &data_143ef2a8c
        int64_t i
        
        do
            *(rax_162 - 0xc) = 0
            *(rax_162 - 4) = 0
            __builtin_memset(rax_162 + 4, 0, 0x3f0)
            rax_162 += 0x400
            i = i_12
            i_12 -= 0x40
        while (i != 0x40)
        atexit(sub_142ce8e10)
        result = _Init_thread_footer(&data_143ef3280)

int32_t i_1 = 0
int32_t i_8 = 0
char var_348
int64_t var_330
uint32_t var_2f8

if (*(rdi + 0x1a) u> 0)
    do
        uint64_t i_14 = zx.q(i_1)
        void* r15_2 = rdi + 0x98 + i_14 * 0xa8
        
        if (*(rdi + 0x69e) != 0 || *(data_143eef708 + 4) != 0)
            if (*(r15_2 + 0x80) != 0)
                sub_141500d90(r15_2)
            
            int32_t rax_10 = *(r15_2 + 0x68)
            int64_t r12 = sx.q(rax_10 - 1)
            
            if (rax_10 - 1 s>= 0)
                int64_t r8_2 = i_14 << 4
                var_330 = r8_2
                int64_t temp13_1
                
                do
                    int64_t rdx_1 = *(r15_2 + 0x70)
                    int32_t rcx_2 = *(*(r15_2 + 0x60) + (r12 << 2))
                    void* r14_1 = zx.q((rcx_2 u>> 0x18).b)
                    char var_322_1 = r14_1.b
                    char var_321_1 = r14_1.b
                    uint32_t rax_16 = zx.d(*(rdx_1 + (r12 << 2) + 2))
                    int32_t temp2_1 =
                        *(*(*(arg2 + 0x88) + (zx.q(*(rdx_1 + (r12 << 2))) << 3)) + 0x1b8)
                    uint32_t temp1_1 = modu.dp.d(0:rax_16, temp2_1)
                    void* rdi_4 = ((r14_1 + r8_2) << 4) + &data_143ef2a88
                    uint8_t var_347_1 = (divu.dp.d(0:rax_16, temp2_1)).b
                    var_348 = temp1_1.b
                    int16_t var_324_1 = var_348.w
                    var_2f8 = temp1_1
                    void* temp12_1
                    
                    do
                        int64_t rsi_2 = sx.q(*rdi_4)
                        int32_t rax_20 = (rsi_2 + 1).d
                        *rdi_4 = rax_20
                        
                        if (rax_20 s> *(rdi_4 + 4))
                            sub_1405a4d70(rdi_4 - 8)
                        
                        int64_t rax_21 = *(rdi_4 - 8)
                        rdi_4 -= 0x10
                        temp12_1 = r14_1
                        r14_1 -= 1
                        *(rax_21 + (rsi_2 << 3)) = (rcx_2 & 0xffffff).q
                    while (temp12_1 - 1 s>= 0)
                    temp13_1 = r12
                    r12 -= 1
                    r8_2 = var_330
                while (temp13_1 - 1 s>= 0)
                rdi = arg1
            
            sub_14150e9d0(r15_2)
            i_1 = i_8
        else
            int64_t rax_5 = (i_14 + 0x60) * 2
            int64_t* rbx_1 = *(rdi + (rax_5 << 3))
            void* rsi_1 = &rbx_1[sx.q(*(rdi + (rax_5 << 3) + 8))]
            
            if (rbx_1 != rsi_1)
                do
                    int64_t r8 = *rbx_1
                    
                    if (*(data_143eef7b8 + 4) == 0)
                        sub_141506a80(r15_2, arg2, r8, &data_143ef2a80 + (zx.q(i_14.d) << 8))
                    else
                        sub_141506420(r15_2, arg2, r8, &data_143ef2a80 + (zx.q(i_14.d) << 8))
                    
                    rbx_1 = &rbx_1[1]
                while (rbx_1 != rsi_1)
                
                rdi = arg1
        
        void* rcx_10 = ((i_14 + 0x60) << 4) + rdi
        int32_t rax_22 = *(rcx_10 + 0xc)
        *(rcx_10 + 8) = 0
        
        if (rax_22 s< 0 && rax_22 != 0)
            sub_1405c5570(rcx_10, 0)
        
        result = zx.q(*(rdi + 0x1a))
        i_1 += 1
        i_8 = i_1
    while (i_1 u< result.d)
    
    r15 = var_300

uint32_t r9_3 = zx.d(*(rdi + 0x1a))
uint64_t rbx_3 = 0
*(rdi + 0x69e) = 0
int32_t rdx_4 = 0

if (r9_3 != 0)
    uint64_t i_15 = zx.q(*(rdi + 0x694))
    
    do
        if (i_15.d != 0)
            uint64_t i_10 = i_15
            result = (zx.q(rdx_4) << 8) + &data_143ef2a88
            uint64_t i_2
            
            do
                rbx_3 = zx.q(rbx_3.d + *result)
                result += 0x10
                i_2 = i_10
                i_10 -= 1
            while (i_2 != 1)
        
        rdx_4 += 1
    while (rdx_4 u< r9_3)
    
    if (rbx_3.d != 0)
        void* r8_3 = *(rdi + 0x680)
        bool cond:3_1 = r8_3 == 0
        uint64_t rax_26
        uint64_t rcx_11
        
        if (r8_3 != 0)
            rcx_11 = zx.q(*(r8_3 + 0x18))
            rax_26 = zx.q(rbx_3.d) << 3
            cond:3_1 = rax_26 == rcx_11
        
        int128_t var_1b8
        int32_t var_1a8
        int32_t var_194
        char var_190
        int128_t zmm1
        int128_t zmm6
        
        if (r8_3 == 0 || rax_26 u> rcx_11)
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rbx_3.d)
            int32_t rcx_12
            
            rcx_12 = cond:3_1 ? 0x20 : 0x1f - temp0_2
            
            int32_t rcx_14 = rcx_12 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse((rbx_3 - 1).d)
            char rdx_5
            
            if (rcx_14 == 0)
                rdx_5 = 0x20
            else
                rdx_5 = 0x1f - temp0_3
            
            int32_t r9_5 = 8 << ((not.d(rcx_14)).b & (0x20 - rdx_5))
            
            if (r8_3 != 0)
                int32_t rax_31 = *(r8_3 + 0x18) * 2
                
                if (r9_5 u>= rax_31)
                    rax_31 = r9_5
                
                r9_5 = rax_31
            
            zmm1 = data_143dbb1e0
            int32_t var_350
            var_350.q = &var_1b8
            var_1a8 = 1
            int64_t* rcx_18 = data_143f0f180
            var_194 = (1 << (data_1439c7a34).b) - 1
            var_1b8 = zx.o(0)
            int128_t var_1a4 = zmm1
            var_190 = 0
            int64_t var_188_1 = 0
            int32_t var_180_1 = 0
            (*(*rcx_18 + 0x498))(rcx_18, &var_330, &data_143f02b98, r9_5, 0x204, var_350)
            sub_1405d1600(rdi + 0x680, &var_330)
            sub_1405d1550(&var_330)
            int64_t* rcx_21 = data_143f0f180
            var_350.b = 0x22
            (*(*rcx_21 + 0x4b8))(rcx_21, &var_330, &data_143f02b98, *(rdi + 0x680), 8, var_350)
            sub_1405d1600(rdi + 0x688, &var_330)
            zmm6 = sub_1405ec8a0(&var_330)
            r8_3 = *(rdi + 0x680)
        
        int64_t* rcx_24 = data_143f0f180
        int32_t i_3 = 0
        int64_t rsi_3 = (*(*rcx_24 + 0x130))(rcx_24, &data_143f02b98, r8_3, 0, (rbx_3 << 3).d, 1)
        
        if (*(rdi + 0x1a) u> 0)
            void* rcx_25 = arg1
            
            do
                int32_t j = 0
                
                if (*(rcx_25 + 0x694) u> 0)
                    do
                        uint64_t rdx_12 = (zx.q(j) + (zx.q(i_3) << 4)) * 2
                        int32_t rax_38 = *((rdx_12 << 3) + &data_143ef2a88)
                        
                        if (rax_38 != 0)
                            uint64_t rbx_5 = zx.q(rax_38) << 3
                            memcpy(rsi_3, *((rdx_12 << 3) + &data_143ef2a80), rbx_5.d)
                            rcx_25 = arg1
                            rsi_3 += rbx_5
                        
                        j += 1
                    while (j u< *(rcx_25 + 0x694))
                
                i_3 += 1
            while (i_3 u< zx.d(*(rcx_25 + 0x1a)))
            
            r15 = var_300
        
        int64_t* rcx_27 = data_143f0f180
        (*(*rcx_27 + 0x138))(rcx_27, &data_143f02b98, *(rdi + 0x680))
        void* rdi_5 = nullptr
        var_2f8.q = 0
        uint64_t rsi_4 = 0
        int32_t var_2ec_1 = 0
        uint32_t rax_43 = (zx.d(*(arg1 + 0x1a)) + 3) u>> 2
        
        if (rax_43 != 0)
            zmm6 = sub_14083a440(&var_2f8, 0)
            rsi_4 = zx.q(rax_43)
            rdi_5 = var_2f8.q
            
            if (rsi_4.d s> 0)
                void* rdx_14 = rdi_5
                void* r8_6 = arg1 + 0x5d8
                uint64_t i_13 = zx.q(rsi_4.d)
                uint64_t i_4
                
                do
                    void* rax_44 = *r8_6
                    rdx_14 += 8
                    r8_6 += 0x10
                    *(rdx_14 - 8) = *(rax_44 + 8)
                    i_4 = i_13
                    i_13 -= 1
                while (i_4 != 1)
        
        uint32_t rdx_15 = (rsi_4 << 3).d
        int64_t r12_1 = sx.q(rdx_15)
        int64_t* rbx_8 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_45 = rbx_8 + r12_1
        
        if (rax_45 u> *(r15 + 0x38))
            zmm6 = sub_140b0e3d0(r15 + 0x30, rdx_15 + 8)
            rbx_8 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
            rax_45 = rbx_8 + r12_1
        
        *(r15 + 0x30) = rax_45
        int64_t i_11 = sx.q(rsi_4.d)
        
        if (rsi_4.d s> 0)
            int64_t* rcx_31 = rbx_8
            int64_t i_5
            
            do
                *rcx_31 = *(rdi_5 - rbx_8 + rcx_31)
                rcx_31 = &rcx_31[1]
                i_5 = i_11
                i_11 -= 1
            while (i_5 != 1)
        
        void*** rcx_34 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_47 = &rcx_34[5]
        
        if (rax_47 u> *(r15 + 0x38))
            zmm6 = sub_140b0e3d0(r15 + 0x30, 0x30)
            rcx_34 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
            rax_47 = &rcx_34[5]
        
        *(r15 + 0x30) = rax_47
        void**** rax_48 = *(r15 + 8)
        *(r15 + 0x14) += 1
        *rax_48 = rcx_34
        *(r15 + 8) = &rcx_34[1]
        rcx_34[1] = 0
        *rcx_34 = &data_142d549c8
        rcx_34[2].d = rsi_4.d
        rcx_34[3] = rbx_8
        rcx_34[4].d = 1
        char rax_50 = *(arg1 + 0xc)
        uint32_t rax_51
        
        if (rax_50 != 4)
            rax_51 = zx.d(rax_50)
        else
            rax_51 = data_1439c7a08
        
        int64_t* rax_53 = std::_Get_future_error_what((*U"1111")[sx.q(rax_51)])
        var_2f8.q = rax_53
        int64_t var_2d8
        int64_t* rdx_17 = &var_2d8
        int64_t* rdi_7 = rax_53
        void* var_2e0_2
        void* var_2d0
        
        if (*(arg1 + 0x19) != 0)
            sub_1419a2ec0(rax_53, rdx_17, &data_143ef1f80, 0)
            var_330 = var_2d8
            var_2e0_2 = var_2d0
        else
            sub_1419a2ec0(rax_53, rdx_17, &data_143ef20e0, 0)
            var_330 = var_2d8
            var_2e0_2 = var_2d0
        uint32_t rax_127 = zx.d(*(arg1 + 0x1a))
        int32_t var_318 = 0
        int32_t rdx_18 = 0
        int32_t var_2e4_1 = 0
        
        if (rax_127.b != 0)
            int128_t var_48_1 = zmm6
            void* rbx_11 = arg1 + 0x690
            
            do
                uint64_t rcx_44 = zx.q(rdx_18) u>> 2
                int32_t var_328
                var_328.q = 0
                int64_t* r9_8 = *(arg1 + rcx_44 * 0x10 + 0x5d8) + 8
                int64_t* var_340_1 = r9_8
                int32_t rax_58 = rdx_18 & 3
                
                if (rax_58 == 0)
                    var_328.q = data_1439b7350
                else if (rax_58 == 1)
                    var_328.q = data_1439b7368
                else if (rax_58 == 2)
                    var_328.q = data_1439b7380
                else if (rax_58 == 3)
                    var_328.q = data_1439b7398
                
                void* var_310_1 = nullptr
                void* var_308_1 = nullptr
                
                switch (zx.d(*(rcx_44 + arg1 + 0x5f8)) - 0x1c)
                    case 0
                        void* var_298
                        sub_1419a2ec0(rdi_7, &var_298, &data_143ef2660, 0)
                        var_310_1 = var_298
                        r9_8 = var_340_1
                        void* var_290
                        var_308_1 = var_290
                    case 4
                        void* var_2c8
                        sub_1419a2ec0(rdi_7, &var_2c8, &data_143ef2240, 0)
                        var_310_1 = var_2c8
                        r9_8 = var_340_1
                        void* var_2c0
                        var_308_1 = var_2c0
                    case 6
                        void* var_2a8
                        sub_1419a2ec0(rdi_7, &var_2a8, &data_143ef2500, 0)
                        var_310_1 = var_2a8
                        r9_8 = var_340_1
                        void* var_2a0
                        var_308_1 = var_2a0
                    case 0x14
                        void* var_278
                        sub_1419a2ec0(rdi_7, &var_278, &data_143ef2920, 0)
                        var_310_1 = var_278
                        r9_8 = var_340_1
                        void* var_270
                        var_308_1 = var_270
                    case 0x15
                        void* var_2b8
                        sub_1419a2ec0(rdi_7, &var_2b8, &data_143ef23a0, 0)
                        var_310_1 = var_2b8
                        r9_8 = var_340_1
                        void* var_2b0
                        var_308_1 = var_2b0
                    case 0x28
                        void* var_288
                        sub_1419a2ec0(rdi_7, &var_288, &data_143ef27c0, 0)
                        var_310_1 = var_288
                        r9_8 = var_340_1
                        void* var_280
                        var_308_1 = var_280
                
                int32_t i_6 = 0
                uint32_t rdi_8 = *rbx_11
                int32_t i_9 = 0
                uint32_t var_338 = rdi_8
                
                if (*(arg1 + 0x694) u> 0)
                    uint64_t r8_8 = zx.q(rdx_18) << 4
                    uint64_t var_320_2 = r8_8
                    
                    do
                        uint64_t r12_4 = (zx.q(i_6) + r8_8) << 4
                        int32_t rax_73 = *(r12_4 + &data_143ef2a88)
                        var_348.d = rax_73
                        
                        if (rax_73 != 0)
                            void* rax_74 = *r9_8
                            zmm1 = data_142d3f5a0
                            char var_164_1 = i_6.b
                            int32_t var_a0_1 = 0
                            int32_t var_9c
                            __builtin_memset(&var_9c, 0xff, 0x14)
                            int128_t var_88_1 = zmm1
                            int64_t var_78
                            __builtin_memset(&var_78, 0, 0x1a)
                            void* var_178 = rax_74
                            int64_t var_170_1 = 0
                            int32_t var_168_1 = 0xffffffff
                            char var_163_1 = 5
                            int64_t var_b8
                            __builtin_memset(&var_b8, 0, 0x11)
                            int32_t var_a4_1 = 0
                            int16_t var_60_1
                            var_60_1:1.b = *(rax_74 + 0x38) u> 1
                            void var_160
                            memset(&var_160, 0, 0xa8)
                            int64_t rbx_14 = (*(r15 + 0x30) + 1) & 0xfffffffffffffffe
                            int64_t rax_75 = rbx_14 + 0x20
                            
                            if (rax_75 u> *(r15 + 0x38))
                                sub_140b0e3d0(r15 + 0x30, 0x22)
                                rbx_14 = (*(r15 + 0x30) + 1) & 0xfffffffffffffffe
                                rax_75 = rbx_14 + 0x20
                            
                            *(r15 + 0x30) = rax_75
                            wchar16 const* const rcx_55 = u"PageTableUpdate"
                            wchar16 const j_1
                            
                            do
                                j_1 = *rcx_55
                                *(rcx_55 + rbx_14 - u"PageTableUpdate") = j_1
                                rcx_55 = &rcx_55[1]
                            while (j_1 != 0)
                            void*** rcx_58 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_76 = &rcx_58[0x27]
                            
                            if (rax_76 u> *(r15 + 0x38))
                                sub_140b0e3d0(r15 + 0x30, 0x140)
                                rcx_58 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_76 = &rcx_58[0x27]
                            
                            *(r15 + 0x30) = rax_76
                            void**** rax_77 = *(r15 + 8)
                            *(r15 + 0x14) += 1
                            *rax_77 = rcx_58
                            *(r15 + 8) = &rcx_58[1]
                            sub_1405d11b0(rcx_58, &var_178, rbx_14)
                            *(r15 + 0x1c4) = 1
                            sub_1405d19b0(r15, &var_178)
                            int64_t var_68
                            *(r15 + 0x178) = var_68:7.b
                            *(r15 + 0x179) = 0
                            *(r15 + 0x1c4) = 1
                            void*** rcx_65 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                            zmm6.d = float.s(zx.q(rdi_8))
                            void* rax_81 = &rcx_65[5]
                            
                            if (rax_81 u> *(r15 + 0x38))
                                zmm6 = sub_140b0e3d0(r15 + 0x30, 0x30)
                                rcx_65 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_81 = &rcx_65[5]
                            
                            *(r15 + 0x30) = rax_81
                            int64_t* rax_82 = *(r15 + 8)
                            *(r15 + 0x14) += 1
                            int32_t rdi_9 = 0
                            *rax_82 = rcx_65
                            *(r15 + 8) = &rcx_65[1]
                            rcx_65[1] = 0
                            *rcx_65 = &data_142d54998
                            *(rcx_65 + 0x1c) = zmm6.d
                            rcx_65[4].d = zmm6.d
                            rcx_65[2] = 0
                            rcx_65[3].d = 0
                            *(rcx_65 + 0x24) = 0x3f800000
                            uint64_t rax_84 = zx.q(*(r15 + 0xa0))
                            int64_t var_208
                            __builtin_memset(&var_208, 0, 0x2c)
                            int64_t var_1d8_1 = 0
                            int32_t var_1d0_1 = 0
                            int16_t var_1cc_1 = 0
                            char var_1ca_1 = 0
                            int16_t var_1c8_1 = 0
                            int32_t var_20c_1 = rax_84.d
                            int128_t var_268
                            __builtin_memset(&var_268, 0, 0x30)
                            int128_t var_220_1 = zx.o(0)
                            
                            if (rax_84.d != 0)
                                do
                                    uint64_t rbx_17 = zx.q(rdi_9)
                                    uint64_t rsi_5 = rbx_17 * 3
                                    int64_t* rcx_69 = *(r15 + (rsi_5 << 3) + 0xa8)
                                    
                                    if (rcx_69 == 0)
                                        *(&var_208 + rbx_17) = 0
                                        rax_84.b = 0
                                    else
                                        *(&var_208 + rbx_17) = *(rcx_69 + 0x3c)
                                        int64_t var_200
                                        *(&var_200 + (rbx_17 << 2)) = rcx_69[8].d
                                        int64_t rax_88 = (*(*rcx_69 + 0x10))()
                                        
                                        if (rax_88 != 0)
                                            var_1cc_1:1.b = 1
                                        
                                        if (rax_88 == 0 || *(rax_88 + 0x68) u<= 1)
                                            var_1cc_1:1.b = 0
                                        
                                        rax_84 = zx.q(*(&var_208 + rbx_17))
                                    
                                    if (rax_84.b != 0)
                                        var_1d0_1.w = *(*(r15 + (rsi_5 << 3) + 0xa8) + 0x38)
                                    
                                    rdi_9 += 1
                                while (rdi_9 u< var_20c_1)
                            
                            int64_t* rcx_71 = *(r15 + 0x168)
                            int32_t var_1e0_1
                            
                            if (rcx_71 == 0)
                                var_1e0_1 = 0
                            else
                                var_1e0_1 = *(rcx_71 + 0x3c)
                                var_1e0_1 = rcx_71[8].d
                                void* rax_92 = (*(*rcx_71 + 0x10))()
                                
                                if (rax_92 == 0 || *(rax_92 + 0x68) u<= 1)
                                    var_1cc_1:1.b = 0
                                else
                                    var_1cc_1:1.b = 1
                            
                            var_1d8_1.b = *(r15 + 0x170)
                            var_1d8_1:1.b = *(r15 + 0x171)
                            var_1d8_1:2.b = *(r15 + 0x172)
                            var_1d8_1:3.b = *(r15 + 0x173)
                            var_1d8_1:4.d = *(r15 + 0x174)
                            
                            if (var_1e0_1 != 0)
                                var_1d0_1.w = *(*(r15 + 0x168) + 0x38)
                            
                            var_1d0_1:2.b = *(r15 + 0x178)
                            var_1d0_1:3.b = *(r15 + 0x179)
                            char var_1ca_2 = *(r15 + 0x17a)
                            int64_t var_238_1 = var_328.q
                            int64_t var_230_1 = data_14395da18
                            int64_t var_228_1 = data_14395d9e8
                            var_268.q = data_1439c9228
                            int64_t rax_106 = 0
                            int32_t var_210_1 = 0
                            int64_t rsi_6 = var_330
                            
                            if (rsi_6 != 0)
                                int64_t rdx_32 = sx.q(*(rsi_6 + 0x10c))
                                int64_t* rbx_18 = *(var_2e0_2 + 0x10)
                                int64_t rax_108 = rbx_18[3]
                                
                                if (*(rax_108 + (rdx_32 << 3)) == 0)
                                    sub_1419ccf30(rbx_18, rdx_32.d)
                                    rax_108 = rbx_18[3]
                                
                                rax_106 = *(rax_108 + (rdx_32 << 3))
                            
                            var_268:8.q = rax_106
                            int64_t rax_109 = 0
                            
                            if (var_310_1 != 0)
                                int64_t rdx_33 = sx.q(*(var_310_1 + 0x10c))
                                int64_t* rbx_19 = *(var_308_1 + 0x10)
                                int64_t rax_111 = rbx_19[3]
                                
                                if (*(rax_111 + (rdx_33 << 3)) == 0)
                                    sub_1419ccf30(rbx_19, rdx_33.d)
                                    rax_111 = rbx_19[3]
                                
                                rax_109 = *(rax_111 + (rdx_33 << 3))
                            
                            int128_t var_248_1
                            var_248_1.q = rax_109
                            sub_1419870b0(r15, &var_268, 2)
                            void* const rbx_20 = nullptr
                            
                            if (rsi_6 != 0)
                                int64_t rdx_35 = sx.q(*(rsi_6 + 0x10c))
                                int64_t* rbx_21 = *(var_2e0_2 + 0x10)
                                int64_t rax_113 = rbx_21[3]
                                
                                if (*(rax_113 + (rdx_35 << 3)) == 0)
                                    sub_1419ccf30(rbx_21, rdx_35.d)
                                    rax_113 = rbx_21[3]
                                
                                rbx_20 = *(rax_113 + (rdx_35 << 3))
                            
                            var_300 = rbx_20
                            sub_1405eb490(r15, &var_300, rsi_6 + 0x118, arg1 + 0x690, 0)
                            sub_1405eb490(r15, &var_300, rsi_6 + 0x11e, &var_318, 0)
                            int64_t r9_12 = sub_1405eb490(r15, &var_300, rsi_6 + 0x124, &var_348, 0)
                            int64_t rcx_81 = var_330
                            int64_t rsi_7 = *(arg1 + 0x688)
                            
                            if (*(rcx_81 + 0x12c) u> 0)
                                uint32_t rdi_13 = zx.d(*(rcx_81 + 0x12a))
                                void*** rcx_84 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_114 = &rcx_84[5]
                                
                                if (rax_114 u> *(r15 + 0x38))
                                    r9_12 = sub_140b0e3d0(r15 + 0x30, 0x30)
                                    rcx_84 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_114 = &rcx_84[5]
                                
                                *(r15 + 0x30) = rax_114
                                void**** rax_115 = *(r15 + 8)
                                *(r15 + 0x14) += 1
                                *rax_115 = rcx_84
                                *(r15 + 8) = &rcx_84[1]
                                rcx_84[1] = 0
                                *rcx_84 = &data_142d5ebf8
                                rcx_84[2] = rbx_20
                                rcx_84[3].d = rdi_13
                                rcx_84[4] = rsi_7
                            
                            void*** rcx_90 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_117 = &rcx_90[5]
                            
                            if (rax_117 u> *(r15 + 0x38))
                                r9_12 = sub_140b0e3d0(r15 + 0x30, 0x30)
                                rcx_90 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_117 = &rcx_90[5]
                            
                            *(r15 + 0x30) = rax_117
                            int64_t* rax_118 = *(r15 + 8)
                            *(r15 + 0x14) += 1
                            *rax_118 = rcx_90
                            *(r15 + 8) = &rcx_90[1]
                            rcx_90[1] = 0
                            *rcx_90 = &data_142d56618
                            rcx_90[2].d = 0
                            rcx_90[3] = 0
                            rcx_90[4].d = 0
                            int64_t rdi_14 = data_1439b7338
                            uint32_t rbx_24 = (var_348.d + 7) u>> 3
                            
                            if (rdi_14 == 0)
                                sub_140af98a0("Unknown", 0xbc8, 
                                    Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9_12)
                                sub_140afbb40()
                            
                            void*** rcx_96 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_120 = &rcx_96[6]
                            
                            if (rax_120 u> *(r15 + 0x38))
                                sub_140b0e3d0(r15 + 0x30, 0x38)
                                rcx_96 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_120 = &rcx_96[6]
                            
                            *(r15 + 0x30) = rax_120
                            void**** rax_121 = *(r15 + 8)
                            *(r15 + 0x14) += 1
                            *rax_121 = rcx_96
                            *(r15 + 8) = &rcx_96[1]
                            rcx_96[1] = 0
                            *rcx_96 = &data_142f11598
                            rcx_96[2] = rdi_14
                            rcx_96[3] = 0
                            rcx_96[4] = 0x20
                            rcx_96[5].d = 0x10
                            *(rcx_96 + 0x2c) = rbx_24
                            void*** rcx_102 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_123 = &rcx_102[2]
                            
                            if (rax_123 u> *(r15 + 0x38))
                                sub_140b0e3d0(r15 + 0x30, 0x18)
                                rcx_102 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_123 = &rcx_102[2]
                            
                            *(r15 + 0x30) = rax_123
                            int64_t* rax_124 = *(r15 + 8)
                            *(r15 + 0x14) += 1
                            *rax_124 = rcx_102
                            *(r15 + 8) = &rcx_102[1]
                            rcx_102[1] = 0
                            *rcx_102 = &data_142d549b8
                            *(r15 + 0x1c4) = 0
                            *(r15 + 0x178) = 0
                            int32_t rax_126 = *(r12_4 + &data_143ef2a8c)
                            *(r12_4 + &data_143ef2a88) = 0
                            
                            if (rax_126 s< 0 && rax_126 != 0)
                                sub_1405c5570(&data_143ef2a80 + r12_4, 0)
                            
                            int64_t var_70
                            sub_1405d1550(&var_70)
                            rax_73 = var_348.d
                            i_6 = i_9
                            r8_8 = var_320_2
                            rdi_8 = var_338
                        
                        var_318 += rax_73
                        i_6 += 1
                        r9_8 = var_340_1
                        rdi_8 u>>= 1
                        var_338 = rdi_8
                        i_9 = i_6
                    while (i_6 u< *(arg1 + 0x694))
                    
                    rbx_11 = arg1 + 0x690
                
                rax_127 = zx.d(*(arg1 + 0x1a))
                rdx_18 = var_2e4_1 + 1
                rdi_7 = var_2f8.q
                var_2e4_1 = rdx_18
            while (rdx_18 u< rax_127)
        
        int32_t i_7 = 0
        result = zx.q(zx.d(rax_127.b) + 3)
        
        if ((result.d & 0xfffffffc) u> 0)
            do
                zmm1 = data_142d3f800
                void*** rbx_27 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                var_1b8 = data_142d57d10
                int128_t zmm0_1 = data_142d57920
                void* rcx_108 = *(arg1 + zx.q(i_7) * 0x10 + 0x5d8)
                void* rax_131 = &rbx_27[0xa]
                var_1a8.o = zmm1
                int64_t r12_5 = *(rcx_108 + 0x10)
                int64_t* rsi_8 = *(rcx_108 + 8)
                
                if (rax_131 u> *(r15 + 0x38))
                    sub_140b0e3d0(r15 + 0x30, 0x58)
                    rbx_27 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_131 = &rbx_27[0xa]
                
                *(r15 + 0x30) = rax_131
                int64_t* rax_132 = *(r15 + 8)
                *(r15 + 0x14) += 1
                *rax_132 = rbx_27
                *(r15 + 8) = &rbx_27[1]
                rbx_27[1] = 0
                *rbx_27 = &data_142d56628
                rbx_27[2].d = var_1b8.d
                *(rbx_27 + 0x14) = var_1b8:4.d
                rbx_27[3].d = var_1b8:8.d
                *(rbx_27 + 0x1c) = var_1b8:0xc.d
                rbx_27[4].d = var_1a8
                *(rbx_27 + 0x24) = zmm0_1.d
                rbx_27[5].d = zmm0_1:4.d
                *(rbx_27 + 0x2c) = zmm0_1:8.d
                rbx_27[6].d = zmm0_1:0xc.d
                *(rbx_27 + 0x34) = var_194
                rbx_27[7].d = var_190.d
                int32_t var_18c
                *(rbx_27 + 0x3c) = var_18c
                rbx_27[8] = rsi_8
                rbx_27[9] = r12_5
                
                if ((*(*rsi_8 + 8))(rsi_8) == 0)
                    int64_t* rcx_111 = rbx_27[8]
                    
                    if ((*(*rcx_111 + 0x18))(rcx_111) == 0)
                        int64_t* rcx_112 = rbx_27[8]
                        
                        if ((*(*rcx_112 + 0x20))(rcx_112) == 0)
                            int64_t* rcx_113 = rbx_27[8]
                            (*(*rcx_113 + 0x10))(rcx_113)
                
                int64_t* rcx_114 = rbx_27[9]
                
                if ((*(*rcx_114 + 8))(rcx_114) == 0)
                    int64_t* rcx_115 = rbx_27[9]
                    
                    if ((*(*rcx_115 + 0x18))(rcx_115) == 0)
                        int64_t* rcx_116 = rbx_27[9]
                        
                        if ((*(*rcx_116 + 0x20))(rcx_116) == 0)
                            int64_t* rcx_117 = rbx_27[9]
                            (*(*rcx_117 + 0x10))(rcx_117)
                
                i_7 += 1
                result = zx.q((zx.d(*(arg1 + 0x1a)) + 3) u>> 2)
            while (i_7 u< result.d)

__security_check_cookie(rax_1 ^ &var_378)
return result
