// 函数: sub_140b571e0
// 地址: 0x140b571e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_80 = arg3
arg3.w <<= 5
uint32_t rcx_1 = (arg4 u>> 0x20).d
int32_t var_94 = arg4.d
void* var_88 = arg2
uint64_t rdi_1 = zx.q(rcx_1) & 0xf
char var_7c = 1
uint128_t zmm1 = var_88.o
char var_34 = 0
char var_8c = (((((rcx_1 u>> 4).w & 0x1f) | arg3.w) * 2) | 1).b
uint128_t zmm0 = rdi_1.d.o
uint128_t var_58 = zmm1
int64_t rax_4 = *((rdi_1 << 6) + 0x143e151d0)
int32_t rsi = *((rdi_1 << 6) + 0x143e151cc)
uint64_t rbx_2 = zx.q((zmm0.q u>> 0x20).d) & zx.q(rsi)
int112_t var_48 = zmm0.14
int32_t* r14 = rax_4 + (rbx_2 << 2)
int32_t i = *(rax_4 + (rbx_2 << 2))

if (i == 0)
label_140b57382:
    void* r13_1 = *((rdi_1 << 6) + 0x143e151d8)
    int32_t var_98
    var_98.o = zmm1
    bool cond:0_1 = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).b != 0
    int32_t rax_19 = _mm_bsrli_si128(zmm1, 8).d
    int32_t rsi_1
    rsi_1.b = cond:0_1
    int32_t r15_1 = *(r13_1 + 0xc)
    int32_t rsi_5 = ((rsi_1 + 1) * rax_19 + 3) & 0xfffffffe
    
    if (0x20000 - r15_1 u< rsi_5)
        sub_140b5c580(r13_1)
        r15_1 = *(r13_1 + 0xc)
    
    uint64_t r8_4 = zx.q(rcx_1) & 0xe0000000
    uint64_t rsi_6 = zx.q(*(r13_1 + 8))
    *(r13_1 + 0xc) = r15_1 + rsi_5
    uint32_t r15_2 = r15_1 u>> 1
    int16_t* rdx_4 = zx.q(r15_2 * 2) + *(r13_1 + (rsi_6 << 3) + 0x10)
    *rdx_4 = var_48:0xc.w
    
    if (var_8c != 0)
        r8_4 *= 2
    
    memcpy(&rdx_4[1], var_98.q, r8_4.d)
    int32_t rsi_8 = rsi_6.d << 0x10 | r15_2
    *r14 = var_48:8.d | rsi_8
    *((rdi_1 << 6) + 0x143e151c8) += 1
    uint64_t r8_5 = zx.q(*((rdi_1 << 6) + 0x143e151cc))
    
    if (*((rdi_1 << 6) + 0x143e151c8) * 0xa u>= (r8_5 + 1).d * 9)
        sub_140b5eb40((rdi_1 << 6) + &data_143e151c0, ((r8_5 << 1) + 2).d)
    
    *((rdi_1 << 6) + 0x143e151e0) += 1
    *((rdi_1 << 6) + 0x143e151e4) += zx.d(var_58:0xc.b)
    *arg1 = rsi_8
else
    do
        if ((i & 0xe0000000) == var_48:8.d)
            int32_t rax_5 = i & 0x1fffffff
            uint64_t rdx_1 = zx.q(rax_5 u>> 0x10)
            uint32_t var_94_1 = zx.d(rax_5.w)
            int16_t* r8_1 = zx.q((rdx_1.d.q u>> 0x20).d * 2)
                + *(*((rdi_1 << 6) + 0x143e151d8) + (rdx_1 << 3) + 0x10)
            int16_t rcx_7 = *r8_1
            
            if (rcx_7 == var_48:0xc.w)
                uint32_t rax_9 = zx.d(rcx_7) u>> 6
                void** rax_10
                
                if ((rcx_7.b & 1) == 0)
                    uint32_t var_70_1 = rax_9
                    void* var_78
                    rax_10 = &var_78
                    var_78 = &r8_1[1]
                    char var_6c_1 = 0
                else
                    uint32_t var_80_1 = rax_9
                    rax_10 = &var_88
                    var_88 = &r8_1[1]
                    char var_7c_1 = 1
                
                zmm0 = *rax_10
                char* rdx_2 = var_58.q
                int64_t var_68_1 = zmm0.q
                int64_t r8_3 = sx.q(_mm_bsrli_si128(zmm0, 8).d)
                int32_t rax_14
                
                if ((var_58:8.q u>> 0x20).b != 0)
                    rax_14 = sub_140a546e0(var_68_1, rdx_2, r8_3)
                else
                    rax_14 = sub_140a545e0(var_68_1, rdx_2, r8_3)
                
                rax_14.b = rax_14 == 0
                
                if (rax_14.b != 0)
                    i = *r14
                    break
        
        int64_t rax_15 = *((rdi_1 << 6) + 0x143e151d0)
        rbx_2 = zx.q(rbx_2.d + 1) & zx.q(rsi)
        r14 = rax_15 + (rbx_2 << 2)
        i = *(rax_15 + (rbx_2 << 2))
    while (i != 0)
    
    zmm1 = var_58
    
    if (i == 0)
        goto label_140b57382
    
    *arg1 = i & 0x1fffffff

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
