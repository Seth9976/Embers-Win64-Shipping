// 函数: sub_140374da0
// 地址: 0x140374da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
int64_t var_28 = rax
int32_t rax_1 = *(arg1 + 0x1714)
uint32_t r9 = zx.d(arg4)
uint16_t rbx_1 = (r9 << rax_1.b).w | *(arg1 + 0x1710)
*(arg1 + 0x1710) = rbx_1
int32_t rax_4

if (rax_1 s< 0xe)
    rax_4 = rax_1 + 3
else
    int64_t rax_2 = *(arg1 + 0x10)
    uint64_t r10_1 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (r10_1 + 1).d
    *(rax_2 + r10_1) = rbx_1.b
    rax_2.b = *(arg1 + 0x1711)
    int64_t r10_2 = *(arg1 + 0x10)
    uint64_t rcx_2 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rcx_2 + 1).d
    *(r10_2 + rcx_2) = rax_2.b
    int32_t rax_3 = *(arg1 + 0x1714)
    rcx_2.b = 0x10
    rcx_2.b = 0x10 - rax_3.b
    uint16_t r9_1 = (r9 u>> rcx_2.b).w
    *(arg1 + 0x1710) = r9_1
    rax_4 = rax_3 - 0xd
    rbx_1 = r9_1

*(arg1 + 0x1714) = rax_4
void* rax_5
void* r10_3

if (rax_4 s>= 9)
    rax_5 = arg1 + 0x10
    int64_t r9_2 = *(arg1 + 0x10)
    r10_3 = arg1 + 0x28
    uint64_t r11_1 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (r11_1 + 1).d
    *(r9_2 + r11_1) = rbx_1.b
    rbx_1 = zx.w(*(arg1 + 0x1711))
label_140374e5c:
    char* rax_6 = *rax_5
    uint64_t r9_3 = zx.q(*r10_3)
    *r10_3 = (r9_3 + 1).d
    rax_6[r9_3] = rbx_1.b
else if (rax_4 s> 0)
    rax_5 = arg1 + 0x10
    r10_3 = arg1 + 0x28
    goto label_140374e5c
*(arg1 + 0x1710) = 0
*(arg1 + 0x1714) = 0
int16_t rax_8 = (not.d(arg3)).w
int64_t r8 = *(arg1 + 0x10)
uint64_t rbx_3 = zx.q(*(arg1 + 0x28))
*(arg1 + 0x28) = (rbx_3 + 1).d
*(r8 + rbx_3) = arg3.b
int64_t rcx_7 = *(arg1 + 0x10)
uint64_t rsi = zx.q(*(arg1 + 0x28))
*(arg1 + 0x28) = (rsi + 1).d
*(rcx_7 + rsi) = arg3.w:1.b
int64_t rcx_8 = *(arg1 + 0x10)
uint64_t rbx_6 = zx.q(*(arg1 + 0x28))
*(arg1 + 0x28) = (rbx_6 + 1).d
*(rcx_8 + rbx_6) = rax_8.b
char* rcx_9 = *(arg1 + 0x10)
uint64_t rsi_2 = zx.q(*(arg1 + 0x28))
*(arg1 + 0x28) = (rsi_2 + 1).d
rcx_9[rsi_2] = rax_8:1.b
uint32_t result = arg3

if (result != 0)
    uint32_t i
    
    if ((result.b & 1) != 0)
        i = result - 1
        r8.b = *arg2
        arg2 = &arg2[1]
        int64_t rsi_3 = *(arg1 + 0x10)
        uint64_t rbx_8 = zx.q(*(arg1 + 0x28))
        *(arg1 + 0x28) = (rbx_8 + 1).d
        *(rsi_3 + rbx_8) = r8.b
        
        if (result != 1)
        label_140374f19:
            int64_t rbx_9 = 0
            
            do
                char rcx_11 = arg2[rbx_9]
                int64_t rsi_4 = *(arg1 + 0x10)
                uint64_t rax_9 = zx.q(*(arg1 + 0x28))
                *(arg1 + 0x28) = (rax_9 + 1).d
                *(rsi_4 + rax_9) = rcx_11
                result = zx.d(arg2[rbx_9 + 1])
                int64_t rcx_12 = *(arg1 + 0x10)
                uint64_t rdi_2 = zx.q(*(arg1 + 0x28))
                *(arg1 + 0x28) = (rdi_2 + 1).d
                *(rcx_12 + rdi_2) = result.b
                rbx_9 += 2
            while (i != rbx_9.d)
    else
        i = result
        
        if (result != 1)
            goto label_140374f19

return result
