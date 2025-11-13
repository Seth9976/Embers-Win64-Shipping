// 函数: sub_140998330
// 地址: 0x140998330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1 = *(arg3 + 0x10) u>> 2

if ((rax_1.b & 1) == 0)
    char* rax_5 = *(arg2 + 0x10)
    *rax_5 = 0
    return rax_5

int32_t r10 = *(arg3 + 0x20)
int32_t r9 = 0

if (r10 s> 0)
    int64_t* r8 = *(arg3 + 0x18)
    int64_t r11_1 = sx.q(arg2[1]) * 3
    int64_t rbx_1 = sx.q(*arg2) * 3
    
    do
        int64_t rcx_1 = *r8
        uint128_t zmm0 = zx.o(*(rcx_1 + (rbx_1 << 2)))
        int64_t zmm1 = *(rcx_1 + (r11_1 << 2))
        int32_t rax_3 = *(rcx_1 + (r11_1 << 2) + 8)
        uint64_t var_28_1 = zmm0.q
        zmm0.d = zmm0.d f- zmm1.d
        rax_1 = *(rcx_1 + (rbx_1 << 2) + 8)
        
        if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
        label_1409983f4:
            char* rax_4 = *(arg2 + 0x10)
            *rax_4 = 0
            return rax_4
        
        zmm0.d = var_28_1:4.d.d f- zmm1:4.d
        
        if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
            goto label_1409983f4
        
        zmm0.d = rax_1.d f- rax_3
        
        if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
            goto label_1409983f4
        
        r9 += 1
        r8 = &r8[2]
    while (r9 s< r10)

return rax_1
