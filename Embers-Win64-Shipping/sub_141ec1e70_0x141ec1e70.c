// 函数: sub_141ec1e70
// 地址: 0x141ec1e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b69ab0(arg1 + 0xe0, arg1 + 0xf0)
_DeleteExceptionPtr(arg1 + 0xe0)
_DeleteExceptionPtr(arg1 + 0xf0)
int64_t var_28
int64_t var_18
int64_t* rax_1 = sub_140a36050(sub_140b67340(&var_18), &var_28)
int32_t rdi = 0

if (arg1 + 0x100 != rax_1)
    int64_t rcx_5 = *(arg1 + 0x100)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *(arg1 + 0x100) = *rax_1
    *rax_1 = 0
    *(arg1 + 0x108) = rax_1[1].d
    *(arg1 + 0x10c) = *(rax_1 + 0xc)
    rax_1[1] = 0

int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rax_5 = sub_140a36050(sub_140b67260(&var_28), &var_18)

if (arg1 + 0x110 != rax_5)
    int64_t rcx_11 = *(arg1 + 0x110)
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    *(arg1 + 0x110) = *rax_5
    *rax_5 = 0
    *(arg1 + 0x118) = rax_5[1].d
    *(arg1 + 0x11c) = *(rax_5 + 0xc)
    rax_5[1] = 0

int64_t rcx_13 = var_18

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = var_28

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t* rax_9 = sub_140a36050(sub_140b6b840(&var_28), &var_18)

if (arg1 + 0x120 != rax_9)
    int64_t rcx_17 = *(arg1 + 0x120)
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    *(arg1 + 0x120) = *rax_9
    *rax_9 = 0
    *(arg1 + 0x128) = rax_9[1].d
    *(arg1 + 0x12c) = *(rax_9 + 0xc)
    rax_9[1] = 0

int64_t rcx_19 = var_18

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = var_28

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t* rax_12 = sub_140a36020(&data_143f024b8, &var_18)

if (arg1 + 0x130 != rax_12)
    int64_t rcx_21 = *(arg1 + 0x130)
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    *(arg1 + 0x130) = *rax_12
    *rax_12 = 0
    *(arg1 + 0x138) = rax_12[1].d
    *(arg1 + 0x13c) = *(rax_12 + 0xc)
    rax_12[1] = 0

int64_t rcx_23 = var_18

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

void* rax_15 = sub_1423dd380(data_143f5b298)
*(arg1 + 0x78) = *(rax_15 + 0x30)
*(arg1 + 0x7c) = *(rax_15 + 0x34)
*(arg1 + 0x80) = *(rax_15 + 0x38)
*(arg1 + 0x84) = *(rax_15 + 0x3c)
*(arg1 + 0x88) = *(rax_15 + 0x40)
*(arg1 + 0x8c) = *(rax_15 + 0x44)
*(arg1 + 0x90) = *(rax_15 + 0x48)
*(arg1 + 0x94) = *(rax_15 + 0x4c)
*(arg1 + 0x98) = *(rax_15 + 0x50)
*(arg1 + 0x9c) = *(rax_15 + 0x54)
*(arg1 + 0xa0) = *(rax_15 + 0x58)
sub_140627690(arg1 + 0xa8, rax_15 + 0x60)
sub_140627690(arg1 + 0xb8, rax_15 + 0x70)
void arg_8
int32_t* rax_21 = sub_14202ace0(rax_15, &arg_8)
*(arg1 + 0xc8) = *rax_21
*(arg1 + 0xcc) = rax_21[1]
int32_t result = sub_142029940(rax_15)
wchar16 const* const rsi_4

if (result == 0)
    rsi_4 = u"Fullscreen"
else
    int32_t result_1 = result
    result -= 1
    
    if (result_1 == 1)
        rsi_4 = u"WindowedFullscreen"
    else if (result == 1)
        rsi_4 = u"Windowed"
    else
        rsi_4 = u"Unknown"

if (*(arg1 + 0xd0) != rsi_4)
    int32_t rbx_6
    
    if (*rsi_4 == 0)
        rbx_6 = 0
    else
        int64_t rbx_5 = -1
        
        do
            rbx_5 += 1
        while (rsi_4[rbx_5] != 0)
        
        rbx_6 = rbx_5.d + 1
    
    *(arg1 + 0xd8) = 0
    
    if (*(arg1 + 0xdc) != rbx_6)
        sub_1405947f0(arg1 + 0xd0, rbx_6)
        rdi = *(arg1 + 0xd8)
    
    result = rdi + rbx_6
    *(arg1 + 0xd8) = result
    
    if (result s> *(arg1 + 0xdc))
        result = sub_140594770(arg1 + 0xd0)
    
    if (rbx_6 != 0)
        return memcpy(*(arg1 + 0xd0), rsi_4, rbx_6 * 2)

return result
