// 函数: sub_1419e1420
// 地址: 0x1419e1420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** rdi = &arg2[2]
int128_t zmm6
int128_t var_38 = zmm6
int64_t i_1 = 4
int64_t i

do
    int64_t rsi_1 = *(arg1 - arg2 + rdi)
    
    if (rsi_1 != 0)
        int64_t* rax_1 = j_sub_140a82f30(0x58)
        int64_t* rbx_1 = rax_1
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            zmm6 = *(arg1 + 0x4c)
            float var_68[0x2][0x4]
            float (* rax_2)[0x4] = sub_140acc470(&var_68, nullptr, 0)
            *rbx_1 = 0
            rbx_1[1] = 0
            *(rbx_1 + 0x30) = *rax_2
            rbx_1[8].d = rax_2[1][0]
            float zmm0_1[0x4] = *rax_2
            float zmm2_1 = (*rax_2)[3] + (*rax_2)[1]
            zmm0_1[0] = zmm0_1[0] + (*rax_2)[2]
            zmm0_1[0] = zmm0_1[0] * 0.5f
            rbx_1[9].d = zmm2_1 * 0.5f
            *(rbx_1 + 0x44) = zmm0_1[0]
            *(rbx_1 + 0x4c) = zmm6.d
            rbx_1[0xa].b = 0
            __builtin_memset(&rbx_1[2], 0, 0x20)
        
        *rdi = rbx_1
        sub_1419e1420(rsi_1, rbx_1)
    
    rdi = &rdi[1]
    i = i_1
    i_1 -= 1
while (i != 1)
sub_140b4cd20(arg2, arg1)
*(arg2 + 0x30) = *(arg1 + 0x30)
arg2[8].d = arg1[8].d
*(arg2 + 0x44) = *(arg1 + 0x44)
*(arg2 + 0x4c) = *(arg1 + 0x4c)
char result = arg1[0xa].b
arg2[0xa].b = result
return result
