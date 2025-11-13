// 函数: sub_1422b87a0
// 地址: 0x1422b87a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x18))
int32_t rbx = 1
void* rsi_1

if (rax.d s> 1)
    void* r11_1 = *(arg1 + 0x10)
    rsi_1 = arg1 + 0x10
    int64_t r9_1 = 1
    int64_t* rax_1 = r11_1 + 0x128
    
    while (*rax_1 != 0)
        rbx += 1
        r9_1 += 1
        rax_1 = &rax_1[0x13]
        
        if (r9_1 s>= rax)
            goto label_1422b8819
    
    *(sx.q(rbx) * 0x98 + r11_1 + 0x90) = arg3

uint128_t zmm0
uint128_t zmm1

if (rax.d s> 1 && rbx != 0xffffffff)
label_1422b88eb:
    zmm1 = arg2[1]
    int32_t rax_7 = *(arg2 + 0x88)
    uint128_t* rdx_3 = sx.q(rbx) * 0x98 + *rsi_1
    *rdx_3 = *arg2
    zmm0 = arg2[2]
    rdx_3[1] = zmm1
    zmm1 = arg2[3]
    rdx_3[2] = zmm0
    zmm0 = arg2[4]
    rdx_3[3] = zmm1
    zmm1 = arg2[5]
    rdx_3[4] = zmm0
    zmm0 = arg2[6]
    rdx_3[5] = zmm1
    zmm1 = arg2[7]
    rdx_3[6] = zmm0
    zmm0 = zx.o(arg2[8].q)
    rdx_3[7] = zmm1
    rdx_3[8].q = zmm0.q
    *(rdx_3 + 0x88) = rax_7
    int64_t* rcx_3 = data_143f53cc8
    data_143f53cc8 = 0
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x38))(rcx_3)
else
label_1422b8819:
    rsi_1 = arg1 + 0x10
    rbx = *(arg1 + 0x18)
    int64_t rbp_1 = sx.q(*(rsi_1 + 8))
    int32_t var_20_1 = *(arg2 + 0x88)
    uint64_t var_28_1 = arg2[8].q
    int32_t rax_4 = (rbp_1 + 1).d
    *(rsi_1 + 8) = rax_4
    
    if (rax_4 s> *(rsi_1 + 0xc))
        sub_1417500c0(rsi_1)
    
    int64_t rax_5 = *rsi_1
    zmm1 = arg2[1]
    uint128_t* rcx_2 = rbp_1 * 0x98
    *(rcx_2 + rax_5) = *arg2
    zmm0 = arg2[2]
    *(rcx_2 + rax_5 + 0x10) = zmm1
    zmm1 = arg2[3]
    *(rcx_2 + rax_5 + 0x20) = zmm0
    zmm0 = arg2[4]
    *(rcx_2 + rax_5 + 0x30) = zmm1
    zmm1 = arg2[5]
    *(rcx_2 + rax_5 + 0x40) = zmm0
    zmm0 = arg2[6]
    *(rcx_2 + rax_5 + 0x50) = zmm1
    zmm1 = arg2[7]
    *(rcx_2 + rax_5 + 0x60) = zmm0
    *(rcx_2 + rax_5 + 0x70) = zmm1
    *(rcx_2 + rax_5 + 0x80) = var_28_1.o
    *(rcx_2 + rax_5 + 0x90) = arg3
    
    if (rbx != 0xffffffff)
        goto label_1422b88eb
return zx.q(rbx)
