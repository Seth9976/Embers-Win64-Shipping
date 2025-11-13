// 函数: sub_141b9ed80
// 地址: 0x141b9ed80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_548
int64_t rax_1 = __security_cookie ^ &var_548
int64_t* r15 = arg5
int32_t var_514 = 0xffffffff
int32_t rax_3 = *(*arg6 + 8)
int64_t* var_4b0 = r15
int32_t var_518

if (rax_3 == 0)
    var_518 = 0
else
    var_518 = rax_3 - 1

int64_t rax_5 = sx.q(arg4[3].d)
int32_t r8 = *(arg4 + 0x1c)
int64_t var_4f0 = 0
int64_t var_4e8 = 0

if (r8 - rax_5.d s>= 0)
    int32_t r9 = r15[1].d
    int32_t rbx_1 = r9 - 1
    
    if (r9 == 0)
        rbx_1 = 0
    
    int32_t rcx
    
    if (rax_5.d s>= 0)
        rcx = rbx_1
        
        if (rax_5.d s< rbx_1)
            rcx = rax_5.d
    else
        rcx = 0
    
    int64_t r10_1 = sx.q(rcx)
    int64_t rdx_1 = rax_5 + sx.q(r8 - rax_5.d)
    
    if (rdx_1 s< r10_1)
        rbx_1 = rcx
    else if (rdx_1 s< sx.q(rbx_1))
        rbx_1 = rdx_1.d
    
    int16_t* const rax_8
    
    if (r9 == 0)
        rax_8 = &data_142d40450
    else
        rax_8 = *r15
    
    int16_t* r15_1 = &rax_8[r10_1]
    int64_t var_500 = 0
    int32_t rbx_2 = rbx_1 - rcx
    int64_t var_4f8_1 = 0
    int64_t rsi_1 = 0
    int32_t rdi_1 = 0
    int32_t r14_1 = 0
    
    if (r15_1 != 0 && *r15_1 != 0 && rbx_2 s> 0)
        if (rbx_2 + 1 s> 0)
            sub_1405947f0(&var_500, rbx_2 + 1)
            r14_1 = var_4f8_1:4.d
            rdi_1 = var_4f8_1.d
            rsi_1 = var_500
        
        rdi_1 = rdi_1 + 1 + rbx_2
        var_4f8_1.d = rdi_1
        
        if (rdi_1 s> r14_1)
            sub_140594770(&var_500)
            r14_1 = var_4f8_1:4.d
            rdi_1 = var_4f8_1.d
            rsi_1 = var_500
        
        UnDecorator::getReferenceType(rsi_1, r15_1, rbx_2 * 2)
        *(rsi_1 + (sx.q(rdi_1) << 1) - 2) = 0
        int64_t rcx_4 = var_4f0
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    r15 = var_4b0
    var_4f0 = rsi_1
    var_4e8.d = rdi_1
    var_4e8:4.d = r14_1

void var_3a8
int64_t* rax_10 = sub_140aae2f0(&var_3a8, &var_4f0)
void var_390
int64_t* rax_11 = sub_140596d10(&var_390, arg4)
int64_t rdx_7 = *rax_11
*rax_11 = 0
int32_t rcx_7 = rax_11[1].d
int32_t rax_12 = *(rax_11 + 0xc)
rax_11[1] = 0
int64_t var_108 = rdx_7
int32_t var_100 = rcx_7
int32_t var_fc = rax_12
int64_t var_f8
memset(&var_f8, 0, 0x50)
__builtin_memset(&var_f8, 0, 0x2c)
int32_t var_cc = 0x80
int32_t var_c8 = 0xffffffff
int32_t var_c4 = 0
int64_t var_b8 = 0
int32_t var_b0 = 0
int64_t var_a8 = *rax_10
int64_t* rax_14 = rax_10[1]

if (rax_14 != 0)
    rax_14[1].d += 1

int32_t var_98 = rax_10[2].d
int64_t rcx_9 = *rax_11

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* var_3a0

if (var_3a0 != 0)
    var_3a0[1].d -= 1
    
    if (var_3a0[1].d == 1)
        (**var_3a0)(var_3a0)
        int32_t rax_18 = *(var_3a0 + 0xc)
        *(var_3a0 + 0xc) -= 1
        
        if (rax_18 == 1)
            (*(*var_3a0 + 8))(var_3a0, 1)

int64_t rcx_12 = var_4f0

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

void* r14_2 = &arg4[4]
int32_t var_4cc = 1
int32_t r11 = *(r14_2 + 0x28)
void* rsi_2 = r14_2 + 0x10
void* var_468 = r14_2
int32_t rcx_13 = 0
int32_t var_4d0 = 0
int32_t r8_4 = 0
void* var_4c8 = rsi_2
int32_t var_4c0 = 0xffffffff
int64_t var_4bc = 0

