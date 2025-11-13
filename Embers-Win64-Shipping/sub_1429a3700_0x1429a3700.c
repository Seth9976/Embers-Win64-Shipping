// 函数: sub_1429a3700
// 地址: 0x1429a3700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int32_t arg_10 = 0x1312f76
(*(rax + 8))(arg2, &arg_10, 4)
int32_t rbx = 2
char rax_1 = Concurrency::details::UMSSchedulingContext::OnPrimary(arg3)
char rax_3

if (rax_1 != 0)
    rax_3 = sub_1429a34a0(sub_142983a40(arg3))

if (rax_1 == 0 || rax_3 == 0)
    if (sub_142980c90(arg3) != 0)
        rbx = 0x202
else
    rbx = 0x802

if (sub_1429a6690(arg3) != 0)
    rbx |= 0x400

arg_10.b = rbx.b
arg_10:1.b = (rbx u>> 8).b
arg_10:2.b = (rbx u>> 0x10).b
arg_10:3.b = (rbx u>> 0x18).b
return (*(*arg2 + 8))(arg2, &arg_10, 4)
