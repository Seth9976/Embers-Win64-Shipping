// 函数: sub_142272380
// 地址: 0x142272380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
char rax
void* rsi_1

if (data_143f52710 != 0)
    rax = 1
    rsi_1 = &rbx[1]
else
    int64_t rbp_1 = arg1[1]
    rsi_1 = &arg1[1]
    
    if (rbp_1 == *arg1)
        rax = 1
        rsi_1 = &rbx[1]
    else
        int32_t rcx
        rcx.b = (rbp_1 u>> 0x20).d == 0
        
        if ((rcx.b & sub_140b5b8a0(rbp_1.d, 0)) != 0)
            rax = 1
            rsi_1 = &rbx[1]
        else
            rax = 0

char arg_8 = rax
char arg_10 = rbx[2].b & 1
(*(*arg2 + 0x158))(arg2, &arg_8, 1)
(*(*arg2 + 0x158))(arg2, &arg_10, 1)
(*(*arg2 + 0x140))(arg2, rbx)

if (arg_8 == 0)
    (*(*arg2 + 0x140))(arg2, rsi_1)
else if ((arg2[5].b & 1) != 0)
    *rsi_1 = *rbx

rbx[2].d &= 0xfffffffe
rbx[2].d |= zx.d(arg_10) & 1
*arg4 = not.b(*(arg2 + 0x29)) & 1
return 1
