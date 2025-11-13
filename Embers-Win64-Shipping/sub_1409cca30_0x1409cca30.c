// 函数: sub_1409cca30
// 地址: 0x1409cca30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg3
void* rax_1
int64_t rax_2
void* r8

if (arg3 != 0)
    rax_1 = sub_142798920()
    r8 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (arg3 == 0 || rax_2.d s> *(r8 + 0x38) || *(*(r8 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

*(arg1 + 0xb0) = rbx

if (rbx == 0)
    return 0

void* rsi = *(arg1 + 0x30)
void* rbp

if (rsi == 0)
    rbp = nullptr
else
    if (rbx == -1)
        rbx = sub_140cde0b0()
    
    int32_t var_48_1 = 0x7f800000
    rbp = sub_140d2e1f0(rsi, rbx, 0, 0xfffffff, 0, 0)

*(rbp + 8) &= 0xfffffffc
sub_142797330(*(arg1 + 0xb0), rbp)
int64_t arg_8 = 0
void* result = sub_140998b80(arg2, rbp, 0)
int64_t* rax_6 = *(arg2 + 0x3b8)
int64_t* rdx_3 = rax_6
void* r8_1 = &rax_6[sx.q(*(arg2 + 0x3c0))]
int32_t rdx_4

if (rax_6 == r8_1)
label_1409ccb42:
    rdx_4 = -1
else
    while (*rdx_3 != arg1)
        rdx_3 = &rdx_3[1]
        
        if (rdx_3 == r8_1)
            goto label_1409ccb42
    
    rdx_4 = ((rdx_3 - rax_6) s>> 3).d

void* const rbx_1 = *(*(result + 0x3b8) + (sx.q(rdx_4) << 3))
void* rax_8
int64_t rax_9
void* rdx_5

if (rbx_1 != 0)
    rax_8 = sub_1409e9590()
    rdx_5 = *(rbx_1 + 0x10)
    rax_9 = sx.q(*(rax_8 + 0x38))

if (rbx_1 == 0 || rax_9.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
    rbx_1 = nullptr

*(rbp + 0x28) = result
*(rbx_1 + 0x28) = rbp
int128_t var_38[0x2]
int128_t* rax_11 = sub_1409cb680(&var_38, *(arg1 + 0xb0), *(arg2 + 0x3a4))
*(result + 0x390) = *rax_11
*(result + 0x3a0) = rax_11[1].q
sub_1409d5470(result)
return result
