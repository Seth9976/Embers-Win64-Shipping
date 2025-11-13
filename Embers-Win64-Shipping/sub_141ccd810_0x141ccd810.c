// 函数: sub_141ccd810
// 地址: 0x141ccd810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx
wchar16 const* const r8

if (*(arg1 + 0x21c) == 0)
    int64_t rax_2 = *arg2
    
    if (rax_2 != 0)
        int64_t* rbx = arg2[1]
        
        if (rbx != 0)
            rbx[1].d += 1
            
            if (rbx != 0)
                rbx[1].d += 1
        
        int64_t var_28 = rax_2
        int64_t* var_20 = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
        
        int64_t* result = sub_141cccbd0(arg1 + 0x1f8, &var_28)
        int64_t* result_1 = result
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                int64_t rdx_3 = *rbx
                result = (*rdx_3)(rbx, rdx_3)
                int32_t temp2_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx + 8))(rbx, 1)
        
        result_1.b = result_1 != 0
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                result = (**rbx)(rbx)
                int32_t temp3_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx + 8))(rbx, 1)
        
        if (result_1.b == 0)
            int64_t rbx_1 = sx.q(*(arg1 + 0x200))
            int32_t rax_6 = (rbx_1 + 1).d
            *(arg1 + 0x200) = rax_6
            
            if (rax_6 s> *(arg1 + 0x204))
                sub_1405a4f90(arg1 + 0x1f8)
            
            int64_t* rcx_9 = (rbx_1 << 4) + *(arg1 + 0x1f8)
            *rcx_9 = *arg2
            void* rax_8 = arg2[1]
            rcx_9[1] = rax_8
            
            if (rax_8 != 0)
                *(rax_8 + 8) += 1
            
            result = *arg2
            result[1] = arg1
            
            if (arg3 == 0)
                int64_t* rcx_10 = *arg2
                return (*(*rcx_10 + 0x60))(rcx_10)
        
        return result
    
    r8 = u"Failed to add handler - invalid instance."
    rdx = 0xde
else
    r8 = u"Handler added during runtime."
    rdx = 0xd7

sub_140af98a0(
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/PacketHandlers/PacketHandler/Private/PacketHandler.cpp", 
    rdx, r8, arg4)
return sub_140afbb40() __tailcall
