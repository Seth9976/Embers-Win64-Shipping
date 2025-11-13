// 函数: sub_14237b9a0
// 地址: 0x14237b9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2
void* rdx = *(arg1 + 0x10)
void* result_1 = result

if (rdx != 0 && result != 0)
    int128_t zmm2
    int128_t zmm3
    zmm2, zmm3 = sub_1423943c0(arg3, rdx, result_1, arg4, arg5)
    char rax = *(arg1 + 0x21)
    char rcx_1 = 0x1c
    int32_t r9_1 = 4
    
    if (rax != 0)
        rcx_1 = 0x39
    
    if (rax != 0)
        r9_1 = 1
    
    result, arg5, arg4 =
        sub_142394310(arg3, *(arg1 + 0x18), *(arg1 + 0x10), r9_1, zmm2, zmm3, rcx_1)
    result_1 = *arg2

void* rdx_2 = *(arg1 + 0x58)

if (rdx_2 == 0 || result_1 == 0)
    return result

int128_t zmm2_1
int128_t zmm3_1
zmm2_1, zmm3_1 = sub_1423943c0(arg3, rdx_2, result_1, arg4, arg5)
return sub_142394310(arg3, *(arg1 + 0x60), *(arg1 + 0x58), 4, zmm2_1, zmm3_1, 0x1c)
