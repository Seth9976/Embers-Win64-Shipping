// 函数: sub_141262490
// 地址: 0x141262490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int64_t rcx_1 = sx.q(*(arg1 + 0x3b4))
uint64_t result
void* var_260

if (rcx_1.d u> 0x16 || not(test_bit(0x42c000, rcx_1.d)))
    if (rcx_1.d != 0x18)
        result = zx.q(*(&data_143f025fc + rcx_1 * 0x14) u>> 4)
    
    if (rcx_1.d == 0x18 || (result.b & 1) != 0)
        int64_t* rcx_5 = *sub_14139d440(&data_143ec4c60)
        (*(*rcx_5 + 0x10))(rcx_5)
        void* rax_5
        
        if ((*(arg1 + 0x38) & 0x200) != 0)
            rax_5 = *(arg1 + 8)
        
        int32_t rcx_6
        
        if ((*(arg1 + 0x38) & 0x200) == 0 || *(rax_5 + 0xfd0) == *(rax_5 + 0xffc))
            rcx_6.b = 0
        else
            rcx_6.b = 1
        
        if ((*(arg1 + 0x3c) & 1) == 0 || *(arg1 + 0x3d8) == 0)
            result.b = 0
        else
            result.b = 1
        
        if (rcx_6.b != 0 || result.b != 0 || *(data_143e8ee78 + 4) == 1
                || (*(arg3 + 0x497c) & 0x400) != 0)
            void* rcx_7 = *(data_1439b70c8 + 8)
            void* var_248 = rcx_7
            
            if (rcx_7 != 0)
                *(rcx_7 + 8) += 1
            
            void* rbx_2 = *(data_1439b7138 + 8)
            void* var_250 = rbx_2
            
            if (rbx_2 != 0)
                *(rbx_2 + 8) += 1
                rbx_2 = var_250
            
            int128_t zmm1 = data_142d3f5a0
            void* var_168 = rcx_7
            int32_t var_90_1 = 0
            int128_t var_78_1 = zmm1
            int64_t var_68
            __builtin_memset(&var_68, 0, 0x19)
            int64_t var_160_1 = 0
            int16_t var_154_1 = 0
            int64_t var_a0_1 = 0
            int32_t var_8c
            __builtin_memset(&var_8c, 0xff, 0x14)
            int32_t var_158_1 = 0xffffffff
            bool var_4f_1 = *(rcx_7 + 0x38) u> 1
            void var_150
            memset(&var_150, 0, 0xa8)
            void* var_a8_1 = rbx_2
            char var_98_1 = 0x99
            int64_t rbx_5 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            int32_t var_94_1 = 0x22
            int64_t rax_8 = rbx_5 + 0x1a
            
            if (rax_8 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x1c)
                rbx_5 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                rax_8 = rbx_5 + 0x1a
            
            wchar16 const* const rcx_10 = u"ResolveDepth"
            *(arg2 + 0x30) = rax_8
            wchar16 const i
            
            do
                i = *rcx_10
                *(rbx_5 - u"ResolveDepth" + rcx_10) = i
                rcx_10 = &rcx_10[1]
            while (i != 0)
            void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_9 = &rcx_13[0x27]
            
            if (rax_9 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x140)
                rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_9 = &rcx_13[0x27]
            
            *(arg2 + 0x30) = rax_9
            void**** rax_10 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_10 = rcx_13
            *(arg2 + 8) = &rcx_13[1]
            sub_1405d11b0(rcx_13, &var_168, rbx_5)
            *(arg2 + 0x1c4) = 1
            sub_1405d19b0(arg2, &var_168)
            int64_t var_58
            *(arg2 + 0x178) = var_58:7.b
            *(arg2 + 0x179) = 0
            *(arg2 + 0x1c4) = 1
            int128_t var_210
            __builtin_memset(&var_210, 0, 0x30)
            int64_t var_1b4
            __builtin_memset(&var_1b4, 0, 0x43)
            int128_t var_1c8_1 = zx.o(0)
            int16_t var_170_1 = 0
            sub_140fdc870(arg2, &var_210)
            int64_t var_1e0_1 = data_14395da00
            int64_t var_1d8_1 = data_14395da18
            int64_t var_1d0_1 = data_14395d9e8
            void* var_240
            sub_1419a2ec0(*(arg3 + 0x5150), &var_240, &data_143f55f90, 0)
            void* r15_1 = var_240
            int64_t* rcx_20 = *(arg3 + 0x5150)
            var_260 = r15_1
            void* var_230
            sub_1419a2ec0(rcx_20, &var_230, &data_143f55b50, 0)
            var_210.q = data_1439c9210
            int64_t rax_17 = 0
            void* var_238
            
            if (r15_1 != 0)
                int64_t rdx_9 = sx.q(*(r15_1 + 0x10c))
                int64_t* rbx_9 = *(var_238 + 0x10)
                int64_t rax_18 = rbx_9[3]
                
                if (*(rax_18 + (rdx_9 << 3)) == 0)
                    sub_1419ccf30(rbx_9, rdx_9.d)
                    rax_18 = rbx_9[3]
                
                rax_17 = *(rax_18 + (rdx_9 << 3))
            
            void* rsi_2 = var_230
            var_210:8.q = rax_17
            int64_t rax_19 = 0
            
            if (rsi_2 != 0)
                int64_t rdx_10 = sx.q(*(rsi_2 + 0x10c))
                void* var_228
                int64_t* rbx_10 = *(var_228 + 0x10)
                int64_t rax_21 = rbx_10[3]
                
                if (*(rax_21 + (rdx_10 << 3)) == 0)
                    sub_1419ccf30(rbx_10, rdx_10.d)
                    rax_21 = rbx_10[3]
                
                rax_19 = *(rax_21 + (rdx_10 << 3))
                r15_1 = var_260
            
            int128_t var_1f0
            var_1f0.q = rax_19
            int32_t var_1b8_1 = 0
            sub_1419870b0(arg2, &var_210, 2)
            sub_141080be0(r15_1, arg2, *(arg2 + 0x188), *(arg3 + 0x10))
            int64_t* rax_22 = sub_1410f83c0(&data_143ec4c60)
            void* r9_3 = sub_141298600(rsi_2, arg2, data_14395fa10, *rax_22)
            int512_t zmm3
            zmm3.o = zx.o(0)
            int32_t var_270_1 = 1
            int512_t zmm2_1
            zmm2_1.o = zx.o(0)
            int32_t var_278_1 = 1
            void* var_218_1 = var_238
            void* var_220
            void** var_280_1 = &var_220
            int64_t var_288_1 = 1
            var_260.d = 1
            var_260:4.d = 1
            void* rax_24 = var_260
            int32_t var_298_1 = 0x3f800000
            int32_t var_2a0_1 = 0x3f800000
            int32_t var_2a8_1 = 0
            int32_t var_2b0_1 = 0
            int32_t var_2b8_1 = 0
            var_220 = r15_1
            sub_1413993b0(arg2, zx.o(0), zmm2_1, r9_3, zmm3, var_2b8_1, var_2b0_1, var_2a8_1, 
                var_2a0_1, var_298_1, rax_24, var_288_1, var_280_1, var_278_1, var_270_1)
            sub_141096650(arg2)
            int64_t var_60
            sub_1405d1550(&var_60)
            sub_1405d1550(&var_250)
            result = sub_1405d1550(&var_248)
else
    int32_t var_258_1 = *(arg1 + 0x3c8)
    int32_t var_254_1 = *(arg1 + 0x3cc)
    var_260 = nullptr
    result = sub_1413a9350(&data_143ec4c60, arg2, &var_260)
__security_check_cookie(rax_1 ^ &var_2d8)
return result
