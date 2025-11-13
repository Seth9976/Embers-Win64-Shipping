// 函数: sub_14105d660
// 地址: 0x14105d660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = *(arg3 + 0x80)
void* i = arg3

if (i_1 != 0)
    i = i_1

void* rcx = nullptr
int64_t result = sx.q(*(arg3 + 0x88))

for (void* r14 = i + (result << 3); i != r14; i += 8)
    void* rbx_1 = *i
    
    if (rbx_1 != rcx)
        char r9 = *(rbx_1 + 0xfc)
        int32_t rdx = -2
        int32_t r8 = -2
        
        if (arg4 != 0)
            if (arg4 == 1)
                r8 = 0x400
                goto label_14105d711
            
            if (arg4 == 2)
                rdx = 0x800
            label_14105d6e6:
                
                if (r9 != 0)
                    r8 = 0xac3
                else
                    r8 = *(rbx_1 + 0xf0)
            else if (arg4 == 3)
                rdx = 0x400
                goto label_14105d6e6
            
            goto label_14105d71c
        
        r8 = 0x800
    label_14105d711:
        
        if (r9 != 0)
            result = sub_141037220(arg2, rbx_1, r8, 0)
        else
            rdx = *(rbx_1 + 0xf0)
        label_14105d71c:
            
            if (r9 != 0)
                result = sub_141037220(arg2, rbx_1, r8, 0)
            else
                result = sub_1410129f0(arg2, rbx_1, rdx, r8, 0)
        
        rcx = rbx_1

return result
