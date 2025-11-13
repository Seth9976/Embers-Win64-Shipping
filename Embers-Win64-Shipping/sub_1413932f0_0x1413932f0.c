// 函数: sub_1413932f0
// 地址: 0x1413932f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x37c) s> 0 && *(arg1 + 0x380) s> 0)
    int64_t* rcx = *(data_143f5b298 + 0xaf8)
    
    if (rcx != 0)
        if ((*(*rcx + 8))(rcx) == 0)
            goto label_141393374
        
        int64_t* rcx_1 = *(data_143f5b298 + 0xaf8)
        int64_t* rax_6 = (*(*rcx_1 + 0xb8))(rcx_1)
        
        if (rax_6 == 0)
            goto label_141393374
        
        int64_t r8 = *rax_6
        
        if ((*(r8 + 0x28))(rax_6, arg1 + 0x1d0, r8) == 0)
            goto label_141393374
        
    label_1413933f4:
        
        if (*(arg1 + 0x3d4) != 0)
            return sub_141391fa0(arg1, arg2, arg3) __tailcall
        
        return sub_141392a00(arg1, arg2) __tailcall
    
label_141393374:
    int32_t rax_8 = *(arg1 + 0x3d4)
    int32_t rcx_3
    
    if (rax_8 == 0)
        rcx_3 = 0
    else if (rax_8 != 1)
        rcx_3 = 3
    else
        if (*(arg1 + 0x3d8) == 0)
            rax_8 = sub_14139d5b0(arg1, *(arg1 + 0x3d0))
        
        if (*(arg1 + 0x3d8) != 0 || rax_8 == 0xa)
            rcx_3 = 2
        else
            rcx_3 = 1
    
    bool cond:2_1
    
    if (rcx_3 != 0)
        if (rcx_3 == 1)
            cond:2_1 = *(arg1 + 0x18) != 0
            goto label_1413933d7
        
        if (rcx_3 != 2)
            goto label_1413933f4
        
        cond:2_1 = *(arg1 + 0x20) != 0
        goto label_1413933d7
    
    cond:2_1 = *(arg1 + 0x10) != 0
label_1413933d7:
    rax_8.b = cond:2_1
    
    if (rax_8.b == 0)
        goto label_1413933f4
    
    if (sub_1413935e0(arg1, sub_14139d640(arg1)).b == 0)
        goto label_1413933f4

if (*(arg1 + 0x3d4) != 0)
    return 

int64_t* rcx_11 = *(arg1 + 0x40)

if (rcx_11 == 0 || (not.b((*(rcx_11[1] + 0x40) u>> 0xb).b) & 1) == *(arg1 + 0x421))
    return 

*(arg1 + 0x40) = 0

if (rcx_11 != 0)
    (*(*rcx_11 + 0x38))()

sub_1419a2570(&data_1439c9260)
sub_141391ba0(arg1, arg2)
