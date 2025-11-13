// 函数: sub_140d36990
// 地址: 0x140d36990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* entry_rdx
char* rax_2 = *(entry_rdx + 0x20)
*(entry_rdx + 0x38) = 0
*(entry_rdx + 0x30) = 0
uint32_t rcx = zx.d(*rax_2)
*(entry_rdx + 0x20) = &rax_2[1]
uint128_t entry_zmm1
(&data_143e1cd60)[zx.q(rcx)](*(entry_rdx + 0x18), entry_zmm1, 0)
void* r14 = *(entry_rdx + 0x30)
int32_t* rax_5 = *(entry_rdx + 0x20)
int64_t* r9 = *(entry_rdx + 0x38)
int32_t rbx = *rax_5
*(entry_rdx + 0x20) = &rax_5[1]
char rdx = (*(r14 + 0xa0)).b
int64_t rcx_2 = *(r14 + 0x80)
int64_t var_e0 = *(r14 + 0x78)
uint128_t var_c8 = *(r14 + 0x88)
uint64_t var_b8 = *(r14 + 0x98)
int32_t r8 = r9[1].d
int32_t r8_1

if ((not.b(rdx) & 1) != 0)
    r8_1 = r8 - *(r9 + 0x34)
else
    r8_1 = r8 - *(r9 + 0x24)

if (r8_1 != 0)
    sub_140cfaf40(&var_e0, 0, r8_1)
label_140d36a72:
    int32_t var_1b0_1 = rbx
    int64_t* var_1b8 = &var_e0
    sub_140ceec60(&var_e0, &var_1b8)
    
    if (rbx s> 0)
        int64_t* rsi_1 = *(r14 + 0x78)
        int64_t rax_10 =
            sub_140a82f30(sx.q(*(rsi_1 + 0x3c) * rsi_1[7].d), zx.q((*(*rsi_1 + 0x108))(rsi_1)))
        
        if (not(test_bit(zx.q(rsi_1[8].d), 9)))
            (*(*rsi_1 + 0xf0))(rsi_1, rax_10)
        else
            memset(rax_10, 0, sx.q(*(rsi_1 + 0x3c) * rsi_1[7].d))
        
        int64_t* r14_1 = *(r14 + 0x80)
        var_1b8 = r14_1
        int64_t rax_14 =
            sub_140a82f30(sx.q(r14_1[7].d * *(r14_1 + 0x3c)), zx.q((*(*r14_1 + 0x108))(r14_1)))
        
        if (not(test_bit(zx.q(r14_1[8].d), 9)))
            (*(*r14_1 + 0xf0))(r14_1, rax_14)
        else
            memset(rax_14, 0, sx.q(r14_1[7].d * *(r14_1 + 0x3c)))
        
        char* rax_16 = *(entry_rdx + 0x20)
        char i = *rax_16
        
        if (i != 0x3c)
            do
                *(entry_rdx + 0x20) = &rax_16[1]
                (&data_143e1cd60)[zx.q(i)](*(entry_rdx + 0x18), entry_rdx, rax_10)
                char* rax_19 = *(entry_rdx + 0x20)
                uint32_t rcx_20 = zx.d(*rax_19)
                *(entry_rdx + 0x20) = &rax_19[1]
                (&data_143e1cd60)[zx.q(rcx_20)](*(entry_rdx + 0x18), entry_rdx, rax_14)
                entry_zmm1 = var_c8
                int64_t rcx_22 = var_e0
                int64_t var_1d8 = rcx_22
                int64_t var_1c0 = rcx_22
                uint128_t var_88_1 = entry_zmm1
                uint64_t var_78_1 = var_b8
                uint128_t var_50_1 = entry_zmm1
                uint64_t var_40_1 = var_b8
                int64_t var_1d0
                int64_t var_1c8
                void* const var_a8
                int64_t (* var_70)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0)
                
                if ((not.b(rdx) & 1) != 0)
                    var_1c8 = rcx_2
                    int64_t var_130 = rcx_2
                    int64_t var_140 = rcx_22
                    var_70 = &data_140d19280
                    var_1d0 = rcx_22
                    int64_t* var_68_2 = &var_1c0
                    void* const var_60_2 = &data_140d19280
                    int64_t* var_58_2 = &var_1c8
                    int64_t (** var_118_1)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) =
                        &var_70
                    int64_t (* var_120)(void* arg1, int64_t* arg2) = sub_140d19310
                    var_a8 = sub_140d19220
                    int64_t* var_a0_2 = &var_140
                    int64_t (* var_98_2)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) =
                        sub_140d19220
                    int64_t* var_90_2 = &var_130
                    void* const* var_108_1 = &var_a8
                    int64_t (* var_110)(void* arg1, int64_t* arg2) = sub_140d192b0
                    int64_t (* var_100)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2f50
                    int64_t* var_f8_1 = &var_1d0
                    int64_t (* var_f0)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
                    int64_t* var_e8_1 = &var_1d8
                    int64_t (** var_1e8_2)(void* arg1, int64_t* arg2) = &var_120
                    int64_t var_128_1 = rax_14
                    int64_t var_138_1 = rax_10
                    sub_140d16fd0(r9, rax_10, &var_c8:4, &var_f0, &var_100, &var_110)
                else
                    var_1d0 = rcx_2
                    int64_t var_190 = rcx_2
                    int64_t var_1a0 = rcx_22
                    int64_t* var_a0_1 = &var_1d8
                    var_1c8 = rcx_22
                    int64_t* var_90_1 = &var_1d0
                    int64_t* var_178_1 = &var_a8
                    var_70 = sub_140d19220
                    int64_t* var_68_1 = &var_1a0
                    int64_t (* var_60_1)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) =
                        sub_140d19220
                    int64_t* var_58_1 = &var_190
                    int64_t (** var_168_1)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) =
                        &var_70
                    int64_t (* var_170)(void* arg1, int64_t* arg2) = sub_140d192b0
                    int64_t (* var_160)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2f50
                    int64_t* var_158_1 = &var_1c8
                    int64_t (* var_150)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
                    int64_t* var_148_1 = &var_1c0
                    int64_t (* var_180)(void* arg1, int64_t* arg2)
                    int64_t* var_1e8_1 = &var_180
                    int64_t* var_1f0_1 = &var_170
                    int64_t* var_1f8_1 = &var_160
                    int64_t var_188_1 = rax_14
                    int64_t var_198_1 = rax_10
                    var_a8 = &data_140d19280
                    void* const var_98_1 = &data_140d19280
                    var_180 = sub_140d19310
                    sub_140d16df0(r9, rax_10, &var_c8:4, &var_150, var_1f8_1, var_1f0_1)
                rax_16 = *(entry_rdx + 0x20)
                i = *rax_16
            while (i != 0x3c)
            
            r14_1 = var_1b8
        
        if ((not.b((r14_1[8] u>> 0x24).b) & 1) != 0)
            (*(*r14_1 + 0xe8))(r14_1, rax_14)
        
        sub_140a74f90(rax_14)
        
        if ((not.b((rsi_1[8] u>> 0x24).b) & 1) != 0)
            (*(*rsi_1 + 0xe8))(rsi_1, rax_10)
        
        sub_140a74f90(rax_10)
else if (rbx != 0)
    goto label_140d36a72

int64_t result = *(entry_rdx + 0x20)
int64_t r12
r12.b = result != 0
*(entry_rdx + 0x20) = r12 + result
__security_check_cookie(rax_1 ^ &var_218)
return result
