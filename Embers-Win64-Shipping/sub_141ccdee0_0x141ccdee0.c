// 函数: sub_141ccdee0
// 地址: 0x141ccdee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x200)
int32_t rbp = 0
int32_t rsi = *(arg1 + 0x218)
int64_t rbx = sx.q(rdx - 1)

if (rdx - 1 s>= 0)
    int64_t rdi_2 = rbx << 4
    int64_t temp0_1
    
    do
        int64_t* r14_1 = *(rdi_2 + *(arg1 + 0x1f8))
        int32_t rax_3
        int64_t r9_1
        rax_3, r9_1 = (*(*r14_1 + 0x80))(r14_1)
        
        if (rax_3 != 0xffffffff)
            *(r14_1 + 0x14) = rsi
            rsi -= rax_3
            rbp += rax_3
        else
            sub_140af98a0(
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/PacketHandlers/PacketHandler/Private/PacketHandler."
            "cpp", 
                0x39b, Handler returned invalid 'GetReservedPacketBits' value.", r9_1)
            sub_140afbb40()
        
        rdi_2 -= 0x10
        temp0_1 = rbx
        rbx -= 1
    while (temp0_1 - 1 s>= 0)
    rdx = *(arg1 + 0x200)

if (rdx s<= 0)
    return zx.q(rbp)

return zx.q(rbp + 1)
