// 函数: sub_140e17780
// 地址: 0x140e17780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140e1ad30(&arg_8, arg2, arg3)
int64_t rbx = arg_8
void* const rcx_4

if (*(arg1 + 0x270) == *(arg1 + 0x29c))
labelid_7:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = arg1 + 0x2a0
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x2b0)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140e17820:
        rcx_4 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x268)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            rcx_4 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == rbx)
                break
            
            rax_4 = *(rcx_4 + 0x20)
            
            if (rax_4 == 0xffffffff)
                goto label_140e17820_1
        
        if (rax_4 == 0xffffffff)
        label_140e17820_1:
            rcx_4 = nullptr

void* result = rcx_4 + 8

if (rcx_4 == 0)
    result = nullptr

if (result != 0)
    return result

return &data_1439ae6c8
