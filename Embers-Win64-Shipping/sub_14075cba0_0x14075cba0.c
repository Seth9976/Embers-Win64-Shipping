// 函数: sub_14075cba0
// 地址: 0x14075cba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = 0
int64_t* rdi = arg4
*arg2 = 0
arg2[1] = 0
int16_t* rdx

if (arg3[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg3

int64_t arg_18
sub_140b58260(&arg_18, rdx, 1)
void* rax = *(arg1 + 0x528)

if (rax == 0)
    return arg2

int64_t* r12 = *(rax + 0xa0)
void* rax_3 = &r12[sx.q(*(rax + 0xa8)) * 2]
int64_t* arg_10 = r12

if (r12 == rax_3)
    return arg2

do
    void var_78
    
    if (*sub_1407fb330(sub_1407ef9c0(*r12), &var_78) == arg_18)
        uint64_t i_6 = zx.q(*(*(*(*r12 + 0x778) + 0x98) + 0xb0))
        int32_t rax_8 = arg2[1].d
        
        if (i_6.d s> rax_8)
            arg2[1].d = i_6.d
            
            if (i_6.d s> *(arg2 + 0xc))
                sub_140638a00(arg2)
        else if (i_6.d s< rax_8 && i_6.d != rax_8)
            arg2[1].d = i_6.d
            sub_140775970(arg2)
        
        int16_t* rdx_3
        
        if (rdi[1].d == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *rdi
        
        int64_t var_128
        sub_140b58260(&var_128, rdx_3, 1)
        int64_t var_118 = var_128
        int64_t var_110_1 = data_14396f0c8
        int16_t var_108_1 = data_14396f0d0
        int32_t var_106_1 = 0xffffffff
        int64_t var_100_1 = 0
        int64_t var_f8_1 = 0
        int64_t* rbx_2 = *(*r12 + 0x778)
        void var_70
        int64_t* rax_13 = sub_140745220(&var_70, &var_118)
        int64_t var_d0_1 = data_14396f0d8
        int16_t var_c8_1 = data_14396f0e0
        int64_t var_d8 = 0
        int32_t var_c6_1 = 0xffffffff
        int64_t var_c0_1 = 0
        int64_t var_b8_1 = 0
        sub_140747710(&var_d8, rax_13)
        int32_t* rax_14 = sub_1408011e0(rbx_2, rax_13)
        int64_t rcx_12 = rax_13[3]
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        void* r8 = rbx_2[0x13]
        int64_t r9 = 0
        int64_t r13_3 = 0
        float zmm0_1[0x4] = zx.o(0)
        int64_t rbx_6
        void* rdi_4
        
        if (rax_14 == 0 || r8 == 0)
            rdi_4 = zmm0_1[0].q
            rbx_6 = zmm0_1[2].q
        else
            int32_t rcx_13 = *rax_14
            int32_t rdx_7 = *(r8 + 0xb8)
            int64_t r8_1 = *(r8 + 0x18)
            r15 = zx.q(rcx_13 * rdx_7) + r8_1
            r9 = r15
            r13_3 = r15
            rdi_4 = zx.q((rcx_13 + 1) * rdx_7) + r8_1
            rbx_6 = zx.q((rcx_13 + 2) * rdx_7) + r8_1
        
        if (var_100_1 != 0)
            sub_140a74f90(var_100_1)
            r9 = r13_3
        
        if (r9 != 0 && rdi_4 != 0 && rbx_6 != 0)
            uint32_t r13_4 = 0
            uint64_t r9_1 = 0
            int64_t zmm1_1
            
            if (i_6.d s>= 4)
                void* rdx_8 = rdi_4 + 4
                void* r10_2 = r15 - rdi_4
                void* r11_2 = rbx_6 - rdi_4
                int64_t r8_2 = 0
                uint64_t rax_17 = zx.q(((i_6 - 4).d u>> 2) + 1)
                uint64_t i_5 = zx.q(rax_17.d)
                r13_4 = (rax_17 << 2).d
                r9_1 = rax_17 << 2
                uint64_t i
                
                do
                    zmm0_1 = *(r11_2 + rdx_8 - 4)
                    r8_2 += 0x30
                    zmm1_1 = *(rdx_8 - 4)
                    rdx_8 += 0x10
                    int64_t rcx_15 = *arg2
                    float var_130_1 = zmm0_1[0]
                    *(rcx_15 + r8_2 - 0x30) = (_mm_unpacklo_ps(*(r10_2 + rdx_8 - 0x14), zmm1_1)).q
                    *(rcx_15 + r8_2 - 0x28) = var_130_1
                    int64_t rcx_16 = *arg2
                    float var_130_2 = (*(r11_2 + rdx_8 - 0x10))[0]
                    *(rcx_16 + r8_2 - 0x24) =
                        (_mm_unpacklo_ps(*(r10_2 + rdx_8 - 0x10), *(rdx_8 - 0x10))).q
                    *(rcx_16 + r8_2 - 0x1c) = var_130_2
                    int64_t rcx_17 = *arg2
                    float var_130_3 = (*(r11_2 + rdx_8 - 0xc))[0]
                    *(r8_2 + rcx_17 - 0x18) =
                        (_mm_unpacklo_ps(*(r10_2 + rdx_8 - 0xc), *(rdx_8 - 0xc))).q
                    *(r8_2 + rcx_17 - 0x10) = var_130_3
                    int64_t rcx_18 = *arg2
                    float var_130_4 = (*(r11_2 + rdx_8 - 8))[0]
                    *(r8_2 + rcx_18 - 0xc) = (_mm_unpacklo_ps(*(r10_2 + rdx_8 - 8), *(rdx_8 - 8))).q
                    *(r8_2 + rcx_18 - 4) = var_130_4
                    i = i_5
                    i_5 -= 1
                while (i != 1)
                r12 = arg_10
            
            if (r13_4 s< i_6.d)
                uint64_t r8_4 = r9_1 * 0xc
                int64_t* rdx_9 = rdi_4 + (r9_1 << 2)
                uint64_t i_4 = zx.q(i_6.d - r13_4)
                uint64_t i_1
                
                do
                    zmm0_1 = *(rdx_9 + rbx_6 - rdi_4)
                    r8_4 += 0xc
                    zmm1_1 = *rdx_9
                    rdx_9 += 4
                    int64_t rcx_19 = *arg2
                    float var_130_5 = zmm0_1[0]
                    *(r8_4 + rcx_19 - 0xc) = (_mm_unpacklo_ps(*(rdx_9 + r15 - rdi_4 - 4), zmm1_1)).q
                    *(r8_4 + rcx_19 - 4) = var_130_5
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            r15 = 0
        else if (i_6.d s<= 0)
            r15 = 0
        else
            r15 = 0
            uint64_t i_3 = i_6
            int64_t rdx_10 = 0
            uint64_t i_2
            
            do
                int64_t rcx_21 = *arg2
                rdx_10 += 0xc
                *(rdx_10 + rcx_21 - 0xc) = data_143dbb1f8.q
                *(rdx_10 + rcx_21 - 4) = data_143dbb200
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        if (var_c0_1 != 0)
            sub_140a74f90(var_c0_1)
        
        rdi = arg4
    
    r12 = &r12[2]
    arg_10 = r12
while (r12 != rax_3)

return arg2
