// 函数: sub_1419975b0
// 地址: 0x1419975b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2

if (*(arg2 + 0x80) != 0)
    return 

uint32_t r9_1 = (arg2 u>> 4).d
int32_t r8_2 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
int32_t rdx_2 = neg.d(r8_2 + r9_1) ^ r8_2 u>> 0xd
int32_t r9_4 = (r9_1 - r8_2 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r8_5 = (r8_2 - r9_4 - rdx_2) ^ r9_4 << 0x10
int32_t rdx_5 = (rdx_2 - r8_5 - r9_4) ^ r8_5 u>> 5
int32_t r9_7 = (r9_4 - r8_5 - rdx_5) ^ rdx_5 u>> 3
int32_t r8_8 = (r8_5 - r9_7 - rdx_5) ^ r9_7 << 0xa
void* rax_15 = sub_1419907e0(&arg1[4], (rdx_5 - r8_8 - r9_7) ^ r8_8 u>> 0xf, &arg_10)
void* rdi_1 = arg_10
sub_1419a0ce0(&data_1439c9260, *arg1, rdi_1 + 0x30, rax_15, *(rdi_1 + 8), 0, 1, 0)
*(rdi_1 + 0x80) = *rax_15
*(rdi_1 + 0x10) = *(*rax_15 + 0x10)
