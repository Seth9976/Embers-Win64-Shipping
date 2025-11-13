// 函数: sub_142854410
// 地址: 0x142854410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax

if (arg1 == 0)
    rax = *(arg2 + 0x130)
else
    rax = *(arg1 + 0x488)

void* rbp = *rax

if (rbp == 0)
    return 0

int32_t rbx = 0

if (sub_142898c70(arg3) s> 0)
    int32_t rax_5
    
    do
        int32_t var_28_1 = 0
        int32_t rax_4 = sub_1428636a0(arg1, arg2, sub_142898ea0(arg3, rbx), 0)
        
        if (rax_4 != 1)
            sub_1428a5670(0x14, 0x154, rax_4, "ssl\ssl_cert.c", 0x108)
            return 0
        
        rbx += 1
        rax_5 = sub_142898c70(arg3)
    while (rbx s< rax_5)

sub_142898cb0(*(rbp + 0x10), sub_1428a2c50)
*(rbp + 0x10) = arg3
return 1
