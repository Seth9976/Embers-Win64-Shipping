// 函数: sub_141e3e750
// 地址: 0x141e3e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
char* r13 = arg4
sub_141e0ba30(arg2)
int32_t rax_2 = data_143f393d0
sub_140b34200("AnimStreamable_GetAnimationPose", rax_2)
void* rcx_1 = *(arg1 + 0x38)
void* rbx = arg2[2]

if (rcx_1 != 0)
    if (*(rbx + 0xf0) == 0)
        sub_141e0ba30(arg2)
    else
        void* rax_3 = sub_141dec140(rcx_1, *(arg1 + 0xb0))
        int32_t i_4 = arg2[1].d
        
        if (i_4 != 0)
            int64_t r8 = 0
            uint64_t i_3 = zx.q(i_4)
            int64_t r9 = 0
            uint64_t i
            
            do
                r8 += 0x30
                int64_t rax_4 = *arg2
                r9 += 4
                int128_t* rcx_6 = sx.q(*(r9 + *(rbx + 0x70) - 4)) * 0x30 + *rax_3
                *(r8 + rax_4 - 0x30) = *rcx_6
                *(r8 + rax_4 - 0x20) = rcx_6[1]
                *(r8 + rax_4 - 0x10) = rcx_6[2]
                i = i_3
                i_3 -= 1
            while (i != 1)
    
    uint32_t zmm3[0x4] = data_143f397b0
    char rax_5 = *(arg1 + 0xd8)
    int64_t r8_1 = sx.q(*(arg1 + 0xc0))
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm3, data_143f397c0)
    int32_t rbx_1 = 0
    char var_a8 = rax_5
    zmm3[0].q = zx.o(0) u>> 0x40
    uint32_t var_a4_1 = zx.d(*(arg1 + 0xd9))
    float var_98_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
    float zmm1_1[0x4] = *(r13 + 4)
    char var_a0_1 = *(arg1 + 0xda)
    int128_t var_88_1 = zx.o(0)
    uint32_t var_78_1[0x4] = temp0_1
    char var_68_1 = 0
    
    if (r8_1.d s<= 0)
    label_141e3e8cb:
        rbx_1 = (r8_1 - 1).d
    else
        int64_t rcx_8 = 0
        uint32_t (* rax_9)[0x4] = *(arg1 + 0xb8) + 4
        
        while (true)
            uint32_t zmm0_1[0x4] = *rax_9
            
            if (zmm1_1[0] f< zmm0_1[0])
                break
            
            rbx_1 += 1
            zmm1_1[0] = zmm1_1[0] f- zmm0_1[0]
            rcx_8 += 1
            rax_9 = &rax_9[3]
            
            if (rcx_8 s>= r8_1)
                goto label_141e3e8cb
    
    if (rbx_1 != 0xffffffff)
        void*** rax_10
        int64_t r9_1
        rax_10, r9_1 = sub_141f88540()
        int64_t* rax_11 = sub_1405f89a0(rax_10)
        r9_1.b = rbx_1 == 0
        int64_t* i_2 = (*(*rax_11 + 0xb0))(rax_11, arg1, 0, r9_1)
        int64_t* i_1 = i_2
        
        if (i_2 != 0)
            int64_t* rcx_11 = i_2[0xc]
            int64_t r9_2 = *rcx_11
            (*(r9_2 + 0x268))(rcx_11, i_2, arg3, r9_2)
            
            if (rbx_1 != 0)
                int64_t r9_3
                r9_3.b = 1
                i_1 = (*(*rax_11 + 0xb0))(rax_11, arg1, zx.q(rbx_1), r9_3)
            
            float zmm0_2 = *(r13 + 4) - (*(arg1 + 0xb8))[sx.q(rbx_1) * 0xc]
            
            if (i_1 == 0)
                int32_t r13_1 = *(arg1 + 0xc0)
                uint64_t rdi_3 = zx.q(rbx_1)
                int32_t rax_14 = r13_1 - 1
                
                do
                    rdi_3 = sx.q(mods.dp.d(sx.q(rax_14 + rdi_3.d), r13_1))
                    
                    if (rdi_3.d == rbx_1)
                        goto label_141e3eb28
                    
                    i_1 = (*(*rax_11 + 0xb0))(rax_11, arg1, zx.q(rdi_3.d), 0)
                    zmm0_2 = *(*(arg1 + 0xb8) + rdi_3 * 0x30 + 4)
                    rax_14 = r13_1 - 1
                while (i_1 == 0)
                
                r13 = arg4
            
            if (i_1[1].d != 0)
                char var_e8 = *r13
                float var_e4_1 = zmm0_2
                int64_t var_e0
                __builtin_memset(&var_e0, 0, 0x20)
                int32_t r8_5 = 0
                int64_t var_d8
                int64_t var_d0
                
                if (&var_d0 != &r13[0x18])
                    uint32_t count = *(r13 + 0x20)
                    int64_t r15_2 = *(r13 + 0x18)
                    int64_t var_c8
                    var_c8.d = count
                    
                    if (count != 0)
                        sub_1405da9e0(&var_d0, count, 0)
                        memcpy(var_d0, r15_2, count)
                        r8_5 = var_d8:4.d
                
                if (&var_e0 != &r13[8])
                    int64_t rbx_2 = sx.q(*(r13 + 0x10))
                    int64_t r15_3 = *(r13 + 8)
                    var_d8.d = rbx_2.d
                    
                    if (rbx_2.d != 0 || r8_5 != 0)
                        sub_1407c3650(&var_e0, rbx_2.d, r8_5)
                        memcpy(var_e0, r15_3, (rbx_2 * 0xc).d)
                    else
                        var_d8:4.d = 0
                
                char* var_f0_1 = &var_a8
                int64_t var_f8_1 = *(arg1 + 0x18)
                sub_141df6aa0(arg2, i_1, &var_e8, *(arg1 + 0x38), 
                    *(*(arg1 + 0xb8) + sx.q(rbx_1) * 0x30 + 4), *(arg1 + 0xac), 0, *(arg1 + 0xb0))
                int64_t rcx_24 = var_d0
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                int64_t rcx_25 = var_e0
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
else
    sub_141e0ba30(arg2)

label_141e3eb28:
int64_t result = sub_140b38680("AnimStreamable_GetAnimationPose", rax_2)
__security_check_cookie(rax_1 ^ &var_138)
return result
