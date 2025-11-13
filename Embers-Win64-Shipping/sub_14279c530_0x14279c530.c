// 函数: sub_14279c530
// 地址: 0x14279c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_140d15e10(arg1)
arg1[5].d = 0x64
*arg1 = &data_1434b3390
void*** rax_2 = nullptr
void** const var_38 = &data_142d578b0
arg1[8] = 0
arg1[0xa] = 0
int64_t* (* rdx)(int64_t* arg1, int64_t, void* arg3) = sub_1427a25e0
void*** var_48 = nullptr
int64_t* (* var_58)(int64_t* arg1, int64_t, void* arg3) = sub_1427a25e0

if (&arg1[8] != &var_58)
    int128_t zmm2_1 = *(arg1 + 0x40)
    int128_t zmm3 = *(arg1 + 0x50)
    int128_t zmm4_1 = *(arg1 + 0x60)
    int128_t zmm5_1 = *(arg1 + 0x70)
    *(arg1 + 0x40) = var_58.o
    int128_t zmm0_1 = var_38.o
    *(arg1 + 0x50) = var_48.o
    *(arg1 + 0x60) = zmm0_1
    var_58.o = zmm2_1
    rdx = var_58
    var_48.o = zmm3
    rax_2 = var_48
    int128_t var_28
    *(arg1 + 0x70) = var_28
    var_38.o = zmm4_1
    int128_t var_28_1 = zmm5_1

if (rdx != 0)
    void** const* rcx_1 = &var_38
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    void** const rdx_1 = *rcx_1
    rdx_1[2](rcx_1, rdx_1)

__security_check_cookie(rax_1 ^ &var_78)
return arg1
