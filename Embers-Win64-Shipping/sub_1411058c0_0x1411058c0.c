// 函数: sub_1411058c0
// 地址: 0x1411058c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg3 s< 0 || (*(arg2 + 0x9c) & 0x200000) == 0 || *(arg1 + 0x515b) == 0)
    return 

void* r9 = arg1 + 0x1688
void* r8 = *(r9 + 0x10)
int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(arg3)
int32_t rdi_1 = 1 << (arg3.b & 0x1f)

if (r8 != 0)
    r9 = r8

if ((*(r9 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)) & rdi_1) != 0)
    *(arg4 + 8) = data_1439b59d8
    *(arg4 + 0x38) = 1
    return 

int32_t* rcx_3 = arg1 + 0x16a8
int32_t* rax = *(rcx_3 + 0x10)

if (rax != 0)
    rcx_3 = rax

if ((rcx_3[sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)] & rdi_1) != 0)
    *(arg4 + 8) = data_1439b59d8
    *(arg4 + 0x38) = 0
