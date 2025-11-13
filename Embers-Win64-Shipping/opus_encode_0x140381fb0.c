// 函数: opus_encode
// 地址: 0x140381fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t var_28 = __security_cookie ^ &var_28
int32_t rcx

if (*(arg1 + 0x60) != 0x803)
    rcx = *(arg1 + 0x68)
else
    rcx = 0

int32_t rax_5 = sub_140380320(arg2, arg3, *(arg1 + 0x90), *(arg1 + 0x64), *(arg1 + 0x84), 
    *(arg1 + 0x94), rcx, sub_140380f80, arg1 + 0x2ad8)
int32_t rdx_2 = *(arg1 + 0x64) * rax_5
int64_t rcx_3 = sx.q(rdx_2) << 2
int64_t rax_6 = rcx_3 + 0xf

if (rax_6 u<= rcx_3)
    rax_6 = 0xffffffffffffff0

int64_t rax_7 = rax_6 & 0xfffffffffffffff0
__chkstk(rax_7)
void var_88
void* rsp_1 = &var_88 - rax_7
int32_t i = 0

if (rdx_2 s> 0)
    void* rcx_4 = rsp_1 + 0x60
    int16_t* rdx_3 = arg2
    
    do
        int32_t rax_8 = sx.d(*rdx_3)
        i += 1
        rdx_3 = &rdx_3[1]
        rcx_4 += 4
        uint128_t zmm0_1
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_8)).d f* 3.05175781e-05f
        *(rcx_4 - 4) = zmm0_1.d
    while (i s< *(arg1 + 0x64) * rax_5)

int32_t rax_11 = *(arg1 + 0x64)
*(rsp_1 + 0x58) = sub_140380f80
*(rsp_1 + 0x50) = rax_11
*(rsp_1 + 0x48) = 0xfffffffe
*(rsp_1 + 0x40) = 0
*(rsp_1 + 0x38) = arg3
*(rsp_1 + 0x30) = arg2
*(rsp_1 + 0x28) = 0x10
*(rsp_1 + 0x20) = arg4
int64_t r9
int64_t result = sub_140382210(arg1, rsp_1 + 0x60, zx.q(rax_5), r9)
__security_check_cookie(var_28 ^ &var_28)
return result
