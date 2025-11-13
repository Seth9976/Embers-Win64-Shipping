// 函数: sub_140de1590
// 地址: 0x140de1590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x18)
int64_t var_28 = *(arg2 + 0x10)

if (rcx != 0)
    *(rcx + 0xc) += 1

if (&var_28 != arg1 + 0x10)
    var_28.o = *(arg1 + 0x10)
    *(arg1 + 0x10) = var_28.o

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

int64_t* rcx_1 = *(arg2 + 0x28)
var_28 = *(arg2 + 0x20)

if (rcx_1 != 0)
    *(rcx_1 + 0xc) += 1

if (&var_28 != arg1 + 0x20)
    var_28.o = *(arg1 + 0x20)
    *(arg1 + 0x20) = var_28.o

if (rcx_1 != 0)
    int32_t temp1_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

*(arg1 + 0x30) = *(arg2 + 0x30)

if (arg1 + 0x38 != arg2 + 0x38)
    int32_t r8_1 = *(arg1 + 0x44)
    int64_t rbp_1 = sx.q(*(arg2 + 0x40))
    int64_t r14_1 = *(arg2 + 0x38)
    *(arg1 + 0x40) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1407c3650(arg1 + 0x38, rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x38), r14_1, (rbp_1 * 0xc).d)
    else
        *(arg1 + 0x44) = rbp_1.d

*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x5c) ^= (*(arg1 + 0x5c) ^ *(arg2 + 0x5c)) & 1
char rdx_3 = ((*(arg2 + 0x5c) ^ *(arg1 + 0x5c)) & 2) ^ *(arg1 + 0x5c)
*(arg1 + 0x5c) = rdx_3
*(arg1 + 0x5c) = ((*(arg2 + 0x5c) ^ rdx_3) & 4) ^ rdx_3
return arg1
