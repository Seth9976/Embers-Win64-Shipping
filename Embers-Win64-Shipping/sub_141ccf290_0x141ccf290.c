// 函数: sub_141ccf290
// 地址: 0x141ccf290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* arg_20 = arg4
int128_t* r14 = arg4
uint64_t result

if (*(arg1 + 0x20) == 0)
label_141ccf2c4:
    
    if (*(arg1 + 0x30) == 0)
        sub_140af98a0(
            "D:"
        "/Build/++UE4/Sync/Engine/Source/Runtime/PacketHandlers/PacketHandler/Private/PacketHandler."
        "cpp", 
            0x2d9, Called SendHandlerPacket when no LowLevelSend delegate is bound", arg4)
        return sub_140afbb40() __tailcall
    
    int64_t* rcx_1 = *(arg1 + 0x28)
    
    if (rcx_1 == 0)
        sub_140af98a0(
            "D:"
        "/Build/++UE4/Sync/Engine/Source/Runtime/PacketHandlers/PacketHandler/Private/PacketHandler."
        "cpp", 
            0x2d9, Called SendHandlerPacket when no LowLevelSend delegate is bound", arg4)
        return sub_140afbb40() __tailcall
    
    result, arg4 = (*(*rcx_1 + 0x28))(rcx_1)
    
    if (result.b == 0)
        sub_140af98a0(
            "D:"
        "/Build/++UE4/Sync/Engine/Source/Runtime/PacketHandlers/PacketHandler/Private/PacketHandler."
        "cpp", 
            0x2d9, Called SendHandlerPacket when no LowLevelSend delegate is bound", arg4)
        return sub_140afbb40() __tailcall
else
    int64_t* rcx = *(arg1 + 0x18)
    
    if (rcx == 0)
        goto label_141ccf2c4
    
    result, arg4 = (*(*rcx + 0x28))(rcx)
    
    if (result.b == 0)
        goto label_141ccf2c4

int64_t* r12 = nullptr
int32_t rbp = 0
int64_t r15
r15.b = 0

if (*(arg1 + 0x200) s> 0)
    int64_t* r14_1 = nullptr
    
    while ((*(arg3 + 0x29) & 1) == 0)
        result = *(arg1 + 0x1f8)
        int64_t* rdi_1 = *(r14_1 + result)
        
        if (r15.b != 0)
            result = (*(*rdi_1 + 8))(rdi_1)
            
            if (result.b != 0)
                result = zx.q(*(rdi_1 + 0x14))
                
                if (*(arg3 + 0xa0) s> result)
                    *(arg3 + 0x29) |= 1
                    break
                
                result = (*(*rdi_1 + 0x20))(rdi_1, arg3, arg_20)
        else if (rdi_1 == arg2)
            r15.b = 1
        
        rbp += 1
        r14_1 = &r14_1[2]
        
        if (rbp s>= *(arg1 + 0x200))
            break
    
    r14 = arg_20

if ((*(arg3 + 0x29) & 1) == 0 && *(arg3 + 0xa0) s> 0)
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 0x12)
    int32_t rax_5 = var_30_1 + 0x12
    var_30_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_38)
    
    int64_t rdi_2 = var_38
    UnDecorator::getReferenceType(rdi_2, u"PostPacketHandler", 0x24)
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)
    
    result = sub_140b560b0(arg3, 1)
    void* rdi_3 = *(arg1 + 0x280)
    
    if (rdi_3 != 0)
        sub_141ccc950(rdi_3, *(arg3 + 0x90), *(arg3 + 0xa0), r14)
        result = *(rdi_3 + 0x28)
        *(*(result + (sx.q(*(rdi_3 + 0x30)) << 3) - 8) + 0x40) = arg2
    
    char r14_2 = *(arg1 + 0x290)
    *(arg1 + 0x290) = 1
    int64_t rbp_1 = *(arg3 + 0xa0)
    int64_t r15_1 = *(arg3 + 0x90)
    
    if (*(arg1 + 0x30) != 0)
        int64_t* rcx_12 = *(arg1 + 0x28)
        
        if (rcx_12 != 0)
            result = (*(*rcx_12 + 0x28))(rcx_12)
            
            if (result.b != 0)
                int64_t* rcx_13
                
                if (*(arg1 + 0x30) == 0)
                    rcx_13 = nullptr
                else
                    rcx_13 = *(arg1 + 0x28)
                
                result =
                    (*(*rcx_13 + 0x50))(rcx_13, r15_1, zx.q(((rbp_1 + 7) s>> 3).d), zx.q(rbp_1.d))
    
    int32_t rdi_6 = (*(arg3 + 0xa0)).d
    int64_t rsi_1 = *(arg3 + 0x90)
    
    if (*(arg1 + 0x20) != 0)
        int64_t* rcx_14 = *(arg1 + 0x18)
        
        if (rcx_14 != 0)
            result = (*(*rcx_14 + 0x28))(rcx_14)
            
            if (result.b != 0)
                if (*(arg1 + 0x20) != 0)
                    r12 = *(arg1 + 0x18)
                
                result = (*(*r12 + 0x50))(r12, rsi_1, zx.q(rdi_6), arg_20)
    
    *(arg1 + 0x290) = r14_2

return result