if (r11 != 0)
    void* rax_20 = *(rsi_2 + 0x10)
    void* r9_1 = rsi_2
    
    if (rax_20 != 0)
        r9_1 = rax_20
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *r9_1
    
    if (rdx_10 != 0)
    label_141b9f0cd:
        int32_t rax_26 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_26)
        int32_t var_4cc_1 = rax_26
        int32_t var_470_1 = temp0_3
        int32_t rax_27
        
        if (rax_26 == 0)
            rax_27 = 0x20
        else
            rax_27 = 0x1f - temp0_3
        
        var_4bc.d = r8_4 - rax_27 + 0x1f
        
        if (r8_4 - rax_27 + 0x1f s> r11)
            var_4bc.d = r11
    else
        while (true)
            int64_t rax_23 = sx.q(rcx_13)
            r8_4 += 0x20
            rcx_13 += 1
            var_4bc:4.d = r8_4
            var_4d0 = rcx_13
            
            if (rax_23.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_10 = *(r9_1 + (rax_23 << 2) + 4)
            int32_t var_4c0_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141b9f0cd
        
        var_4bc.d = r11

int32_t rdx_11 = *(r14_2 + 0x28)
int32_t var_47c = rdx_11
int32_t rdi_4 = 0xffffffff << (rdx_11.b & 0x1f)
int128_t var_3c8 = var_4d0.o
int32_t r8_7 = rdx_11 s>> 5
int32_t rcx_18 = rdx_11 & 0xffffffe0
int32_t var_490 = r8_7
int32_t var_480 = rdi_4
int32_t var_478 = rcx_18
int128_t var_3b8 = 0xffffffff
int64_t var_408 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t var_428 = r14_2.o
int128_t var_418 = var_3c8

if (rdx_11 != r11)
    void* rax_29 = *(rsi_2 + 0x10)
    void* r9_2 = rsi_2
    
    if (rax_29 != 0)
        r9_2 = rax_29
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11 - 1)
    int32_t rdx_15 = *(r9_2 + (sx.q(r8_7) << 2)) & rdi_4
    int32_t var_47c_2
    
    if (rdx_15 != 0)
    label_141b9f1b9:
        int32_t rax_36 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_2
        int32_t temp0_5
        temp0_5, rflags_2 = _bit_scan_reverse(rax_36)
        int32_t var_46c_1 = temp0_5
        int32_t rbx_5
        
        if (rax_36 == 0)
            rbx_5 = 0x20
        else
            rbx_5 = 0x1f - temp0_5
        
        int32_t var_47c_1 = rcx_18 - rbx_5 + 0x1f
        
        if (rcx_18 - rbx_5 + 0x1f s> r11)
            var_47c_2 = r11
    else
        while (true)
            int64_t rax_33 = sx.q(r8_7)
            rcx_18 += 0x20
            r8_7 += 1
            int32_t var_478_1 = rcx_18
            int32_t var_490_1 = r8_7
            
            if (rax_33.d s>= ((temp4_1 & 0x1f) + temp5_1) s>> 5)
                break
            
            rdx_15 = *(r9_2 + (rax_33 << 2) + 4)
            var_480 = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_141b9f1b9
        
        var_47c_2 = r11

