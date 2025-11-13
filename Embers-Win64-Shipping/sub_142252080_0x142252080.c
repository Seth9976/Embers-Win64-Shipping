// 函数: sub_142252080
// 地址: 0x142252080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1e0) != *(arg1 + 0x20c))
    int32_t rax_1 = *(arg1 + 0x1e4)
    *(arg1 + 0x1e0) = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_1405a5410(arg1 + 0x1d8, 0)
    
    *(arg1 + 0x208) = 0xffffffff
    *(arg1 + 0x20c) = 0
    sub_140774790(arg1 + 0x1e8)
    int64_t rcx_2 = sx.q(*(arg1 + 0x220))
    void* rdi_1 = arg1 + 0x210
    void* rax_2 = *(rdi_1 + 8)
    
    if (rcx_2 s> 0)
        if (rax_2 != 0)
            rdi_1 = rax_2
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_2 << 2)

int32_t rcx_4 = *(arg1 + 0x1e0) - *(arg1 + 0x20c)
int32_t rdi_3 = arg2[1].d + rcx_4

if (rdi_3 s> rcx_4)
    sub_1409d96c0(arg1 + 0x1d8, rdi_3)
    int32_t rax_6
    
    if (rdi_3 u< 4)
        rax_6 = 1
    else
        uint32_t rdi_4 = rdi_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rdi_4 + 8)
        int32_t rcx_6
        
        if (rdi_4 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        int32_t rcx_8 = rcx_6 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rdi_4 + 7)
        
        if (rcx_8 == 0)
            rax_6 = 1
        else
            rax_6 = 1 << ((not.d(rcx_8)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_11 = *(arg1 + 0x220)
    
    if (rcx_11 == 0 || rcx_11 s< rax_6)
        *(arg1 + 0x220) = rax_6
        sub_1408370c0(arg1 + 0x1d8)

int64_t* i = *arg2
int32_t* result = sx.q(arg2[1].d)

for (void* rsi_1 = &i[result]; i != rsi_1; i = &i[1])
    void arg_8
    result = sub_140812a70(arg1 + 0x1d8, &arg_8, i, nullptr)

*(arg1 + 0x228) = 1
return result
