// 函数: sub_140a036b0
// 地址: 0x140a036b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int64_t* rdi = *(arg1 + 8)
void* rax_2
int64_t rax_3
void* rdx_1

if (rdi != 0)
    rax_2 = sub_140a0af10()
    rdx_1 = rdi[2]
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rdi == 0 || rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rdi = nullptr

void var_378
sub_1409fc290(*(arg1 + 0x10), sub_1409fcf90(&var_378, rdi))
sub_1409ab360(&var_378)
int64_t result = *(arg1 + 0x10)
__security_check_cookie(rax_1 ^ &var_398)
return result
