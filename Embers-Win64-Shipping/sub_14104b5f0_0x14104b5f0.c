// 函数: sub_14104b5f0
// 地址: 0x14104b5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_f8
void* rsp_1 = &var_f8
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t rdx = zx.q(*(arg1 + 0x80))
int64_t rax_2 = rdx * 0x2c
void* r14
int512_t zmm0

if (rax_2 u>= 0x1000)
    void* rax_5
    rax_5, zmm0 = sub_140a82f30(rax_2, 0)
    rdx = zx.q(*(arg1 + 0x80))
    r14 = rax_5
else if (rax_2 != 0)
    int64_t rcx = rax_2 + 0x1e
    
    if (rcx u<= rax_2 + 0xf)
        rcx = 0xffffffffffffff0
    
    int64_t rcx_1 = rcx & 0xfffffffffffffff0
    __chkstk(rcx_1)
    rsp_1 = &var_f8 - rcx_1
    r14 = (rsp_1 + 0x5f) & 0xfffffffffffffff0
else
    r14 = nullptr

void* rcx_3 = *(arg1 + 0x10)
var_a8 = 0
*(rcx_3 + 0x58)
void* rsi_2 = (zx.q(rdx.d) << 5) + r14
int64_t* rax_6 = sub_141022ce0(*(rcx_3 + 8))
*(arg1 + 0x80)
*(rsp_1 + 0x40) = &var_a8
*(rsp_1 + 0x38) = rsi_2 + (zx.q(rdx.d) << 2)
int64_t rcx_6 = *(arg1 + 0x68)
int64_t r10 = *rax_6
*(rsp_1 + 0x30) = rsi_2
*(rsp_1 + 0x28) = r14
*(rsp_1 + 0x20) = rcx_6
(*(r10 + 0x130))(nop)
void* result = *(arg1 + 0x28)
void* i = *(arg1 + 0x10)
int64_t var_98 = *(result + 0x20)
int32_t var_90 = 1

for (; i != 0; i = *(i + 0xb8))
    void* rsi_3 = *(i + 0x58)
    int32_t j = 0
    void* r12 = **(*(i + 8) + 0x6d8)
    void* rcx_10 = *(*(r12 + 0x1c8) + 0x20)
    *(rcx_10 + 0x3b90) += *(arg1 + 0x80)
    int64_t* rdi_1 = *(*(r12 + 0x1c8) + 0x30)
    int64_t var_68 = *(rsi_3 + 0x20)
    int32_t var_60_1 = 0
    int512_t zmm1
    
    if (*(arg1 + 0x80) u> 0)
        do
            *(rsp_1 + 0x30) = 0
            *(rsp_1 + 0x28) = &var_98
            int32_t j_1 = j
            *(rsp_1 + 0x20) = 0
            int128_t* rax_13 = zx.q(j) << 5
            zmm0.o = *(rax_13 + r14)
            int128_t var_88_1 = zmm0.o
            zmm1.o = *(rax_13 + r14 + 0x10)
            int128_t var_78_1 = zmm1.o
            (*(*rdi_1 + 0x80))(nop)
            j += 1
        while (j u< *(arg1 + 0x80))
    
    if (*(rsi_3 + 0xfc) == 0)
        uint64_t r9_2 = zx.q(*(rsi_3 + 0xf0))
        *(rsp_1 + 0x20) = 0xffffffff
        result, zmm0, zmm1 = sub_1410129f0(r12 + 0x1c0, rsi_3, 0x400, r9_2)
    else
        result, zmm0, zmm1 = sub_141037220(r12 + 0x1c0, rsi_3, 0x400, 0xffffffff)

if (rax_2 u>= 0x1000)
    result = sub_140a74f90(r14)

__security_check_cookie(rax_1 ^ &var_a8)
return result
