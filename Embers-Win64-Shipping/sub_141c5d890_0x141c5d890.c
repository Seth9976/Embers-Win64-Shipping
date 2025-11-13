// 函数: sub_141c5d890
// 地址: 0x141c5d890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int32_t* rdx_2

if (*(arg1 + 0xa48) == *(arg1 + 0xa74))
label_141c5d90d:
    rdx_2 = nullptr
else
    void* r11_1 = arg1 + 0xa78
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(*(arg1 + 0xa88)) - 1) & rbx) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141c5d90d_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(rax_1) << 5) + *(arg1 + 0xa40)
            
            if (*rdx_2 == rbx.d)
                break
            
            rax_1 = rdx_2[6]
            
            if (rax_1 == 0xffffffff)
                goto label_141c5d90d_2
        
        if (rax_1 == 0xffffffff)
        label_141c5d90d_2:
            rdx_2 = nullptr

void* rax_2 = &rdx_2[2]

if (rdx_2 == 0)
    rax_2 = nullptr

if (rax_2 == 0)
    return rax_2

sub_1405b0be0(arg3, rax_2)
int64_t* rax_3
rax_3.b = 1
return rax_3
