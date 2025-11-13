// 函数: sub_1419cfe40
// 地址: 0x1419cfe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419cfef0()
void* const rcx_5

if (data_1439c9748 == data_1439c9774)
labelid_6:
    rcx_5 = nullptr
else
    int64_t r11_1 = *arg1
    void* r9_1 = &data_1439c9778
    void* r8_1 = data_1439c9780
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_3 =
        *(r9_1 + ((sx.q((r11_1 u>> 0x20).d * 0x17 + r11_1.d) & (sx.q(data_1439c9788) - 1)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_1419cfec0:
        rcx_5 = nullptr
    else
        int64_t r8_2 = data_1439c9740
        
        while (true)
            int64_t rdx_3 = sx.q(rax_3) * 3
            rcx_5 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == r11_1)
                break
            
            rax_3 = *(rcx_5 + 0x10)
            
            if (rax_3 == 0xffffffff)
                goto label_1419cfec0_1
        
        if (rax_3 == 0xffffffff)
        label_1419cfec0_1:
            rcx_5 = nullptr

void* rax_4 = rcx_5 + 8

if (rcx_5 == 0)
    rax_4 = nullptr

if (rax_4 == 0)
    return 0

return *rax_4
