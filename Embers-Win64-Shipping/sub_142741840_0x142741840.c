// 函数: sub_142741840
// 地址: 0x142741840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t rbx = *(arg2 + 0x60)
int64_t rax = sub_14226e750(arg2)
int64_t* rcx_1 = data_143f74110
int64_t r9 = *rcx_1
(*(r9 + 0xf0))(rcx_1, rbx, rax, r9)
int64_t* rcx_2 = data_143f74110
(*(*rcx_2 + 0x150))(rcx_2, 3, rbx)
uint32_t rdi_1 = (arg2 u>> 4).d
int32_t rcx_4 = (0x9e3779b9 - rdi_1) ^ rdi_1 << 8
int32_t rdx_3 = neg.d(rcx_4 + rdi_1) ^ rcx_4 u>> 0xd
int32_t rdi_4 = (rdi_1 - rcx_4 - rdx_3) ^ rdx_3 u>> 0xc
int32_t rcx_7 = (rcx_4 - rdi_4 - rdx_3) ^ rdi_4 << 0x10
int32_t rdx_6 = (rdx_3 - rcx_7 - rdi_4) ^ rcx_7 u>> 5
int32_t rdi_7 = (rdi_4 - rcx_7 - rdx_6) ^ rdx_6 u>> 3
int32_t rcx_10 = (rcx_7 - rdi_7 - rdx_6) ^ rdi_7 << 0xa
return sub_142742a10(arg1 + 0x18, (rdx_6 - rcx_10 - rdi_7) ^ rcx_10 u>> 0xf, &arg_10)
