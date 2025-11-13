// 函数: sub_140a66000
// 地址: 0x140a66000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
int64_t arg_8 = arg1[1]
int32_t result = *(r9 + 0x10)
char* rcx_3

if (result == *(r9 + 0x3c))
label_140a66074:
    rcx_3 = nullptr
else
    void* rcx = *(r9 + 0x48)
    void* r8_1 = r9 + 0x40
    
    if (rcx != 0)
        r8_1 = rcx
    
    result = *(r8_1 + (((sx.q(*(r9 + 0x50)) - 1) & zx.q(arg2)) << 2))
    
    if (result == 0xffffffff)
    label_140a66074_1:
        rcx_3 = nullptr
    else
        while (true)
            rcx_3 = sx.q(result) * 0xb0 + *(r9 + 8)
            
            if (*rcx_3 == arg2)
                break
            
            result = *(rcx_3 + 0xa8)
            
            if (result == 0xffffffff)
                goto label_140a66074_2
        
        if (result == 0xffffffff)
        label_140a66074_2:
            rcx_3 = nullptr

void* rbx = &rcx_3[8]

if (rcx_3 == 0)
    rbx = nullptr

if (rbx == 0)
    return result

sub_140a670c0(&arg_8, rbx)
return sub_140a670c0(&arg_8, rbx + 0x50)
