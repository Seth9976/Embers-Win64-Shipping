// 函数: sub_140d1fac0
// 地址: 0x140d1fac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* entry_rdx
int64_t* entry_r8
int512_t entry_zmm1
int512_t entry_zmm2

if (test_bit(arg1, 0x1c))
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    int64_t var_18
    int64_t* rax_1 = sub_140d20590(&var_18, entry_r8, &var_28, entry_zmm1, entry_zmm2)
    int32_t rcx_1 = rax_1[1].d
    int32_t r8_1 = rcx_1 - 1
    
    if (rcx_1 == 0)
        r8_1 = 0
    
    int64_t result = sub_140a20ba0(entry_rdx, *rax_1, r8_1)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = var_28
    
    if (rcx_4 == 0)
        return result
    
    return sub_140a74f90(rcx_4)

if (not(test_bit(arg1, 0x13)))
    return sub_140aca310(entry_rdx, entry_r8, (arg1 u>> 1).b & 1, entry_zmm1, entry_zmm2)

int32_t rsi
void* const r14

if ((arg1.b & 2) == 0)
    void** rax_4 = sub_140ac6680(entry_r8)
    int32_t rcx_10 = rax_4[1].d
    r14 = *rax_4
    rsi = rcx_10 - 1
    
    if (rcx_10 == 0)
        rsi = 0
else
    rsi = 1
    r14 = &data_142d4056c
    sub_140a20ba0(entry_rdx, &data_142d4056c, 1)
    int64_t* rax_3 = sub_140ac6680(entry_r8)
    int32_t rcx_7 = rax_3[1].d
    int32_t r8_2 = rcx_7 - 1
    
    if (rcx_7 == 0)
        r8_2 = 0
    
    sub_140a20ba0(entry_rdx, *rax_3, r8_2)

return sub_140a20ba0(entry_rdx, r14, rsi) __tailcall
