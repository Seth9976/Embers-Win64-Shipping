// 函数: sub_1417a9e40
// 地址: 0x1417a9e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* result_2 = *(arg4 + 0x18)
int64_t* result_4 = result_2
float (* var_178)[0x4] = arg6
int32_t var_1c8 = arg2
int64_t* result_1 = result_2

if (result_2 == 0)
    void* rcx = *arg1
    int16_t var_1c0
    int16_t* var_1d8_1 = &var_1c0
    var_1c0 = result_2.w
    char var_1be_1 = result_2.b
    int64_t var_c0
    result_2 = **sub_1417ab2e0(rcx, &var_c0, (result_2 + 1).d, 0, var_1d8_1)
    int64_t rcx_2 = var_c0
    result_4 = result_2
    result_1 = result_2
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

sub_1417ab680(*arg1, result_2)
sub_1417adc20(*arg1, result_2, nullptr)
*(*(*result_4 + 0x338) + (sx.q(result_4[1].d) << 2)) = 0x7fffffff
void var_168
sub_140946410(&arg1[2], &var_168, &result_1, nullptr)
void* rax_6 = *result_4
int64_t rcx_7 = sx.q(result_4[1].d)
int64_t var_1a8 = 0
*(rcx_7 + *(rax_6 + 0x470)) = 0
int32_t var_1a0 = arg3[1].d
*(*(*result_4 + 0x428) + sx.q(result_4[1].d) * 0x10) = var_1a8.o
*(*(*result_4 + 0x458) + (sx.q(result_4[1].d) << 2)) = arg2
*(*(*result_4 + 0x4e8) + (sx.q(result_4[1].d) << 2)) = 0
void var_164

if (*sub_1405ba560(&arg1[0x2e], &var_164, result_2) == 0xffffffff)
    int64_t* result_3 = result_2
    int64_t** var_f0 = &result_3
    int64_t* var_e8_1 = arg3
    void var_160
    sub_14178d9d0(&arg1[0x2e], &var_160, &var_f0, nullptr)
else
    int32_t var_1b0
    sub_1405ba560(&arg1[0x2e], &var_1b0, result_2)
    int64_t rax_13 = sx.q(var_1b0)
    void* const rcx_15
    
    if (rax_13.d == 0xffffffff)
        rcx_15 = nullptr
    else
        rcx_15 = (rax_13 << 5) + arg1[0x2e]
    
    if (rcx_15 + 8 != arg3)
        int64_t rcx_16 = *(rcx_15 + 8)
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        *(rcx_15 + 8) = *arg3
        *arg3 = 0
        *(rcx_15 + 0x10) = arg3[1].d
        *(rcx_15 + 0x14) = *(arg3 + 0xc)
        arg3[1] = 0

int32_t var_1ac
sub_1405ba560(&arg1[0x2e], &var_1ac, result_2)
int64_t rax_17 = sx.q(var_1ac)
void* const rdx_15
int64_t* rdi_1

if (rax_17.d == 0xffffffff)
    rdi_1 = nullptr
    rdx_15 = nullptr
else
    rdx_15 = (rax_17 << 5) + arg1[0x2e]
    rdi_1 = nullptr

int64_t var_a8 = 0
int32_t var_78 = 0xffffffff
int32_t var_a0 = 0
int32_t var_7c = 0x80
int64_t var_98
__builtin_memset(&var_98, 0, 0x1c)
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
sub_14178c060(&var_a8, rdx_15 + 8)
sub_1417ac030(*arg1, &var_a8)
int64_t* var_190 = &var_98
int32_t rcx_20 = 0
int32_t var_198 = 0
int32_t var_188 = 0xffffffff
void* r13
r13.b = 1
int32_t var_194 = 1
int32_t r8_6 = 0
int64_t var_184 = 0
int64_t* var_88
int32_t var_80

