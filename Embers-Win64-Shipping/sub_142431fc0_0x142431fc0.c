// 函数: sub_142431fc0
// 地址: 0x142431fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
bool cond:0 = arg1[1].d == 0
int16_t* const r12 = &data_142d40450
void* var_180 = arg2
int16_t* rdx

if (cond:0)
    rdx = &data_142d40450
else
    rdx = *arg1

uint64_t var_198
uint64_t rbx = *sub_140b58260(&var_198, rdx, 1)
int32_t i = 0
int32_t var_1a8 = 0
uint64_t rax_4 = sub_140d2f0c0(sub_140cddea0(), 0, rbx, 0, 0, 0)
uint64_t rsi = rax_4
void* result

if (rax_4 == 0)
    result = nullptr
else
    void* rax_5 = sub_142435380(rax_4)
    void* r14_1 = rax_5
    
    if (rax_5 != 0)
        goto label_142432087
    
    void* rax_6 = sub_142435740(rsi, nullptr)
    r14_1 = rax_6
    
    if (rax_6 == 0)
        result = nullptr
    else
        rsi = sub_140d21d80(rax_6)
    label_142432087:
        int32_t rbx_1 = -1
        void* rax_8 = sub_1423de4b0(data_143f5b298, var_180)
        
        if (rax_8 == 0)
            void* rcx_6 = var_180
            
            if (rcx_6 != 0)
                rbx_1 = *(sub_140d21d80(rcx_6) + 0x58)
        else
            rbx_1 = *(rax_8 + 0x230)
        
        void var_158
        sub_1423cf340(&var_158, rbx_1)
        int16_t* var_150
        sub_14242f630(&var_150, arg1, rbx_1)
        int16_t* rdx_4 = &data_142d40450
        int32_t var_148
        
        if (var_148 != 0)
            rdx_4 = var_150
        
        int64_t var_188
        sub_140b58260(&var_188, rdx_4, 1)
        sub_140d18050(var_188)
        int64_t rax_10 = var_188
        int64_t var_168 = rax_10
        int32_t r15_2 = sub_140b5ead0(rax_10.d) + var_168:4.d
        char var_1b8
        int32_t var_178
        int64_t* var_170
        void* rax_18
        
        if (data_143a305d8 == data_143a30604)
        label_142432193:
            sub_140a9e570(&data_143a305d0, &var_178)
            int32_t var_1b0
            var_1b0.q = 0
            *var_170 = var_188
            var_170[1].d = 0
            var_1b8.d = var_178
            *(var_170 + 0xc) = 0xffffffff
            sub_14093e9e0(&data_143a305d0, &var_168, r15_2, var_170, var_1b8, var_1b0)
            rax_18 = data_143a305d0 + sx.q(var_168.d) * 0x14
        else
            void* rdx_5 = data_143a30610
            void* rax_16 = &data_143a30608
            
            if (rdx_5 != 0)
                rax_16 = rdx_5
            
            int32_t rax_17 = *(rax_16 + ((sx.q(data_143a30618 - 1) & sx.q(r15_2)) << 2))
            
            if (rax_17 == 0xffffffff)
                goto label_142432193
            
            int64_t r9_1 = data_143a305d0
            int64_t r8_2
            
            while (true)
                r8_2 = sx.q(rax_17) * 5
                
                if (*(r9_1 + (r8_2 << 2)) == var_188)
                    break
                
                rax_17 = *(r9_1 + (r8_2 << 2) + 0xc)
                
                if (rax_17 == 0xffffffff)
                    goto label_142432193
            
            if (rax_17 == 0xffffffff)
                goto label_142432193
            
            rax_18 = r9_1 + (r8_2 << 2)
            
            if (rax_18 == 0)
                goto label_142432193
        
        *(rax_18 + 8) = 3
        
        if (var_148 != 0)
            r12 = var_150
        
        void* rax_23 = sub_140d1dfb0(nullptr, r12)
        *(rax_23 + 0x50) |= 0x100000
        *(rax_23 + 0x58) = rbx_1
        int128_t zmm0_1 = *(rsi + 0x30)
        *(rax_23 + 0x28) |= 2
        *(rax_23 + 0x30) = zmm0_1
        sub_140d3a3a0(&var_198, var_180)
        int64_t rcx_17 = *(rax_23 + 0x18)
        int32_t* var_140 = &var_178
        var_178.q = rcx_17
        int64_t* var_138_1 = &var_198
        sub_140b92920(&data_143a2e440, &var_168, &var_140, nullptr)
        int32_t var_1a8_1 = 0x7f800000
        var_1b8.q = 0
        void* result_1 = sub_140d2e1f0(r14_1, rax_23, *(r14_1 + 0x18), 0xfffffff, var_1b8, 2)
        void** var_128
        sub_140b4c2a0(&var_128)
        char var_fe
        char var_fe_1 = var_fe | 0x60
        var_128 = &data_14334c870
        uint64_t var_98 = 0
        int64_t var_90
        __builtin_memset(&var_90, 0, 0x24)
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        sub_140b552a0(&var_128, 0)
        char var_ff
        char var_ff_1 = var_ff | 0x40
        var_128[0x26](&var_128, &var_180)
        int32_t var_50_2 = 0
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        var_90.d = 0
        int32_t var_68_2 = 0xffffffff
        int32_t var_64_2 = 0
        int64_t var_88
        sub_14059a8e0(&var_88, 0)
        int64_t var_78
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        uint64_t rcx_26 = var_98
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        sub_140b4cb40(&var_128)
        *(result_1 + 0x118) = *(r14_1 + 0x118)
        sub_140943780(&data_143a305d0, var_188)
        sub_140943590(&data_143a2e440, *(rax_23 + 0x18))
        sub_140a2e390(&var_198, u"%s_%d_", u"UEDPIE")
        
        if (result_1 + 0xd0 == &var_198)
            uint64_t rcx_30 = var_198
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
        else
            int64_t rcx_29 = *(result_1 + 0xd0)
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            *(result_1 + 0xd0) = var_198
            int32_t var_190
            *(result_1 + 0xd8) = var_190
            int32_t var_18c
            *(result_1 + 0xdc) = var_18c
        
        void* rbx_3 = *(result_1 + 0x30)
        void* r14_2 = *(r14_1 + 0x30)
        void* rcx_31 = *(rbx_3 + 0xc0)
        *(rbx_3 + 0x1f4) ^= (*(rbx_3 + 0x1f4) ^ *(r14_2 + 0x1f4)) & 0x40
        *(rbx_3 + 0x1f6) ^= (*(r14_2 + 0x1f6) ^ *(rbx_3 + 0x1f6)) & 0x10
        
        if (rcx_31 != 0 && rcx_31 == *(r14_2 + 0xc0) && *(rbx_3 + 0xd0) == *(r14_2 + 0xd0))
            sub_14213f790(rcx_31)
            
            if (*(rbx_3 + 0xd0) s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    sub_141f0da30(*(*(rbx_3 + 0xc8) + rsi_1), *(rsi_1 + *(r14_2 + 0xc8)))
                    i += 1
                    rsi_1 = &rsi_1[1]
                while (i s< *(rbx_3 + 0xd0))
        
        void* rcx_34 = *(*(r14_2 + 0xb8) + 0x560)
        
        if (rcx_34 != 0 && (*(r14_2 + 0x1f4) & 0x20) != 0)
            int64_t* rax_33 = sub_14244e170(rcx_34, &var_168, r14_2)
            int32_t r8_8 = data_143dbb188 - *rax_33
            int32_t rdx_19 = *(rax_33 + 4)
            int32_t r9_5 = data_143dbb190 - rax_33[1].d
            var_198 = data_143dbb188.q
            var_198:4.d -= rdx_19
            uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(r8_8))
            var_198.d = r8_8
            uint32_t rdx_21 = (var_198 u>> 0x20).d
            var_178 = zmm0_2.d
            int32_t var_174_1 = _mm_cvtepi32_ps(zx.o(rdx_21)).d
            var_170.d = _mm_cvtepi32_ps(zx.o(r9_5)).d
            sub_1420dd830(rbx_3, &var_178, 0)
        
        *(result_1 + 8) &= 0xfffffffd
        int16_t* rcx_36 = var_150
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        sub_1423d0040(&var_158)
        result = result_1

__security_check_cookie(rax_1 ^ &var_1d8)
return result
