// 函数: sub_1425d65e0
// 地址: 0x1425d65e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(sub_1425e1410() + 0x18)
void* const rcx_3

if (*(arg1 + 0x58) == *(arg1 + 0x84))
label_1425d6670:
    rcx_3 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x88
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0x98)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1425d6670_1:
        rcx_3 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x50)
        
        while (true)
            int64_t rdx_4 = sx.q(rax_5) * 3
            rcx_3 = r8_2 + (rdx_4 << 3)
            
            if (*(r8_2 + (rdx_4 << 3)) == rbx)
                break
            
            rax_5 = *(rcx_3 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_1425d6670_2
        
        if (rax_5 == 0xffffffff)
        label_1425d6670_2:
            rcx_3 = nullptr

void* rax_6 = rcx_3 + 8

if (rcx_3 == 0)
    rax_6 = nullptr

if (rax_6 != 0)
    void* result = *rax_6
    
    if (result != 0 && *(result + 0x10) == sub_1425e1410())
        return result

return nullptr
