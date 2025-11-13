// 函数: sub_14082f410
// 地址: 0x14082f410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
uint64_t result = __security_cookie ^ &var_1e8
uint64_t result_1 = result
void* rbx = *(arg1 + 8)

if (rbx != 0 && *(arg4 + 0x1a0) != 0 && *(rbx + 0x40) != 0)
    result = *(rbx + 0x18)
    
    if (*(rbx + 0x10) != 0)
        result = *(result + 0x140)
    
    if (result != 0 && *(result + 0xb4) != 0 && *(result + 0xb0) != 0 && data_14396f074 != 0
            && data_1439c7a0c != 0)
        void*** rax_1 = sub_1408125f0(*(arg2 + 0x20))
        void* r8 = *(arg2 + 0x10)
        void* rdx = *(arg2 + 8)
        int64_t r12_1 = 0
        int64_t var_110_1 = 0
        int32_t var_108_1 = 0
        int128_t var_128
        int128_t* var_1b8_1 = &var_128
        uint64_t* rax_2 = *(arg2 + 0x20)
        __builtin_memset(&var_128, 0, 0x14)
        result = sub_140822b60(arg1, rdx, r8, arg4, rax_2, &rax_1[0x3c])
        
        if (var_108_1 != 0)
            void* var_188 = nullptr
            void* var_190 = arg1 + 0x30
            int32_t var_180_1 = 0
            char var_177_1 = 0xff
            int32_t var_174_1 = 0
            int128_t* var_170 = nullptr
            int64_t var_168_1 = 1
            int64_t var_160 = 0
            sub_1405c4fe0(&var_170)
            int128_t* rax_4 = var_170
            void* rdx_2 = var_128:8.q
            *rax_4 = data_14399f6e0
            rax_4[1] = data_14399f6f0
            rax_4[2] = data_14399f700
            rax_4[3] = data_14399f710
            sub_14081d930(arg1 + 0x68, *(rdx_2 + 0x10))
            int32_t var_118
            *(arg1 + 0x70) = var_110_1:4.d * var_118
            void var_f8
            sub_14081a190(&var_f8)
            sub_14083d7b0(arg1, *(arg2 + 8), *(arg2 + 0x10), arg4, *(arg2 + 0x20), rbx, &var_128, 
                &var_f8, rax_1)
            int64_t rbx_1 = sx.q(var_180_1)
            int32_t i_3 = (rbx_1 + 1).d
            
            if (i_3 s> 0)
                sub_140775640(&var_188)
            
            sub_140819f30(rbx_1 * 0xa0 + var_188, &var_f8)
            int32_t i_1 = i_3
            void* rbx_2 = var_188
            int64_t var_158 = 0
            int32_t i_2 = i_1
            int32_t var_198_1
            
            if (i_1 != 0)
                sub_14083a0c0(&var_158, i_1, 0)
                r12_1 = var_158
                void* rsi_3 = r12_1 - rbx_2
                int32_t i
                
                do
                    sub_140819f30(rsi_3 + rbx_2, rbx_2)
                    rbx_2 += 0xa0
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                i_1 = i_2
                int32_t var_14c
                var_198_1 = var_14c
            else
                var_198_1 = 0
            
            uint64_t rax_9 = zx.q(var_108_1)
            int64_t r15_1 = sx.q(*(arg2 + 0x30))
            void* rcx_13 = &var_f8
            int32_t var_144_1 = rax_9.d
            char var_148_1 = 0
            uint32_t rsi_5 = (rax_9 * 3).d << 2
            uint32_t var_140_1 = rsi_5
            void* var_90
            
            if (var_90 != 0)
                rcx_13 = var_90
            
            int32_t rax_11 = *(rcx_13 + 0x44)
            int32_t var_13c_1 = rax_11
            void* var_138_1 = arg1 + 0x30
            int32_t rax_13 = (r15_1 + 1).d
            void* var_130_1 = arg1 + 0x10
            *(arg2 + 0x30) = rax_13
            
            if (rax_13 s> *(arg2 + 0x34))
                sub_1405c4f50(arg2 + 0x28)
            
            int64_t* rcx_17 = r15_1 * 0x30 + *(arg2 + 0x28)
            var_158 = 0
            i_2.q = 0
            *rcx_17 = r12_1
            *(rcx_17 + 0xc) = var_198_1
            rcx_17[1].d = i_1
            *(rcx_17 + 0x14) = var_108_1
            *(rcx_17 + 0x1c) = rax_11
            rcx_17[4] = arg1 + 0x30
            rcx_17[2].b = 0
            rcx_17[3].d = rsi_5
            rcx_17[5] = arg1 + 0x10
            sub_14081c7d0(&var_158)
            sub_1422926f0(&var_190)
            int64_t rbx_4 = sx.q(arg3[1].d)
            int32_t rax_18 = (rbx_4 + 1).d
            arg3[1].d = rax_18
            
            if (rax_18 s> *(arg3 + 0xc))
                sub_1407c3b60(arg3)
            
            sub_14081b0c0(rbx_4 * 0x38 + *arg3, &var_190)
            
            if (var_90 != 0)
                sub_140a74f90(var_90)
            
            sub_1405ec8a0(&var_160)
            int128_t* rcx_25 = var_170
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            result = sub_14081c7d0(&var_188)

__security_check_cookie(result_1 ^ &var_1e8)
return result
