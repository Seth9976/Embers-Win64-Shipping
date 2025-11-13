// 函数: sub_140a5aa30
// 地址: 0x140a5aa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    int16_t rcx = *(arg1 + 2)
    int32_t rdx_2
    wchar16 const* const r8_1
    
    if (arg4 == 0)
        if (rcx != arg2 && rcx != 0x3941)
            r8_1 = MallocBinned2 Corruption Canary was 0x%x, will be 0x%x does not have an expected value."
            rdx_2 = 0xb5
            goto label_140a5ab35
    else if (rcx != 0x3941)
        r8_1 =
            MallocBinned2 Corruption Canary was 0x%x, will be 0x%x. This block is guaranteed to be "
        rdx_2 = 0xb0
    label_140a5ab35:
        uint32_t var_18_3 = zx.d(arg2)
        sub_140af98a0("Unknown", rdx_2, r8_1, zx.q(rcx))
        sub_140afbb40()
    *(arg1 + 2) = arg2
    return 

uint32_t rsi = zx.d(arg2)

if (arg4 != 0)
    uint32_t var_18_1 = rsi
    sub_140af98a0("Unknown", 0x9c, 
        MallocBinned2 Corruption Canary was 0x%x, should be 0x%x. This block is both preexisting and "
    "guaranteed to be new; which makes no sense.", zx.q(*(arg1 + 2)))
    sub_140afbb40()

int16_t rdx = *(arg1 + 2)
int32_t rdx_1
wchar16* r8
uint64_t r9_1

if (arg2 != 0x3941)
    if (rdx != arg2)
        r9_1 = zx.q(rdx)
        r8 = MallocBinned2 Corruption Canary was 0x%x, should be 0x%x because this block should be "
        "preexisting."
        rdx_1 = 0xa7
    label_140a5aacb:
        uint32_t var_18_2 = rsi
        sub_140af98a0("Unknown", rdx_1, r8, r9_1)
        sub_140afbb40()
else if (rdx != 0x17ea && rdx != 0xf317)
    r9_1 = zx.q(rdx)
    r8 = MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be "
    "preexisting and in use."
    rdx_1 = 0xa2
    goto label_140a5aacb
*(arg1 + 2) = arg2
