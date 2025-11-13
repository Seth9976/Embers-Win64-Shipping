// 函数: sub_1424307d0
// 地址: 0x1424307d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t r15 = arg6
void* rbx = nullptr
int32_t arg_8 = 0
void* rdi = arg4

if (r15 s>= 4)
    r15 = data_1439c7a08

if (arg4 == 0)
    rdi = sub_140d1dfb0(nullptr, nullptr)

if (arg1 == 3)
    *(rdi + 0x50) |= 0x100000

if (rdi != sub_140cde0b0())
    *(rdi + 0x50) |= 0x20000

int32_t rcx
rcx.b = sub_140b5b8a0(arg_18.d, 0) == 0
int64_t var_58
int64_t var_48
int64_t* rax_4
int32_t rsi

if ((arg_18:4.d != 0 | rcx.b) == 0)
    var_58 = 0
    int32_t var_50_1 = 0
    sub_1405947f0(&var_58, 9)
    int32_t rax_5 = var_50_1 + 9
    var_50_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"Untitled", 0x12)
    rax_4 = &var_58
    rsi = 2
else
    rax_4 = sub_140b63b70(&arg_18, &var_48)
    rsi = 1

int16_t* r14 = *rax_4
*rax_4 = 0
int32_t rcx_5 = rax_4[1].d
rax_4[1] = 0

if ((rsi.b & 2) != 0)
    int64_t rcx_6 = var_58
    rsi &= 0xfffffffd
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

if ((rsi.b & 1) != 0)
    int64_t rcx_7 = var_48
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int16_t* rdx_2 = &data_142d40450

if (rcx_5 != 0)
    rdx_2 = r14

void arg_20
void* result = sub_1420187f0(rdi, *sub_140b58260(&arg_20, rdx_2, 1), 0, 0, 0, 0)
int64_t var_50_2 = 0
*(result + 8) |= 8
*(result + 0x11a) = arg1.b
*(result + 0x118) = r15.b
int32_t rcx_10
rcx_10.b = arg1 == 2
var_58.d = ((rcx_10 * 2) | rcx_10) << 4 | (var_58.d & 0xffffff8f) | 0x38f
var_48.o = var_58.o
sub_14243a740(result, &var_48)
sub_140ce9db0(rdi, 0)

if (arg5 != 0)
    int32_t rax_7 = *(result + 0xc)
    
    if (rax_7 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_7)
        uint32_t rdx_11 = zx.d(temp0_1)
        int32_t rax_9 = temp1_1 + rdx_11
        rbx = *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(zx.d(rax_9.w) - rdx_11) * 0x18
    
    *(rbx + 8) |= 0x40000000

int64_t* rcx_19 = data_143f5b298

if (rcx_19 != 0 && arg2 == 1)
    (*(*rcx_19 + 0x260))(rcx_19, result)

if (r14 != 0)
    sub_140a74f90(r14)

return result
