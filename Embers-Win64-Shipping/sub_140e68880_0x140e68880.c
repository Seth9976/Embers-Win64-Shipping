// 函数: sub_140e68880
// 地址: 0x140e68880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg3)
int64_t* rcx = *(arg1 + 0x20)

if (rcx != 0 && r10.d == 0xa)
    (*(*rcx + 0x18))(rcx)
    return arg2

void* const r8_1

if (*(arg1 + 0x98) == *(arg1 + 0xc4))
labelid_8:
    r8_1 = nullptr
else
    void* r8 = arg1 + 0xc8
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_3 = *(r8 + (((sx.q(*(arg1 + 0xd8)) - 1) & r10) << 2))
    
    if (rax_3 == 0xffffffff)
    label_140e68921:
        r8_1 = nullptr
    else
        int64_t r11_1 = *(arg1 + 0x90)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_3) * 5
            r8_1 = r11_1 + (rdx_3 << 2)
            
            if (*(r11_1 + (rdx_3 << 2)) == r10.d)
                break
            
            rax_3 = *(r8_1 + 0xc)
            
            if (rax_3 == 0xffffffff)
                goto label_140e68921_1
        
        if (rax_3 == 0xffffffff)
        label_140e68921_1:
            r8_1 = nullptr

void* rcx_3 = r8_1 + 4
void* rax_4 = &data_143dbb1f0

if (r8_1 == 0)
    rcx_3 = nullptr

if (rcx_3 != 0)
    rax_4 = rcx_3

*arg2 = *rax_4
return arg2
