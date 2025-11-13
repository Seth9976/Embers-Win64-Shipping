// 函数: sub_141e8dc10
// 地址: 0x141e8dc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_141e93ef0(arg1, &var_18)
int64_t* var_10
int64_t* rdi = var_10
int64_t* rbx_1 = &rdi[1]
*rdi = *arg2
sub_140596d10(rbx_1, arg3)
rbx_1[2] = arg3[2]
void* rax_2 = arg3[3]
rbx_1[3] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1
    rdi = var_10

rbx_1[4].d = arg3[4].d
rbx_1[5] = arg3[5]
rdi[7].d = 0xffffffff
int64_t rbx_2 = *rdi
int32_t arg_8
sub_141e9e9e0(arg1, &arg_8, (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d), rdi, var_18, nullptr)
return *arg1 + (sx.q(arg_8) << 6) + 8
