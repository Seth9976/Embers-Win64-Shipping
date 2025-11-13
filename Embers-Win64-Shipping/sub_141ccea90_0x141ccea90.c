// 函数: sub_141ccea90
// 地址: 0x141ccea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x21c) == 0)
    if (*(arg1 + 0x200) s<= 0)
        sub_141ccdfa0(arg1)
    else
        *(arg1 + 0x21c) = 1

int64_t* i = *(arg1 + 0x1f8)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x200)) * 2]; i != rdi_2; i = &i[2])
    int64_t* rcx = *i
    
    if (rcx != 0 && *(rcx + 0x1b) == 0)
        (*(*rcx + 0x60))(rcx)
        int64_t* rcx_1 = *i
        (*(*rcx_1 + 0x90))(rcx_1)

int32_t rax_3 = *(arg1 + 0x200)
int32_t rbp = *(arg1 + 0x218)
int32_t result = rax_3 - 1
int64_t result_1 = sx.q(result)

if (rax_3 - 1 s>= 0)
    int64_t rdi_4 = result_1 << 4
    int64_t result_2
    
    do
        int64_t* r14_1 = *(rdi_4 + *(arg1 + 0x1f8))
        int64_t r9_1
        result, r9_1 = (*(*r14_1 + 0x80))(r14_1)
        
        if (result != 0xffffffff)
            *(r14_1 + 0x14) = rbp
            rbp -= result
        else
            sub_140af98a0(
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/PacketHandlers/PacketHandler/Private/PacketHandler."
            "cpp", 
                0x39b, Handler returned invalid 'GetReservedPacketBits' value.", r9_1)
            result = sub_140afbb40()
        
        rdi_4 -= 0x10
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)

return result
