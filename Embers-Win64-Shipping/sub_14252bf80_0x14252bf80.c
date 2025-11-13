// 函数: sub_14252bf80
// 地址: 0x14252bf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_74 = 0x80
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x6c)
int32_t var_70 = 0xffffffff
int32_t var_6c = 0
int64_t var_60 = 0
int32_t var_58 = 0
char var_50 = 0
void var_48
sub_140a96170(&var_48)
*(arg2 + 0x38) = 0
void var_e8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_e8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

void* rax_3 = *(arg2 + 0x38)
void* rdx_2 = &var_e8

if (rax_3 != 0)
    rdx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_4 != 0
*(arg2 + 0x20) = rbx + rax_4
void var_108
int64_t* rax_5 = sub_1420ce640(&var_108, rdx_2)
int64_t rdx_3 = *arg3
*arg3 = *rax_5
*rax_5 = rdx_3
int64_t rdx_4 = arg3[1]
arg3[1] = rax_5[1]
rax_5[1] = rdx_4
arg3[2].d = rax_5[2].d
int64_t* var_100

if (var_100 != 0)
    var_100[1].d -= 1
    
    if (var_100[1].d == 1)
        (**var_100)(var_100)
        int32_t rsi_1 = *(var_100 + 0xc)
        *(var_100 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_100 + 8))(var_100, zx.q(rsi_1))

void* result = sub_140a63910(&var_e8)
__security_check_cookie(rax_1 ^ &var_128)
return result
