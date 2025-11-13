// 函数: sub_141c7be60
// 地址: 0x141c7be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = *(arg1 + 0x20)
uint32_t rbx = 0
uint32_t i_1 = arg1[4]
*arg1 = i_1

if (r10 == 0)
    int32_t* rax_1 = sub_141c79a80(0xc0, nullptr)
    r10 = rax_1
    
    if (rax_1 != 0)
        rax_1[0x29] = 0
        *(rax_1 + 0xa8) = 0
        rax_1[0x2c] = 0
        *(rax_1 + 0xb8) = 0
    else
        r10 = nullptr
    
    i_1 = *arg1
    *(arg1 + 0x20) = r10

if (i_1 u> 0x10)
    uint32_t i = i_1
    uint32_t i_2 = i_1
    
    if (i_1 u> 1)
        do
            i u>>= 1
            rbx += 1
        while (i u> 1)
        
        i_2 = *arg1
        r10 = *(arg1 + 0x20)
    
    if (rbx != 0x20 && i_1 u> 1 << rbx.b)
        rbx += 1
    
    char r8_1 = 0xb
    i_1 = i_2
    
    if (rbx + 1 u< 0xb)
        r8_1 = (rbx + 1).b
    
    rbx = zx.d(r8_1)

return sub_141c7b6c0(r10, i_1, *(arg1 + 8), rbx) __tailcall
