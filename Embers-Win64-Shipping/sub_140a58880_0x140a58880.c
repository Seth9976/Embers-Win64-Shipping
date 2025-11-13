// 函数: sub_140a58880
// 地址: 0x140a58880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_6

if (zx.q(arg2.w) == 0)
    if (arg2 == 0)
        uint64_t rax
        rax.b = 0
        return rax
    
    EnterCriticalSection(arg1 + 0x888)
    uint64_t rdx_1 = arg2 u>> (*(arg1 + 0x10)).b
    int64_t* rcx_7 = ((zx.q(*(arg1 + 0x20) - 1) & zx.q(rdx_1.d)) << 5) + *(arg1 + 0x460)
    int64_t* rax_4 = rcx_7
    void* const rsi_1
    
    while (true)
        if (*rax_4 == rdx_1)
            rsi_1 = ((zx.q((arg2 u>> (*(arg1 + 8)).b).d) & zx.q(*(arg1 + 0x18))) << 5) + rax_4[1]
            break
        
        rax_4 = rax_4[3]
        
        if (rax_4 == rcx_7)
            rsi_1 = nullptr
            break
    
    if (arg1 != -0x888)
        LeaveCriticalSection(arg1 + 0x888)
    
    if (rsi_1 == 0)
        sub_140af98a0("Unknown", 0x3e5, 
            FMallocBinned2 Attempt to GetAllocationSizeExternal an unrecognized block %p", arg2)
        sub_140afbb40()
    
    int16_t rax_5 = *(rsi_1 + 2)
    
    if (rax_5 != 0x17ea)
        int32_t var_18_2 = 0x17ea
        sub_140af98a0("Unknown", 0x93, MallocBinned2 Corruption Canary was 0x%x, should be 0x%x", 
            zx.q(rax_5))
        sub_140afbb40()
    
    rax_6 = *(rsi_1 + 8)
else
    int16_t* rdi_1 = arg2 & 0xffffffffffff0000
    char rax_1 = *(rdi_1 + 3)
    
    if (rax_1 != 0xe3)
        int32_t var_10_1 = 0xe3
        uint32_t var_18_1 = zx.d(rax_1)
        sub_140af98a0("Unknown", 0x4cc, 
            FMallocBinned2 Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x", rdi_1)
        sub_140afbb40()
    
    rax_6 = zx.q(*rdi_1)

*arg3 = rax_6
rax_6.b = 1
return rax_6
