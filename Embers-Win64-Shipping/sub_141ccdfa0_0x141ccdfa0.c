// 函数: sub_141ccdfa0
// 地址: 0x141ccdfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i
int64_t entry_r9

if (*(arg1 + 0x280) == 0)
    for (i = *(arg1 + 0x1f8); i != &i[sx.q(*(arg1 + 0x200)) * 2]; i = &i[2])
        void* rcx = *i
        
        if (rcx != 0 && *(rcx + 0x19) != 0)
            sub_140af98a0("Unknown", 0x304, Some HandlerComponents require bEnableReliability!!!", 
                entry_r9)
            i, entry_r9 = sub_140afbb40()
            break

int64_t* rdi = nullptr
int32_t i_1 = 0

if (*(arg1 + 0x228) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t r14_1 = *(arg1 + 0x220)
        int64_t* rax
        rax, entry_r9 = j_sub_140a82f30(0x10)
        
        if (rax != 0)
            *rax = 0
            rax[1] = *(rsi_1 + r14_1)
            int64_t** rcx_2 = *(arg1 + 0x230)
            *(arg1 + 0x230) = rax
            *rcx_2 = rax
        
        i_1 += 1
        *(rsi_1 + *(arg1 + 0x220)) = 0
        rsi_1 = &rsi_1[1]
    while (i_1 s< *(arg1 + 0x228))

*(arg1 + 0x228) = 0

if (*(arg1 + 0x22c) != 0)
    i, entry_r9 = sub_1405c5570(arg1 + 0x220, 0)

int32_t i_2 = 0

if (*(arg1 + 0x268) s> 0)
    int64_t* rsi_2 = nullptr
    
    do
        int64_t r14_2 = *(arg1 + 0x260)
        int64_t* rax_1
        rax_1, entry_r9 = j_sub_140a82f30(0x10)
        
        if (rax_1 != 0)
            *rax_1 = 0
            rax_1[1] = *(rsi_2 + r14_2)
            int64_t** rcx_5 = *(arg1 + 0x270)
            *(arg1 + 0x270) = rax_1
            *rcx_5 = rax_1
        
        i_2 += 1
        *(rsi_2 + *(arg1 + 0x260)) = 0
        rsi_2 = &rsi_2[1]
    while (i_2 s< *(arg1 + 0x268))

*(arg1 + 0x268) = 0

if (*(arg1 + 0x26c) != 0)
    i, entry_r9 = sub_1405c5570(arg1 + 0x260, 0)

if (*(arg1 + 0x21c) != 2)
    *(arg1 + 0x21c) = 2
else
    sub_140af98a0(
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/PacketHandlers/PacketHandler/Private/PacketHandler.cpp", 
        0x2e1, Set new Packet Processor State to the state it is currently in.", entry_r9)
    sub_140afbb40()

if (*(arg1 + 0x2b8) == 0 || *(arg1 + 0x88) == 0)
    return 

int64_t* rcx_7 = *(arg1 + 0x80)

if (rcx_7 == 0 || (*(*rcx_7 + 0x28))(rcx_7).b == 0)
    return 

if (*(arg1 + 0x88) != 0)
    rdi = *(arg1 + 0x80)

(*(*rdi + 0x50))(rdi)
