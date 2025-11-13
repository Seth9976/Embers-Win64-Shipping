// 函数: sub_14122eb30
// 地址: 0x14122eb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = &arg1[7]
    void* r9_1 = *arg1
    void* rdx = *(r8_1 + 8)
    int64_t r10_1 = rbx * 0x38
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_1 + r9_1 + 0x34))
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_1 = r8_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *rdx_1)
        if (i == rbx.d)
            *rdx_1 = *(r10_1 + r9_1 + 0x30)
            break
        
        rdx_1 = r9_1 + 0x30 + sx.q(i) * 0x38

int64_t i_1 = 2
void* rsi_2 = rbx * 0x38 + 0x18 + *arg1

do
    int64_t* rcx_3 = *(rsi_2 - 8)
    rsi_2 -= 8
    i_1 -= 1
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x38))(rcx_3)
while (i_1 != 0)

return sub_140afe9e0(arg1, rbx.d, (i_1 + 1).d) __tailcall
