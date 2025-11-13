// 函数: sub_141fae8f0
// 地址: 0x141fae8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
bool cond:0 = (arg1[0x14].b & 2) == 0
void* rbx = arg2
int32_t zmm1 = arg1[6].d
int64_t var_230 = arg1[7]
var_230.d = zmm1
void* rax_2

if (cond:0)
    rax_2 = sub_1423de050()
else
    rax_2 = sub_1423de320()

int32_t var_248
int32_t var_228
int32_t result
int512_t zmm3
result, zmm3 = sub_1424235b0(rax_2, &var_248, &var_228, u"99.99")
int32_t i = 0
int32_t r13_1 = neg.d(var_248)

if (arg1[0xd].d s> 0)
    int64_t r14_1 = 0
    
    do
        int32_t var_220
        (*(*arg1 + 0x268))(arg1, &var_220, &var_230, rbx)
        int32_t rax_6
        
        if (arg1[0x12].d != 0)
            rax_6 = r13_1
        else
            int64_t rax_4 = arg1[0xc]
            int16_t* r9_2
            
            if (*(rax_4 + r14_1 + 0x38) == 0)
                r9_2 = &data_142d40450
            else
                r9_2 = *(rax_4 + r14_1 + 0x30)
            
            sub_1424235b0(rax_2, &var_248, &var_228, r9_2)
            rax_6 = var_248 + 0xa
        
        *(arg1 + 0x94) = _mm_cvtepi32_ps(zx.o(rax_6)).d
        int64_t rdi_1 = arg1[0xc]
        int16_t* rdi_2
        
        if (*(rdi_1 + r14_1 + 0x38) == 0)
            rdi_2 = &data_142d40450
        else
            rdi_2 = *(rdi_1 + r14_1 + 0x30)
        
        int32_t rdx_3 = 0
        int64_t var_240 = 0
        int32_t rcx_3 = 0
        int64_t var_238_1 = 0
        
        if (rdi_2 != 0 && *rdi_2 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rdi_2[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_240, rbx_1.d + 1)
                rcx_3 = var_238_1:4.d
                rdx_3 = var_238_1.d
            
            int32_t rax_7 = rbx_1.d + 1 + rdx_3
            var_238_1.d = rax_7
            
            if (rax_7 s> rcx_3)
                sub_140594770(&var_240)
            
            UnDecorator::getReferenceType(var_240, rdi_2, (rbx_1.d + 1) * 2)
        
        void* rbx_3 = arg1[0xc]
        void var_200
        int64_t* rax_8 = sub_140aae2f0(&var_200, &var_240)
        int32_t var_1a8
        int32_t var_1a8_1 = var_1a8 & 0xfffffffc
        uint128_t zmm2_1 = zx.o(data_143dbb1f0)
        int32_t var_1a4 = var_1a4 & 0xfffffffe
        int128_t var_1c0_1 = data_14399f5c0
        zmm2_1 = _mm_unpacklo_pd(zmm2_1, zmm2_1.q)
        int128_t var_1a0
        __builtin_memset(&var_1a0, 0, 0x20)
        int64_t var_1d8_1 = 0
        int128_t zmm0_2 = data_14399f5e0
        char var_1d0_1 = 0
        int64_t var_1c8_1 = 0
        uint64_t var_1e0_1 = zmm2_1.q
        int128_t var_180_1 = zmm0_2
        void** const var_1e8 = &data_14328aa28
        int128_t var_15c_1 = zmm0_2
        int32_t var_1b0_1 = 0
        int32_t var_1ac_1 = 0x3f800000
        int16_t var_160_1 = 0
        uint128_t var_170_1 = zmm2_1
        char var_15e_1 = 0
        char var_14c_1 = 1
        void** var_140
        sub_1423faad0(&var_140, &data_143dbb1f0, &data_143dbb1f0, rbx_3 + 0x10 + r14_1)
        int32_t var_148_1 = 0x3f800000
        int32_t var_144_1 = 0x3f800000
        int128_t var_1c0_2 = *(rbx_3 + r14_1 + 0x10)
        var_1d8_1:4.d = 2
        var_1e8 = &data_14328aa70
        int64_t var_b8_1 = *rax_8
        int64_t* rax_10 = rax_8[1]
        
        if (rax_10 != 0)
            rax_10[1].d += 1
        
        int32_t var_a8_1 = rax_8[2].d
        void* var_a0_1 = rax_2
        char var_48_1 = 0
        var_1d8_1:4.d = 2
        int64_t* var_1f8
        
        if (var_1f8 != 0)
            var_1f8[1].d -= 1
            
            if (var_1f8[1].d == 1)
                (**var_1f8)(var_1f8)
                int32_t rax_14 = *(var_1f8 + 0xc)
                *(var_1f8 + 0xc) -= 1
                
                if (rax_14 == 1)
                    (*(*var_1f8 + 8))(var_1f8, 1)
        
        int64_t rcx_11 = var_240
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int128_t var_210
        sub_140acc920(&var_210, &data_14399f634)
        var_1a8 = var_1a8_1 | 2
        zmm2_1.d = var_220.d f- *(arg1 + 0x94)
        int32_t var_21c
        zmm3.o = var_21c
        int128_t var_180_2 = var_210
        var_170_1.d = 0x3f800000
        var_170_1:4.d = 0x3f800000
        int128_t var_1c0_3 = *(arg1[0xc] + r14_1 + 0x10)
        result, zmm3 = sub_1424098d0(arg2, &var_1e8)
        zmm2_1.d = (*(arg1 + 0x3c)).d f- *(arg1 + 0x34)
        float zmm1_1 = var_230:4.d
        zmm2_1.d = zmm2_1.d f/ _mm_cvtepi32_ps(zx.o(arg1[0xd].d)).d
        var_230:4.d = zmm1_1 f- zmm2_1.d
        
        if (var_48_1 != 0)
            char var_48_2 = 0
            int64_t* var_60
            
            if (var_60 != 0)
                var_60[1].d -= 1
                
                if (var_60[1].d == 1)
                    result = (**var_60)(var_60)
                    int32_t temp2_1 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        result = (*(*var_60 + 8))(var_60, 1)
        
        if (rax_10 != 0)
            result = rax_10[1].d
            rax_10[1].d -= 1
            
            if (result == 1)
                (**rax_10)(rax_10)
                result = *(rax_10 + 0xc)
                *(rax_10 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rax_10 + 8))(rax_10, 1)
        
        rbx = arg2
        i += 1
        r14_1 += 0x40
    while (i s< arg1[0xd].d)

__security_check_cookie(rax_1 ^ &var_268)
return result
