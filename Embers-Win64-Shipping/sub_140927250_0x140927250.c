// 函数: sub_140927250
// 地址: 0x140927250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
void* const rcx_3

if (*(arg1 + 0x48) == *(arg1 + 0x74))
labelid_1c:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x78
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0x88)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_1409272d0:
        rcx_3 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x40)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 9
            rcx_3 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == rbx)
                break
            
            rax_4 = *(rcx_3 + 0x40)
            
            if (rax_4 == 0xffffffff)
                goto label_1409272d0_1
        
        if (rax_4 == 0xffffffff)
        label_1409272d0_1:
            rcx_3 = nullptr

void* rax_5 = rcx_3 + 8

if (rcx_3 == 0)
    rax_5 = nullptr

if (rax_5 == 0)
    int64_t var_48_1 = *arg2
    int64_t var_40_1 = 0
    int64_t var_30
    __builtin_memset(&var_30, 0, 0x1c)
    sub_1409176d0(arg1 + 0x40, arg2)
    int64_t var_28
    sub_14091a840(&var_28)

int64_t rbx_1 = *arg2
void* const rcx_9

if (*(arg1 + 0x48) == *(arg1 + 0x74))
labelid_4:
    rcx_9 = nullptr
else
    int32_t rax_9 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8_3 = arg1 + 0x78
    void* rcx_7 = *(r8_3 + 8)
    
    if (rcx_7 != 0)
        r8_3 = rcx_7
    
    int32_t rax_11 = *(r8_3 + (((sx.q(*(arg1 + 0x88)) - 1) & sx.q(rax_9)) << 2))
    
    if (rax_11 == 0xffffffff)
    label_1409273a0:
        rcx_9 = nullptr
    else
        int64_t r8_4 = *(arg1 + 0x40)
        
        while (true)
            int64_t rdx_8 = sx.q(rax_11) * 9
            rcx_9 = r8_4 + (rdx_8 << 3)
            
            if (*(r8_4 + (rdx_8 << 3)) == rbx_1)
                break
            
            rax_11 = *(rcx_9 + 0x40)
            
            if (rax_11 == 0xffffffff)
                goto label_1409273a0_1
        
        if (rax_11 == 0xffffffff)
        label_1409273a0_1:
            rcx_9 = nullptr

if (rcx_9 == 0)
    return nullptr

return rcx_9 + 8
