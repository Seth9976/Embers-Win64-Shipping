// 函数: sub_140ccebc0
// 地址: 0x140ccebc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x324) == 0)
    void* rcx = *(arg1 + 0x2d8)
    
    if ((*(rcx + 0x29) & 1) != 0)
        return 0
    
    if (*(arg1 + 0x2a2) != 0)
        arg2 = sub_140bbbaf0(rcx)
    
    sub_140cd55f0(*(arg1 + 0x2b8), arg1 + 0xa8, arg2)
    
    if (*(arg1 + 0xa8) != 0x9e2a83c1 || *(arg1 + 0xac) s< 0xd6)
        return 0
    
    if (sub_140b1c7e0(j_sub_140b17d00(), arg1 + 0x168) == 0)
        return 0
    
    uint8_t rbx_2 = (*(arg1 + 0xcc) u>> 0xd).b & 1
    (*(*(arg1 + 0x200) + 0xc8))(arg1 + 0x200, zx.q(rbx_2))
    int64_t* rcx_4 = *(arg1 + 0x2d8)
    (*(*rcx_4 + 0xc8))(rcx_4, zx.q(rbx_2))
    
    if (*(arg1 + 0xac) s> 0x206 || *(arg1 + 0xb0) s> 0 || *(arg1 + 0xcc) s>= 0)
        return 0
    
    if (*(arg1 + 0x1b8) s> 0 && *(arg1 + 0x1bc) s> 0 && sub_140bac980() == 0)
        int64_t var_18
        int64_t* rax_6 = sub_140cbb170(arg1 + 0x200, &var_18)
        int16_t* const r9_1
        
        if (rax_6[1].d == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *rax_6
        
        sub_140af98a0("Unknown", 0x4da, 
            Package %s contains preload dependency data but the current build does not support it. Make "
        "sure Event Driven L", r9_1)
        int64_t rcx_6 = var_18
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        sub_140afbb40()
    
    int32_t result = sub_140cd0810(arg1)
    
    if (result != 1)
        return result
    
    int32_t rdx_6 = *(arg1 + 0x108)
    *(arg1 + 0x10) = 0
    
    if (*(arg1 + 0x14) != rdx_6)
        sub_1408cf3a0(arg1 + 8, rdx_6)
    
    int32_t rdx_7 = *(arg1 + 0x100)
    *(arg1 + 0x20) = 0
    
    if (*(arg1 + 0x24) != rdx_7)
        sub_140888ba0(arg1 + 0x18, rdx_7)
    
    sub_140cb91d0(arg1 + 0x1d0, *(arg1 + 0xf8))
    int32_t rdx_9 = *(arg1 + 0xe0)
    *(arg1 + 0x1c8) = 0
    
    if (*(arg1 + 0x1cc) != rdx_9)
        sub_1405dadb0(arg1 + 0x1c0, rdx_9)
    
    *(arg1 + 0x324) = 1

int32_t rsi
rsi.b = sub_140cc1900(arg1, u"serializing package file summary", 1) != 0
return rsi + 1
