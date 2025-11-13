// 函数: sub_140cef0e0
// 地址: 0x140cef0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t (* r8)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = arg2[2]
char rax = not.b(*(arg1 + 0x30))
void** rdi = *(arg1 + 0x10)
int64_t r9 = arg2[3]
int64_t (* r14)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = arg2[1]
void* rsi = *arg2
int64_t (* arg_8)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = r8
int64_t (* var_a8)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
int64_t (* var_98)(int64_t* arg1, int64_t* arg2)
int64_t (* var_88)(int64_t* arg1, int64_t* arg2)
int64_t (* var_70)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
int64_t (* arg_18)(int64_t* arg1, int64_t* arg2, int64_t* arg3)

if ((rax & 1) != 0)
    var_70 = r8
    int64_t (* var_58)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2ee0
    int64_t var_68_1 = r9
    int64_t (** var_50)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = &var_70
    arg_18 = r8
    int64_t (** var_90_2)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = &var_58
    int64_t (* var_60_1)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = r14
    int64_t rbx = sx.q(*(rsi + 0x18))
    var_98 = sub_140cf2e70
    var_a8 = sub_140cf2f50
    int64_t* var_a0_3 = &arg_8
    var_88 = sub_140cf2f40
    int64_t (** var_80_1)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = &arg_18
    int64_t (** var_b0)(int64_t* arg1, int64_t* arg2) = &var_98
    int32_t var_48 = rbx.d
    return sx.q(sub_140cfeb30(rdi, r14, rsi + 0x1c, &var_88, &var_a8) * *(rsi + 0x2c)) + rbx + *rdi

var_70 = sub_140cf2ee0
var_88 = r8
int64_t var_80 = r9
int64_t (* var_78)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = r14
int64_t (* arg_20)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = r8
int64_t r12 = sx.q(*(rsi + 0x18))
int64_t* var_68 = &var_88
int64_t var_60
var_60.d = r12.d
arg_18 = r14
int32_t rax_1 = sub_140cf2f40(&arg_8, &arg_18)
int32_t rax_2
int32_t rcx_3

if (rdi[1].d != *(rdi + 0x24))
    int64_t* var_a0_1 = &arg_20
    var_a8 = sub_140cf2f50
    rax_2 = sub_140cfe9c0(rdi, r14, rsi + 0x1c, rax_1, &var_a8)
    rcx_3 = rax_2

if (rdi[1].d == *(rdi + 0x24) || rax_2 == 0xffffffff)
    int64_t* var_90_1 = &arg_8
    var_a8 = sub_140cf2e70
    int64_t (** var_a0_2)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = &var_70
    var_98 = sub_140cf2f40
    rcx_3 = sub_140cf17b0(rdi, rsi + 0x1c, &var_98, rax_1, &var_a8)

void* rdx_4 = *rdi

if ((rdx_4.b & 1) != 0)
    rdx_4 = (rdx_4 s>> 1) + rdi

return sx.q(*(rsi + 0x2c) * rcx_3) + rdx_4 + r12
