// 函数: sub_1406cfdd0
// 地址: 0x1406cfdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t r13 = 0
int32_t var_d8 = 0
uint64_t* var_108
int64_t* var_e8 = &var_108
var_108 = nullptr
int32_t rbx = arg1[1].d
int64_t rdi = *arg1
int32_t var_100 = rbx
int32_t var_fc

if (rbx != 0)
    sub_1405a4c70(&var_108, rbx, 0)
    memcpy(var_108, rdi, rbx * 2)
else
    var_fc = 0

int64_t* var_d0
int32_t var_c8
int32_t var_c4

if (sub_140a32ae0(&var_108, &data_142d90624, 1) == 0)
    sub_1406c91f0(&var_d0, &data_142d90624, &var_108)
    r13 = 1
    uint64_t* rcx_4 = var_108
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    var_108 = var_d0
    var_100 = var_c8
    var_fc = var_c4

int16_t* const rsi = &data_142d40450
sub_140a306e0(&var_108, &data_142d90624, &data_142d40450, 1)
int128_t var_98 = zx.o(0)
int64_t var_78 = (zx.o(0)).q
int128_t var_68
__builtin_memset(&var_68, 0, 0x20)
__builtin_memset(&var_98, 0, 0x2c)
var_78:0xc.d = 0x80
int64_t r14 = -1
var_68.d = 0xffffffff
var_68:4.d = 0
int128_t var_58
var_58.q = 0
var_58:8.d = 0
int32_t rdi_1 = var_100

if (rdi_1 == 0)
label_1406d03a6:
    
    if (var_108 == &data_142d90628)
        goto label_1406d03fc
    
    int32_t rdx_15 = 0
    int32_t var_100_2 = 0
    
    if (var_fc != 2)
        sub_1405947f0(&var_108, 2)
        rdx_15 = var_100_2
    
    var_100 = rdx_15 + 2
    
    if (rdx_15 + 2 s> var_fc)
        sub_140594770(&var_108)
    
    *var_108 = 0x44
    goto label_1406d03f0

int64_t** rax_23
int32_t* rcx_32
int32_t* rdx_13
int32_t* r8_13
int64_t zmm3
bool cond:2
int64_t* var_f8
int32_t var_d4
int32_t var_c0
int32_t var_bc
int32_t var_b8
int32_t var_b4
int32_t var_b0
int32_t var_ac

if (rdi_1 - 1 u> 6)
    if (var_108 == u"42069D")
        goto label_1406d03fc
    
    int32_t rdx_14 = 0
    int32_t var_100_1 = 0
    
    if (var_fc != 7)
        sub_1405947f0(&var_108, 7)
        rdx_14 = var_100_1
    
    var_100 = rdx_14 + 7
    
    if (rdx_14 + 7 s> var_fc)
        sub_140594770(&var_108)
    
    uint64_t* rcx_35 = var_108
    *rcx_35 = 0x36003000320034
    rcx_35[1].d = 0x440039
    *(rcx_35 + 0xc) = 0
label_1406d03f0:
    rdi_1 = var_100
