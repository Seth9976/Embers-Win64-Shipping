// 函数: sub_14099acb0
// 地址: 0x14099acb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_2

if (arg1[1].d == *(arg1 + 0x34))
label_14099ad30:
    rcx_2 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r9 = &arg1[7]
    void* rdx = *(r9 + 8)
    
    if (rdx != 0)
        r9 = rdx
    
    int32_t rax_4 = *(r9 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_14099ad30_1:
        rcx_2 = nullptr
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rax_4) * 3
            rcx_2 = r8_3 + (rdx_1 << 3)
            
            if (*(r8_3 + (rdx_1 << 3)) == arg3)
                break
            
            rax_4 = *(rcx_2 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_14099ad30_2
        
        if (rax_4 == 0xffffffff)
        label_14099ad30_2:
            rcx_2 = nullptr

int512_t result
result.o = *(*(*(*(rcx_2 + 8) + 0x18) + sx.q(arg4) * 0x10) + (sx.q(arg2) << 2))
return result
