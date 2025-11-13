// 函数: sub_1417fc170
// 地址: 0x1417fc170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_978
int64_t rax_1 = __security_cookie ^ &var_978
char var_828[0x800]
sub_1428a2e30(sub_1428a3930(arg2), &var_828, 0x800)
int32_t rbp = 0
void* rdx_1 = nullptr
int64_t rbx = -1
void* var_848 = nullptr
int64_t rax_3 = -1

do
    rax_3 += 1
while (var_828[rax_3] != 0)

int32_t rsi = (rax_3 + 1).d
int32_t var_838 = rax_3.d

if (rsi u> 0x80 && rsi != 0)
    void* rax_4 = sub_140a84c80(0, sx.q(rsi) * 2, 0)
    rdx_1 = rax_4
    var_848 = rax_4

void var_948
void* rcx_2 = &var_948

if (rdx_1 != 0)
    rcx_2 = rdx_1

sub_1405a7220(rcx_2, rsi, &var_828, rsi, 0x3f)
*arg1 = 0
arg1[1] = 0

if (rcx_2 != 0 && *rcx_2 != 0)
    do
        rbx += 1
    while (*(rcx_2 + (rbx << 1)) != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(arg1, rbx.d + 1)
        rbp = arg1[1].d
    
    int32_t rax_5 = rbx.d + 1 + rbp
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, rcx_2, (rbx.d + 1) * 2)

if (var_848 != 0)
    sub_140a74f90(var_848)

__security_check_cookie(rax_1 ^ &var_978)
return arg1
