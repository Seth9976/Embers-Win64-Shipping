// 函数: sub_140f86bf0
// 地址: 0x140f86bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
char* result

if (arg1[0x7f].b == 0)
    *arg2 = 1
    *(arg2 + 8) = 0
    result = arg2
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    uint32_t zmm6[0x4]
    
    if (arg1[0x9b].d != 1)
        zmm6 = *(arg4 + 0x28)
    else
        zmm6 = *(arg4 + 0x2c)
    
    zmm6[0] = zmm6[0] f/ *(arg3 + 8)
    int64_t r8 = arg1[0x80]
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm6, data_142d3f770)
    temp0_1[0] = temp0_1[0] f+ *(arg1 + 0x3fc)
    *(arg1 + 0x3fc) = temp0_1[0]
    uint32_t zmm0[0x4] = arg1[0x81].d
    zmm0[0] = zmm0[0] f- zmm6[0]
    arg1[0x81].d = zmm0[0]
    
    if (sub_140e6a4b0(data_143e29f28, arg4, r8) == 0)
        *arg2 = 1
        result = arg2
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        arg2[0x20] = 0
        __builtin_memset(&arg2[0x28], 0, 0x88)
        *(arg2 + 0xb4) &= 0xffffff00
        *(arg2 + 0xb0) = 0x20702
    else
        if (*(arg1 + 0x4dc) == 0)
            int32_t var_140_1 = 0
            bool (* var_148)(int64_t* arg1, int64_t arg2, int128_t arg3 @ zmm2, 
                int128_t arg4 @ zmm6, int128_t arg5 @ zmm7, int128_t arg6 @ zmm8) = sub_140f90770
            var_148.o = var_148.o
            *(arg1 + 0x4dc) = 1
            void var_138
            void var_128
            zmm6 = sub_140e20c50(arg1, &var_138, zx.o(0), sub_140dd1ff0(&var_128, arg1, &var_148))
            int64_t* var_130
            
            if (var_130 != 0)
                var_130[1].d -= 1
                
                if (var_130[1].d == 1)
                    (**var_130)(var_130)
                    int32_t temp2_1 = *(var_130 + 0xc)
                    *(var_130 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_130 + 8))(var_130, 1)
        
        (*(*arg1 + 0x250))(arg1, arg3, zmm6 ^ data_142d3f780, 0)
        int64_t* rcx_6 = arg1[0x76]
        (*(*rcx_6 + 0x248))(rcx_6)
        int64_t* rbx_2 = arg1[2]
        int64_t rcx_7 = 0
        
        if (rbx_2 != 0)
            int32_t rax_8 = rbx_2[1].d
            
            if (rax_8 != 0)
                rbx_2[1].d = rax_8 + 1
                rax_8.b = 1
            
            if (rax_8.b == 0)
                rbx_2 = nullptr
            
            if (rbx_2 != 0)
                rcx_7 = arg1[1]
        
        int32_t var_64
        int32_t var_64_1 = var_64 & 0xffffff00
        char var_118 = 1
        int64_t var_110_1 = 0
        int64_t var_108_1 = 0
        char var_f8_1 = 0
        int64_t var_f0_1 = 0
        int64_t var_e8_1 = 0
        int128_t var_d8
        __builtin_memset(&var_d8, 0, 0x70)
        int32_t var_68_1 = 0x20702
        int64_t var_e0_1 = rcx_7
        
        if (rbx_2 != 0)
            *(rbx_2 + 0xc) += 1
            rbx_2[1].d -= 1
            var_d8.q = rbx_2
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_2 = *rbx_2
                    (*(r8_2 + 8))(rbx_2, 1, r8_2)
        
        sub_140596b00(arg2, &var_118)
        sub_140597700(&var_118)
        result = arg2

__security_check_cookie(rax_1 ^ &var_168)
return result
