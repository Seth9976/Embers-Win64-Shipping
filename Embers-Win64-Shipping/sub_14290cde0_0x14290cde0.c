// 函数: sub_14290cde0
// 地址: 0x14290cde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r10 = *(arg2 + 0x28)

if (r10 == 0)
    sub_1428a5670(0x10, 0x10c, 0x74, "crypto\ec\ecx_meth.c", 0x82)
    return 0

int32_t rcx = **(arg2 + 0x10)
uint64_t rdx_1

if (rcx == 0x40a || rcx == 0x43f)
    rdx_1 = 0x20
else
    int64_t rdx
    rdx.b = rcx != 0x40b
    rdx_1 = rdx + 0x38

int64_t rax_2 = sub_1428a6af0(r10, rdx_1, "crypto\ec\ecx_meth.c", 0x86)
int32_t var_18_1

if (rax_2 != 0)
    int32_t rcx_2 = **(arg2 + 0x10)
    int32_t rbx_1
    
    if (rcx_2 == 0x40a || rcx_2 == 0x43f)
        rbx_1 = 0x20
    else
        int32_t rbx
        rbx.b = rcx_2 != 0x40b
        rbx_1 = rbx + 0x38
    
    int32_t var_18
    var_18.q = rax_2
    
    if (sub_1428a2850(arg1, sub_1428a9570(rcx_2), 0xffffffff, 0, var_18, rbx_1) != 0)
        return 1
    
    sub_1428a6780(rax_2)
    var_18_1 = 0x8f
else
    var_18_1 = 0x88

sub_1428a5670(0x10, 0x10c, 0x41, "crypto\ec\ecx_meth.c", var_18_1)
return 0
