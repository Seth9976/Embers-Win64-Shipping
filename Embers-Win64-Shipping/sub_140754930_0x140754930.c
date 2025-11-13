// 函数: sub_140754930
// 地址: 0x140754930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
void* const rcx_1

if (arg2 == 0)
    rcx_1 = nullptr
else
    void* rax = sub_140871760()
    void* rcx = *(arg2 + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rcx + 0x38))
        rcx_1 = nullptr
    else if (*(*(rcx + 0x30) + (result << 3)) != rax + 0x30)
        rcx_1 = nullptr
    else
        rcx_1 = arg2

if (arg2 != 0 && *(arg2 + 0x10) == *(arg1 + 0x10) && *(rcx_1 + 0x30) == *(arg1 + 0x30)
        && *(rcx_1 + 0x38) == *(arg1 + 0x38))
    uint32_t zmm0[0x4] = *(rcx_1 + 0x3c)
    zmm0[0] = zmm0[0] f- *(arg1 + 0x3c)
    
    if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f> 9.99999994e-09f))
        result.b = 1
        return result

result.b = 0
return result
