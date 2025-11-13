// 函数: sub_1408519d0
// 地址: 0x1408519d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
void* result = __security_cookie ^ &var_1b8
void* result_1 = result
void* rdi = *(arg1 + 8)

if (rdi != 0)
    void* rbx_1 = *(arg4 + 0x1a0)
    
    if (rbx_1 != 0)
        result = sub_14082fe30(rdi)
        
        if (result != 0 && *(result + 0xb4) != 0 && *(result + 0xb0) != 0 && data_14396fefc != 0
                && data_1439c7a0c != 0)
            int32_t r12_1 = -1
            
            if (*(arg1 + 0xa4) == 1)
                r12_1 = sub_14081faa0(rbx_1 + 0x30, *(result + 0x48), *(arg1 + 0xa8), 0)
            
            char var_11f_1 = 0xff
            void* var_130 = nullptr
            int32_t var_128_1 = 0
            int32_t var_11c_1 = 0
            int128_t* var_118 = nullptr
            int64_t var_108 = 0
            void* var_138 = arg1 + 0x30
            int64_t var_110_1 = 1
            sub_1405c4fe0(&var_118)
            int128_t* rax_3 = var_118
            *rax_3 = data_14399f6e0
            rax_3[1] = data_14399f6f0
            rax_3[2] = data_14399f700
            rax_3[3] = data_14399f710
            int64_t var_168
            sub_14084bb90(arg1, &var_168, rdi, *(*(arg2 + 0x20) + 0xe0))
            void*** rax_4 = sub_1408410b0(*(arg2 + 0x20))
            sub_14085be30(arg1, &rax_4[1], rdi, &var_168, *(arg2 + 8), arg4)
            int32_t var_170
            sub_1405d1600(&rax_4[0x36], 
                sub_14084c890(arg1, &var_170, *(arg2 + 8), *(arg2 + 0x10), arg4))
            sub_1405d1550(&var_170)
            void var_f8
            sub_14081a190(&var_f8)
            void*** var_180_1 = rax_4
            void* var_190_1
            var_190_1.d = r12_1
            sub_14084c520(arg1, *(arg2 + 8), *(arg2 + 0x10), arg4, rdi, var_190_1.d, &var_f8)
            int64_t rbx_4 = sx.q(var_128_1)
            int32_t i_3 = (rbx_4 + 1).d
            
            if (i_3 s> 0)
                sub_140775640(&var_130)
            
            sub_140819f30(rbx_4 * 0xa0 + var_130, &var_f8)
            int32_t i_1 = i_3
            int64_t r12_2 = 0
            void* rbx_5 = var_130
            var_168 = 0
            int32_t i_2 = i_1
            
            if (i_1 != 0)
                sub_14083a0c0(&var_168, i_1, 0)
                r12_2 = var_168
                void* rsi_2 = r12_2 - rbx_5
                int32_t i
                
                do
                    sub_140819f30(rsi_2 + rbx_5, rbx_5)
                    rbx_5 += 0xa0
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                i_1 = i_2
                int32_t var_15c
                var_170 = var_15c
            else
                var_170 = 0
            
            void* rcx_18 = &var_f8
            void* var_90
            
            if (var_90 != 0)
                rcx_18 = var_90
            
            uint64_t rax_11 = zx.q(*(result + 0xb0))
            bool cond:1_1 = *(rcx_18 + 0x44) == 0
            uint32_t rsi_4 = (rax_11 * 3).d * 2
            uint32_t r15_3 = (rax_11 * 9).d << 3
            void* var_148_1 = arg1 + 0x30
            int64_t r13_1 = sx.q(*(arg2 + 0x30))
            uint32_t var_154_1 = rsi_4
            uint32_t var_150_1 = r15_3
            int32_t rax_15 = (r13_1 + 1).d
            *(arg2 + 0x30) = rax_15
            
            if (rax_15 s> *(arg2 + 0x34))
                sub_1405c4f50(arg2 + 0x28)
            
            int32_t rax_16 = var_170
            int64_t* rcx_23 = r13_1 * 0x30 + *(arg2 + 0x28)
            var_168 = 0
            i_2.q = 0
            *rcx_23 = r12_2
            *(rcx_23 + 0xc) = rax_16
            rcx_23[1].d = i_1
            rcx_23[2].b = cond:1_1
            *(rcx_23 + 0x1c) = rax_11.d * 2
            rcx_23[4] = arg1 + 0x30
            rcx_23[5] = arg1 + 0x10
            *(rcx_23 + 0x14) = rsi_4
            rcx_23[3].d = r15_3
            sub_14081c7d0(&var_168)
            
            if (var_90 != 0)
                sub_140a74f90(var_90)
            
            sub_1422926f0(&var_138)
            int64_t rbx_7 = sx.q(arg3[1].d)
            int32_t rax_21 = (rbx_7 + 1).d
            arg3[1].d = rax_21
            
            if (rax_21 s> *(arg3 + 0xc))
                sub_1407c3b60(arg3)
            
            sub_14081b0c0(rbx_7 * 0x38 + *arg3, &var_138)
            sub_1405ec8a0(&var_108)
            int128_t* rcx_31 = var_118
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
            
            result = sub_14081c7d0(&var_130)

__security_check_cookie(result_1 ^ &var_1b8)
return result
