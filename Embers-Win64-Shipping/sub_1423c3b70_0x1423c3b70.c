// 函数: sub_1423c3b70
// 地址: 0x1423c3b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* r8 = *(arg1 + 0x2f8)
int128_t var_78 = zx.o(0)
int32_t var_68 = 1
int32_t var_54 = (1 << (data_1439c7a34).b) - 1
int128_t var_64 = data_143dbb1e0
char var_50 = 0
int64_t var_48 = 0
uint64_t rax_4 = *(r8 + 0xb8)

if (rax_4 != 0)
    rax_4 = zx.q(*(rax_4 + 0x10))

int32_t var_40 = rax_4.d
int32_t* rax_5 = *(r8 + 0xb8)
int32_t r8_1
char r9
int32_t r10

if (rax_5 == 0)
    r8_1 = 0
    r9 = 0
    r10 = 0
else
    r8_1 = rax_5[8]
    r9 = (rax_5[3]).b
    r10 = *rax_5

int64_t* rcx_1 = data_143f0f180
void* var_e0
(*(*rcx_1 + 0x5e8))(rcx_1, &var_e0, &data_143f02b98, zx.q(r10), r9, r8_1, 
    ((zx.d(*(r8 + 0x60)) & 1) | 0x8000) << 4, &var_78)
void* r12 = arg1 + 0x50
sub_1405d1600(r12, &var_e0)
sub_1405d1550(&var_e0)
sub_1408c8cf0(arg1 + 0x10, *r12)
*(*(arg1 + 0x10) + 0x58) = *(*(arg1 + 0x2f8) + 0x18)
void* var_d8 = *(*(arg1 + 0x2f8) + 0x18)
int16_t* j_4
int128_t zmm2 = sub_140b63b70(&var_d8, &j_4)
int64_t* rcx_8 = data_143f0f180
int16_t* const j_7 = &data_142d40450
int32_t var_88

if (var_88 != 0)
    j_7 = j_4

(*(*rcx_8 + 0x2e8))(rcx_8, *(arg1 + 0x10), j_7)
int16_t* j_6 = j_4

if (j_6 != 0)
    sub_140a74f90(j_6)

int128_t entry_zmm3
sub_14198ac20(&data_143f02b98, *(*(arg1 + 0x2f8) + 0x90), *(arg1 + 0x10), entry_zmm3, zmm2)
void* rcx_9 = *(*(arg1 + 0x2f8) + 0xb8)
int32_t j_5

if (rcx_9 == 0)
    j_5 = 0
else
    j_5 = *(rcx_9 + 0x20)

int16_t* j_3 = sx.q(j_5)
int32_t i_1 = 0
void* rsi = -0x58 - arg1
j_4 = j_3
void* rax_12 = arg1 + 0x58
var_e0 = rsi
int32_t i = 0
var_d8 = rax_12

