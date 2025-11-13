// 函数: sub_142279220
// 地址: 0x142279220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* var_128 = arg2
void* result = sub_14221b270(arg2)

if (result.b == 0)
    void* rcx_1 = var_128
    
    if ((*(rcx_1 + 0xf) & 1) != 0)
        int128_t zmm9 = *arg3
        int128_t zmm10 = arg3[1]
        int128_t zmm11 = arg3[2]
        void var_a8
        int128_t* rax_2 = sub_142218c50(rcx_1, &var_a8, 1, 1)
        int128_t zmm6 = *rax_2
        int128_t zmm7 = rax_2[1]
        int128_t zmm8 = rax_2[2]
        bool z_1
        
        if (0 == *(arg1 + 0xac))
            *(arg1 + 0xac) = 0
            z_1 = true
        else
            *(arg1 + 0xac)
            z_1 = false
        
        uint32_t rcx_3 = (var_128 u>> 4).d
        int32_t r8_1 = (0x9e3779b9 - rcx_3) ^ rcx_3 << 8
        int32_t rdx_3 = neg.d(r8_1 + rcx_3) ^ r8_1 u>> 0xd
        int32_t rcx_6 = (rcx_3 - r8_1 - rdx_3) ^ rdx_3 u>> 0xc
        int32_t r8_4 = (r8_1 - rcx_6 - rdx_3) ^ rcx_6 << 0x10
        int32_t rdx_6 = (rdx_3 - r8_4 - rcx_6) ^ r8_4 u>> 5
        int32_t rcx_9 = (rcx_6 - r8_4 - rdx_6) ^ rdx_6 u>> 3
        int32_t r8_7 = (r8_4 - rcx_9 - rdx_6) ^ rcx_9 << 0xa
        result = sub_142258e30(zx.q(not(z_1)) * 0x50 + arg1, (rdx_6 - r8_7 - rcx_9) ^ r8_7 u>> 0xf, 
            &var_128)
        *(result + 0xb0) = 1
        *(result + 0x40) = rcx_1
        *(result + 0x50) = zmm9
        *(result + 0x60) = zmm10
        *(result + 0x70) = zmm11
        *(result + 0x80) = zmm6
        *(result + 0x90) = zmm7
        *(result + 0xa0) = zmm8

__security_check_cookie(rax_1 ^ &var_148)
return result
