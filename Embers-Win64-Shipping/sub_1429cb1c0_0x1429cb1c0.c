// 函数: sub_1429cb1c0
// 地址: 0x1429cb1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 8)
int32_t arg_8 = 0
int64_t rax = rbx[1]
int64_t rcx

if (&arg_8 u< rax)
    rcx = *rbx

if (&arg_8 u>= rax || rcx u> &arg_8)
    if (rax == rbx[2])
        sub_1429cad50(rbx, 1)
    
    int32_t* rax_2 = rbx[1]
    
    if (rax_2 != 0)
        *rax_2 = 0
else
    if (rax == rbx[2])
        sub_1429cad50(rbx, 1)
    
    int32_t* rdx_1 = rbx[1]
    
    if (rdx_1 != 0)
        *rdx_1 = *(*rbx + ((&arg_8 - rcx) s>> 2 << 2))

rbx[1] += 4
int32_t rsi_4 = arg1[1] * *arg1
int64_t* rbx_1 = *(arg1 + 8)
int64_t rax_3 = rbx_1[1]
arg_8 = rsi_4
int64_t rcx_4

if (&arg_8 u< rax_3)
    rcx_4 = *rbx_1

if (&arg_8 u>= rax_3 || rcx_4 u> &arg_8)
    if (rax_3 == rbx_1[2])
        sub_1429cad50(rbx_1, 1)
    
    int32_t* rax_5 = rbx_1[1]
    
    if (rax_5 != 0)
        *rax_5 = rsi_4
else
    if (rax_3 == rbx_1[2])
        sub_1429cad50(rbx_1, 1)
    
    int32_t* rdx_2 = rbx_1[1]
    
    if (rdx_2 != 0)
        *rdx_2 = *(*rbx_1 + ((&arg_8 - rcx_4) s>> 2 << 2))

rbx_1[1] += 4
*arg1 += 1
return sub_14058d4e0(*(arg1 + 0x10), sx.q(*arg1 * arg1[1])) __tailcall
