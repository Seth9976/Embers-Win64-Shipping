// 函数: sub_1412e5570
// 地址: 0x1412e5570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t result = __security_cookie ^ &var_c8
uint64_t result_1 = result
int64_t* r13 = arg3
int64_t i_3 = sx.q(arg3[1].d)
int64_t r15 = data_143e8ea78
int64_t rcx
int64_t* rbx

if (data_143de5480 == 0)
    rbx = nullptr
    rcx = 0
else
    result = GetCurrentThreadId()
    rbx = nullptr
    rcx.b = result.d != data_143de5470

int32_t temp0 = *(r15 + (rcx << 2))
int64_t i_2 = i_3
float var_a8
float zmm1
float zmm2

if (temp0 != 1)
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    void* var_58_1 = nullptr
    int32_t var_50_1 = 0
    sub_1412950a0(&var_98, 0x100)
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(0x88)
    int32_t rax_22
    
    if (temp0 == 1)
        rax_22 = 0x20
    else
        rax_22 = 0x1f - temp0_2
    
    int32_t rax_24 = rax_22 << 0x1a s>> 0x1f
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(0x87)
    char rdx_20
    
    if (rax_24 == 0)
        rdx_20 = 0x20
    else
        rdx_20 = 0x1f - temp0_3
    
    int32_t r8_3 = var_50_1
    int32_t rax_26 = 1 << ((0x20 - rdx_20) & (not.d(rax_24)).b)
    
    if (r8_3 == 0 || r8_3 s< rax_26)
        var_50_1 = rax_26
        sub_14128e340(&var_98)
        r8_3 = var_50_1
    
    int64_t var_90
    
    if (i_3.d s> 0)
        int128_t zmm6
        int128_t var_38_1 = zmm6
        int64_t* rdi = nullptr
        int64_t i_4 = i_2
        void var_60
        float zmm0_1
        
        while (true)
            int64_t rdx_21 = *r13
            zmm6 = zx.o(0)
            int64_t rax_27 = sx.q(*(rdi + rdx_21 + 0x14))
            
            if (rax_27.d s< arg2[1].d)
                int64_t rcx_21 = rax_27 * 5
                int64_t rax_28 = *arg2
                zmm2 = *(rax_28 + (rcx_21 << 3) + 4) - arg1[1]
                zmm1 = *(rax_28 + (rcx_21 << 3)) - *arg1
                zmm0_1 = *(rax_28 + (rcx_21 << 3) + 8) - arg1[2]
                zmm6 = _mm_sqrt_ss(zx.o(0).d, zmm2 * zmm2 + zmm1 * zmm1 + zmm0_1 * zmm0_1)
            
            int64_t r9_10 = sx.q(*(*(rdi + rdx_21) + 0xc0))
            var_a8 = r9_10.d
            float* rax_34
            
            if (var_90.d == var_64_1)
            labelid_3d:
                rax_34 = sub_141251b00(&var_98, r9_10.d, &var_a8)
            else
                void* rcx_22 = &var_60
                
                if (var_58_1 != 0)
                    rcx_22 = var_58_1
                
                int32_t rax_33 = *(rcx_22 + ((sx.q(r8_3 - 1) & r9_10) << 2))
                
                if (rax_33 == 0xffffffff)
                label_1412e58f0:
                    rax_34 = sub_141251b00(&var_98, r9_10.d, &var_a8)
                else
                    int64_t rdx_24 = var_98
                    int64_t rcx_24
                    
                    while (true)
                        rcx_24 = sx.q(rax_33) * 2
                        
                        if (*(rdx_24 + (rcx_24 << 3)) == r9_10.d)
                            break
                        
                        rax_33 = *(rdx_24 + (rcx_24 << 3) + 8)
                        
                        if (rax_33 == 0xffffffff)
                            goto label_1412e58f0_2
                    
                    if (rax_33 == 0xffffffff)
                    label_1412e58f0_1:
                        rax_34 = sub_141251b00(&var_98, r9_10.d, &var_a8)
                    else
                        void* rax_35 = rdx_24 + (rcx_24 << 3)
                        
                        if (rax_35 == 0)
                        label_1412e58f0_2:
                            rax_34 = sub_141251b00(&var_98, r9_10.d, &var_a8)
                        else
                            rax_34 = rax_35 + 4
            
            rdi = &rdi[5]
            *rax_34 = _mm_max_ss(*rax_34, zmm6.d)
            int64_t i_5 = i_4
            i_4 -= 1
            
            if (i_5 == 1)
                break
            
            r8_3 = var_50_1
        
        int64_t* r10_2 = nullptr
        int64_t i
        
        do
            int64_t rdi_1 = *r13
            zmm1 = (zx.o(0)).d
            int64_t rax_36 = sx.q(*(r10_2 + rdi_1 + 0x14))
            char r15_1 = *(r10_2 + rdi_1 + 8) & 1
            uint8_t r9_11 = *(r10_2 + rdi_1 + 8) u>> 1 & 1
            
            if (rax_36.d s< arg2[1].d)
                int64_t rcx_26 = rax_36 * 5
                int64_t rax_37 = *arg2
                zmm1 = *(rax_37 + (rcx_26 << 3)) - *arg1
                zmm2 = *(rax_37 + (rcx_26 << 3) + 4) - arg1[1]
                zmm0_1 = *(rax_37 + (rcx_26 << 3) + 8) - arg1[2]
                
                if (262144f f< *(rax_37 + (rcx_26 << 3) + 0x18))
                    r9_11 = 1
                
                zmm1 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0_1 * zmm0_1)
            
            void* r13_1 = *(r10_2 + rdi_1)
            int64_t r11_2 = sx.q(*(r13_1 + 0xc0))
            
            if (var_90.d == var_64_1)
            labelid_23:
                zmm0_1 = (zx.o(0)).d
            else
                void* rcx_27 = &var_60
                
                if (var_58_1 != 0)
                    rcx_27 = var_58_1
                
                int32_t rax_42 = *(rcx_27 + ((sx.q(var_50_1 - 1) & r11_2) << 2))
                
                if (rax_42 == 0xffffffff)
                label_1412e5a1d:
                    zmm0_1 = (zx.o(0)).d
                else
                    int64_t r8_5 = var_98
                    int64_t rdx_28
                    
                    while (true)
                        rdx_28 = sx.q(rax_42)
                        int64_t rcx_29 = rdx_28 * 2
                        
                        if (*(r8_5 + (rcx_29 << 3)) == r11_2.d)
                            break
                        
                        rax_42 = *(r8_5 + (rcx_29 << 3) + 8)
                        
                        if (rax_42 == 0xffffffff)
                            goto label_1412e5a1d_2
                    
                    if (rax_42 == 0xffffffff)
                    label_1412e5a1d_1:
                        zmm0_1 = (zx.o(0)).d
                    else
                        int64_t rdx_38 = rdx_28 << 4
                        
                        if (rdx_38 == neg.q(r8_5))
                        label_1412e5a1d_2:
                            zmm0_1 = (zx.o(0)).d
                        else
                            zmm0_1 = *(rdx_38 + r8_5 + 4)
            
            int32_t r8_14 = *(r10_2 + rdi_1 + 0x1c)
            
            if (r8_14 s< 0)
                uint32_t rcx_31 = (*(r13_1 + 0xb8) u>> 4).d
                int32_t rdx_30 = (0x9e3779b9 - rcx_31) ^ rcx_31 << 8
                int32_t r8_8 = neg.d(rdx_30 + rcx_31) ^ rdx_30 u>> 0xd
                int32_t rcx_34 = (rcx_31 - rdx_30 - r8_8) ^ r8_8 u>> 0xc
                int32_t rdx_33 = (rdx_30 - rcx_34 - r8_8) ^ rcx_34 << 0x10
                int32_t r8_11 = (r8_8 - rdx_33 - rcx_34) ^ rdx_33 u>> 5
                int32_t rcx_37 = (rcx_34 - rdx_33 - r8_11) ^ r8_11 u>> 3
                int32_t rdx_36 = (rdx_33 - rcx_37 - r8_11) ^ rcx_37 << 0xa
                r8_14 = (r8_11 - rdx_36 - rcx_37) ^ rdx_36 u>> 0xf
            
            r13 = arg3
            zmm1 = _mm_min_ss(zmm1, 0x49800000) * 0.0156240463f
            var_a8 = zmm0_1 * 9.53674316e-07f
            uint64_t rcx_48 = ((
                (((zx.q(r15_1) * 2) | zx.q(r9_11)) << 0x1c | (zx.q(r11_2.d) & 0xfffff)) << 3
                | (zx.q(var_a8) & 0x7f800000)) << 0x11 | (zx.q(r8_14) & 0xfffff)) << 0xe
                | (zx.q(int.d(zmm1)) & 0x3fff)
            *(r10_2 + rdi_1 + 8) = rcx_48
            r10_2 = &r10_2[5]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    bool cond:6_1 = var_90:4.d == 0
    var_90.d = 0
    
    if (not(cond:6_1))
        sub_1405a5410(&var_98, 0)
    
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    int64_t var_88
    result = sub_14059a8e0(&var_88, 0)
    int64_t var_78
    
    if (var_78 != 0)
        result = sub_140a74f90(var_78)
    
    int64_t rcx_53 = var_98
    
    if (rcx_53 != 0)
        result = sub_140a74f90(rcx_53)
