// 函数: sub_142c9d250
// 地址: 0x142c9d250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void** r9 = sub_140593a10(std::wcerr, "Fail to save screenshot "")
void* rcx_2 = *(*(arg2 + 0x68) + 8)
void** rdx_3 = *(*(rcx_2 + 0x18) + (((*(rcx_2 + 0x20) - 1) & *(rcx_2 + 0x28)) << 3))
wchar16* r8 = rdx_3[2]
void** rax
rax.b = rdx_3[3] u>= 8

if (rax.b != 0)
    rdx_3 = *rdx_3

void** rax_2 = sub_140593a10(sub_1405943c0(r9, rdx_3, r8), ": ")
int64_t* rcx_6 = *(arg2 + 0x120)
int64_t rdx_4 = *rcx_6
std::wostream::operator<<(sub_140593c70(sub_140593a10(rax_2, (*(rdx_4 + 8))(rcx_6, rdx_4)), 0x2e), 
    sub_140593eb0)
return 0
