// 函数: sub_14277b180
// 地址: 0x14277b180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x220)

if (rdi == 0)
    return 

void* rsi_1 = *(rdi + 0x408)

if (rsi_1 == 0)
    return 

int32_t rcx = *(rsi_1 + 0x30)
int32_t rax = *(rdi + 0x418)

if (rcx != rax)
    if (rax != 0)
        return sub_1427781b0(rsi_1 + 0x28, rdi + 0x410) __tailcall
    
    return sub_14277b3b0(rsi_1 + 0x28, 0) __tailcall

int64_t rbx
rbx.b = 1
int32_t rbp_1 = 0

if (rcx s<= 0)
    return 

void* r14_1 = rdi + 0x410
void* r15_1 = rsi_1 + 0x28

while (true)
    if (rbx.b != 0)
        r14_1 = rdi + 0x410
        r15_1 = rsi_1 + 0x28
        int64_t rcx_5 = sx.q(rbp_1) * 0x60
        rbx.b &= sub_1417bfca0(rcx_5 + *r15_1, *r14_1 + rcx_5).b
        rbp_1 += 1
        
        if (rbp_1 s< *(rsi_1 + 0x30))
            continue
        else if (rbx.b != 0)
            break
    
    sub_1427781b0(r15_1, r14_1)
    break
