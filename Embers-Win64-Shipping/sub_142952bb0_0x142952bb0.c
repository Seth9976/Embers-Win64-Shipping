// 函数: sub_142952bb0
// 地址: 0x142952bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rsi = 0
int64_t* rbx = arg2
int64_t* rdi = nullptr
int64_t* rax_1

if (arg2 == 0)
    rax_1 = sub_1428d8d60()
    rdi = rax_1
    rbx = rax_1

if (arg2 != 0 || rax_1 != 0)
    sub_1428d8e50(rbx)
    int64_t* rax_2 = sub_1428d8ba0(rbx)
    
    if (rax_2 != 0 && sub_142972740(rax_2, *(arg1 + 0x68), arg1 + 0x48) != 0
            && sub_142890300(rax_2) == 0)
        rsi = 1
    
    if (rbx != 0)
        sub_1428d8a60(rbx)
else
    sub_1428a5670(0x10, 0x9f, 0x41, "crypto\ec\ec2_smpl.c", 0xb9)

sub_1428d8ae0(rdi)
return zx.q(rsi)
