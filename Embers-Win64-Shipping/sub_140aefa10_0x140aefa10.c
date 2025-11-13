// 函数: sub_140aefa10
// 地址: 0x140aefa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405947f0(arg3, 0)

uint64_t rax = *arg3

if (rax != 0)
    *rax = 0

int16_t* const r15 = &data_142d40450
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int32_t result = sub_140a23cf0(arg1, rdx, 1, 0, 0xffffffff)

if (result s< 0)
    return result

int32_t rcx_2 = arg2[1].d
int32_t rdx_1 = rcx_2 - 1

if (rcx_2 == 0)
    rdx_1 = 0

int64_t r12_1 = sx.q(result + rdx_1) * 2
int64_t rax_3 = *arg1
int16_t rsi_1 = *(r12_1 + rax_3)
int16_t* rcx_3 = r12_1 + rax_3
int16_t* rbp_1 = &rcx_3[1]

if (rsi_1 != 0x22)
    rbp_1 = rcx_3

int16_t* rbx_1 = rbp_1
wint_t _C = *rbp_1

while (_C != 0)
    if (rsi_1 != 0x22)
        if (iswalnum(_C) == 0 && *rbx_1 != 0x5f)
            break
    else if (_C == rsi_1)
        break
    
    _C = rbx_1[1]
    rbx_1 = &rbx_1[1]

if (arg1[1].d != 0)
    r15 = *arg1

return sub_140a20ba0(arg3, &r15[sx.q(result + rdx_1)], ((rbx_1 - rbp_1) s>> 1).d)
