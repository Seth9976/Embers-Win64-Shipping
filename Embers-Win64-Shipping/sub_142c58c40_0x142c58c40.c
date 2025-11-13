// 函数: sub_142c58c40
// 地址: 0x142c58c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x648) == 0)
    if (arg2 != 0)
        int64_t* rcx_3 = *(arg1 + 0x8a0)
        
        if (rcx_3 != 0)
            sub_142c524d0(rcx_3)
            *(arg1 + 0x8a0) = 0
    
    sub_142c52530(arg1, 2, 2)
else
    if (*(arg1 + 0x8a0) != 0)
        sub_142c58990(arg1)
    
    sub_142c52530(arg1, 2, 2)
    int32_t rax_1
    int512_t zmm2_1
    rax_1, zmm2_1 = sub_142c58d40(*(arg1 + 0x8b0), *(arg1 + 0x648))
    
    if (rax_1 != 0)
        sub_142c64850(arg1, "WARNING: failed to save cookies in %s\n", *(arg1 + 0x648), zmm2_1)

if (arg2 != 0)
    void* rax_2 = *(arg1 + 0xd0)
    
    if (rax_2 == 0 || *(arg1 + 0x8b0) != *(rax_2 + 0x50))
        int64_t* rdi_1 = *(arg1 + 0x8b0)
        
        if (rdi_1 != 0)
            data_143ccb8a0(rdi_1[1])
            sub_142c58460(*rdi_1)
            data_143ccb8a0(rdi_1)

return sub_142c52570(arg1, 2) __tailcall
