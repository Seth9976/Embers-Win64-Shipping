// 函数: sub_141e05220
// 地址: 0x141e05220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rsi = arg1
void* r13 = arg2
int64_t* var_90 = arg1
arg1[0x14] = arg2
rsi[0x15] = sub_141e01bc0(*(arg2 + 0x10))
(*(*rsi + 0x90))(rsi, r13)
int64_t* rcx_2 = rsi[0x15]
uint128_t var_78

if (rcx_2 == 0)
    rsi[0x1b] = (*(*rsi + 0x50))(rsi)
else
    int64_t* rax_5 = (*(*rcx_2 + 0x20))(rcx_2)
    int64_t* rcx_3 = rsi[0x15]
    rsi[0x1b] = 0
    int64_t* var_108 = rax_5
    int64_t rdx_1 = *rcx_3
    
    if (*((*(rdx_1 + 0x80))(rcx_3, rdx_1) + 8) s> 0)
        int64_t* rcx_4 = rsi[0x15]
        int64_t rdx_2 = *rcx_4
        void* rax_8 = *(*(*(rdx_2 + 0x80))(rcx_4, rdx_2) + 0x38)
        
        if (rax_8 != 0)
            rsi[0x1b] = sx.q(*(rax_8 + 0x4c)) + r13
    
    int64_t* rcx_6 = rsi[0x15]
    void* rax_12 = (*(*rcx_6 + 0x78))(rcx_6)
    void* r12_1 = &rsi[0x1d]
    void* var_98_1 = r12_1
    void* r13_1 = rax_12
    sub_1408d8560(r12_1)
    int32_t r11_1 = *(r13_1 + 0x28)
    void* r15_1 = r13_1 + 0x10
    int32_t rcx_8 = 0
    int32_t var_ec_1 = 1
    int32_t r8_1 = 0
    int32_t var_f0_1 = 0
    void* var_e8_1 = r15_1
    int32_t var_e0_1 = 0xffffffff
    int64_t var_dc_1 = 0
    
    if (r11_1 != 0)
        void* rax_13 = *(r15_1 + 0x10)
        void* r9_1 = r15_1
        
        if (rax_13 != 0)
            r9_1 = rax_13
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_141e0539b:
            int32_t rax_20 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_20)
            int32_t var_ec_2 = rax_20
            int32_t rax_21
            
            if (rax_20 == 0)
                rax_21 = 0x20
            else
                rax_21 = 0x1f - temp0_2
            
            var_dc_1.d = r8_1 - rax_21 + 0x1f
            
            if (r8_1 - rax_21 + 0x1f s> r11_1)
                var_dc_1.d = r11_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_8)
                r8_1 += 0x20
                rcx_8 += 1
                var_dc_1:4.d = r8_1
                var_f0_1 = rcx_8
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                int32_t var_e0_2 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141e0539b
            
            var_dc_1.d = r11_1
    
    int32_t rdx_7 = *(r13_1 + 0x28)
    uint128_t var_c8_1 = var_f0_1.o
    int32_t r14_1 = 0xffffffff << (rdx_7.b & 0x1f)
    int32_t r8_4 = rdx_7 s>> 5
    int32_t r9_3 = rdx_7 & 0xffffffe0
    int128_t var_b8_1 = 0xffffffff
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    uint128_t zmm1_1 = var_c8_1
    var_c8_1:8.d = r14_1
    var_c8_1:0xc.d = rdx_7
    var_78 = r13_1.o
    uint128_t var_68_1 = zmm1_1
    
    if (rdx_7 != r11_1)
        void* rax_23 = *(r15_1 + 0x10)
        void* r10_1 = r15_1
        
        if (rax_23 != 0)
            r10_1 = rax_23
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_11 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_1
        
        if (rdx_11 != 0)
        label_141e05473:
            int32_t rax_30 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
            int32_t rbx_1
            
            if (rax_30 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_4
            
            var_c8_1:0xc.d = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r11_1)
                var_c8_1:0xc.d = r11_1
        else
            while (true)
                int64_t rcx_13 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r10_1 + (rcx_13 << 2) + 4)
                var_c8_1:8.d = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141e05473
            
            var_c8_1:0xc.d = r11_1
    
    int64_t* rsi_1 = var_108
    uint64_t rdx_13 = var_c8_1:8.q u>> 0x20
    uint64_t var_a8_1 = rdx_13
    void* var_100
    
    while (true)
        int64_t rcx_15 = sx.q(var_68_1:0xc.d)
        int64_t rax_32 = var_78.q
        
        if (rcx_15.d == rdx_13.d && var_68_1.q == r15_1 && rax_32 == r13_1)
            break
        
        void* rbx_4 = (rcx_15 << 5) + *rax_32
        var_100 = rbx_4
        sub_141df1780(r12_1, &var_108, &var_100, nullptr)
        int64_t r15_2 = 0
        void* rdi_3 = (sx.q(var_108.d) << 5) + *r12_1
        int32_t* r12_2 = *(rbx_4 + 8)
        uint64_t r13_3 = sx.q(*(rbx_4 + 0x10)) << 2 u>> 2
        
        if (r12_2 u> &r12_2[sx.q(*(rbx_4 + 0x10))])
            r13_3 = 0
        
        if (r13_3 != 0)
            do
                int64_t rbx_5 = sx.q(*(rdi_3 + 0x10))
                int32_t rax_38 = (rbx_5 + 1).d
                void* r14_3 =
                    sx.q(*(*(*rsi_1 + (sx.q(rsi_1[1].d - *r12_2) << 3) - 8) + 0x4c)) + arg2
                *(rdi_3 + 0x10) = rax_38
                
                if (rax_38 s> *(rdi_3 + 0x14))
                    sub_1405a4d70(rdi_3 + 8)
                
                r12_2 = &r12_2[1]
                r15_2 += 1
                *(*(rdi_3 + 8) + (rbx_5 << 3)) = r14_3
            while (r15_2 != r13_3)
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
        rdx_13 = var_a8_1
        r15_1 = var_e8_1
        r13_1 = rax_12
        r12_1 = var_98_1
    
    rsi = var_90
    
    if (rsi[0x16] == 0)
        int64_t* rcx_21 = rsi[0x15]
        rsi[0x16] = (*(*rcx_21 + 0x98))(rcx_21)
    
    int64_t* rcx_22 = rsi[0x15]
    int32_t rbx_6 = 0
    var_100.d = 0
    
    if (rcx_22 != 0)
        void* rax_45 = (*(*rcx_22 + 0x10))(rcx_22)
        int32_t i = 0
        int32_t rdx_16 = 0
        var_108.d = 0
        int64_t rdi_4 = sx.q(*(rax_45 + 8))
        
        if (rdi_4.d s> 0)
            do
                void* rbx_9 = sx.q(i) * 0x30 + *rax_45
                sub_140908920(&rsi[0x37], &var_108, &var_100)
                i = var_108.d + 1
                rbx_6 = *(rbx_9 + 0x18) + var_100.d
                var_100.d = rbx_6
                rdx_16 = rbx_6
                var_108.d = i
            while (i s< rdi_4.d)
        
        rsi[0x34].d = 0
        
        if (rdx_16 s> *(rsi + 0x1a4))
            sub_1405dadb0(&rsi[0x33], rdx_16)
        
        int64_t r15_3 = sx.q(rsi[0x34].d)
        int32_t rax_46 = r15_3.d + rbx_6
        rsi[0x34].d = rax_46
        
        if (rax_46 s> *(rsi + 0x1a4))
            sub_1406105e0(&rsi[0x33])
        
        memset(rsi[0x33] + (r15_3 << 2), 0, sx.q(rbx_6) << 2)
        rsi[0x36].d = 0
        
        if (rbx_6 s> *(rsi + 0x1b4))
            sub_1405dadb0(&rsi[0x35], rbx_6)
        
        int64_t r15_4 = sx.q(rsi[0x36].d)
        int32_t rax_48 = r15_4.d + rbx_6
        rsi[0x36].d = rax_48
        
        if (rax_48 s> *(rsi + 0x1b4))
            sub_1406105e0(&rsi[0x35])
        
        memset(rsi[0x35] + (r15_4 << 2), 0, sx.q(rbx_6) << 2)
        rsi[0x30].d = 0
        
        if (rdi_4.d s> *(rsi + 0x184))
            sub_1405dadb0(&rsi[0x2f], rdi_4.d)
        
        int64_t r14_7 = sx.q(rsi[0x30].d)
        int32_t rax_50 = (r14_7 + rdi_4).d
        rsi[0x30].d = rax_50
        
        if (rax_50 s> *(rsi + 0x184))
            sub_1406105e0(&rsi[0x2f])
        
        int64_t count = rdi_4 << 2
        memset(rsi[0x2f] + (r14_7 << 2), 0, count)
        rsi[0x32].d = 0
        
        if (rdi_4.d s> *(rsi + 0x194))
            sub_1405dadb0(&rsi[0x31], rdi_4.d)
        
        int64_t r14_8 = sx.q(rsi[0x32].d)
        int32_t rax_52 = (r14_8 + rdi_4).d
        rsi[0x32].d = rax_52
        
        if (rax_52 s> *(rsi + 0x194))
            sub_1406105e0(&rsi[0x31])
        
        memset(rsi[0x31] + (r14_8 << 2), 0, count)
    
    r13 = arg2

