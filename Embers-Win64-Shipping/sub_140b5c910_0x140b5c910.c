// 函数: sub_140b5c910
// 地址: 0x140b5c910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char var_8c = 0
void* var_88
uint128_t var_68
int32_t* rax_4

if ((arg3.q u>> 0x20).b != 0)
    rax_4 = sub_140b57580(&var_88, arg2, arg3)
else
    rax_4 = sub_140b57490(&var_68, arg2, arg3)

uint128_t zmm0 = *rax_4
char var_34 = 0
uint128_t zmm1 = arg2.o
uint128_t var_58 = zmm1
void* rdi_2 = (zx.q(zmm0.d) << 6) + &data_143e151c0
int112_t var_48 = zmm0.14
int32_t rsi = *(rdi_2 + 0xc)
uint64_t rbx_2 = zx.q((zmm0.q u>> 0x20).d) & zx.q(rsi)
int64_t rax_5 = *(rdi_2 + 0x10)
int32_t i = *(rax_5 + (rbx_2 << 2))
int32_t* r12 = rax_5 + (rbx_2 << 2)
int64_t var_98

if (i == 0)
label_140b5caae:
    var_98.o = zmm1
    bool cond:0_1 = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).b != 0
    int32_t rax_21 = _mm_bsrli_si128(zmm1, 8).d
    int32_t rsi_1
    rsi_1.b = cond:0_1
    void* r15_1 = *(rdi_2 + 0x18)
    int32_t r14_1 = *(r15_1 + 0xc)
    int32_t rsi_5 = ((rsi_1 + 1) * rax_21 + 3) & 0xfffffffe
    
    if (0x20000 - r14_1 u< rsi_5)
        sub_140b5c580(r15_1)
        r14_1 = *(r15_1 + 0xc)
    
    uint64_t r8_3 = zx.q(arg3)
    uint64_t rsi_6 = zx.q(*(r15_1 + 8))
    *(r15_1 + 0xc) = r14_1 + rsi_5
    uint32_t r14_2 = r14_1 u>> 1
    int16_t* rdx_5 = zx.q(r14_2 * 2) + *(r15_1 + (rsi_6 << 3) + 0x10)
    *rdx_5 = var_48:0xc.w
    
    if (var_8c != 0)
        r8_3 *= 2
    
    memcpy(&rdx_5[1], var_98, r8_3.d)
    int32_t rsi_8 = rsi_6.d << 0x10 | r14_2
    *r12 = var_48:8.d | rsi_8
    *(rdi_2 + 8) += 1
    uint64_t r8_4 = zx.q(*(rdi_2 + 0xc))
    
    if (*(rdi_2 + 8) * 0xa u>= (r8_4 + 1).d * 9)
        sub_140b5eb40(rdi_2, ((r8_4 << 1) + 2).d)
    
    *(rdi_2 + 0x20) += 1
    *(rdi_2 + 0x24) += zx.d(var_58:0xc.b)
    *arg1 = rsi_8
else
    do
        if ((i & 0xe0000000) == var_48:8.d)
            int32_t rcx_2 = i & 0x1fffffff
            uint64_t rdx_1 = zx.q(rcx_2 u>> 0x10)
            var_98.d = rdx_1.d
            var_98:4.d = zx.d(rcx_2.w)
            int16_t* r8_1 = zx.q((var_98 u>> 0x20).d * 2) + *(*(rdi_2 + 0x18) + (rdx_1 << 3) + 0x10)
            int16_t rdx_2 = *r8_1
            
            if (rdx_2 == var_48:0xc.w)
                uint32_t rax_12 = zx.d(rdx_2) u>> 6
                void** rax_13
                
                if ((rdx_2.b & 1) == 0)
                    uint32_t var_80_1 = rax_12
                    rax_13 = &var_88
                    var_88 = &r8_1[1]
                    char var_7c_1 = 0
                else
                    uint32_t var_70_1 = rax_12
                    void* var_78
                    rax_13 = &var_78
                    var_78 = &r8_1[1]
                    char var_6c_1 = 1
                
                zmm0 = *rax_13
                char* rdx_3 = var_58.q
                var_68 = zmm0
                int64_t rcx_5 = var_68.q
                int64_t r8_2 = sx.q(_mm_bsrli_si128(zmm0, 8).d)
                int32_t rax_17
                
                if ((var_58:8.q u>> 0x20).b != 0)
                    rax_17 = sub_140a546e0(rcx_5, rdx_3, r8_2)
                else
                    rax_17 = sub_140a545e0(rcx_5, rdx_3, r8_2)
                
                rax_17.b = rax_17 == 0
                
                if (rax_17.b != 0)
                    i = *r12
                    break
        
        int64_t rax_18 = *(rdi_2 + 0x10)
        rbx_2 = zx.q(rbx_2.d + 1) & zx.q(rsi)
        i = *(rax_18 + (rbx_2 << 2))
        r12 = rax_18 + (rbx_2 << 2)
    while (i != 0)
    
    zmm1 = var_58
    
    if (i == 0)
        goto label_140b5caae
    
    *arg1 = i & 0x1fffffff
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