label_1406d03fc:
    int32_t rdi_5
    uint64_t* r12_3
    
    if (rdi_1 == 0)
        r12_3 = &data_142d40450
        rdi_5 = 0
    else
        r12_3 = var_108
        rdi_5 = rdi_1 - 1
    
    if (rdi_5 s> 2)
        rdi_5 = 2
    
    int64_t* rbx_6 = nullptr
    var_f8 = nullptr
    int32_t r15_5 = 0
    int32_t var_f0_2 = 0
    int32_t r12_4
    
    if (r12_3 == 0 || *r12_3 == 0 || rdi_5 s<= 0)
        r12_4 = 0
    else
        sub_1405947f0(&var_f8, rdi_5 + 1)
        r15_5 = var_f0_2 + 1 + rdi_5
        
        if (r15_5 s> 0)
            sub_140594770(&var_f8)
        
        rbx_6 = var_f8
        UnDecorator::getReferenceType(rbx_6, r12_3, rdi_5 * 2)
        r12_4 = 0
        *(rbx_6 + (sx.q(r15_5) << 1) - 2) = 0
    
    int64_t* rcx_41 = &data_142d40450
    
    if (r15_5 != 0)
        rcx_41 = rbx_6
    
    var_d4 = sub_140b1ba10(rcx_41)
    
    if (rbx_6 != 0)
        sub_140a74f90(rbx_6)
    
    var_d0 = nullptr
    var_c8.q = 0
    var_d8 = r13 | 0x80 | 0x100
    int32_t rcx_43
    int32_t rbx_7
    int64_t r8_16
    
    if (var_100 == 0)
        rbx_7 = 0
        rcx_43 = 0
        r8_16 = 0
    label_1406d0507:
        
        if (rbx_7 s> 4)
            rbx_7 = 4
    else
        rbx_7 = var_100 - 1
        rcx_43 = rbx_7
        
        if (rbx_7 s> 2)
            rcx_43 = 2
        
        r8_16 = sx.q(rcx_43)
        
        if (rcx_43 s<= 4)
            goto label_1406d0507
        
        rbx_7 = rcx_43
    
    uint64_t* rax_29 = &data_142d40450
    
    if (var_100 != 0)
        rax_29 = var_108
    
    void* rax_30 = rax_29 + (r8_16 << 1)
    var_e8 = rax_30
    int32_t rbx_8 = rbx_7 - rcx_43
    int64_t* rdi_6 = nullptr
    var_f8 = nullptr
    int32_t r15_7 = 0
    int64_t var_f0_3 = 0
    
    if (rax_30 != 0 && *rax_30 != 0 && rbx_8 s> 0)
        sub_1405947f0(&var_f8, rbx_8 + 1)
        r15_7 = var_f0_3.d + 1 + rbx_8
        var_f0_3.d = r15_7
        r12_4 = 0
        
        if (r15_7 s> 0)
            sub_140594770(&var_f8)
            r12_4 = var_f0_3:4.d
            r15_7 = var_f0_3.d
        
        rdi_6 = var_f8
        UnDecorator::getReferenceType(rdi_6, var_e8, rbx_8 * 2)
        *(rdi_6 + (sx.q(r15_7) << 1) - 2) = 0
    
    var_d0 = rdi_6
    int32_t var_c8_1 = r15_7
    int32_t var_c4_1 = r12_4
    int64_t* rcx_47 = &data_142d40450
    
    if (r15_7 != 0)
        rcx_47 = rdi_6
    
    int32_t rax_32 = sub_140b1ba10(rcx_47)
    var_b4 = rax_32
    
    if (rdi_6 != 0)
        sub_140a74f90(rdi_6)
    
    int32_t rcx_50
    uint64_t* rdx_23
    
    if (var_100 == 0)
        rcx_50 = 0
        rdx_23 = &data_142d40450
    else
        rcx_50 = var_100 - 1
        rdx_23 = var_108
    
    int32_t rax_33 = rcx_50
    
    if (rcx_50 s> 2)
        rax_33 = 2
    
    void* rdi_7 = rdx_23 + ((sx.q(rcx_50) - sx.q(rax_33)) << 1)
    int64_t* r15_9 = nullptr
    var_f8 = nullptr
    int32_t rbx_9 = 0
    var_f0_3.d = 0
    int32_t rax_35 = 0
    var_f0_3:4.d = 0
    
    if (rdi_7 != 0 && *rdi_7 != 0)
        do
            r14 += 1
        while (*(rdi_7 + (r14 << 1)) != 0)
        
        if (r14.d + 1 s> 0)
            sub_1405947f0(&var_f8, r14.d + 1)
            rax_35 = var_f0_3:4.d
            rbx_9 = var_f0_3.d
            r15_9 = var_f8
        
        rbx_9 += r14.d + 1
        var_f0_3.d = rbx_9
        
        if (rbx_9 s> rax_35)
            sub_140594770(&var_f8)
            rbx_9 = var_f0_3.d
            r15_9 = var_f8
        
        UnDecorator::getReferenceType(r15_9, rdi_7, (r14.d + 1) * 2)
    
    if (rbx_9 != 0)
        rsi = r15_9
    
    int32_t rax_36 = sub_140b1ba10(rsi)
    var_c0 = rax_36
    
    if (r15_9 != 0)
        sub_140a74f90(r15_9)
    
    var_ac = 0xff
    var_e8.d = 0
    int32_t* rax_37 = &var_e8
    
    if (var_d4 s>= 0)
        rax_37 = &var_d4
    
    r8_13 = &var_ac
    
    if (*rax_37 s<= 0xff)
        r8_13 = rax_37
    
    var_b8 = 0xff
    var_b0 = 0
    int32_t* rax_38 = &var_b0
    
    if (rax_32 s>= 0)
        rax_38 = &var_b4
    
    rdx_13 = &var_b8
    
    if (*rax_38 s<= 0xff)
        rdx_13 = rax_38
    
    var_d8 = 0xff
    var_bc = 0
    rcx_32 = &var_bc
    
    if (rax_36 s>= 0)
        rcx_32 = &var_c0
    
    rax_23 = &var_d8
    cond:2 = *rcx_32 s<= 0xff
    zmm3 = 0x3f70101010101010
