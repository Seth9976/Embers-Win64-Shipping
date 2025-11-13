// 函数: sub_140909f10
// 地址: 0x140909f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbx_1 = arg2[1].d + r8_1

if (rbx_1 s> r8_1)
    sub_1407c2fa0(arg1, rbx_1)
    int32_t rax_3
    
    if (rbx_1 u< 4)
        rax_3 = 1
    else
        uint32_t rbx_2 = rbx_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
        int32_t rcx
        
        if (rbx_2 == 0xfffffff8)
            rcx = 0x20
        else
            rcx = 0x1f - temp0_2
        
        int32_t rcx_2 = rcx << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
        
        if (rcx_2 == 0)
            rax_3 = 1
        else
            rax_3 = 1 << ((not.d(rcx_2)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_5 = arg1[9].d
    
    if (rcx_5 == 0 || rcx_5 s< rax_3)
        arg1[9].d = rax_3
        sub_1406dcb10(arg1)

int32_t* i = *arg2
int64_t result = sx.q(arg2[1].d)

for (void* rsi_1 = &i[result]; i != rsi_1; i = &i[1])
    void arg_8
    result = sub_14077a5e0(arg1, &arg_8, i, nullptr)

return result
