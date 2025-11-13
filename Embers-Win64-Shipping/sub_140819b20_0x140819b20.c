// 函数: sub_140819b20
// 地址: 0x140819b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x5030)
void var_5048
int64_t rax_1 = __security_cookie ^ &var_5048
uint64_t i_12 = zx.q(arg3)
int32_t* rbx = arg2
int32_t var_5028[0x400]
memset(&var_5028, 0, 0x5000)
int32_t var_4028[0x800]
int32_t var_2028[0x400]

if (i_12.d != 0)
    int32_t* rdx = rbx
    uint64_t i_7 = zx.q(i_12.d)
    uint64_t i
    
    do
        uint64_t rcx_1 = zx.q(*rdx)
        rdx = &rdx[2]
        uint64_t rax_3 = zx.q(rcx_1.d) & 0x3ff
        var_5028[rax_3] += 1
        uint64_t rax_6 = zx.q(rcx_1.d u>> 0xa) & 0x7ff
        uint64_t rcx_2 = rcx_1 u>> 0x15
        var_4028[rax_6] += 1
        var_2028[rcx_2] += 1
        i = i_7
        i_7 -= 1
    while (i != 1)

int32_t r11 = 0
int32_t (* rdx_1)[0x800] = &var_4028
int64_t i_10 = 0x400
int32_t r8 = 0
int32_t r9 = 0
int64_t i_6 = 0x400
int64_t i_1

do
    int32_t rcx_3 = (*rdx_1)[-0x400]
    (*rdx_1)[-0x400] = r11 - 1
    rdx_1 = &(*rdx_1)[1]
    r11 += rcx_3
    int32_t rcx_5 = (*rdx_1)[-1] + r8
    (*rdx_1)[-1] = r8 - 1
    r8 = rcx_5
    int32_t rcx_7 = (*rdx_1)[0x7ff] + r9
    (*rdx_1)[0x7ff] = r9 - 1
    r9 = rcx_7
    i_1 = i_6
    i_6 -= 1
while (i_1 != 1)
void var_1028
void* rdx_2 = &var_1028
uint64_t result
int64_t i_2

do
    int32_t rcx_8 = *(rdx_2 - 0x2000)
    *(rdx_2 - 0x2000) = r8 - 1
    rdx_2 += 4
    r8 += rcx_8
    result = zx.q(r9 - 1)
    r9 += *(rdx_2 - 4)
    *(rdx_2 - 4) = result.d
    i_2 = i_10
    i_10 -= 1
while (i_2 != 1)

if (i_12.d != 0)
    int32_t* r8_1 = rbx
    uint64_t i_9 = i_12
    uint64_t i_11 = i_12
    uint64_t i_3
    
    do
        int64_t rdx_3 = *r8_1
        r8_1 = &r8_1[2]
        uint64_t rax_12 = zx.q(rdx_3.d) & 0x3ff
        var_5028[rax_12] += 1
        arg1[zx.q(var_5028[rax_12])] = rdx_3
        i_3 = i_11
        i_11 -= 1
    while (i_3 != 1)
    int64_t* rdx_4 = arg1
    uint64_t i_8 = i_12
    uint64_t i_4
    
    do
        int64_t rcx_11 = *rdx_4
        rdx_4 = &rdx_4[1]
        uint64_t rax_15 = zx.q((rcx_11 u>> 0xa).d) & 0x7ff
        var_4028[rax_15] += 1
        *(rbx + (zx.q(var_4028[rax_15]) << 3)) = rcx_11
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)
    uint64_t i_5
    
    do
        int64_t rdx_5 = *rbx
        rbx = &rbx[2]
        result = zx.q(rdx_5.d) u>> 0x15
        var_2028[result] += 1
        arg1[zx.q(var_2028[result])] = rdx_5
        i_5 = i_9
        i_9 -= 1
    while (i_5 != 1)

__security_check_cookie(rax_1 ^ &var_5048)
return result
