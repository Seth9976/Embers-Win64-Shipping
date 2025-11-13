// 函数: sub_1428d4650
// 地址: 0x1428d4650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rax_2 = *(arg1 + 0x60)
int64_t rbp_2 = (arg3 u>> 4) + rax_2
int128_t* r15 = arg2
uint64_t rbx = rax_2 + 1
int64_t var_48
int64_t* result

while (rbx u<= rbp_2)
    int32_t rcx = 0
    uint64_t rax_3 = rbx
    
    if ((rbx.b & 1) == 0)
        do
            rax_3 u>>= 1
            rcx += 1
        while ((rax_3.b & 1) == 0)
    
    result = sub_1428d5540(arg1, zx.q(rcx))
    
    if (result == 0)
        goto label_1428d47c6
    
    *(arg1 + 0x70) ^= *result
    *(arg1 + 0x78) ^= result[1]
    int128_t zmm0_1 = *r15
    r15 = &r15[1]
    int64_t r8 = *(arg1 + 0x10)
    var_48.o = zmm0_1
    int64_t var_40 = var_40 ^ *(arg1 + 0x78)
    var_48 = zmm0_1.q ^ *(arg1 + 0x70)
    (*arg1)(&var_48, &var_48, r8)
    rbx += 1
    *(arg1 + 0x80) ^= var_48
    *(arg1 + 0x88) ^= var_40

uint64_t r14_1 = zx.q(arg3.d) & 0xf

if (r14_1.d u> 0)
    *(arg1 + 0x70) ^= *(arg1 + 0x38)
    *(arg1 + 0x78) ^= *(arg1 + 0x40)
    int64_t rbx_1 = *(arg1 + 0x78)
    int64_t rdi_1 = *(arg1 + 0x70)
    var_48 = 0
    int64_t var_40_1 = 0
    memcpy(&var_48, r15, r14_1.d)
    int64_t r8_2 = *(arg1 + 0x10)
    *(&var_48 + r14_1) = 0x80
    var_48 ^= rdi_1
    int64_t var_40_2 = var_40_1 ^ rbx_1
    (*arg1)(&var_48, &var_48, r8_2)
    *(arg1 + 0x80) ^= var_48
    *(arg1 + 0x88) ^= var_40_2

*(arg1 + 0x60) = rbp_2
result = 1
label_1428d47c6:
__security_check_cookie(rax_1 ^ &var_68)
return result
