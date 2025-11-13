// 函数: sub_142365a30
// 地址: 0x142365a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result[0x4] = 0x4a000000
void* rcx

if ((*(arg1 + 0x3f0) & 1) == 0)
    void* rcx_1 = *(arg1 + 0x48)
    
    if (rcx_1 != 0)
        rcx = rcx_1 + 0x28
        goto label_142365a71
else
    rcx = arg1 + 0x50
label_142365a71:
    
    if (rcx != 0)
        result = sub_141e5fae0(rcx)
int64_t rsi = 0
int64_t* rdi = *(arg1 + 0x28)
uint64_t r14_1 = sx.q(*(arg1 + 0x30)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x30))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            float zmm0[0x4] = sub_140cd85e0(rbx_1)
            (*(*rbx_1 + 0x268))(rbx_1)
            result = _mm_max_ss(zmm0[0], result[0])
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return result
