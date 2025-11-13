// 函数: sub_1409c29c0
// 地址: 0x1409c29c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

void* rdi = *(arg1 + 0x28)
int64_t rbx = data_143f36118
void* const rcx_4

if (*(rdi + 0x208) == *(rdi + 0x234))
label_1409c2a70:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = rdi + 0x238
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_4 = *(r8 + (((sx.q(*(rdi + 0x248)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_1409c2a70_1:
        rcx_4 = nullptr
    else
        int64_t r8_1 = *(rdi + 0x200)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 3
            rcx_4 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == rbx)
                break
            
            rax_4 = *(rcx_4 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_1409c2a70_2
        
        if (rax_4 == 0xffffffff)
        label_1409c2a70_2:
            rcx_4 = nullptr

void* rdi_1 = rcx_4 + 8

if (rcx_4 == 0)
    rdi_1 = nullptr

void* const rdi_2

if (rdi_1 != 0)
    rdi_2 = *rdi_1

if (rdi_1 == 0 || *(rdi_2 + 8) != 5)
    rdi_2 = nullptr

int64_t rdx_5 = sx.q(arg2) << 5
int64_t rcx_5 = **(arg1 + 0x28)
int32_t* r15_1 = *(rdx_5 + rcx_5 + 0x10)
uint64_t result = &r15_1[sx.q(*(rdx_5 + rcx_5 + 0x18))]
uint64_t r12_1 = sx.q(*(rdx_5 + rcx_5 + 0x18)) << 2 u>> 2

if (r15_1 u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t rbx_1 = sx.q(*r15_1)
        result = **(rdi_2 + 0x18)
        
        if (*(rbx_1 + result) == 0)
            int64_t rsi_1 = sx.q(arg3[1].d)
            int32_t rax_8 = (rsi_1 + 1).d
            arg3[1].d = rax_8
            
            if (rax_8 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            result = *arg3
            *(result + (rsi_1 << 2)) = rbx_1.d
        
        r15_1 = &r15_1[1]
        rbp += 1
    while (rbp != r12_1)

return result
