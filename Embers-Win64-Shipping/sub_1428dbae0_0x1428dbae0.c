// 函数: sub_1428dbae0
// 地址: 0x1428dbae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rbx = arg1
char* rax = (*(arg2 + 0x18))()
int32_t rcx = *arg2
int32_t r8_1 = rcx & 0x1000

if (r8_1 != 0)
    int64_t* arg_10 = rbx
    rbx = &arg_10

if ((rcx.b & 1) != 0)
    sub_1428dba20(rbx, arg2, r8_1)
    return 1

void* rax_2

if ((rcx & 0x300) == 0)
    if ((rcx.b & 6) == 0)
        return sub_1428db570(rbx, rax, r8_1)
    
    rax_2 = sub_142898ba0()
    
    if (rax_2 == 0)
        sub_1428a5670((rax_2 + 0xd).d, 0x85, (rax_2 + 0x41).d, "crypto\asn1\tasn_new.c", 0xe7)
        return 0
else
    rax_2 = nullptr

*rbx = rax_2
return 1
