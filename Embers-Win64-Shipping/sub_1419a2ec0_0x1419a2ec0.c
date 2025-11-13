// 函数: sub_1419a2ec0
// 地址: 0x1419a2ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_3

if (arg1[1].d == *(arg1 + 0x34))
label_1419a2f50:
    rcx_3 = nullptr
else
    int64_t rdi_1 = *(arg3 + 0x30)
    void* r11_1 = &arg1[7]
    void* r10_1 = *(r11_1 + 8)
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_5 =
        *(r11_1 + ((sx.q((rdi_1 u>> 0x20).d * 0x17 + rdi_1.d) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1419a2f50_1:
        rcx_3 = nullptr
    else
        int64_t r8 = *arg1
        
        while (true)
            int64_t rdx_2 = sx.q(rax_5) * 3
            rcx_3 = r8 + (rdx_2 << 3)
            
            if (*(r8 + (rdx_2 << 3)) == rdi_1)
                break
            
            rax_5 = *(rcx_3 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_1419a2f50_2
        
        if (rax_5 == 0xffffffff)
        label_1419a2f50_2:
            rcx_3 = nullptr

void* rbx_1 = rcx_3 + 8

if (rcx_3 == 0)
    rbx_1 = nullptr

int128_t var_18

if (rbx_1 == 0)
    var_18 = zx.o(0)
else
    void* rbx_2 = *rbx_1
    var_18.q = sub_1419cec70(*(rbx_2 + 0x28), arg3 + 0x28, arg4)
    var_18:8.q = rbx_2

*arg2 = var_18
return arg2
