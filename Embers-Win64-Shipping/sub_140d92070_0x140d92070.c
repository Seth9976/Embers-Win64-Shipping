// 函数: sub_140d92070
// 地址: 0x140d92070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = *arg3
void* rax_1 = arg3[1]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[3] = 0
arg1[4] = 0
arg1[0x16] = 0
arg1[0x17] = 0
void* rcx = &arg1[0x18]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
arg1[0x1c].d = 0xffffffff
*(arg1 + 0xe4) = 0
arg1[0x1e] = 0
arg1[0x1f].d = 0
arg1[0x20].b = arg6
int64_t* rax_4 = arg1[1]

if (sub_142b94040(*arg2, *rax_4, rax_4[1].d, arg4, arg5, arg1) != 0)
    *arg1 = 0

sub_140db5cd0(arg1)
int64_t* rdi_1 = arg3[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

return arg1