if (var_80 != 0)
    int64_t* r10_1 = &var_98
    
    if (var_88 != 0)
        r10_1 = var_88
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(var_80 - 1)
    int32_t rdx_20 = *r10_1
    
    if (rdx_20 != 0)
    label_1417aa14a:
        int32_t rax_25 = neg.d(rdx_20) & rdx_20
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_25)
        int32_t var_194_1 = rax_25
        int32_t var_15c_1 = temp0_1
        int32_t rax_26
        
        if (rax_25 == 0)
            rax_26 = 0x20
        else
            rax_26 = 0x1f - temp0_1
        
        int32_t rax_27 = r8_6 - rax_26 + 0x1f
        
        if (rax_27 s> var_80)
            rax_27 = var_80
        
        var_184.d = rax_27
    else
        while (true)
            int64_t rdx_21 = sx.q(rcx_20)
            r8_6 += 0x20
            rcx_20 += 1
            var_184:4.d = r8_6
            var_198 = rcx_20
            
            if (rdx_21.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_184.d = var_80
                break
            
            rdx_20 = *(r10_1 + (rdx_21 << 2) + 4)
            int32_t var_188_1 = 0xffffffff
            
            if (rdx_20 != 0)
                goto label_1417aa14a
    
    rdi_1 = nullptr

float var_110[0x4] = var_198.o
int128_t var_100 = 0xffffffff
var_110[2] = 0xffffffff << (var_80.b & 0x1f)
var_110[3] = var_80
int64_t r15_1 = var_110[2].q
int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
float var_140[0x4] = (&var_a8).o
int64_t var_120 = temp0_2

while (true)
    int64_t rcx_24 = sx.q(var_110[3])
    int64_t* rax_28 = var_140[0].q
    
    if (rcx_24.d == (r15_1 u>> 0x20).d && var_110[0].q == &var_98 && rax_28 == &var_a8)
        int64_t r15_3 = sx.q(var_1c8)
        
        if (var_a0 != var_74)
            int64_t rdx_39 = sx.q(result_2[1].d)
            void* rax_68 = *result_2
            float temp0_4[0x4] = _mm_cvtepi32_ps(zx.o(var_a0 - var_74))
            int64_t rcx_50 = *(rax_68 + 0x4e8)
            float zmm1[0x4] = *(rcx_50 + (rdx_39 << 2))
            zmm1[0] = zmm1[0] / temp0_4[0]
            *(rcx_50 + (rdx_39 << 2)) = zmm1[0]
        
        sub_14179cf70(result_2, &var_a8, var_178)
        sub_1417ba180(arg1, result_2)
        int64_t var_e0 = *arg5
        void* rax_70 = arg5[1]
        void* var_d8 = rax_70
        
        if (rax_70 != 0)
            *(rax_70 + 8) += 1
            result_2 = result_1
        
        sub_1417b8260(arg1, result_2, &var_a8, &var_e0, arg4)
        void var_158
        
        if (*sub_1405ba560(&arg1[0x2e], &var_158, result_2) != 0xffffffff && *(arg4 + 0xa) != 0)
            int32_t rbx_1 = *(arg4 + 0xc)
            
            if (rbx_1 == 4)
                sub_1417ae480(arg1, result_2)
            else if (rbx_1 != 0)
                if (rbx_1 == 3)
                label_1417aa558:
                    sub_1417b7e10(arg1, result_2, arg4)
                
                if (rbx_1 == 1)
                    sub_1417b7ad0(arg1, result_2)
                else if (rbx_1 - 2 u<= 1)
                    sub_1417ae480(arg1, result_2)
            else
                if (*(*(*result_2 + 0x320) + (sx.q(result_2[1].d) << 3)) != 0)
                    goto label_1417aa558
                
                sub_1417ae480(arg1, result_2)
        
        sub_14177fe50(*result_2, result_2[1].d, r13.b)
        int32_t temp5 = r15_3.d
        
        if (temp5 != 0)
            var_1c8 = r15_3.d
            
            if (temp5 s> 0)
                if (arg1[0x39].d == *(arg1 + 0x1f4))
                label_1417aa604:
                    int32_t* var_d0 = &var_1c8
                    var_1a8 = 0
                    int64_t* var_c8_1 = &var_1a8
                    var_1a0.q = 0
                    sub_14178d4d0(&arg1[0x38], &var_178, &var_d0, nullptr)
                    int64_t rcx_65 = var_1a8
                    
                    if (rcx_65 != 0)
                        sub_140a74f90(rcx_65)
                    
                    r15_3 = zx.q(var_1c8)
                else
                    void* rcx_61 = arg1[0x40]
                    void* r8_27 = &arg1[0x3f]
                    
                    if (rcx_61 != 0)
                        r8_27 = rcx_61
                    
                    int32_t rax_75 = *(r8_27 + (((sx.q(arg1[0x41].d) - 1) & r15_3) << 2))
                    
                    if (rax_75 == 0xffffffff)
                        goto label_1417aa604
                    
                    int64_t rdx_52 = arg1[0x38]
                    
                    while (true)
                        int64_t rcx_63 = sx.q(rax_75) << 5
                        
                        if (*(rcx_63 + rdx_52) == r15_3.d)
                            break
                        
                        rax_75 = *(rcx_63 + rdx_52 + 0x18)
                        
                        if (rax_75 == 0xffffffff)
                            goto label_1417aa604
                    
                    if (rax_75 == 0xffffffff)
                        goto label_1417aa604
                
                int32_t* rdx_59
                
                if (arg1[0x39].d == *(arg1 + 0x1f4))
                label_1417aa69e:
                    rdx_59 = nullptr
                else
                    void* rcx_66 = arg1[0x40]
                    void* r8_29 = &arg1[0x3f]
                    
                    if (rcx_66 != 0)
                        r8_29 = rcx_66
                    
                    int32_t rax_78 = *(r8_29 + (((sx.q(arg1[0x41].d) - 1) & sx.q(r15_3.d)) << 2))
                    
                    if (rax_78 == 0xffffffff)
                    label_1417aa69e_1:
                        rdx_59 = nullptr
                    else
                        while (true)
                            rdx_59 = (sx.q(rax_78) << 5) + arg1[0x38]
                            
                            if (*rdx_59 == r15_3.d)
                                break
                            
                            rax_78 = rdx_59[6]
                            
                            if (rax_78 == 0xffffffff)
                                goto label_1417aa69e_2
                        
                        if (rax_78 == 0xffffffff)
                        label_1417aa69e_2:
                            rdx_59 = nullptr
                
                int64_t rdi_3 = sx.q(rdx_59[4])
                int32_t rax_79 = (rdi_3 + 1).d
                rdx_59[4] = rax_79
                
                if (rax_79 s> rdx_59[5])
                    sub_1405a4d70(&rdx_59[2])
                
                *(*(rdx_59 + 8) + (rdi_3 << 3)) = result_2
        
        int32_t var_60_1 = 0
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        var_a0 = 0
        int32_t var_78_1 = 0xffffffff
        int32_t var_74_1 = 0
        sub_14059a8e0(&var_98, 0)
        
        if (var_88 != 0)
            sub_140a74f90(var_88)
        
        int64_t rcx_72 = var_a8
        
        if (rcx_72 != 0)
            sub_140a74f90(rcx_72)
        
        int64_t* rbx_5 = arg5[1]
        int64_t* result
        
        if (rbx_5 == 0)
            result = result_2
        else
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t r14_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, zx.q(r14_1))
            
            result = result_1
        
        __security_check_cookie(rax_1 ^ &var_1f8)
        return result
    
    char rdx_22 = 0
    int64_t* r9_1 = *(*rax_28 + rcx_24 * 0x10)
    
    if (*(sx.q(r9_1[1].d) + *(*r9_1 + 0x398)) == 1)
        rdx_22 = r13.b
    
    r13 = zx.q(rdx_22)
    
    if (*(r9_1 + 0xc) u>= 3)
        rdi_1 = r9_1
    
    if (rdi_1 != 0)
        if (arg1[3].d != *(arg1 + 0x44))
            void* r10_2 = &arg1[9]
            int64_t r11_2 = sx.q(arg1[0xb].d) - 1
            uint32_t r8_10 = (rdi_1 u>> 4).d
            int32_t rdx_25 = r8_10 << 8 ^ (0x9e3779b9 - r8_10)
            int32_t rcx_29 = neg.d(r8_10 + rdx_25) ^ rdx_25 u>> 0xd
            int32_t r8_13 = (r8_10 - rdx_25 - rcx_29) ^ rcx_29 u>> 0xc
            int32_t rdx_28 = (rdx_25 - r8_13 - rcx_29) ^ r8_13 << 0x10
            int32_t rcx_32 = (rcx_29 - rdx_28 - r8_13) ^ rdx_28 u>> 5
            int32_t r8_16 = (r8_13 - rdx_28 - rcx_32) ^ rcx_32 u>> 3
            int32_t rdx_31 = (rdx_28 - r8_16 - rcx_32) ^ r8_16 << 0xa
            void* rax_46 = arg1[0xa]
            
            if (rax_46 != 0)
                r10_2 = rax_46
            
            int32_t i =
                *(r10_2 + (((sx.q(rcx_32 - rdx_31 - r8_16) ^ zx.q(rdx_31) u>> 0xf) & r11_2) << 2))
            
            if (i != 0xffffffff)
                void* r9_2 = arg1[2]
                
                do
                    int64_t i_1 = sx.q(i)
                    int64_t rax_50 = i_1 * 2
                    
                    if (*(r9_2 + (rax_50 << 3)) == rdi_1)
                        int64_t r8_17 = i_1 * 2
                        int64_t rax_52 = sx.q(*(r9_2 + (r8_17 << 3) + 0xc)) & r11_2
                        void* rcx_38 = r10_2 + (rax_52 << 2)
                        
                        for (int32_t j = *(r10_2 + (rax_52 << 2)); j != 0xffffffff; j = *rcx_38)
                            if (j == i)
                                *rcx_38 = *(r9_2 + (r8_17 << 3) + 8)
                                break
                            
                            rcx_38 = r9_2 + 8 + (sx.q(j) << 4)
                        
                        void* r10_3 = &arg1[4]
                        int32_t r9_3 = rol.d(1, i.b)
                        
                        if (*(arg1 + 0x44) != 0)
                            *(arg1[2] + sx.q(arg1[8].d) * 0x10) = i
                        
                        int64_t rcx_43 = arg1[2]
                        *(rcx_43 + (r8_17 << 3)) = 0xffffffff
                        int32_t rax_57
                        
                        if (*(arg1 + 0x44) s<= 0)
                            rax_57 = -1
                        else
                            rax_57 = arg1[8].d
                        
                        *(rcx_43 + (r8_17 << 3) + 4) = rax_57
                        *(arg1 + 0x44) += 1
                        arg1[8].d = i
                        void* rax_58 = *(r10_3 + 0x10)
                        
                        if (rax_58 != 0)
                            r10_3 = rax_58
                        
                        if (i s< 0)
                            i += 0x1f
                        
                        int64_t rax_59 = sx.q(i s>> 5)
                        *(r10_3 + (rax_59 << 2)) &= not.d(r9_3)
                        break
                    
                    i = *(r9_2 + (rax_50 << 3) + 8)
                while (i != 0xffffffff)
        
        *(*(*rdi_1 + 0x458) + (sx.q(rdi_1[1].d) << 2)) = 0
        *(*(*rdi_1 + 0x428) + sx.q(rdi_1[1].d) * 0x10) = result_2
        int64_t r9_5 = sx.q(result_2[1].d)
        void* r11_3 = *result_2
        int64_t r8_18 = *(r11_3 + 0x4e8)
        float zmm0_1[0x4] = *(*(*rdi_1 + 0x4e8) + (sx.q(rdi_1[1].d) << 2))
        zmm0_1[0] = zmm0_1[0] f+ *(r8_18 + (r9_5 << 2))
        *(r8_18 + (r9_5 << 2)) = zmm0_1[0]
        int64_t r9_6 = sx.q(result_2[1].d)
        int64_t r8_19 = *(r11_3 + 0x4d0)
        *(r8_19 + (r9_6 << 2)) = __maxss_xmmss_memss(
            (*(*(*rdi_1 + 0x4d0) + (sx.q(rdi_1[1].d) << 2)))[0], *(r8_19 + (r9_6 << 2)))[0]
        int64_t r10_4 = sx.q(result_2[1].d)
        int64_t r9_7 = *(r11_3 + 0x338)
        int32_t rax_65 = *(*(*rdi_1 + 0x338) + (sx.q(rdi_1[1].d) << 2))
        
        if (*(r9_7 + (r10_4 << 2)) s< rax_65)
            rax_65 = *(r9_7 + (r10_4 << 2))
        
        *(r9_7 + (r10_4 << 2)) = rax_65
    
    var_110[2] &= not.d(var_140[3])
    sub_14059bdd0(&var_140[2])
    rdi_1 = nullptr
