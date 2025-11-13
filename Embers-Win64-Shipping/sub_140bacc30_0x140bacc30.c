// 函数: sub_140bacc30
// 地址: 0x140bacc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1

if (arg1 == 0)
    return 0

if (arg1 != 0)
    goto label_140bacc43

while (true)
    if (((*(rbx + 8) u>> 4).b & 1) != 0)
        void* rcx_1 = *(rbx + 0x10)
        
        if (rcx_1 != 0 && ((*(rcx_1 + 0xcc) u>> 0x12).b & 1) != 0 && *(rcx_1 + 0xe0) != 0)
            return 1
    
    rbx = *(rbx + 0x20)
    
    if (rbx == 0)
        return 0
    
label_140bacc43:
    void* rax_1 = sub_140bdf2e0()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
            && ((*(rbx + 0xcc) u>> 0x12).b & 1) != 0)
        if (*(rbx + 0xe0) != 0)
            return 1
