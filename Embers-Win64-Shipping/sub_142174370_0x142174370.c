// 函数: sub_142174370
// 地址: 0x142174370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    int64_t r9_1 = *arg1
    void* r8_1 = &arg1[7]
    void* rdx = *(r8_1 + 8)
    void* r10_1 = r9_1 + rbx * 0x18
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_1 + 0x14))
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_1 = r8_1 + (rcx_1 << 2)
    
    while (i != 0xffffffff)
        if (i == rbx.d)
            *rdx_1 = *(r10_1 + 0x10)
            break
        
        int64_t i_1 = sx.q(i)
        int64_t rdx_3 = i_1 + ((i_1 + 1) << 1)
        i = *(r9_1 + (rdx_3 << 3))
        rdx_1 = r9_1 + (rdx_3 << 3)

void* rsi = *(*arg1 + rbx * 0x18 + 8)

if (rsi != 0)
    int64_t rcx_3 = *(rsi + 0x20)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    j_sub_140a74f90(rsi)

return sub_1405c3640(arg1, rbx.d, 1) __tailcall
