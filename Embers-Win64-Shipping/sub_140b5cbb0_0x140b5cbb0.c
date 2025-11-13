// 函数: sub_140b5cbb0
// 地址: 0x140b5cbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8c8
int64_t rax_1 = __security_cookie ^ &var_8c8
void var_838

if (arg3 != 0)
    memcpy(&var_838, arg2, arg3 * 2)

void* var_8a8 = &var_838
void* rdx = &var_838
char var_89c = 1
void* var_898
uint128_t var_878
int32_t* rax_4

if ((arg3.q u>> 0x20).b != 0)
    rax_4 = sub_140b57580(&var_898, rdx, arg3)
else
    rax_4 = sub_140b57490(&var_878, rdx, arg3)

uint128_t zmm0 = *rax_4
char var_844 = 0
uint128_t zmm1 = var_8a8.o
uint128_t var_868 = zmm1
void* rdi_2 = (zx.q(zmm0.d) << 6) + &data_143e151c0
int112_t var_858 = zmm0.14
int32_t rsi = *(rdi_2 + 0xc)
uint64_t rbx_3 = zx.q((zmm0.q u>> 0x20).d) & zx.q(rsi)
int64_t rax_5 = *(rdi_2 + 0x10)
int32_t i = *(rax_5 + (rbx_3 << 2))
int32_t* r12 = rax_5 + (rbx_3 << 2)

if (i == 0)
label_140b5cd74:
    void* rsi_1 = *(rdi_2 + 0x18)
    int32_t r14_1 = *(rsi_1 + 0xc)
    var_8a8.o = zmm1
    int32_t r15_1
    r15_1.b = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).b != 0
    int32_t r15_5 = ((r15_1 + 1) * _mm_bsrli_si128(zmm1, 8).d + 3) & 0xfffffffe
    
    if (0x20000 - r14_1 u< r15_5)
        if (r14_1 + 2 u<= 0x20000)
            int16_t* rcx_9 = zx.q(r14_1) + *(rsi_1 + (zx.q(*(rsi_1 + 8)) << 3) + 0x10)
            *rcx_9 &= 0x3f
        
        *(rsi_1 + 8) += 1
        r14_1 = 0
        uint64_t rax_25 = zx.q(*(rsi_1 + 8))
        *(rsi_1 + 0xc) = 0
        
        if (*(rsi_1 + (rax_25 << 3) + 0x10) == 0)
            sub_140b673e0()
            *(rsi_1 + (zx.q(*(rsi_1 + 8)) << 3) + 0x10) =
                sub_140a82f70(0x20000, zx.q(data_1439a9580.d))
            r14_1 = *(rsi_1 + 0xc)
    
    uint64_t r8_6 = zx.q(arg3)
    uint64_t r15_6 = zx.q(*(rsi_1 + 8))
    uint32_t r14_2 = r14_1 u>> 1
    *(rsi_1 + 0xc) = r15_5 + r14_1
    int16_t* rdx_7 = zx.q(r14_2 * 2) + *(rsi_1 + (r15_6 << 3) + 0x10)
    *rdx_7 = var_858:0xc.w
    
    if (var_89c != 0)
        r8_6 *= 2
    
    memcpy(&rdx_7[1], var_8a8, r8_6.d)
    int32_t r15_8 = r15_6.d << 0x10 | r14_2
    *r12 = var_858:8.d | r15_8
    *(rdi_2 + 8) += 1
    uint64_t r8_7 = zx.q(*(rdi_2 + 0xc))
    
    if (*(rdi_2 + 8) * 0xa u>= (r8_7 + 1).d * 9)
        sub_140b5eb40(rdi_2, ((r8_7 << 1) + 2).d)
    
    *(rdi_2 + 0x20) += 1
    *(rdi_2 + 0x24) += zx.d(var_868:0xc.b)
    *arg1 = r15_8
else
    do
        if ((i & 0xe0000000) == var_858:8.d)
            int32_t rcx_3 = i & 0x1fffffff
            uint64_t rdx_2 = zx.q(rcx_3 u>> 0x10)
            var_8a8.d = rdx_2.d
            var_8a8:4.d = zx.d(rcx_3.w)
            int16_t* r8_4 =
                zx.q((var_8a8 u>> 0x20).d * 2) + *(*(rdi_2 + 0x18) + (rdx_2 << 3) + 0x10)
            int16_t rdx_3 = *r8_4
            
            if (rdx_3 == var_858:0xc.w)
                uint32_t rax_12 = zx.d(rdx_3) u>> 6
                void** rax_13
                
                if ((rdx_3.b & 1) == 0)
                    uint32_t var_890_1 = rax_12
                    rax_13 = &var_898
                    var_898 = &r8_4[1]
                    char var_88c_1 = 0
                else
                    uint32_t var_880_1 = rax_12
                    void* var_888
                    rax_13 = &var_888
                    var_888 = &r8_4[1]
                    char var_87c_1 = 1
                
                zmm0 = *rax_13
                char* rdx_4 = var_868.q
                var_878 = zmm0
                int64_t rcx_6 = var_878.q
                int64_t r8_5 = sx.q(_mm_bsrli_si128(zmm0, 8).d)
                int32_t rax_17
                
                if ((var_868:8.q u>> 0x20).b != 0)
                    rax_17 = sub_140a546e0(rcx_6, rdx_4, r8_5)
                else
                    rax_17 = sub_140a545e0(rcx_6, rdx_4, r8_5)
                
                rax_17.b = rax_17 == 0
                
                if (rax_17.b != 0)
                    i = *r12
                    break
        
        int64_t rax_18 = *(rdi_2 + 0x10)
        rbx_3 = zx.q(rbx_3.d + 1) & zx.q(rsi)
        i = *(rax_18 + (rbx_3 << 2))
        r12 = rax_18 + (rbx_3 << 2)
    while (i != 0)
    
    zmm1 = var_868
    
    if (i == 0)
        goto label_140b5cd74
    
    *arg1 = i & 0x1fffffff

__security_check_cookie(rax_1 ^ &var_8c8)
return arg1
