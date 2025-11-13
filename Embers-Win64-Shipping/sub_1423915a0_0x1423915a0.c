// 函数: sub_1423915a0
// 地址: 0x1423915a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rbx = 0
int64_t var_40 = 0
int32_t var_38 = 0
int32_t var_34 = 0xc
int128_t zmm6 = arg2
int64_t rcx = sx.q(*data_143f5a2b0)
void*** rdi = *(arg1 + 0x340)

if (rcx s<= 0)
    rcx = 0x7fffffffffffffff

int64_t rax_3 = sx.q(*(arg1 + 0x348))
int64_t var_a8 = rcx
uint64_t r14_1 = rax_3 << 3 u>> 3

if (rdi u> &rdi[rax_3])
    r14_1 = 0

void var_a0
int512_t zmm2

if (r14_1 != 0)
    do
        void** rcx_1 = *rdi
        
        if (rcx_1 != 0)
            char var_b0_1 = *(arg1 + 0x358)
            zmm2, zmm6 = sub_1423913b0(rcx_1, arg1 + 0x210, &var_a0, &var_a8, zmm6.d)
        
        rdi = &rdi[1]
        rbx += 1
    while (rbx != r14_1)

if (arg3 != 0 && *(arg1 + 0x358) != 0)
    zmm2.o = zmm6
    sub_142391140(arg1 + 0x210, &var_a0)

int64_t result = sub_142398030(arg1, &var_a0)

if (var_40 != 0)
    result = sub_140a74f90(var_40)

__security_check_cookie(rax_1 ^ &var_d8)
return result
