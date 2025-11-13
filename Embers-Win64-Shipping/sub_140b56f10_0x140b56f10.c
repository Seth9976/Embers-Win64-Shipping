// 函数: sub_140b56f10
// 地址: 0x140b56f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* var_88 = arg2
int32_t var_80 = arg3
uint32_t rcx_1 = (arg4 u>> 0x20).d
char var_7c = 0
int32_t rdx

if (arg3 == 4)
    rdx.b = (*arg2 & 0xdfdfdfdf) == 0x454e4f4e
else
    rdx = 0

uint128_t zmm1 = var_88.o
arg3.w <<= 5
int32_t var_94 = arg4.d
uint64_t rdi_1 = zx.q(rcx_1) & 0xf
char var_34 = 0
char var_8c = ((((rcx_1 u>> 4).w & 0x1f) | arg3.w) * 2).b
uint128_t zmm0 = rdi_1.d.o
uint128_t var_58 = zmm1
int64_t rax_7 = *((rdi_1 << 6) + 0x143e151d0)
int32_t r14 = *((rdi_1 << 6) + 0x143e151cc)
uint64_t rbx_2 = zx.q((zmm0.q u>> 0x20).d) & zx.q(r14)
int112_t var_48 = zmm0.14
int32_t* r15 = rax_7 + (rbx_2 << 2)
int32_t i = *(rax_7 + (rbx_2 << 2))

if (i == 0)
label_140b570e3:
    int32_t var_98
    var_98.o = zmm1
    bool cond:0_1 = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).b != 0
    int32_t rax_22 = _mm_bsrli_si128(zmm1, 8).d
    int32_t rsi
    rsi.b = cond:0_1
    void* r13_1 = *((rdi_1 << 6) + 0x143e151d8)
    int32_t r14_1 = *(r13_1 + 0xc)
    int32_t rsi_4 = ((rsi + 1) * rax_22 + 3) & 0xfffffffe
    
    if (0x20000 - r14_1 u< rsi_4)
        sub_140b5c580(r13_1)
        r14_1 = *(r13_1 + 0xc)
    
    uint64_t r8_4 = (zx.q(rcx_1) & 0xe0000000) | zx.q(rdx << 0x1d)
    uint64_t rsi_5 = zx.q(*(r13_1 + 8))
    *(r13_1 + 0xc) = r14_1 + rsi_4
    uint32_t r14_2 = r14_1 u>> 1
    int16_t* rdx_6 = zx.q(r14_2 * 2) + *(r13_1 + (rsi_5 << 3) + 0x10)
    *rdx_6 = var_48:0xc.w
    
    if (var_8c != 0)
        r8_4 *= 2
    
    memcpy(&rdx_6[1], var_98.q, r8_4.d)
    int32_t rsi_7 = rsi_5.d << 0x10 | r14_2
    *r15 = var_48:8.d | rsi_7
    *((rdi_1 << 6) + 0x143e151c8) += 1
    uint64_t r8_5 = zx.q(*((rdi_1 << 6) + 0x143e151cc))
    
    if (*((rdi_1 << 6) + 0x143e151c8) * 0xa u>= (r8_5 + 1).d * 9)
        sub_140b5eb40((rdi_1 << 6) + &data_143e151c0, ((r8_5 << 1) + 2).d)
    
    *((rdi_1 << 6) + 0x143e151e0) += 1
    *((rdi_1 << 6) + 0x143e151e4) += zx.d(var_58:0xc.b)
    *arg1 = rsi_7
else
    do
        if ((i & 0xe0000000) == var_48:8.d)
            int32_t rax_8 = i & 0x1fffffff
            uint64_t rdx_3 = zx.q(rax_8 u>> 0x10)
            uint32_t var_94_1 = zx.d(rax_8.w)
            int16_t* r8_1 = zx.q((rdx_3.d.q u>> 0x20).d * 2)
                + *(*((rdi_1 << 6) + 0x143e151d8) + (rdx_3 << 3) + 0x10)
            int16_t rcx_7 = *r8_1
            
            if (rcx_7 == var_48:0xc.w)
                uint32_t rax_12 = zx.d(rcx_7) u>> 6
                void** rax_13
                
                if ((rcx_7.b & 1) == 0)
                    uint32_t var_70_1 = rax_12
                    void* var_78
                    rax_13 = &var_78
                    var_78 = &r8_1[1]
                    char var_6c_1 = 0
                else
                    uint32_t var_80_1 = rax_12
                    rax_13 = &var_88
                    var_88 = &r8_1[1]
                    char var_7c_1 = 1
                
                zmm0 = *rax_13
                char* rdx_4 = var_58.q
                int64_t var_68_1 = zmm0.q
                int64_t r8_3 = sx.q(_mm_bsrli_si128(zmm0, 8).d)
                int32_t rax_17
                
                if ((var_58:8.q u>> 0x20).b != 0)
                    rax_17 = sub_140a546e0(var_68_1, rdx_4, r8_3)
                else
                    rax_17 = sub_140a545e0(var_68_1, rdx_4, r8_3)
                
                rax_17.b = rax_17 == 0
                
                if (rax_17.b != 0)
                    i = *r15
                    break
        
        int64_t rax_18 = *((rdi_1 << 6) + 0x143e151d0)
        rbx_2 = zx.q(rbx_2.d + 1) & zx.q(r14)
        r15 = rax_18 + (rbx_2 << 2)
        i = *(rax_18 + (rbx_2 << 2))
    while (i != 0)
    
    zmm1 = var_58
    
    if (i == 0)
        goto label_140b570e3
    
    *arg1 = i & 0x1fffffff

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
