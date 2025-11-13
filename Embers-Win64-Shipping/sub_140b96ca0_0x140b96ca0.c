// 函数: sub_140b96ca0
// 地址: 0x140b96ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e839b0
void* rcx = arg1[0x42]

if (rcx != 0 && (*(rcx + 0x2d8) != arg1 || *(rcx + 0x2a3) == 0))
    int64_t var_18
    int64_t* rax_1 = sub_140cbb170(rcx + 0x200, &var_18)
    int16_t* const rbp_1 = &data_142d40450
    int16_t* const r14_1
    
    if (rax_1[1].d == 0)
        r14_1 = &data_142d40450
    else
        r14_1 = *rax_1
    
    int32_t rdi_1 = arg1[0x2d].d
    int64_t rsi_1 = arg1[0x2c]
    uint64_t var_28 = 0
    int16_t* rsi_2
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_28, rdi_1, 0)
        rsi_2 = var_28
        memcpy(rsi_2, rsi_1, rdi_1 * 2)
    else
        rsi_2 = nullptr
    
    int16_t* const var_38_1 = r14_1
    
    if (rdi_1 != 0)
        rbp_1 = rsi_2
    
    sub_140af98a0("Unknown", 0x1c01, 
        Destroying FAsyncArchive %s that belongs to linker %s outside of the li", rbp_1)
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    sub_140afbb40()

sub_140ba8e10(arg1)
int64_t* rcx_7 = arg1[0x12]

if (rcx_7 != 0)
    (**rcx_7)(rcx_7, 1)
    arg1[0x12] = 0

if (arg1[0x3a] != 0)
    void* rax_3 = arg1[0x3c]
    void* rcx_8 = &arg1[0x3e]
    
    if (rax_3 != 0)
        rcx_8 = rax_3
    
    (*(*rcx_8 + 0x10))(rcx_8)

if (arg1[0x32] != 0)
    void* rax_5 = arg1[0x34]
    void* rcx_9 = &arg1[0x36]
    
    if (rax_5 != 0)
        rcx_9 = rax_5
    
    (*(*rcx_9 + 0x10))(rcx_9)

int64_t rcx_10 = arg1[0x2c]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

if (arg1[0x24] != 0)
    void* rax_7 = arg1[0x26]
    void* rcx_11 = &arg1[0x28]
    
    if (rax_7 != 0)
        rcx_11 = rax_7
    
    (*(*rcx_11 + 0x10))(rcx_11)

return sub_140b4cb40(arg1) __tailcall
