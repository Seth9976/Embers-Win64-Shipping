// 函数: sub_1418c8600
// 地址: 0x1418c8600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x240)

if (rbx[0xf] != 0)
    sub_1418c86c0(rbx, 0, 0)

void* rdx = rbx[0xe]

if (rdx != 0)
    if (*(arg2 + 0x410) != 0)
        if (rbx[0xf] != 0)
            sub_1418c86c0(rbx, 0, 0)
            rdx = rbx[0xe]
        
        sub_1418e06b0(arg2 + 0x248, rdx)
    
    sub_1418c8030(rbx, nullptr)

return sub_1418c2ee0(rbx) __tailcall
