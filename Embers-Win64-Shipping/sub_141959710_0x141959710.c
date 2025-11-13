// 函数: sub_141959710
// 地址: 0x141959710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 != 0)
    sub_140a80f40()

void*** rax = j_sub_140a82f30(0x38)
void* rdx = nullptr
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_142d3ff08
    rbx[1].d = 0
    *rbx = &data_142ff8b48
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100
    rbx[3] = 0
    rbx[4].d = 0
    *(rbx + 0x24) = 0
    rbx[5] = arg3
    int64_t* rsi_1
    
    if (arg3 != 0)
        *(arg3 + 8) += 1
        rsi_1 = rbx[5]
    
    void* const r8
    
    if (arg3 == 0 || rsi_1 == 0)
        r8 = nullptr
    else
        (*(*rsi_1 + 0x48))(rsi_1)
        
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        void* rax_3 = (*(*rsi_1 + 0x48))(rsi_1)
        r8 = rbx[5]
        rdx = rax_3
    
    rbx[3].d = *(rdx + 0x10)
    rbx[4].d = *(sx.q(*(r8 + 0x3c)) * 0x1c + &data_143efeda0)
    *(rbx + 0x24) = *(r8 + 0x3c)
    rbx[6].b = *(rdx + 0x14) == 0x806f

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

return arg2
