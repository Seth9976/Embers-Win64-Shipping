// 函数: sub_14294d440
// 地址: 0x14294d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax = sub_142890500()
int64_t* rax_1 = sub_142890500()
int64_t* rax_2 = sub_142890500()
int64_t result = 0

if (rax != 0 && rax_1 != 0 && rax_2 != 0 && sub_1428bef30(arg1, rax, rax_1, rax_2, 0) != 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(sub_142890560(rax) + 7)
    result = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)

sub_1428901a0(rax)
sub_1428901a0(rax_1)
sub_1428901a0(rax_2)
return result
