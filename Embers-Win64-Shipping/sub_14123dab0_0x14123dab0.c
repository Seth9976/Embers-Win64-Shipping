// 函数: sub_14123dab0
// 地址: 0x14123dab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1405fba70(*arg1, 3)

if (rax == 0)
    return rax

int32_t rax_1 = arg1[1]
int32_t rcx_2 = rax_1 & 0x80000001

if (rcx_2 s< 0)
    rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1

bool cond:0 = rcx_2 == 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_1)
int32_t rax_4 = (temp1 - temp0) s>> 1
int32_t rcx_6 = rax_4 & 0x80000001

if (rcx_6 s< 0)
    rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_4)
int32_t* rbx
rbx.b = rcx_6 == 1
int32_t rax_7 = (temp3 - temp2) s>> 1
char arg_9 = rbx.b
int32_t rcx_10 = rax_7 & 0x80000001

if (rcx_10 s< 0)
    rcx_10 = ((rcx_10 - 1) | 0xfffffffe) + 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_7)
int64_t rdi
rdi.b = rcx_10 == 1
int32_t rax_10 = (temp5 - temp4) s>> 1
char arg_a = rdi.b
int32_t rcx_14 = rax_10 & 0x80000001

if (rcx_14 s< 0)
    rcx_14 = ((rcx_14 - 1) | 0xfffffffe) + 1

bool cond:3 = rcx_14 == 1
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rax_10)
int32_t rax_13 = (temp7 - temp6) s>> 1
bool arg_b = cond:3
int32_t r8_1 = rax_13 & 0x80000001

if (r8_1 s< 0)
    r8_1 = ((r8_1 - 1) | 0xfffffffe) + 1

int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(rax_13)
int64_t rsi
rsi.b = r8_1 == 1
int32_t rax_16 = (temp9 - temp8) s>> 1
uint8_t arg_c = rsi.b
int32_t rcx_18 = rax_16 & 0x80000001

if (rcx_18 s< 0)
    rcx_18 = ((rcx_18 - 1) | 0xfffffffe) + 1

int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(rax_16)
bool r9 = rcx_18 == 1
bool arg_d = r9
int32_t rax_20 = (temp11 - temp10) s>> 1 & 0x80000001

if (rax_20 s< 0)
    rax_20 = ((rax_20 - 1) | 0xfffffffe) + 1

int32_t rdx_5
rdx_5.b = rax_20 == 1
char arg_e = rdx_5.b
uint64_t rax_23 = cond:0.q
bool arg_8
arg_8.q = rax_23
uint8_t rcx_22 = (rax_23 u>> 0x18).b

if (rcx_22 == 0)
    arg_c = rcx_22
    arg_d = false
    rax_23 = arg_8.q
else if (r8_1 != 1)
    arg_d = false
    rax_23 = arg_8.q

if (cond:0 == arg_8 && rbx.b == (rax_23 u>> 8).b && rdi.b == (rax_23 u>> 0x10).b
        && cond:3 == (rax_23 u>> 0x18).b && rsi.b == (rax_23 u>> 0x20).b
        && r9 == (rax_23 u>> 0x28).b && rdx_5.b == (rax_23 u>> 0x30).b)
    rax_23.b = 1
    return rax_23

rax_23.b = 0
return rax_23
