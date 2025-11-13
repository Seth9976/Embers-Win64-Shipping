// 函数: sub_14244a9a0
// 地址: 0x14244a9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x40)

if (rcx == 0)
    void* rax_2 = sub_1422852e0(sub_140cde0b0())
    *(arg1 + 0x40) = rax_2
    *(rax_2 + 0x440) &= 0xfffffffe
    rcx = *(arg1 + 0x40)

if ((rcx[0x11].b & 1) == 0)
    sub_141ef14c0(rcx, arg1, arg4)

int64_t* rcx_3 = *(arg1 + 0x48)

if (rcx_3 == 0)
    void* rax_4 = sub_1422852e0(sub_140cde0b0())
    *(arg1 + 0x48) = rax_4
    *(rax_4 + 0x440) &= 0xfffffffe
    rcx_3 = *(arg1 + 0x48)

if ((rcx_3[0x11].b & 1) == 0)
    sub_141ef14c0(rcx_3, arg1, arg4)

int64_t* rcx_5 = *(arg1 + 0x50)

if (rcx_5 == 0)
    void* rax_6 = sub_1422852e0(sub_140cde0b0())
    *(arg1 + 0x50) = rax_6
    *(rax_6 + 0x440) &= 0xfffffffe
    rcx_5 = *(arg1 + 0x50)

if ((rcx_5[0x11].b & 1) == 0)
    sub_141ef14c0(rcx_5, arg1, arg4)

if (arg3 == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x150) s> 0)
        int64_t** r14_1 = nullptr
        
        do
            int64_t* rsi_1 = *(r14_1 + *(arg1 + 0x148))
            
            if (sub_1420e3ab0(rsi_1) == 0 || (*(rsi_1 + 0x1f4) & 0x20) != 0)
                sub_1420f1ac0(rsi_1, arg2, arg4)
                void*** rax_9 = sub_141f88540()
                void** r8_5 = *rax_9
                r8_5[9](rax_9, rsi_1, r8_5)
            
            i += 1
            r14_1 = &r14_1[1]
        while (i s< *(arg1 + 0x150))
else
    sub_1420f1ac0(*(arg1 + 0x30), arg2, arg4)

return sub_142449550(arg1, nullptr, nullptr) __tailcall
