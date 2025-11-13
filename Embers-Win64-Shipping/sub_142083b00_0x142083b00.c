// 函数: sub_142083b00
// 地址: 0x142083b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3[1].d)
uint64_t rbx = 0
int64_t r15 = *arg3
uint64_t var_58 = 0
int32_t var_50 = rsi.d

if (rsi.d != 0)
    sub_1405c4a90(&var_58, rsi.d, 0)
    rbx = var_58
    memcpy(rbx, r15, (rsi << 2).d)

uint64_t rsi_2 = zx.q(arg1 * arg2)

if (rsi_2.d s> 0)
    int64_t i = 0
    
    do
        char rcx_2 = *(rbx + (i << 2) + 2)
        *(rbx + (i << 2) + 2) = *(rbx + (i << 2))
        *(rbx + (i << 2)) = rcx_2
        i += 1
    while (i s< sx.q(rsi_2.d))

int32_t var_48
sub_140b0b0d0(&var_48)
uint32_t count_1 = (rsi_2 << 2).d
var_48 = arg1
int32_t var_44 = arg2
int32_t var_28
int32_t rax_2 = var_28 + count_1
int32_t var_28_1 = rax_2
int64_t var_30
int32_t var_24

if (rax_2 s> var_24)
    sub_1405daba0(&var_30)

memcpy(var_30, rbx, count_1)
sub_140b111c0(&var_48)
int64_t var_40
int64_t* result = &var_40

if (arg4 != &var_40)
    int64_t rbp_1 = var_40
    int32_t r8_4 = *(arg4 + 0xc)
    uint32_t count
    arg4[1].d = count
    
    if (count != 0 || r8_4 != 0)
        sub_1405da9e0(arg4, count, r8_4)
        result = memcpy(*arg4, rbp_1, count)
    else
        *(arg4 + 0xc) = count

int64_t rcx_9 = var_30

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_40

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
