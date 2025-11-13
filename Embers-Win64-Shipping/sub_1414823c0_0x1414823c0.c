// 函数: sub_1414823c0
// 地址: 0x1414823c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x570)
int32_t r8_1 = rdx & 0x40

if (r8_1 != 0)
    void* r9_1 = *(*(arg1 + 0x5c0) + 0x20)
    
    if (((*(r9_1 + 0x13c) - 1) & 0xfd) == 0)
        void* rax_3 = data_143ed96d0
        
        if ((rdx.b & 0x10) == 0)
            rax_3 = data_143ed97a8
        
        return __maxss_xmmss_memss(1f f/ *(rax_3 + 4) * *(r9_1 + 0xd4) * 2f, 0x3727c5ac)

if (r8_1 != 0 && *(arg1 + 0x534) s>= 0 && (rdx.b & 0x10) != 0)
    float zmm2 = *(data_143ed9358 + 4) / (*(arg1 + 0x164) f- *(arg1 + 0x168)) * *(arg1 + 0x3c0)
        / float.s(zx.q(*(arg1 + 0x548))) f* *(*(*(arg1 + 0x5c0) + 0x20) + 0xd4)
    return __maxss_xmmss_memss(zmm2, 0x3727c5ac)

if (test_bit(rdx, 0xb))
    return __maxss_xmmss_memss(0, 0x3727c5ac)

void* rax_7 = data_143ed96d0

if ((rdx.b & 0x10) == 0)
    rax_7 = data_143ed97a8

return __maxss_xmmss_memss(1f f/ *(rax_7 + 4) * *(*(*(arg1 + 0x5c0) + 0x20) + 0xd4) * 2f, 
    0x3727c5ac)
