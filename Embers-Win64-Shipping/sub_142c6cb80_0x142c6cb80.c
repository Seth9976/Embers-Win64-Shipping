// 函数: sub_142c6cb80
// 地址: 0x142c6cb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
char r8 = 0
char r9 = 0
int32_t rsi = 0
int32_t rcx = *(rbx + 0x180)

if (rcx - 0x64 u<= 0x63)
    return 0

if (*(rbx + 0x4bc0) != 0)
    uint32_t rax_2 = zx.d(*(rbx + 0x5e0))
    char temp0 = rax_2.b
    rax_2.b = neg.b(rax_2.b)
    return zx.q(sbb.d(rax_2, rax_2, temp0 != 0)) & 0x16

if (arg1[0x7f].b != 0)
    if (rcx == 0x191)
    label_142c6cc0d:
        char rax_5 = sub_142c6e7b0(rbx + 0x4ba0)
        r8 = rax_5
        
        if (rax_5 == 0)
            *(rbx + 0x4bc0) = 1
    else if (*(arg1 + 0x402) != 0 && rcx s< 0x12c)
        goto label_142c6cc0d

if (*(arg1 + 0x3f9) != 0)
    int32_t rcx_2 = *(rbx + 0x180)
    
    if (rcx_2 == 0x197)
    label_142c6cc50:
        char rax_6 = sub_142c6e7b0(rbx + 0x4bb0)
        r9 = rax_6
        
        if (rax_6 == 0)
            *(rbx + 0x4bc0) = 1
    else if (*(arg1 + 0x402) != 0 && rcx_2 s< 0x12c)
        goto label_142c6cc50

int512_t entry_zmm2

if (r8 != 0 || r9 != 0)
    data_143ccb8a0(*(rbx + 0x230))
    int64_t rcx_6 = *(rbx + 0x880)
    *(rbx + 0x230) = 0
    int64_t rax_10 = data_143ccb8b0(rcx_6)
    *(rbx + 0x230) = rax_10
    
    if (rax_10 == 0)
        return 0x1b
    
    if (((*(rbx + 0x438) - 1) & 0xfffffffb) != 0 && *(arg1 + 0x403) == 0)
        int32_t rax_14
        rax_14, entry_zmm2 = sub_142c6e490(arg1)
        rsi = rax_14
        
        if (rax_14 != 0)
            return rax_14
else if (*(rbx + 0x180) s< 0x12c && *(rbx + 0x4bac) == 0 && *(arg1 + 0x402) != 0
        && ((*(rbx + 0x438) - 1) & 0xfffffffb) != 0)
    int64_t rax_9 = data_143ccb8b0(*(rbx + 0x880))
    *(rbx + 0x230) = rax_9
    
    if (rax_9 == 0)
        return 0x1b
    
    *(rbx + 0x4bac) = 1

if (sub_142c6e600(arg1) == 0)
    return rsi

sub_142c64760(rbx, "The requested URL returned error: %d", zx.q(*(rbx + 0x180)), entry_zmm2)
return 0x16
