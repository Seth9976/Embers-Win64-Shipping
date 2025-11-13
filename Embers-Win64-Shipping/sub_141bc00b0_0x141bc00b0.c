// 函数: sub_141bc00b0
// 地址: 0x141bc00b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rax_1 = sub_141c122a0()
void* rcx = arg1[2]
int64_t* rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rcx + 0x38) || (*(rcx + 0x30))[rax] != rax_1 + 0x30)
    return 

int64_t* rbx_1 = arg1[0x1e]

if (rbx_1 == 0)
    return 

rax = zx.q(rbx_1[1].d)

if (rax.d == 0)
    return 

rbx_1[1].d = rax.d + 1
void* rsi_1 = arg1[0x1d]

if (rsi_1 != 0)
    char rbp_1 = *(rsi_1 + 0x2e)
    sub_141bf4410(arg1)
    
    if ((*(rsi_1 + 0x2e) & 4) != 0 && (rbp_1 & 4) == 0)
        sub_141bb7ee0(arg1, 5)

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
