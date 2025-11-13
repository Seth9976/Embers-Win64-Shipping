// 函数: sub_1420f2250
// 地址: 0x1420f2250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_88
__builtin_memset(&var_88, 0, 0x78)
int64_t* rdi = nullptr
char rax = *(arg1 + 0xc)
uint32_t rcx = data_1439c7a08

if (rax != 4)
    rcx = zx.d(rax)

if (sub_1423d2320(rcx) != 0 && *(data_143f483b0 + 4) != 0)
    char rax_3 = *(arg1 + 0xc)
    uint32_t rcx_1 = data_1439c7a08
    
    if (rax_3 != 4)
        rcx_1 = zx.d(rax_3)
    
    if (sub_1419ba670(rcx_1) != 0)
        rdi = sub_1420dbf90(arg1)

char rax_6 = *(arg1 + 0xc)
uint32_t rcx_3 = data_1439c7a08

if (rax_6 != 4)
    rcx_3 = zx.d(rax_6)

sub_1422e51d0(rcx_3, arg1 + 0x10, rdi, &var_88)
int64_t* rcx_4 = data_143f0f180
return (*(*rcx_4 + 0x100))(rcx_4, *(arg1 + 0x48), &var_88)
