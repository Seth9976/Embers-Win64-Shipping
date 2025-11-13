// 函数: sub_142b989d0
// 地址: 0x142b989d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1)
uint64_t rcx_2 = zx.q((temp1 ^ temp0) - temp0)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg2)
uint64_t rax_5 = zx.q((temp3 ^ temp2) - temp2)
int32_t r8_2

if (rcx_2.d s<= rax_5.d)
    r8_2 = ((rcx_2 * 3).d s>> 3) + rax_5.d
else
    r8_2 = ((rax_5 * 3).d s>> 3) + rcx_2.d

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(arg3)
uint64_t r9_3 = zx.q((temp5 ^ temp4) - temp4)
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(arg4)
uint64_t rax_11 = zx.q((temp7 ^ temp6) - temp6)
int32_t rcx_5

if (r9_3.d s<= rax_11.d)
    rcx_5 = ((r9_3 * 3).d s>> 3) + rax_11.d
else
    rcx_5 = ((rax_11 * 3).d s>> 3) + r9_3.d

int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(arg1 + arg3)
uint64_t r9_6 = zx.q((temp9 ^ temp8) - temp8)
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(arg2 + arg4)
uint64_t rax_17 = zx.q((temp11 ^ temp10) - temp10)
int32_t rdx_8

if (r9_6.d s<= rax_17.d)
    rdx_8 = ((r9_6 * 3).d s>> 3) + rax_17.d
else
    rdx_8 = ((rax_17 * 3).d s>> 3) + r9_6.d

int64_t result
result.b = rcx_5 - rdx_8 + r8_2 s< rdx_8 s>> 4
return result
