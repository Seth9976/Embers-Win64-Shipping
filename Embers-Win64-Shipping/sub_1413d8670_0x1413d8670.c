// 函数: sub_1413d8670
// 地址: 0x1413d8670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int64_t rax_2 = *arg4
int64_t* r15 = arg4
int32_t rcx = (*U"1111")[sx.q(arg2)]
int32_t var_2d8 = arg3
int64_t* rax_4 = std::_Get_future_error_what(rcx)
int64_t* r12 = rax_4
int64_t var_2c8
char var_2c0
int32_t rcx_2
uint128_t zmm6

if (r15[0xa].d != 0)
    rcx_2 = var_2d8
else
    zmm6 = sub_141399630(&r15[6], var_2d8)
    rcx_2 = var_2d8
    int32_t rsi_1 = 0
    
    if (rcx_2 s> 0)
        do
            int64_t* rcx_3 = data_143f0f180
            int64_t r9 = r15[1]
            var_2c0 = 0
            char var_2be_1 = 1
            int64_t var_2bc_1 = 0
            int32_t var_2b4_1 = 0
            char var_2bf_1 = rsi_1.b
            (*(*rcx_3 + 0x5d0))(rcx_3, &var_2c8, &data_143f02b98, r9, &var_2c0)
            int64_t r14_1 = sx.q(r15[0xa].d)
            int32_t rax_6 = (r14_1 + 1).d
            r15[0xa].d = rax_6
            
            if (rax_6 s> *(r15 + 0x54))
                sub_1409da440(&r15[6], r14_1.d)
            
            void* rax_7 = r15[9]
            int64_t rcx_5 = r14_1 * 3
            void* rdx_3 = &r15[6]
            
            if (rax_7 != 0)
                rdx_3 = rax_7
            
            rsi_1 += 1
            *(rdx_3 + (rcx_5 << 3)) = var_2c0.o
            *(rdx_3 + (rcx_5 << 3) + 0x10) = var_2c8
            rcx_2 = var_2d8
            var_2c8 = 0
        while (rsi_1 s< rcx_2)

int32_t rdx_4 = 1
int64_t var_208 = data_14395da18
int64_t var_200 = data_14395d9e8
int64_t var_210 = data_14395da00
int64_t var_1e4
__builtin_memset(&var_1e4, 0, 0x30)
int64_t var_1b0 = 0
int32_t var_1a8 = 0
int16_t var_1a4 = 0
char var_1a2 = 0
int16_t var_1a0 = 0
int32_t var_2d0 = 1
int128_t var_240
__builtin_memset(&var_240, 0, 0x30)
int128_t var_1f8 = zx.o(0)

