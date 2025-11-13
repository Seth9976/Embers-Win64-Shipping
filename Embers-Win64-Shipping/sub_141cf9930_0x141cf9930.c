// 函数: sub_141cf9930
// 地址: 0x141cf9930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int64_t rcx = *(arg3 + 0x10)
void* rbx = *(arg3 + 0xa0)

if (*(arg3 + 0x63) == 0 || rcx == 0)
    *(arg3 + 0x10) = 0
else
    rcx = 0

*(rbx + 8) = rcx

if (rcx != 0)
    if (*(rbx + 0x36) != 0)
        sub_140a74f90(rcx)
        *(rbx + 8) = 0
        *(rbx + 0x20) = 0
    else
        *(rbx + 0x28) = *(rsi + 0x70)
        
        if (*(rbx + 0x30) == *(rsi + 0xd8) - 1)
            int32_t temp1_1 = (mods.dp.q(sx.o(*(rsi + 0x40)), zx.q(*(rsi + 0x70)))).d
            *(rbx + 0x28) = temp1_1
            
            if (temp1_1 == 0)
                *(rbx + 0x28) = *(rsi + 0x70)

void var_28
void** rax_8 = sub_141cfeac0(&var_28, nullptr, 0xff)
void* rcx_3 = *rax_8
*(rcx_3 + 0x10) = rsi
*(rcx_3 + 0x18) = rbx
void* rcx_4 = *rax_8
int32_t r8 = rax_8[2].d
int64_t* rdx_2 = rax_8[1]
int64_t* rdi = *(rcx_4 + 0x28)
int64_t* arg_18 = rdi

if (rdi != 0)
    rdi[9].d += 1

sub_141d106b0(rcx_4, rdx_2, r8, 1)
int32_t result = &arg_18

if (rbx + 0x18 != &arg_18)
    int64_t* rcx_5 = *(rbx + 0x18)
    *(rbx + 0x18) = rdi
    
    if (rcx_5 != 0)
        result = rcx_5[9].d
        rcx_5[9].d -= 1
        
        if (result == 1)
            return sub_140a2f6e0(rcx_5)
else if (rdi != 0)
    result = rdi[9].d
    rdi[9].d -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_18)

return result
