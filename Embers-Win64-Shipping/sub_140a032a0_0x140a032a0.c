// 函数: sub_140a032a0
// 地址: 0x140a032a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t result = __security_cookie ^ &var_1c8
int64_t result_1 = result
void* rdi = arg2
int32_t i = 0

if (*(arg1 + 0x158) s> 0)
    do
        result = sx.q(i)
        int64_t* rbx_2 = *(*(arg1 + 0x150) + (result << 3))
        
        if (rbx_2 != 0 && rbx_2[0x69].b != 0)
            int64_t* rcx = *rbx_2
            result = (*(*rcx + 0x280))(rcx)
            
            if (rbx_2[0x70] != 0)
                int64_t var_168 = 0
                void* var_170 = &rbx_2[0x6a]
                int32_t var_160_1 = 0
                char var_157_1 = 0xff
                int32_t var_154_1 = 0
                int128_t* var_150 = nullptr
                int64_t var_148_1 = 1
                int64_t var_140 = 0
                sub_1405c4fe0(&var_150)
                int128_t* rax_3 = var_150
                *rax_3 = *(arg1 + 0x80)
                rax_3[1] = *(arg1 + 0x90)
                rax_3[2] = *(arg1 + 0xa0)
                rax_3[3] = *(arg1 + 0xb0)
                void var_e8
                sub_14081a190(&var_e8)
                int64_t* rcx_3 = *rbx_2
                void* var_70_1 = &rbx_2[0x27]
                char var_4d_1 = i.b
                int64_t var_68_1 = (*(*rcx_3 + 0x280))(rcx_3)
                void* rsi_1 = &var_e8
                char var_178
                char* var_1a0_1 = &var_178
                int32_t var_4c = (((zx.d(*(arg1 + 0x35)) & 1) | (var_4c & 0xfffe007e)) & 0xfbffffff)
                    | zx.d(sub_1422a69b0(arg1, *(rdi + 8))) << 0x1a
                void var_138
                void* var_1a8_1 = &var_138
                void* var_80
                
                if (var_80 != 0)
                    rsi_1 = var_80
                
                *(rsi_1 + 0x10) = &rbx_2[0x22]
                int64_t* rcx_10 = *(arg1 + 0x108)
                char var_198
                bool var_190
                char var_188
                char var_177
                void var_128
                (*(*rcx_10 + 0x150))(rcx_10, *(arg1 + 0x110), &var_177, &var_128, var_1a8_1, 
                    var_1a0_1, var_198, var_190, var_188)
                void*** rax_16 = sub_1409fa0b0(*(rdi + 0x20))
                var_188 = var_178
                var_190 = *(arg1 + 0x32) - 1 u<= 1
                var_198 = var_177
                var_1a0_1.b = 1
                sub_1422f21f0(rax_16, arg1 + 0x80, &var_128, arg1 + 0xc0, arg1 + 0xdc, var_1a0_1.b, 
                    var_198, var_190, var_188)
                *(rsi_1 + 8) = &rax_16[1]
                *(rsi_1 + 0x40) = 0
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = muls.dp.d(0x55555556, rbx_2[0x26].d)
                *(rsi_1 + 0x50) = 0
                *(rsi_1 + 0x44) = temp0_1 + (temp0_1 u>> 0x1f)
                *(rsi_1 + 0x54) = *(rbx_2 + 0xc4) - 1
                int64_t rbx_3 = sx.q(var_160_1)
                int32_t rax_22 = (rbx_3 + 1).d
                var_160_1 = rax_22
                
                if (rax_22 s> 0)
                    sub_140775640(&var_168)
                
                sub_140819f30(rbx_3 * 0xa0 + var_168, &var_e8)
                sub_1422926f0(&var_170)
                int64_t rbx_4 = sx.q(arg3[1].d)
                int32_t rax_23 = (rbx_4 + 1).d
                arg3[1].d = rax_23
                
                if (rax_23 s> *(arg3 + 0xc))
                    sub_1407c3b60(arg3)
                
                sub_14081b0c0(rbx_4 * 0x38 + *arg3, &var_170)
                
                if (var_80 != 0)
                    sub_140a74f90(var_80)
                
                sub_1405ec8a0(&var_140)
                int128_t* rcx_26 = var_150
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                result = sub_14081c7d0(&var_168)
                rdi = arg2
        
        i += 1
    while (i s< *(arg1 + 0x158))

__security_check_cookie(result_1 ^ &var_1c8)
return result
