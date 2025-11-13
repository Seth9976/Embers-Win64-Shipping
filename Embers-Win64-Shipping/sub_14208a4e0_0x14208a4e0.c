// 函数: sub_14208a4e0
// 地址: 0x14208a4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = *(arg1 + 0xe0)
uint32_t rdi = 0
uint32_t rax_1
uint32_t rcx_1

if (rsi != 0)
    rcx_1 = zx.d(rsi)
    rax_1 = rcx_1
else
    rcx_1 = sub_1405d9520(zx.d(*(arg1 + 0xdb)))
    rax_1 = 0

if (rcx_1 != 2)
    if (rsi == 0)
        rax_1 = sub_1405d9520(zx.d(*(arg1 + 0xdb)))
    
    if (rax_1 != 0xa)
        rax_1.b = 0
        return rax_1

void* rax_2 = sub_140cbe180(arg1)
int64_t* rcx_4 = rax_2 + 0x48

if (rax_2 == 0)
    rcx_4 = nullptr

int32_t arg_8
(*(*rcx_4 + 0x18))(rcx_4, &arg_8)
int128_t var_38
__builtin_memset(&var_38, 0, 0x18)
sub_142094d60(arg1, &var_38, zx.o(0))
char rsi_1 = *(arg1 + 0xe0)
uint32_t rax_4

if (rsi_1 != 0)
    rax_4 = zx.d(rsi_1)
    rdi = rax_4
else
    rax_4 = sub_1405d9520(zx.d(*(arg1 + 0xdb)))

int32_t rbp = 0x10

if (rax_4 == 2)
    rbp = 8

if (rsi_1 == 0)
    rdi = sub_1405d9520(zx.d(*(arg1 + 0xdb)))

j_sub_140b3db50()
void arg_18
int64_t rbx_1 = *sub_140b58260(&arg_18, u"ImageWrapper", 1)
j_sub_140b3db50()
int64_t* rax_7
int64_t r8
rax_7, r8 = j_sub_140b407e0(&data_143de7d78, rbx_1)
r8.b = 5
int64_t r9 = *rax_7
int64_t* var_48
(*(r9 + 0x40))(rax_7, &var_48, r8, r9)
int64_t* rcx_10 = var_48
int64_t rdi_1 = var_38.q
int64_t var_28
(*(*rcx_10 + 8))(rcx_10, rdi_1, var_28, zx.q(arg_8), arg3, rdi == 2, rbp)
int64_t* rcx_11 = var_48
int64_t* rax_11 = (*(*rcx_11 + 0x18))(rcx_11, 0x64)
int64_t r9_2 = *arg2
(*(r9_2 + 0x150))(arg2, *rax_11, rax_11[2], r9_2)
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp1_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_3 = *var_40
            (*(r8_3 + 8))(var_40, 1, r8_3)

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

int64_t rax_12
rax_12.b = 1
return rax_12
