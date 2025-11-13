// 函数: sub_141b32660
// 地址: 0x141b32660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
void* rax_1 = sub_141a415a0(sub_141a53050(arg1, &arg_18), arg2)

if (rax_1.b != 0)
    *(arg1 + 0xca) = 1
    *(arg1 + 0xc9) = arg2
    void* rax_3 = sub_141a4ad10(*(arg1 + 0xd0), *(sub_141a788e0() + 0x18))
    int64_t* rcx_2
    
    if (rax_3 == 0)
        rcx_2 = nullptr
    else
        rcx_2 = *(rax_3 + 8)
    
    if (arg2 == 1)
        void* rax_4 = rcx_2[6]
        *(rax_4 + 0x34) = arg2
        *(rax_4 + 0x30) = 0x3f800000
        void* rax_5 = rcx_2[7]
        *(rax_5 + 0x34) = arg2
        *(rax_5 + 0x30) = 0x3f800000
        void* rax_6 = rcx_2[8]
        *(rax_6 + 0x34) = arg2
        *(rax_6 + 0x30) = 0x3f800000
        return rax_6
    
    void* rax_7 = *rcx_2
    *(rax_7 + 0x34) = 1
    *(rax_7 + 0x30) = 0
    void* rax_8 = rcx_2[1]
    *(rax_8 + 0x34) = 1
    *(rax_8 + 0x30) = 0
    void* rax_9 = rcx_2[2]
    *(rax_9 + 0x34) = 1
    *(rax_9 + 0x30) = 0
    void* rax_10 = rcx_2[3]
    *(rax_10 + 0x34) = 1
    *(rax_10 + 0x30) = 0
    void* rax_11 = rcx_2[4]
    *(rax_11 + 0x34) = 1
    *(rax_11 + 0x30) = 0
    void* rax_12 = rcx_2[5]
    *(rax_12 + 0x34) = 1
    *(rax_12 + 0x30) = 0
    void* rax_13 = rcx_2[6]
    *(rax_13 + 0x34) = 1
    *(rax_13 + 0x30) = 0
    void* rax_14 = rcx_2[7]
    *(rax_14 + 0x34) = 1
    *(rax_14 + 0x30) = 0
    rax_1 = rcx_2[8]
    *(rax_1 + 0x34) = 1
    *(rax_1 + 0x30) = 0

return rax_1
