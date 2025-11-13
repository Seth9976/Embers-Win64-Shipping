// 函数: sub_141ccf650
// 地址: 0x141ccf650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x21c) != 0)
    return 

int32_t rax_1 = *(arg1 + 0x200)

if (rax_1 s<= 0)
    return sub_141ccdfa0(arg1) __tailcall

*(arg1 + 0x21c) = 1
int64_t* rbx_1 = *(arg1 + 0x1f8)
void* rdi_3 = &rbx_1[sx.q(rax_1) * 2]

if (rbx_1 != rdi_3)
    do
        int64_t* rcx = *rbx_1
        
        if (rcx != 0 && *(rcx + 0x1b) == 0)
            (*(*rcx + 0x60))(rcx)
            int64_t* rcx_1 = *rbx_1
            (*(*rcx_1 + 0x90))(rcx_1)
        
        rbx_1 = &rbx_1[2]
    while (rbx_1 != rdi_3)
    
    rax_1 = *(arg1 + 0x200)

int32_t rsi_1 = *(arg1 + 0x218)
int64_t rbx_2 = sx.q(rax_1 - 1)

if (rax_1 - 1 s< 0)
    return 

int64_t rdi_5 = rbx_2 << 4
int64_t temp1_1

do
    int64_t* r14_1 = *(rdi_5 + *(arg1 + 0x1f8))
    int32_t rax
    int64_t r9_1
    rax, r9_1 = (*(*r14_1 + 0x80))(r14_1)
    
    if (rax != 0xffffffff)
        *(r14_1 + 0x14) = rsi_1
        rsi_1 -= rax
    else
        sub_140af98a0(
            "D:"
        "/Build/++UE4/Sync/Engine/Source/Runtime/PacketHandlers/PacketHandler/Private/PacketHandler."
        "cpp", 
            0x39b, Handler returned invalid 'GetReservedPacketBits' value.", r9_1)
        sub_140afbb40()
    
    rdi_5 -= 0x10
    temp1_1 = rbx_2
    rbx_2 -= 1
while (temp1_1 - 1 s>= 0)
