// 函数: sub_141c98300
// 地址: 0x141c98300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4
int64_t var_28 = arg2
char* rax = &arg_20
char* var_20 = &arg_20
var_28.o = var_28.o

if ((arg3 & 2) != 0)
    if (arg4 == 0)
        rax = sub_1405a7050(arg1 + 0x20, &var_28)
    else
        int64_t r14_1 = sx.q(*(arg1 + 0x28))
        int32_t rax_1 = (r14_1 + 1).d
        *(arg1 + 0x28) = rax_1
        
        if (rax_1 s> *(arg1 + 0x2c))
            sub_1405a4d70(arg1 + 0x20)
        
        rax = *(arg1 + 0x20)
        *(rax + (r14_1 << 3)) = arg2

if ((arg3 & 1) != 0)
    if (arg_20 == 0)
        rax = sub_1405a7050(arg1 + 0x30, &var_28)
    else
        int64_t r14_2 = sx.q(*(arg1 + 0x38))
        int32_t rax_2 = (r14_2 + 1).d
        *(arg1 + 0x38) = rax_2
        
        if (rax_2 s> *(arg1 + 0x3c))
            sub_1405a4d70(arg1 + 0x30)
        
        rax = *(arg1 + 0x30)
        *(rax + (r14_2 << 3)) = arg2

if ((arg3 & 0x10) != 0)
    if (arg_20 == 0)
        rax = sub_1405a7050(arg1 + 0x60, &var_28)
    else
        int64_t r14_3 = sx.q(*(arg1 + 0x68))
        int32_t rax_3 = (r14_3 + 1).d
        *(arg1 + 0x68) = rax_3
        
        if (rax_3 s> *(arg1 + 0x6c))
            sub_1405a4d70(arg1 + 0x60)
        
        rax = *(arg1 + 0x60)
        *(rax + (r14_3 << 3)) = arg2

if ((arg3 & 8) != 0)
    if (arg_20 == 0)
        rax = sub_1405a7050(arg1 + 0x50, &var_28)
    else
        int64_t r14_4 = sx.q(*(arg1 + 0x58))
        int32_t rax_4 = (r14_4 + 1).d
        *(arg1 + 0x58) = rax_4
        
        if (rax_4 s> *(arg1 + 0x5c))
            sub_1405a4d70(arg1 + 0x50)
        
        rax = *(arg1 + 0x50)
        *(rax + (r14_4 << 3)) = arg2

if ((arg3 & 4) == 0)
    return rax

if (arg_20 == 0)
    return sub_1405a7050(arg1 + 0x40, &var_28)

int64_t rdi_1 = sx.q(*(arg1 + 0x48))
int32_t rax_5 = (rdi_1 + 1).d
*(arg1 + 0x48) = rax_5

if (rax_5 s> *(arg1 + 0x4c))
    sub_1405a4d70(arg1 + 0x40)

int64_t rax_6 = *(arg1 + 0x40)
*(rax_6 + (rdi_1 << 3)) = arg2
return rax_6
