// 函数: sub_140ff9720
// 地址: 0x140ff9720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx
int64_t* r8

if (arg4 != 0)
    void* rax_4 = (*(*arg4 + 0x48))(arg4)
    rdx = rax_4
    
    if (rax_4 == 0)
        r8 = nullptr
    else
        r8 = *(rax_4 + 0x40)
else
    rdx = nullptr
    r8 = nullptr

int64_t rax_2

if (rdx == 0)
label_140ff978c:
    
    if (arg4 == 0)
        rax_2 = 0
    else
        rax_2 = arg4[0xb]
    
    int32_t var_10_1 = 1
else
    int32_t var_10
    
    if (*(rdx + 0x50) u<= 0)
        if (*(rdx + 0x80) u> 0)
            goto label_140ff978c
        
        rax_2 = arg4[0xb]
        var_10 = 2
    else
        if (**(rdx + 0x48) != 0 || *(rdx + 0x80) u> 0)
            goto label_140ff978c
        
        rax_2 = arg4[0xb]
        var_10 = 2

int64_t var_18 = rax_2
return sub_140fd5230(arg1 - 0x18, rdx, r8, arg3)
