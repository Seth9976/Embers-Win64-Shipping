// 函数: sub_1429bbad0
// 地址: 0x1429bbad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1f8[0x38]
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t i_3 = 0
int64_t (* rdx)[0x38] = &var_1f8
int64_t i_4 = 7
int64_t i

do
    __builtin_memset(rdx, 0, 0x40)
    rdx = &(*rdx)[8]
    i = i_4
    i_4 -= 1
while (i != 1)
__builtin_memset(rdx, 0, 0x18)
int64_t i_5 = 0x10001
int64_t* rdx_1 = arg1
int64_t i_1

do
    int64_t rcx = *rdx_1
    rdx_1 = &rdx_1[1]
    var_1f8[rcx] += 1
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
uint64_t rcx_1 = 0
void var_38
void* r9 = &var_38
uint64_t i_6 = zx.q((i_5 + 2).d)
uint64_t i_2

do
    int64_t rdx_2 = *(r9 + 0x10)
    *(r9 + 0x10) = rcx_1
    int64_t rcx_2 = *(r9 + 8)
    uint64_t rdx_4 = (rdx_2 + rcx_1) u>> 1
    *(r9 + 8) = rdx_4
    int64_t r8 = *r9
    uint64_t rcx_4 = (rcx_2 + rdx_4) u>> 1
    *r9 = rcx_4
    int64_t rdx_5 = *(r9 - 8)
    uint64_t r8_2 = (r8 + rcx_4) u>> 1
    *(r9 - 8) = r8_2
    int64_t rcx_5 = *(r9 - 0x10)
    uint64_t rdx_7 = (rdx_5 + r8_2) u>> 1
    *(r9 - 0x10) = rdx_7
    int64_t rdx_8 = *(r9 - 0x18)
    uint64_t rcx_7 = (rcx_5 + rdx_7) u>> 1
    *(r9 - 0x18) = rcx_7
    int64_t r8_3 = *(r9 - 0x20)
    uint64_t rdx_10 = (rdx_8 + rcx_7) u>> 1
    *(r9 - 0x20) = rdx_10
    int64_t rdx_11 = *(r9 - 0x28)
    uint64_t r8_5 = (r8_3 + rdx_10) u>> 1
    *(r9 - 0x28) = r8_5
    int64_t rcx_8 = *(r9 - 0x30)
    uint64_t rdx_13 = (rdx_11 + r8_5) u>> 1
    *(r9 - 0x30) = rdx_13
    int64_t rdx_14 = *(r9 - 0x38)
    uint64_t rcx_10 = (rcx_8 + rdx_13) u>> 1
    *(r9 - 0x38) = rcx_10
    int64_t r8_6 = *(r9 - 0x40)
    uint64_t rdx_16 = (rdx_14 + rcx_10) u>> 1
    *(r9 - 0x40) = rdx_16
    int64_t rdx_17 = *(r9 - 0x48)
    uint64_t r8_8 = (r8_6 + rdx_16) u>> 1
    *(r9 - 0x48) = r8_8
    int64_t rcx_11 = *(r9 - 0x50)
    uint64_t rdx_19 = (rdx_17 + r8_8) u>> 1
    *(r9 - 0x50) = rdx_19
    int64_t rdx_20 = *(r9 - 0x58)
    uint64_t rcx_13 = (rcx_11 + rdx_19) u>> 1
    *(r9 - 0x58) = rcx_13
    int64_t r8_9 = *(r9 - 0x60)
    uint64_t rdx_22 = (rdx_20 + rcx_13) u>> 1
    *(r9 - 0x60) = rdx_22
    int64_t rdx_23 = *(r9 - 0x68)
    uint64_t r8_11 = (r8_9 + rdx_22) u>> 1
    *(r9 - 0x68) = r8_11
    int64_t rcx_14 = *(r9 - 0x70)
    uint64_t rdx_25 = (rdx_23 + r8_11) u>> 1
    *(r9 - 0x70) = rdx_25
    uint64_t rcx_16 = (rcx_14 + rdx_25) u>> 1
    int64_t rdx_27 = *(r9 - 0x78) + rcx_16
    *(r9 - 0x78) = rcx_16
    int64_t r8_12 = *(r9 - 0x80)
    uint64_t rdx_28 = rdx_27 u>> 1
    *(r9 - 0x80) = rdx_28
    uint64_t r8_14 = (r8_12 + rdx_28) u>> 1
    int64_t rdx_30 = *(r9 - 0x88) + r8_14
    *(r9 - 0x88) = r8_14
    int64_t rcx_17 = *(r9 - 0x90)
    uint64_t rdx_31 = rdx_30 u>> 1
    *(r9 - 0x90) = rdx_31
    r9 -= 0xe8
    int64_t rdx_32 = *(r9 + 0x50)
    uint64_t rcx_19 = (rcx_17 + rdx_31) u>> 1
    *(r9 + 0x50) = rcx_19
    int64_t r8_15 = *(r9 + 0x48)
    uint64_t rdx_34 = (rdx_32 + rcx_19) u>> 1
    *(r9 + 0x48) = rdx_34
    int64_t rdx_35 = *(r9 + 0x40)
    uint64_t r8_17 = (r8_15 + rdx_34) u>> 1
    *(r9 + 0x40) = r8_17
    int64_t rcx_20 = *(r9 + 0x38)
    uint64_t rdx_37 = (rdx_35 + r8_17) u>> 1
    *(r9 + 0x38) = rdx_37
    int64_t rdx_38 = *(r9 + 0x30)
    uint64_t rcx_22 = (rcx_20 + rdx_37) u>> 1
    *(r9 + 0x30) = rcx_22
    int64_t r8_18 = *(r9 + 0x28)
    uint64_t rdx_40 = (rdx_38 + rcx_22) u>> 1
    *(r9 + 0x28) = rdx_40
    int64_t rdx_41 = *(r9 + 0x20)
    uint64_t r8_20 = (r8_18 + rdx_40) u>> 1
    *(r9 + 0x20) = r8_20
    uint64_t rdx_43 = (rdx_41 + r8_20) u>> 1
    int64_t rcx_24 = *(r9 + 0x18) + rdx_43
    *(r9 + 0x18) = rdx_43
    rcx_1 = rcx_24 u>> 1
    i_2 = i_6
    i_6 -= 1
while (i_2 != 1)

do
    int64_t rcx_25 = sx.q(arg1[i_3].d)
    
    if (rcx_25.d s> 0)
        int64_t r8_21 = var_1f8[rcx_25]
        arg1[i_3] = r8_21 << 6 | rcx_25
        var_1f8[rcx_25] = r8_21 + 1
    
    i_3 += 1
while (i_3 s< 0x10001)

__security_check_cookie(rax_1 ^ &var_1f8)
return i_3
