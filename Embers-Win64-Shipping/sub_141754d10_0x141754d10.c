// 函数: sub_141754d10
// 地址: 0x141754d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int512_t zmm1 = sub_1417545d0(arg1, arg2, arg3)
int64_t* rax_5 = sub_14152ef80(
    sub_14152ef80(
        sub_14152fd00(
            sub_14152fd00(
                sub_14152fd00(sub_14152fd00(arg_10, arg1 + 0x230, zmm1), arg1 + 0x248, zmm1), 
                arg1 + 0x260, zmm1), 
            arg1 + 0x278, zmm1), 
        arg1 + 0x290, zmm1), 
    arg1 + 0x2a8, zmm1)
sub_14152e270(sub_14152e270(rax_5, arg1 + 0x2c0, zmm1), arg1 + 0x2d8, zmm1)
int64_t* r15 = arg_10
(*(*r15 + 0x1d8))(r15, &data_1439a9538)
int32_t rax_8
int512_t zmm1_1
rax_8, zmm1_1 = sub_140b4e7c0(r15, &data_1439a9538)

if (rax_8 s>= 0x18)
    sub_14152e270(sub_14152e270(r15, arg1 + 0x2f0, zmm1_1), arg1 + 0x308, zmm1_1)

int64_t* rax_10
int512_t zmm1_2
rax_10, zmm1_2 = sub_14152f370(r15, arg1 + 0x320, zmm1_1)
int64_t* rax_13 = sub_1415300e0(
    sub_14152de20(sub_14152de20(rax_10, arg1 + 0x338, zmm1_2), arg1 + 0x350, zmm1_2), arg1 + 0x368, 
    zmm1_2)
arg_10.d = *(arg1 + 0x3a0)
int64_t* rcx_16 = rax_13[1]
int32_t* rdx_14 = *rcx_16

if (&rdx_14[1] u> rcx_16[1])
    int32_t* rdx_15 = &arg_10
    
    if ((*(rax_13 + 0x29) & 0x20) != 0)
        sub_140b54070(rax_13, rdx_15, zmm1_2)
    else
        (*(*rax_13 + 0x150))(rax_13, rdx_15, 4)
else
    arg_10.d = *rdx_14
    *rcx_16 += 4

uint64_t result = zx.q(arg_10.d)

if (result.d s> *(arg1 + 0x3a4))
    sub_1405c5510(arg1 + 0x398, result.d)
    result = zx.q(arg_10.d)

int64_t rdi = sx.q(*(arg1 + 0x3a0))

if (result.d s> rdi.d)
    *(arg1 + 0x3a0) = result.d
    
    if (result.d s> *(arg1 + 0x3a4))
        sub_1405daba0(arg1 + 0x398)
    
    memset(rdi + *(arg1 + 0x398), 0, sx.q(result.d - rdi.d))
    result = zx.q(arg_10.d)
else if (result.d s< rdi.d)
    int32_t rcx_22 = rdi.d
    
    if (rcx_22 != result.d)
        *(arg1 + 0x3a0) = rdi.d - (rcx_22 - result.d)
        sub_1405dac10(arg1 + 0x398)
        result = zx.q(arg_10.d)

int32_t i = 0

if (result.d s> 0)
    int64_t rsi_3 = 0
    
    do
        int64_t* rcx_25 = rax_13[1]
        char* rdx_19 = *(arg1 + 0x398) + rsi_3
        char* r8_2 = *rcx_25
        
        if (&r8_2[1] u> rcx_25[1])
            result = (*(*rax_13 + 0x150))(rax_13, rdx_19, 1)
        else
            *rdx_19 = *r8_2
            result = rax_13[1]
            *result += 1
        
        i += 1
        rsi_3 += 1
    while (i s< arg_10.d)

return result
