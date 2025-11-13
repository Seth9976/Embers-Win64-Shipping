// 函数: sub_1420019f0
// 地址: 0x1420019f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_c0 = nullptr
int32_t var_b8 = 0
sub_140af2b60()
int32_t r15 = 2
int32_t rax_4

if (sub_140b2acc0(&data_143dbb3f0, u"Res=", &var_c0, 1) == 0)
    sub_140af2b60()
    sub_140b2ab20(&data_143dbb3f0, u"ResX=", arg1)
    sub_140af2b60()
    sub_140b2ab20(&data_143dbb3f0, u"ResY=", arg2)
    rax_4 = *arg3
else
    int16_t* const rcx = &data_142d40450
    int32_t arg_20 = 0
    
    if (var_b8 != 0)
        rcx = var_c0
    
    int32_t arg_18 = 0
    int32_t var_c8 = 2
    
    if (sub_1423ea040(rcx, &arg_20, &arg_18, &var_c8) == 0)
        rax_4 = *arg3
    else
        int32_t rcx_1 = var_c8
        *arg1 = arg_20
        *arg2 = arg_18
        
        if (rcx_1 == 0)
            rax_4 = 0
        else if (rcx_1 == 1)
            rax_4 = 1
        else
            rax_4 = 2

*arg3 = rax_4
int64_t* rcx_2 = data_143e29f28
void* i_1 = nullptr
int32_t var_88 = 0
int128_t var_58
__builtin_memset(&var_58, 0, 0x20)
int32_t var_98

if (rcx_2 == 0)
    sub_140d84bf0(&var_98)
else
    (*(*rcx_2 + 0x1b0))(rcx_2, &var_98)

int32_t rax_6 = *arg3
int32_t rdi_1
int32_t var_80
int32_t var_78

if (arg4 == 0 || rax_6 != 2)
    rdi_1 = var_98
    r15 = rax_6
else
    rdi_1 = var_78 - var_80
int32_t var_94
int32_t rbx_2
int32_t var_7c
int32_t var_74

if (arg4 == 0 || r15 != 2)
    rbx_2 = var_94
    
    if (r15 == 0)
        int64_t rax_7 = sx.q(var_88)
        
        if (rax_7.d s> 0)
            void* i = i_1
            void* rdx_4 = rax_7 * 0x50 + i
            rdi_1 = *(i + 0x20)
            rbx_2 = *(i + 0x24)
            
            for (; i != rdx_4; i += 0x50)
                if (*(i + 0x48) != 0)
                    rdi_1 = *(i + 0x20)
                    rbx_2 = *(i + 0x24)
                    break
else
    rbx_2 = var_74 - var_7c
sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"ForceRes") == 0)
    int32_t rax_9 = *arg1
    int32_t rax_10
    
    if (rax_9 s> 0 && rax_9 s<= rdi_1)
        rax_10 = *arg2
    
    if (rax_9 s<= 0 || rax_9 s> rdi_1 || rax_10 s<= 0 || rax_10 s> rbx_2)
        *arg1 = rdi_1
        *arg2 = rbx_2
        
        if (*arg3 == 2)
            int64_t var_b0 = 0
            int32_t var_a8_1 = 0
            sub_1420030c0(&var_98, &var_b0)
            int64_t r8_4 = var_b0
            
            if (var_a8_1 s> 0)
                int32_t rdx_7 = var_a8_1 - 1
                int64_t rcx_5 = sx.q(rdx_7)
                uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(var_98))
                *arg1 = *(r8_4 + (rcx_5 << 3))
                int32_t rax_12 = *(r8_4 + (rcx_5 << 3) + 4)
                uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(var_94))
                *arg2 = rax_12
                zmm2_1.d = zmm2_1.d f/ zmm0_1.d
                
                if (var_a8_1 - 1 s>= 0)
                    int64_t temp1_1
                    
                    do
                        uint128_t zmm1_1
                        zmm1_1.d = _mm_cvtepi32_ps(zx.o(*(r8_4 + (rcx_5 << 3)))).d
                            f/ _mm_cvtepi32_ps(zx.o(*(r8_4 + (rcx_5 << 3) + 4))).d
                        zmm1_1.d = zmm1_1.d f- zmm2_1.d
                        
                        if (_mm_and_ps(zmm1_1, 0x7fffffff).d f< 9.99999975e-05f)
                            int64_t rdx_8 = sx.q(rdx_7)
                            *arg1 = *(r8_4 + (rdx_8 << 3))
                            *arg2 = *(r8_4 + (rdx_8 << 3) + 4)
                            break
                        
                        rdx_7 -= 1
                        temp1_1 = rcx_5
                        rcx_5 -= 1
                    while (temp1_1 - 1 s>= 0)
            
            if (r8_4 != 0)
                sub_140a74f90(r8_4)

sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"Portrait") != 0)
    int32_t rcx_7 = *arg1
    *arg1 = *arg2
    *arg2 = rcx_7

int64_t result = sub_140d72800(&i_1)
int16_t* rcx_9 = var_c0

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
