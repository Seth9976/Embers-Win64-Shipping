// 函数: sub_14284dbb0
// 地址: 0x14284dbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax_2
int64_t* rcx

if (arg1 != 0)
    rcx = **(arg1 + 0x130)
    rax_2 = *rcx

int32_t var_18
int32_t r8

if (arg1 == 0 || rax_2 == 0)
    var_18 = 0x625
    r8 = 0xb1
else
    int32_t* rdx_1 = rcx[1]
    
    if (rdx_1 != 0)
        return sub_1428a36a0(rax_2, rdx_1) __tailcall
    
    var_18 = 0x629
    r8 = 0xbe

sub_1428a5670(0x14, 0xa8, r8, "ssl\ssl_lib.c", var_18)
return 0