int64_t* rax_54 = sub_140d21830(r13, &var_90, 0, 0)
int16_t* rdi_5

if (rax_54[1].d == 0)
    rdi_5 = &data_142d40450
else
    rdi_5 = *rax_54

if (rsi[0x19] != rdi_5)
    int32_t rbx_14
    
    if (rdi_5 == 0 || *rdi_5 == 0)
        rbx_14 = 0
    else
        int64_t rbx_13 = -1
        
        do
            rbx_13 += 1
        while (rdi_5[rbx_13] != 0)
        
        rbx_14 = rbx_13.d + 1
    
    int32_t rdx_26 = 0
    rsi[0x1a].d = 0
    
    if (*(rsi + 0xd4) != rbx_14)
        sub_1405947f0(&rsi[0x19], rbx_14)
        rdx_26 = rsi[0x1a].d
    
    int32_t rax_57 = rbx_14 + rdx_26
    rsi[0x1a].d = rax_57
    
    if (rax_57 s> *(rsi + 0xd4))
        sub_140594770(&rsi[0x19])
    
    if (rbx_14 != 0)
        memcpy(rsi[0x19], rdi_5, rbx_14 * 2)

int64_t* rcx_43 = var_90

if (rcx_43 != 0)
    sub_140a74f90(rcx_43)

