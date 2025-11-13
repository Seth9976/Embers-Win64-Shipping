// 函数: sub_14294d220
// 地址: 0x14294d220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
__chkstk(0x30)
int32_t rdi = -1
int64_t* rbx = nullptr
int64_t* rax = sub_14288fa60(arg1, arg2, nullptr)

if (rax != 0)
    int64_t* rax_1 = sub_14294ccb0(arg5, rax)
    rbx = rax_1
    int32_t rax_2 = sub_1428f00b0(rax_1, &arg_18)
    
    if (rax_2 s>= 0)
        *arg4 = rax_2
        rdi = 1
    else
        sub_1428a5670(0x35, 0x69, 0x44, "crypto\sm2\sm2_sign.c", 0x1aa)
else
    sub_1428a5670(0x35, 0x69, 3, "crypto\sm2\sm2_sign.c", 0x1a2)

sub_1428ee9c0(rbx)
sub_1428901a0(rax)
return zx.q(rdi)
