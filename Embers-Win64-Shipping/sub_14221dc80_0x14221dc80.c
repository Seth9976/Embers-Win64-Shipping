// 函数: sub_14221dc80
// 地址: 0x14221dc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x440))()
int64_t rbp = arg1[0x4b]
int64_t rax_1 = *arg1
arg1[0x4b] = arg2
(*(rax_1 + 0x5e8))(arg1)
void* rcx_1 = *(arg1[0x4b] + 0x228)

if (rcx_1 != 0)
    void* rax_3 = arg1[0x48]
    
    if (rax_3 != 0 && *(rax_3 + 0x280) == arg1)
        *(rax_3 + 0x280) = 0
    
    arg1[0x48] = rcx_1
    
    if (rcx_1 != 0)
        *(rcx_1 + 0x280) = arg1

void* rdi = arg1[0x4b]
void* rax_4
int64_t rax_5
void* rdx

if (rdi != 0)
    rax_4 = sub_14256a090()
    rdx = *(rdi + 0x10)
    rax_5 = sx.q(*(rax_4 + 0x38))

int32_t result

if (rdi == 0 || rax_5.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
    int64_t* rax_7 = sub_14255d000()
    void* rdx_2 = rax_7[0x23]
    
    if (rdx_2 == 0)
        int64_t rdx_3 = *rax_7
        (*(rdx_3 + 0x390))(rax_7, rdx_3)
        rdx_2 = rax_7[0x23]
    
    result = sub_141dbd020(arg1, rdx_2)
else
    result = sub_141dcdc50(arg1)
    
    if (result != 0)
        sub_141dd8f90(arg1, 1)
        result = sub_141dd7750(arg1, 1, 1)

if (rbp == arg2)
    return result

return sub_14255d2a0(arg1, arg1[0x4b])
