// 函数: sub_1423c2fd0
// 地址: 0x1423c2fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rbx = arg1[9]
char rdi = (*(rbx + 0xc8)).b
void* rax_2
int128_t zmm2
int128_t zmm3
rax_2, zmm2, zmm3 = sub_141fe0c50(0)
void* rax_4 = sub_1405e25d0(sub_141fe0f50(rax_2))
uint32_t rdx = zx.d(*(rbx + 0x5d))
uint64_t rcx_1

if (rdx == 0)
    rcx_1.b = 0
else if (rdx == 1)
    rcx_1.b = 1
else if (rdx == 2)
    rcx_1.b = 2
else
    rcx_1 = zx.q(*(zx.q(*(rbx + 0x5f)) * 0x54 + *(rax_4 + 0x28) + 0x18))

char var_a0 = rcx_1.b
int64_t* rcx_3 = data_143f0f180
int32_t var_94 = 0x7f7fffff
char var_9f = rdi
char var_9e = rdi
char var_9d = rdi
int64_t var_9c = 0
int64_t var_90 = 0
char var_88 = 0
void var_a8
(*(*rcx_3 + 0x28))(rcx_3, &var_a8, &var_a0)
sub_1405d1600(&arg1[3], &var_a8)
sub_1405d1550(&var_a8)
void* rdx_5 = arg1[9]
int32_t r12 = 0
char r14

if ((*(rdx_5 + 0xc1) & 1) == 0)
    r14 = *(rdx_5 + 0x60)
    
    if ((r14 & 1) != 0)
        r12 = 0x10
else
    *(arg1 + 0x45) = 1
    r12 = 2
    r14 = *(rdx_5 + 0x60)

char rcx_6 = (data_1439c7a34).b
int128_t var_78 = zx.o(0)
int32_t var_68 = 1
int32_t var_54 = (1 << rcx_6) - 1
int128_t var_64 = data_143dbb1e0
char var_50 = 0
int64_t var_48 = 0
int32_t var_40 = 0
char rsi = *(rdx_5 + 0xc0)
int32_t rdi_1 = *(rdx_5 + 0xc4)
int32_t rax_10 = (*(*arg1 + 0x48))(arg1)
int64_t rdx_6 = *arg1
int32_t rax_11 = (*(rdx_6 + 0x40))(arg1, rdx_6)
int64_t* rcx_9 = data_143f0f180
int32_t rdx_8 = r12 | 0x40

if ((r14 & 2) == 0)
    rdx_8 = r12

(*(*rcx_9 + 0x560))(rcx_9, &var_a8, &data_143f02b98, zx.q(rax_11), rax_10, rsi, rdi_1, 1, rdx_8, 
    &var_78)
sub_1405d1600(&arg1[0xa], &var_a8)
sub_1405d1550(&var_a8)
sub_1408c8cf0(&arg1[2], arg1[0xa])
*(arg1[2] + 0x58) = *(arg1[9] + 0x18)
int64_t result = sub_14198ac20(&data_143f02b98, *(arg1[9] + 0x90), arg1[2], zmm3, zmm2)
__security_check_cookie(rax_1 ^ &var_f8)
return result
