// 函数: sub_141885670
// 地址: 0x141885670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg1 + 0x274))
    *(arg1 + 0x274) = 0
    z = true
else
    *(arg1 + 0x274)
    z = false

if (z)
    int128_t zmm6 = 0x3dcccccd
    bool z_2
    
    do
        bool z_1
        
        if (0 == *(arg1 + 0x270))
            *(arg1 + 0x270) = 0
            z_1 = true
        else
            *(arg1 + 0x270)
            z_1 = false
        
        if (not(z_1))
            break
        
        zmm6 = sub_140b73230(zmm6)
        
        if (0 == *(arg1 + 0x274))
            *(arg1 + 0x274) = 0
            z_2 = true
        else
            *(arg1 + 0x274)
            z_2 = false
    while (z_2)

*arg2 = 0
arg2[1] = 0
EnterCriticalSection(arg1 + 0x110)
int32_t i_2 = *(arg1 + 0x140)

if (i_2 != 0)
    int32_t rax_4 = arg2[1].d
    int32_t rdx = rax_4 + i_2
    
    if (rdx s> *(arg2 + 0xc))
        sub_14061cd70(arg2, rdx)
        rax_4 = arg2[1].d
    
    void* rdi_1 = *(arg1 + 0x138)
    int32_t i_1 = i_2
    int64_t* rbx_3 = (sx.q(rax_4) << 4) + *arg2
    int32_t i
    
    do
        *rbx_3 = 0
        int32_t rsi_1 = *(rdi_1 + 8)
        int64_t r15_1 = *rdi_1
        rbx_3[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_3, rsi_1, 0)
            memcpy(*rbx_3, r15_1, rsi_1 * 2)
        else
            *(rbx_3 + 0xc) = 0
        
        rbx_3 = &rbx_3[2]
        rdi_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    arg2[1].d += i_2

LeaveCriticalSection(arg1 + 0x110)
return arg2
