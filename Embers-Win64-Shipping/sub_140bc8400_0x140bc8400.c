// 函数: sub_140bc8400
// 地址: 0x140bc8400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (rdi.d == 0xffffffff)
    __builtin_memset(arg1, 0, 0x18)
    return arg1

AcquireSRWLockShared(&data_143e1a888)
int32_t rdi_1 = 0
int64_t* rdx_2 = (rdi << 4) + data_1439a9a50
int32_t rsi = 0
uint64_t var_20 = 0
int32_t var_14 = 0
int64_t r14 = rdx_2[1]
void* rax_1 = sub_140bcf240(&data_1439a9a00, rdx_2)
uint64_t rbp = 0

if (&var_20 != rax_1)
    rsi = *(rax_1 + 8)
    int64_t rbp_1 = *rax_1
    
    if (rsi != 0)
        sub_1405a4c70(&var_20, rsi, 0)
        rbp = var_20
        memcpy(rbp, rbp_1, rsi * 2)
        rdi_1 = var_14
    else
        rbp = 0

*arg1 = r14
arg1[1] = rbp
arg1[2].d = rsi
*(arg1 + 0x14) = rdi_1
ReleaseSRWLockShared(&data_143e1a888)
return arg1