while (true)
    int64_t rcx_20 = sx.q(var_418:0xc.d)
    int64_t rax_38 = var_428.q
    
    if (rcx_20.d == (var_480.q u>> 0x20).d && var_418.q == rsi_2 && rax_38 == r14_2)
        void* rdi_7 = arg1[1]
        int64_t var_4a0
        (*(*arg1 + 0x18))(arg1, &var_4a0, &var_108, rdi_7 + 0x3d0)
        int64_t* var_498
        int64_t* rbx_11
        void*** rsi_5
        
        if (var_4a0 == 0)
            void** var_378
            sub_140ddd070(&var_378, rdi_7 + 0x3d0)
            (*(*arg1 + 0x20))(arg1, &var_108, &var_378, *arg6)
            void* rcx_50 = *arg6
            int32_t rax_72 = *(rcx_50 + 8)
            
            if (rax_72 == 0)
                int32_t var_514_4 = 0
            else
                int32_t var_514_3 = rax_72 - 1
            
            int64_t* rax_74 = arg6[1]
            void* var_438 = rcx_50
            
            if (rax_74 != 0)
                rax_74[1].d += 1
            
            void*** var_3e0
            void**** rax_75 = sub_140ef7910(&var_3e0, &var_108, &var_438, &var_378, &var_518)
            int64_t* rcx_52 = rax_75[1]
            rsi_5 = *rax_75
            
            if (rcx_52 != 0)
                rcx_52[1].d += 1
            
            rbx_11 = nullptr
            
            if (rcx_52 != 0)
                rbx_11 = rcx_52
            
            int64_t* var_3d8
            
            if (var_3d8 != 0)
                var_3d8[1].d -= 1
                
                if (var_3d8[1].d == 1)
                    (**var_3d8)(var_3d8)
                    int32_t temp10_1 = *(var_3d8 + 0xc)
                    *(var_3d8 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*var_3d8 + 8))(var_3d8, 1)
            
            if (rax_74 != 0)
                rax_74[1].d -= 1
                
                if (rax_74[1].d == 1)
                    (**rax_74)(rax_74)
                    int32_t temp12_1 = *(rax_74 + 0xc)
                    *(rax_74 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*rax_74 + 8))(rax_74, 1)
            
            sub_140de06c0(&var_378)
        else
            int64_t* rbx_9 = *arg6
            int32_t rdx_24 = rbx_9[1].d
            int32_t rax_47
            rax_47.b = rdx_24 s<= 0
            int32_t rsi_4 = rdx_24 - 1
            
            if (rdx_24 s<= 0)
                rsi_4 = 0
            
            int32_t rax_49 = rax_47 + 1 + rdx_24
            rbx_9[1].d = rax_49
            
            if (rax_49 s> *(rbx_9 + 0xc))
                sub_140594770(rbx_9)
            
            int64_t rcx_30 = sx.q(rsi_4)
            *(*rbx_9 + (rcx_30 << 1)) = 0x200b
            *(*rbx_9 + (rcx_30 << 1) + 2) = 0
            int32_t rax_53 = *(*arg6 + 8)
            
            if (rax_53 == 0)
                int32_t var_514_2 = 0
            else
                int32_t var_514_1 = rax_53 - 1
            
            void* var_400
            sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_400)
            *(rdi_7 + 0x454)
            int16_t rax_56
            int32_t zmm6_1
            rax_56, zmm6_1 = sub_140da2fa0(var_400, rdi_7 + 0x3d8, 0x3f800000.d)
            int32_t temp0_6 = _mm_min_ss(zmm6_1, 0)
            int64_t rax_57 = var_4a0
            uint128_t zmm1_1
            zmm1_1.d = _mm_cvtepi32_ps(zx.o(sx.d(rax_56))).d f- temp0_6
            
            if (var_498 != 0)
                var_498[1].d += 1
            
            int64_t var_88 = rax_57
            
            if (var_498 != 0)
                var_498[1].d += 1
            
            int16_t var_78_1 = (int.d(zmm1_1.d)).w
            char var_6c_1 = 0
            
            if (var_498 != 0)
                var_498[1].d -= 1
                
                if (var_498[1].d == 1)
                    (**var_498)(var_498)
                    int32_t temp13_1 = *(var_498 + 0xc)
                    *(var_498 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*var_498 + 8))(var_498, 1)
            
            int64_t var_448 = *arg6
            int64_t* rax_61 = arg6[1]
            
            if (rax_61 != 0)
                rax_61[1].d += 1
            
            void*** var_3f0
            void**** rax_62 = sub_140ef7d30(&var_3f0, arg3, &var_108, &var_448, &var_88, &var_518)
            int64_t* rcx_39 = rax_62[1]
            rsi_5 = *rax_62
            
            if (rcx_39 != 0)
                rcx_39[1].d += 1
            
            rbx_11 = nullptr
            
            if (rcx_39 != 0)
                rbx_11 = rcx_39
            
            int64_t* var_3e8
            
            if (var_3e8 != 0)
                var_3e8[1].d -= 1
                
                if (var_3e8[1].d == 1)
                    (**var_3e8)(var_3e8)
                    int32_t temp20_1 = *(var_3e8 + 0xc)
                    *(var_3e8 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        (*(*var_3e8 + 8))(var_3e8, 1)
            
            if (rax_61 != 0)
                rax_61[1].d -= 1
                
                if (rax_61[1].d == 1)
                    (**rax_61)(rax_61)
                    int32_t temp22_1 = *(rax_61 + 0xc)
                    *(rax_61 + 0xc) -= 1
                    
                    if (temp22_1 == 1)
                        (*(*rax_61 + 8))(rax_61, 1)
            
            char var_6c_2 = 0
            
            if (var_498 != 0)
                var_498[1].d -= 1
                
                if (var_498[1].d == 1)
                    (**var_498)(var_498)
                    int32_t temp24_1 = *(var_498 + 0xc)
                    *(var_498 + 0xc) -= 1
                    
                    if (temp24_1 == 1)
                        (*(*var_498 + 8))(var_498, 1)
            
            int64_t* var_3f8
            
            if (var_3f8 != 0)
                var_3f8[1].d -= 1
                
                if (var_3f8[1].d == 1)
                    (**var_3f8)(var_3f8)
                    int32_t temp25_1 = *(var_3f8 + 0xc)
                    *(var_3f8 + 0xc) -= 1
                    
                    if (temp25_1 == 1)
                        (*(*var_3f8 + 8))(var_3f8, 1)
        
        *arg2 = rsi_5
        arg2[1] = rbx_11
        
        if (rbx_11 != 0)
            rbx_11[1].d += 1
        
        if (var_498 != 0)
            var_498[1].d -= 1
            
            if (var_498[1].d == 1)
                (**var_498)(var_498)
                int32_t temp16_1 = *(var_498 + 0xc)
                *(var_498 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_498 + 8))(var_498, 1)
        
        if (rbx_11 != 0)
            rbx_11[1].d -= 1
            
            if (rbx_11[1].d == 1)
                (**rbx_11)(rbx_11)
                int32_t temp18_1 = *(rbx_11 + 0xc)
                *(rbx_11 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*rbx_11 + 8))(rbx_11, 1)
        
        if (rax_14 != 0)
            rax_14[1].d -= 1
            
            if (rax_14[1].d == 1)
                (**rax_14)(rax_14)
                int32_t rdi_15 = *(rax_14 + 0xc)
                *(rax_14 + 0xc) -= 1
                
                if (rdi_15 == 1)
                    (*(*rax_14 + 8))(rax_14, zx.q(rdi_15))
        
        int32_t var_b0_1 = 0
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
        
        sub_1405e1b50(&var_f8, 0)
        int64_t var_d8
        
        if (var_d8 != 0)
            sub_140a74f90(var_d8)
        
        int64_t rcx_67 = var_f8
        
        if (rcx_67 != 0)
            sub_140a74f90(rcx_67)
        
        int64_t rcx_68 = var_108
        
        if (rcx_68 != 0)
            sub_140a74f90(rcx_68)
        
        __security_check_cookie(rax_1 ^ &var_548)
        return arg2
    
    int64_t var_4e0 = 0
    int64_t* r14_5 = (rcx_20 << 5) + *rax_38
    int64_t var_4d8_1 = 0
    int64_t rax_39 = sx.q(r14_5[2].d)
    int32_t r8_8 = *(r14_5 + 0x14)
    
    if (r8_8 - rax_39.d s>= 0)
        int32_t r9_3 = r15[1].d
        int32_t rbx_6 = r9_3 - 1
        
        if (r9_3 == 0)
            rbx_6 = 0
        
        int32_t rcx_21
        
        if (rax_39.d s>= 0)
            rcx_21 = rbx_6
            
            if (rax_39.d s< rbx_6)
                rcx_21 = rax_39.d
        else
            rcx_21 = 0
        
        int64_t r10_6 = sx.q(rcx_21)
        int64_t rdx_18 = rax_39 + sx.q(r8_8 - rax_39.d)
        
        if (rdx_18 s< r10_6)
            rbx_6 = rcx_21
        else if (rdx_18 s< sx.q(rbx_6))
            rbx_6 = rdx_18.d
        
        int16_t* const rax_42
        
        if (r9_3 == 0)
            rax_42 = &data_142d40450
        else
            rax_42 = *r15
        
        int32_t r15_2 = 0
        int16_t* r12_1 = &rax_42[r10_6]
        int32_t rbx_7 = rbx_6 - rcx_21
        int64_t var_510 = 0
        int64_t var_508_1 = 0
        int64_t rsi_3 = 0
        int32_t rdi_5 = 0
        
        if (r12_1 != 0 && *r12_1 != 0 && rbx_7 s> 0)
            if (rbx_7 + 1 s> 0)
                sub_1405947f0(&var_510, rbx_7 + 1)
                r15_2 = var_508_1:4.d
                rdi_5 = var_508_1.d
                rsi_3 = var_510
            
            rdi_5 += rbx_7 + 1
            var_508_1.d = rdi_5
            
            if (rdi_5 s> r15_2)
                sub_140594770(&var_510)
                r15_2 = var_508_1:4.d
                rdi_5 = var_508_1.d
                rsi_3 = var_510
            
            UnDecorator::getReferenceType(rsi_3, r12_1, rbx_7 * 2)
            *(rsi_3 + (sx.q(rdi_5) << 1) - 2) = 0
        
        var_4e0 = rsi_3
        rsi_2 = var_4c8
        var_510 = 0
        var_4d8_1.d = rdi_5
        var_4d8_1:4.d = r15_2
        int64_t var_508_2 = 0
    
    sub_140917df0(&var_f8, r14_5, &var_4e0)
    int64_t rcx_26 = var_4e0
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    var_418:8.d &= not.d(var_428:0xc.d)
    sub_14059bdd0(&var_428:8)
    r15 = var_4b0
    r14_2 = var_468