do
    int32_t r13_1 = 0
    
    if (j_3 s> 0)
        void* r15_1 = rax_12
        int16_t* j_2 = j_3
        int16_t* j_1 = j_3
        int16_t* j
        
        do
            if (*r15_1 != 0)
                int64_t* rcx_10 = data_143f0f180
                char var_118
                var_118.d = 0
                int32_t var_c8
                int64_t rax_14 = (*(*rcx_10 + 0x600))(rcx_10, &data_143f02b98, *r12, zx.q(i), 
                    var_118, r13_1, 1, &var_c8, 0)
                uint64_t r12_1 = zx.q(var_c8)
                int64_t rbx_1 = rax_14
                void* rdx_11 = *(arg1 + 0x2f8)
                
                if (r12_1.d != 0)
                    int32_t* rdx_14 = *(rdx_11 + 0xb8)
                    int32_t rdi_1
                    
                    if (rdx_14 == 0)
                        rdi_1 = 0
                    else
                        rdi_1 = rdx_14[3]
                    
                    int64_t rcx_15 = sx.q(rdi_1) * 5
                    int32_t rsi_1 = *((rcx_15 << 3) + 0x1439c85e8)
                    int32_t rax_22 = (&data_1439c85f4)[rcx_15 * 2]
                    int32_t r14_1 = *((rcx_15 << 3) + &data_1439c85ec)
                    int32_t rdx_15
                    int32_t r8_7
                    
                    if (rdx_14 == 0)
                        r8_7 = 0
                        rdx_15 = 0
                    else
                        r8_7 = rdx_14[1]
                        rdx_15 = *rdx_14
                    
                    var_118.d = r13_1
                    int64_t var_98
                    sub_141998310(&var_98, rdx_15, r8_7, rdi_1, var_118)
                    int32_t rcx_17 = var_98.d
                    int32_t var_94
                    uint64_t k_1 = zx.q(divu.dp.d(0:(var_94 - 1 + r14_1), r14_1))
                    uint64_t rsi_3 = zx.q(divu.dp.d(0:(rcx_17 - 1 + rsi_1), rsi_1) * rax_22)
                    uint32_t count = sub_141998400(rcx_17, var_94, rdi_1, 0)
                    int64_t rdi_2 = *r15_1
                    
                    if (rsi_3.d == r12_1.d)
                        memcpy(rbx_1, rdi_2, count)
                    else if (k_1.d != 0)
                        uint64_t k
                        
                        do
                            memcpy(rbx_1, rdi_2, rsi_3.d)
                            rdi_2 += rsi_3
                            rbx_1 += r12_1
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                    
                    j_1 = j_2
                    rsi = var_e0
                else
                    int64_t rax_20
                    int64_t rdx_12
                    rdx_12:rax_20 = muls.dp.q(0x2aaaaaaaaaaaaaab, 
                        sub_140bc7f20(*(*(*(rdx_11 + 0xb8) + 0x18) + rsi + r15_1) + 0x10))
                    memcpy(rbx_1, *r15_1, (rdx_12 u>> 0x3f).d + rdx_12.d)
                
                sub_140a74f90(*r15_1)
                *r15_1 = 0
                r12 = arg1 + 0x50
                int64_t* rcx_21 = data_143f0f180
                int32_t var_108_1
                var_108_1.b = 0
                var_118.d = 0
                (*(*rcx_21 + 0x608))(rcx_21, &data_143f02b98, *r12, zx.q(i_1), var_118, r13_1, 
                    var_108_1)
                i = i_1
            
            r13_1 += 1
            r15_1 += 8
            j = j_1
            j_1 -= 1
            j_2 = j_1
        while (j != 1)
        rax_12 = var_d8
        j_3 = j_4
    
    i += 1
    rax_12 += 0x70
    rsi -= 0x70
    i_1 = i
    var_d8 = rax_12
    var_e0 = rsi
while (i s< 6)

void* rbx_2 = *(arg1 + 0x2f8)
void* rax_32 = sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0)))
uint32_t rdx_19 = zx.d(*(rbx_2 + 0x5d))
uint64_t rcx_23

if (rdx_19 == 0)
    rcx_23.b = 0
else if (rdx_19 == 1)
    rcx_23.b = 1
else if (rdx_19 == 2)
    rcx_23.b = 2
else
    rcx_23 = zx.q(*(zx.q(*(rbx_2 + 0x5f)) * 0x54 + *(rax_32 + 0x28) + 0x18))

char var_b8 = rcx_23.b
int64_t* rcx_25 = data_143f0f180
int32_t var_ac = 0x7f7fffff
int16_t var_b7 = 0x101
char var_b5 = 1
int64_t var_b4 = 0
int64_t var_a8 = 0
char var_a0 = 0
(*(*rcx_25 + 0x28))(rcx_25, &var_d8, &var_b8)
sub_1405d1600(arg1 + 0x18, &var_d8)
sub_1405d1550(&var_d8)
uint64_t result = *(arg1 + 0x2f8)
void* rcx_28 = *(result + 0xb8)

if (rcx_28 != 0)
    result = zx.q(*(rcx_28 + 0xc))

if (rcx_28 != 0 && (result.d == 3 || result.d == 0x27))
    *(arg1 + 0x44) = 1
else
    *(arg1 + 0x44) = 0

__security_check_cookie(rax_1 ^ &var_138)
return result
