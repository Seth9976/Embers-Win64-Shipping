// 函数: sub_1427b62a0
// 地址: 0x1427b62a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void*** result = nullptr
void** const var_38 = &data_142d578b0
void*** result_1 = nullptr
int64_t* (* rdx)(int64_t* arg1, int64_t, void* arg3) = sub_1427a2420
int64_t* (* var_58)(int64_t* arg1, int64_t, void* arg3) = sub_1427a2420
int128_t entry_zmm2
int128_t entry_zmm3

if (arg1 + 0x40 != &var_58)
    entry_zmm2 = *(arg1 + 0x40)
    entry_zmm3 = *(arg1 + 0x50)
    int128_t zmm4 = *(arg1 + 0x60)
    int128_t zmm5 = *(arg1 + 0x70)
    *(arg1 + 0x40) = var_58.o
    int128_t zmm0 = var_38.o
    *(arg1 + 0x50) = result_1.o
    *(arg1 + 0x60) = zmm0
    var_58.o = entry_zmm2
    rdx = var_58
    result_1.o = entry_zmm3
    result = result_1
    int128_t var_28
    *(arg1 + 0x70) = var_28
    var_38.o = zmm4
    int128_t var_28_1 = zmm5

if (rdx != 0)
    void** const* result_2 = &var_38
    
    if (result != 0)
        result_2 = result
    
    result = (*result_2)[2](result_2, rdx, entry_zmm2, entry_zmm3)

__security_check_cookie(rax_1 ^ &var_78)
return result