else
    switch (rdi_1)
        case 1
            goto label_1406d03a6
        case 2
            uint64_t* r8_4 = &data_142d40450
            
            if (rdi_1 != 0)
                r8_4 = var_108
            
            uint64_t* var_110_1 = r8_4
            uint64_t* var_118_1 = r8_4
            uint64_t* var_120_1 = r8_4
            uint64_t* var_128_1 = r8_4
            sub_140a2e390(&var_d0, u"%s%s%s%s%s%s", r8_4)
            r13 |= 4
            uint64_t* rcx_9 = var_108
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            var_108 = var_d0
            rdi_1 = var_c8
            var_100 = rdi_1
            int32_t var_fc_1 = var_c4
            goto label_1406d03fc
        case 3
            uint64_t* r8_5 = &data_142d40450
            
            if (rdi_1 != 0)
                r8_5 = var_108
            
            uint64_t* var_128_2 = r8_5
            sub_140a2e390(&var_d0, u"%s%s%s", r8_5)
            r13 |= 8
            uint64_t* rcx_11 = var_108
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            var_108 = var_d0
            rdi_1 = var_c8
            var_100 = rdi_1
            int32_t var_fc_2 = var_c4
            goto label_1406d03fc
        case 4
            int32_t rdi_2
            uint64_t* r12
            
            if (rdi_1 == 0)
                r12 = &data_142d40450
                rdi_2 = 0
            else
                r12 = var_108
                rdi_2 = rdi_1 - 1
            
            if (rdi_2 s> 1)
                rdi_2 = 1
            
            int64_t* rbx_1 = nullptr
            var_f8 = nullptr
            int32_t r15 = 0
            int32_t var_f0 = 0
            int32_t r12_1
            
            if (r12 == 0 || *r12 == 0 || rdi_2 s<= 0)
                r12_1 = 0
            else
                sub_1405947f0(&var_f8, rdi_2 + 1)
                r15 = var_f0 + 1 + rdi_2
                
                if (r15 s> 0)
                    sub_140594770(&var_f8)
                
                rbx_1 = var_f8
                UnDecorator::getReferenceType(rbx_1, r12, rdi_2 * 2)
                r12_1 = 0
                *(rbx_1 + (sx.q(r15) << 1) - 2) = 0
            
            int16_t* const rcx_15 = &data_142d40450
            
            if (r15 != 0)
                rcx_15 = rbx_1
            
            var_d4 = sub_140b1ba10(rcx_15)
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            var_f8 = nullptr
            int64_t var_f0_1 = 0
            var_d8 = r13 | 0x10 | 0x20
            int32_t rcx_17
            int32_t rbx_2
            int64_t r8_8
            
            if (var_100 == 0)
                rbx_2 = 0
                rcx_17 = 0
                r8_8 = 0
            label_1406d0103:
                
                if (rbx_2 s> 2)
                    rbx_2 = 2
            else
                rbx_2 = var_100 - 1
                rcx_17 = rbx_2
                
                if (rbx_2 s> 1)
                    rcx_17 = 1
                
                r8_8 = sx.q(rcx_17)
                
                if (rcx_17 s<= 2)
                    goto label_1406d0103
                
                rbx_2 = rcx_17
            
            int16_t* const rax_14 = &data_142d40450
            
            if (var_100 != 0)
                rax_14 = var_108
            
            void* r13_3 = &rax_14[r8_8]
            int32_t rbx_3 = rbx_2 - rcx_17
            int64_t* rdi_3 = nullptr
            var_e8 = nullptr
            int32_t r15_2 = 0
            int64_t var_e0_1 = 0
            
            if (r13_3 != 0 && *r13_3 != 0 && rbx_3 s> 0)
                sub_1405947f0(&var_e8, rbx_3 + 1)
                r15_2 = var_e0_1.d + 1 + rbx_3
                var_e0_1.d = r15_2
                r12_1 = 0
                
                if (r15_2 s> 0)
                    sub_140594770(&var_e8)
                    r12_1 = var_e0_1:4.d
                    r15_2 = var_e0_1.d
                
                rdi_3 = var_e8
                UnDecorator::getReferenceType(rdi_3, r13_3, rbx_3 * 2)
                *(rdi_3 + (sx.q(r15_2) << 1) - 2) = 0
            
            var_f8 = rdi_3
            var_f0_1.d = r15_2
            var_f0_1:4.d = r12_1
            int64_t* rcx_21 = &data_142d40450
            
            if (r15_2 != 0)
                rcx_21 = rdi_3
            
            int32_t rax_16 = sub_140b1ba10(rcx_21)
            var_b8 = rax_16
            
            if (rdi_3 != 0)
                sub_140a74f90(rdi_3)
            
            int32_t rcx_24
            uint64_t* rdx_9
            
            if (var_100 == 0)
                rcx_24 = 0
                rdx_9 = &data_142d40450
            else
                rcx_24 = var_100 - 1
                rdx_9 = var_108
            
            int32_t rax_17 = rcx_24
            
            if (rcx_24 s> 1)
                rax_17 = 1
            
            void* rdi_4 = rdx_9 + ((sx.q(rcx_24) - sx.q(rax_17)) << 1)
            int64_t* r15_4 = nullptr
            var_e8 = nullptr
            int32_t rbx_4 = 0
            var_e0_1.d = 0
            int32_t rax_19 = 0
            var_e0_1:4.d = 0
            
            if (rdi_4 != 0 && *rdi_4 != 0)
                do
                    r14 += 1
                while (*(rdi_4 + (r14 << 1)) != 0)
                
                if (r14.d + 1 s> 0)
                    sub_1405947f0(&var_e8, r14.d + 1)
                    rax_19 = var_e0_1:4.d
                    rbx_4 = var_e0_1.d
                    r15_4 = var_e8
                
                rbx_4 += r14.d + 1
                var_e0_1.d = rbx_4
                
                if (rbx_4 s> rax_19)
                    sub_140594770(&var_e8)
                    rbx_4 = var_e0_1.d
                    r15_4 = var_e8
                
                UnDecorator::getReferenceType(r15_4, rdi_4, (r14.d + 1) * 2)
            
            if (rbx_4 != 0)
                rsi = r15_4
            
            int32_t rax_20 = sub_140b1ba10(rsi)
            var_ac = rax_20
            
            if (r15_4 != 0)
                sub_140a74f90(r15_4)
            
            var_c0 = 0xf
            var_d8 = 0
            int32_t* rax_21 = &var_d8
            
            if (var_d4 s>= 0)
                rax_21 = &var_d4
            
            r8_13 = &var_c0
            
            if (*rax_21 s<= 0xf)
                r8_13 = rax_21
            
            var_b4 = 0xf
            var_bc = 0
            int32_t* rax_22 = &var_bc
            
            if (rax_16 s>= 0)
                rax_22 = &var_b8
            
            rdx_13 = &var_b4
            
            if (*rax_22 s<= 0xf)
                rdx_13 = rax_22
            
            var_e8.d = 0xf
            var_b0 = 0
            rcx_32 = &var_b0
            
            if (rax_20 s>= 0)
                rcx_32 = &var_ac
            
            rax_23 = &var_e8
            cond:2 = *rcx_32 s<= 0xf
            zmm3 = 0x3fb1111111111111
        case 5, 6, 7
            goto label_1406d03fc

if (cond:2)
    rax_23 = rcx_32

uint128_t zmm0_1
zmm0_1.q = _mm_cvtepi32_pd(zx.q(*rax_23)).q f* zmm3
int32_t temp0_1 = _mm_cvtpd_ps(zmm0_1)
zmm0_1.q = _mm_cvtepi32_pd(zx.q(*rdx_13)).q f* zmm3
uint128_t zmm1 = _mm_cvtepi32_pd(zx.q(*r8_13))
int32_t temp0_4 = _mm_cvtpd_ps(zmm0_1)
zmm1.q = zmm1.q f* zmm3
*arg2 = _mm_cvtpd_ps(zmm1).d
arg2[1] = temp0_4
arg2[2] = temp0_1
arg2[3] = 0x3f800000
var_58:8.d = 0
int64_t result = sub_1405e1b50(&var_98, 0)

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_60 = var_98.q

if (rcx_60 != 0)
    result = sub_140a74f90(rcx_60)

uint64_t* rcx_61 = var_108

if (rcx_61 != 0)
    result = sub_140a74f90(rcx_61)

__security_check_cookie(rax_1 ^ &var_148)
return result