else if (i_3.d s> 0)
    int64_t i_1
    
    do
        int64_t r10_1 = *r13
        int32_t zmm0 = (zx.o(0)).d
        int64_t rax_1 = sx.q(*(rbx + r10_1 + 0x14))
        uint8_t r8 = *(rbx + r10_1 + 8) u>> 1 & 1
        
        if (rax_1.d s< arg2[1].d)
            int64_t rcx_1 = rax_1 * 5
            int64_t rax_2 = *arg2
            zmm0 = *(rax_2 + (rcx_1 << 3) + 8) f- arg1[2]
            zmm2 = *(rax_2 + (rcx_1 << 3) + 4) - arg1[1]
            zmm1 = *(rax_2 + (rcx_1 << 3)) - *arg1
            
            if (262144f f< *(rax_2 + (rcx_1 << 3) + 0x18))
                r8 = 1
            
            zmm0 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 f+ zmm0 f* zmm0)
        
        void* rcx_2 = *(rbx + r10_1)
        int32_t r9_1 = *(rbx + r10_1 + 0x1c)
        int32_t r11_1 = *(rcx_2 + 0xc0)
        
        if (r9_1 s< 0)
            uint32_t rcx_4 = (*(rcx_2 + 0xb8) u>> 4).d
            int32_t rdx_1 = (0x9e3779b9 - rcx_4) ^ rcx_4 << 8
            int32_t r9_4 = neg.d(rdx_1 + rcx_4) ^ rdx_1 u>> 0xd
            int32_t rcx_7 = (rcx_4 - rdx_1 - r9_4) ^ r9_4 u>> 0xc
            int32_t rdx_4 = (rdx_1 - rcx_7 - r9_4) ^ rcx_7 << 0x10
            int32_t r9_7 = (r9_4 - rdx_4 - rcx_7) ^ rdx_4 u>> 5
            int32_t rcx_10 = (rcx_7 - rdx_4 - r9_7) ^ r9_7 u>> 3
            int32_t rdx_7 = (rdx_4 - rcx_10 - r9_7) ^ rcx_10 << 0xa
            r9_1 = (r9_7 - rdx_7 - rcx_10) ^ rdx_7 u>> 0xf
        
        var_a8 = zmm0
        float rax_17 = var_a8
        result = zx.q(r9_1) & 0x7ffffff
        *(rbx + r10_1 + 8) = (((((zx.q(neg.d(rax_17 u>> 0x1f)) & 0xfffffffffffe0000) | 0x80000000)
            ^ (zx.q(rax_17) & 0xfffffffffffe0000))
            | ((zx.q(*(rbx + r10_1 + 8)) * 2) | zx.q(r8)) << 0x20) << 3 | (zx.q(r11_1) & 0xfffff))
            << 0x1b | result
        rbx = &rbx[5]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
__security_check_cookie(result_1 ^ &var_c8)
return result