if (rcx_2 s> 1)
    uint128_t var_58_1 = zmm6
    void* r8 = &r15[6]
    char rax_12 = 1
    
    do
        int32_t i_2 = 0
        int32_t rax_13 = 1 << (rcx_2.b - rax_12 - 1)
        int32_t i = 0
        zmm6 = _mm_cvtepi32_ps(zx.o(rax_13))
        
        do
            void* rax_14 = *r15
            int128_t zmm1 = data_142d3f5a0
            int32_t i_3 = i
            char var_184_1 = rdx_4.b
            int32_t var_c0_1 = 0
            int32_t var_bc
            __builtin_memset(&var_bc, 0xff, 0x14)
            int128_t var_a8_1 = zmm1
            int64_t var_98
            __builtin_memset(&var_98, 0, 0x1a)
            void* var_198 = rax_14
            int64_t var_190_1 = 0
            char var_183_1 = 1
            int64_t var_d8
            __builtin_memset(&var_d8, 0, 0x11)
            int32_t var_c4_1 = 0
            int16_t var_80_1
            var_80_1:1.b = *(rax_14 + 0x38) u> 1
            void var_180
            memset(&var_180, 0, 0xa8)
            int64_t var_88_1
            var_88_1:5.b = 1
            int64_t rdi_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_15 = rdi_3 + 0x1e
            
            if (rax_15 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x20)
                rdi_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                rax_15 = rdi_3 + 0x1e
            
            *(arg1 + 0x30) = rax_15
            wchar16 const* const rcx_10 = u"CreateCubeMips"
            wchar16 const j
            
            do
                j = *rcx_10
                *(rdi_3 - u"CreateCubeMips" + rcx_10) = j
                rcx_10 = &rcx_10[1]
            while (j != 0)
            void*** rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_16 = &rcx_13[0x27]
            
            if (rax_16 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x140)
                rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_16 = &rcx_13[0x27]
            
            *(arg1 + 0x30) = rax_16
            void**** rax_17 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_17 = rcx_13
            *(arg1 + 8) = &rcx_13[1]
            sub_1405d11b0(rcx_13, &var_198, rdi_3)
            *(arg1 + 0x1c4) = 1
            sub_1405d19b0(arg1, &var_198)
            int32_t j_1 = 0
            *(arg1 + 0x178) = var_88_1:7.b
            uint64_t rax_20 = zx.q(*(arg1 + 0xa0))
            *(arg1 + 0x179) = 0
            *(arg1 + 0x1c4) = 1
            var_1e4.d = rax_20.d
            
            if (rax_20.d != 0)
                do
                    uint64_t j_2 = zx.q(j_1)
                    uint64_t r15_1 = j_2 * 3
                    int64_t* rcx_18 = *(arg1 + (r15_1 << 3) + 0xa8)
                    
                    if (rcx_18 == 0)
                        *(&var_1e4:4 + j_2) = 0
                        rax_20.b = 0
                    else
                        *(&var_1e4:4 + j_2) = *(rcx_18 + 0x3c)
                        int64_t var_1d8
                        *(&var_1d8 + (j_2 << 2)) = rcx_18[8].d
                        int64_t rax_24 = (*(*rcx_18 + 0x10))()
                        
                        if (rax_24 != 0)
                            var_1a4:1.b = 1
                        
                        if (rax_24 == 0 || *(rax_24 + 0x68) u<= 1)
                            var_1a4:1.b = 0
                        
                        rax_20 = zx.q(*(&var_1e4:4 + j_2))
                    
                    if (rax_20.b != 0)
                        var_1a8.w = *(*(arg1 + (r15_1 << 3) + 0xa8) + 0x38)
                    
                    j_1 += 1
                while (j_1 u< var_1e4.d)
            
            int64_t* rcx_20 = *(arg1 + 0x168)
            int32_t var_1b8_1
            
            if (rcx_20 == 0)
                var_1b8_1 = 0
            else
                var_1b8_1 = *(rcx_20 + 0x3c)
                var_1b8_1 = rcx_20[8].d
                void* rax_28 = (*(*rcx_20 + 0x10))()
                
                if (rax_28 == 0 || *(rax_28 + 0x68) u<= 1)
                    var_1a4:1.b = 0
                else
                    var_1a4:1.b = 1
            
            var_1b0.b = *(arg1 + 0x170)
            var_1b0:1.b = *(arg1 + 0x171)
            var_1b0:2.b = *(arg1 + 0x172)
            var_1b0:3.b = *(arg1 + 0x173)
            var_1b0:4.d = *(arg1 + 0x174)
            
            if (var_1b8_1 != 0)
                var_1a8.w = *(*(arg1 + 0x168) + 0x38)
            
            var_1a8:2.b = *(arg1 + 0x178)
            void*** rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            var_1a8:3.b = *(arg1 + 0x179)
            char var_1a2_1 = *(arg1 + 0x17a)
            void* rax_38 = &rcx_24[5]
            
            if (rax_38 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_38 = &rcx_24[5]
            
            *(arg1 + 0x30) = rax_38
            void**** rax_39 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_39 = rcx_24
            *(arg1 + 8) = &rcx_24[1]
            rcx_24[1] = 0
            *rcx_24 = &data_142d54998
            *(rcx_24 + 0x1c) = zmm6.d
            rcx_24[4].d = zmm6.d
            rcx_24[2] = 0
            rcx_24[3].d = 0
            *(rcx_24 + 0x24) = 0x3f800000
            void* var_270
            sub_1419a2ec0(r12, &var_270, &data_143f55f90, 0)
            void* rsi_2 = var_270
            void* var_268
            var_2c0.q = var_268
            void* var_260
            sub_1419a2ec0(r12, &var_260, &data_143ec9810, 0)
            void* rdi_6 = var_260
            var_240.q = data_1439c9210
            int64_t rax_42 = 0
            
            if (rsi_2 != 0)
                int64_t rdx_11 = sx.q(*(rsi_2 + 0x10c))
                int64_t* rsi_3 = *(var_268 + 0x10)
                int64_t rax_43 = rsi_3[3]
                
                if (*(rax_43 + (rdx_11 << 3)) == 0)
                    sub_1419ccf30(rsi_3, rdx_11.d)
                    rax_43 = rsi_3[3]
                
                rax_42 = *(rax_43 + (rdx_11 << 3))
            
            var_240:8.q = rax_42
            int64_t rax_44 = 0
            void* var_258
            
            if (rdi_6 != 0)
                int64_t rdx_12 = sx.q(*(rdi_6 + 0x10c))
                int64_t* rsi_4 = *(var_258 + 0x10)
                int64_t rax_45 = rsi_4[3]
                
                if (*(rax_45 + (rdx_12 << 3)) == 0)
                    sub_1419ccf30(rsi_4, rdx_12.d)
                    rax_45 = rsi_4[3]
                
                rax_44 = *(rax_45 + (rdx_12 << 3))
            
            int128_t var_220_1
            var_220_1.q = rax_44
            int32_t var_1e8_1 = 0
            sub_1419870b0(arg1, &var_240, 2)
            int64_t r15_5 = 0
            
            if (rdi_6 != 0)
                int64_t rdx_14 = sx.q(*(rdi_6 + 0x10c))
                int64_t* rsi_5 = *(var_258 + 0x10)
                int64_t rax_46 = rsi_5[3]
                
                if (*(rax_46 + (rdx_14 << 3)) == 0)
                    sub_1419ccf30(rsi_5, rdx_14.d)
                    rax_46 = rsi_5[3]
                
                r15_5 = *(rax_46 + (rdx_14 << 3))
            
            var_2c8 = r15_5
            char* var_328
            var_328.d = 0
            sub_1405eb490(arg1, &var_2c8, rdi_6 + 0x118, &i_2, var_328.d)
            var_328.d = 0
            sub_1405eb490(arg1, &var_2c8, rdi_6 + 0x11e, &var_2d0, var_328.d)
            var_328.d = 0
            void* r9_4
            int128_t zmm6_1
            r9_4, zmm6_1 = sub_1405eb490(arg1, &var_2c8, rdi_6 + 0x124, &var_2d8, var_328.d)
            void* rdx_18 = r8
            void* rax_47 = *(r8 + 0x18)
            
            if (rax_47 != 0)
                rdx_18 = rax_47
            
            int64_t r12_1 = *(rdx_18 + sx.q(var_2d0 - 1) * 0x18 + 0x10)
            
            if (*(rdi_6 + 0x12c) u> 0)
                uint32_t rsi_6 = zx.d(*(rdi_6 + 0x12a))
                void*** rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_51 = &rcx_40[5]
                
                if (rax_51 u> *(arg1 + 0x38))
                    r9_4, zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_51 = &rcx_40[5]
                
                *(arg1 + 0x30) = rax_51
                void**** rax_52 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_52 = rcx_40
                *(arg1 + 8) = &rcx_40[1]
                rcx_40[1] = 0
                *rcx_40 = &data_142d5ebf8
                rcx_40[2] = r15_5
                rcx_40[3].d = rsi_6
                rcx_40[4] = r12_1
            
            int64_t* rsi_7 = data_14395f4d0
            
            if (*(rdi_6 + 0x130) u> 0)
                uint32_t rdi_7 = zx.d(*(rdi_6 + 0x12e))
                char rax_55
                rax_55, r9_4 = (*(*rsi_7 + 8))(rsi_7)
                
                if (rax_55 == 0)
                    void*** rcx_47 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_56 = &rcx_47[5]
                    
                    if (rax_56 u> *(arg1 + 0x38))
                        r9_4, zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                        rcx_47 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_56 = &rcx_47[5]
                    
                    *(arg1 + 0x30) = rax_56
                    void**** rax_57 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_57 = rcx_47
                    *(arg1 + 8) = &rcx_47[1]
                    rcx_47[1] = 0
                    *rcx_47 = &data_142d5a080
                    rcx_47[2] = r15_5
                    rcx_47[3].d = rdi_7
                    rcx_47[4] = rsi_7
            
            int512_t zmm3
            zmm3.o = zmm6_1
            int512_t zmm2_1
            zmm2_1.o = zx.o(0)
            int32_t var_2e0_1 = 1
            int32_t var_2e8_1 = 0
            void* var_250 = rsi_2
            int64_t var_248_1 = var_2c0.q
            int32_t var_29c_1 = rax_13
            int32_t var_294_1 = rax_13
            var_328.d = zmm6_1.d
            sub_1413993b0(arg1, zx.o(0), zmm2_1, r9_4, zmm3, var_328.d, 0, 0, zmm6_1.d, zmm6_1.d, 
                rax_13.q, rax_13.q, &var_250, var_2e8_1, var_2e0_1)
            void*** rcx_54 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_63 = &rcx_54[2]
            
            if (rax_63 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x18)
                rcx_54 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_63 = &rcx_54[2]
            
            *(arg1 + 0x30) = rax_63
            int64_t* rax_64 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_64 = rcx_54
            *(arg1 + 8) = &rcx_54[1]
            rcx_54[1] = 0
            *rcx_54 = &data_142d549b8
            *(arg1 + 0x1c4) = 0
            *(arg1 + 0x178) = 0
            int64_t var_90
            zmm6 = sub_1405d1550(&var_90)
            rdx_4 = var_2d0
            i = i_2 + 1
            r15 = arg4
            r12 = rax_4
            i_2 = i
        while (i s< 6)
        
        rcx_2 = var_2d8
        rdx_4 += 1
        var_2d0 = rdx_4
        rax_12 = rdx_4.b
    while (rdx_4 s< rcx_2)

int64_t* rdi_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_66 = &rdi_10[1]

if (rax_66 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_66 = &rdi_10[1]

*(arg1 + 0x30) = rax_66
*rdi_10 = rax_2
void*** rcx_63 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_68 = &rcx_63[5]

if (rax_68 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_63 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_68 = &rcx_63[5]

*(arg1 + 0x30) = rax_68
void**** rax_69 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_69 = rcx_63
*(arg1 + 8) = &rcx_63[1]
rcx_63[1] = 0
void* result = &data_142d549c8
*rcx_63 = &data_142d549c8
rcx_63[2].d = 1
rcx_63[3] = rdi_10
rcx_63[4].d = 0

if (data_1439b6ba0 != 0)
    result = r15[9]
    void* result_1 = &r15[6]
    int32_t i_4 = r15[0xa].d
    
    if (result != 0)
        result_1 = result
    
    if (i_4 != 0)
        void* rbx_1 = result_1 + 0x10
        int32_t i_1
        
        do
            result = sub_1405ec8a0(rbx_1)
            rbx_1 += 0x18
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    r15[0xa].d = 0
    
    if (*(r15 + 0x54) != 0)
        result = sub_1409dabf0(&r15[6], 0)

__security_check_cookie(rax_1 ^ &var_348)
return result
