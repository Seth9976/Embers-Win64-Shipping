// 函数: sub_1423a7990
// 地址: 0x1423a7990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x18)
void*** rax = j_sub_140a82f30(0x128)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    void*** rax_1 = sub_1423a4cd0(rax)
    rbx = rax_1
    
    if (rax_1 != 0)
        rax_1[1].d += 1

int32_t r8_1 = *(rsi + 0x18) + rbx[3].d
rbx[3].d = r8_1

if (r8_1 s> *(rbx + 0x1c))
    sub_141cac4f0(&rbx[2])

sub_1423a6640(&rbx[4], rsi + 0x20)
sub_1405af100(&rbx[6], rsi + 0x30)
rbx[0x24].d = *(rsi + 0x120)
void* result = arg1 + 0x10
void arg_8

if (result == &arg_8)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx, 1)
else
    void*** rcx_4 = *result
    *result = rbx
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            result = (**rcx_4)(rcx_4, 1)

int64_t* rcx_5 = *(arg1 + 0x20)
*(arg1 + 0x20) = 0

if (rcx_5 != 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1)
        return (**rcx_5)(rcx_5, 1)

return result
