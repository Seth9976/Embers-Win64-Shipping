// 函数: sub_141c66090
// 地址: 0x141c66090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x4c)
EnterCriticalSection(rax + 0x40)
int32_t rax_1 = *(rax + 0x98)
int128_t var_98 = *(rax + 0x68)
int128_t var_88 = *(rax + 0x78)
int128_t var_78 = *(rax + 0x88)

if (rax != -0x40)
    LeaveCriticalSection(rax + 0x40)

void** var_58
sub_141e712f0(&var_58)
int128_t var_44 = var_98
int32_t var_20 = var_78:4.d.d
int128_t var_34 = var_88
int32_t var_24 = var_78.d.d
int32_t var_1c = var_78:8.d.d
int32_t var_18 = 0
int32_t var_48 = var_78:0xc.d.d
arg1[0x144].d = rax_1.d
return (*(*arg1 + 0x10))(arg1, &var_58)
