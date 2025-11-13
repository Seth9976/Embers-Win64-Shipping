// 函数: sub_141f6f8e0
// 地址: 0x141f6f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef3910(arg1)
void* result = arg1[0xb6]

if (result == 0 || arg1[0x86] == 0 || ((*(arg1 + 0x5a9) & 2) == 0 && (*(arg1 + 0x5a7) & 0x20) == 0
        && *(arg1 + 0x5a4) != 0 && *(result + 0x38) != 0))
    return result

int32_t rsi_1 = arg1[0xab].d
int32_t rdi_1 = 0

if ((*(arg1 + 0x5a6) & 0x40) != 0 || *data_143f3b7a0 == 0)
    arg1[0xa6].d = 0
    
    if (*(arg1 + 0x534) != 0)
        sub_1405a5410(&arg1[0xa5], 0)

char rax_1 = *(arg1 + 0x5a9)

if ((rax_1 & 0x20) != 0 && (rax_1 & 8) == 0)
    rdi_1 = 2

int64_t* rcx_1 = arg1[0xb6]
(*(*rcx_1 + 0x20))(rcx_1, zx.q(rsi_1), arg1, &arg1[0xa5], &arg1[0xa7], rdi_1)
*(arg1[0xb6] + 0x38) = 1
*(arg1 + 0x5a9) &= 0xfd
return sub_141f76360(arg1)