rsi[0x84].d = 0xffff
rsi[0x83] = -1
sub_1409d9b90(&rsi[0x51])
int32_t rax_58 = *(rsi + 0x2e4)
rsi[0x5c].d = 0

if (rax_58 s< 0 && rax_58 != 0)
    sub_14083ad30(&rsi[0x5b], 0)

int32_t rax_59 = *(rsi + 0x2f4)
rsi[0x5e].d = 0

if (rax_59 s< 0 && rax_59 != 0)
    sub_14083ad30(&rsi[0x5d], 0)

int16_t rcx_47 = rsi[0x88].w + 1
rsi[0x88].w = rcx_47
rsi[0x87] = data_143de5458

if (rcx_47 == 0xffff)
    rsi[0x88].w = 0

void* result = *(r13 + 0x20)
uint128_t zmm0_2

if (result == 0)
    *(rsi + 0x10) = data_143dbb0c0
    *(rsi + 0x20) = data_143dbb0d0
    *(rsi + 0x30) = data_143dbb0e0
    *(rsi + 0x40) = data_143dbb0c0
    *(rsi + 0x50) = data_143dbb0d0
    *(rsi + 0x60) = data_143dbb0e0
    *(rsi + 0x70) = data_143dbb0c0
    *(rsi + 0x80) = data_143dbb0d0
    zmm0_2 = data_143dbb0e0
else
    *(rsi + 0x10) = *(result + 0x1c0)
    *(rsi + 0x20) = *(result + 0x1d0)
    *(rsi + 0x30) = *(result + 0x1e0)
    uint128_t* rax_61 = sub_141f3cf60(rsi[0x17], &var_78)
    *(rsi + 0x40) = *rax_61
    *(rsi + 0x50) = rax_61[1]
    *(rsi + 0x60) = rax_61[2]
    void* rax_63 = *(rsi[0x17] + 0xa0)
    void* rax_64
    
    if (rax_63 != 0)
        rax_64 = *(rax_63 + 0x130)
    
    if (rax_63 == 0 || rax_64 == 0)
        result = &data_143dbb0c0
    else
        result = rax_64 + 0x1c0
    
    *(rsi + 0x70) = *result
    *(rsi + 0x80) = *(result + 0x10)
    zmm0_2 = *(result + 0x20)

*(rsi + 0x90) = zmm0_2
__security_check_cookie(rax_1 ^ &var_128)
return result
