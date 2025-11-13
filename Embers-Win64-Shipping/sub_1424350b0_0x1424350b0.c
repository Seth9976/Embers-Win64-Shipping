// 函数: sub_1424350b0
// 地址: 0x1424350b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char* i = *(arg1 + 0x158)
int64_t r8 = sx.q(*(arg1 + 0x160))
void* rbx = r8 * 0x78

for (void* rcx = rbx + i; i != rcx; i = &i[0x78])
    if (*i == arg2)
        goto label_1424351ab

char var_97_1 = 1
int64_t var_90
__builtin_memset(&var_90, 0, 0x4c)
int32_t var_3c_1 = 0
int64_t var_30_1 = 0
int32_t var_28_1 = 0
int32_t rax_2 = (r8 + 1).d
int32_t var_44_1 = 0x80
int32_t var_40_1 = 0xffffffff
char var_98 = arg2
*(arg1 + 0x160) = rax_2

if (rax_2 s> *(arg1 + 0x164))
    sub_1407c3920(arg1 + 0x158)

sub_142427ee0(*(arg1 + 0x158) + rbx, &var_98)
char* i_1 = sx.q(*(arg1 + 0x160) - 1) * 0x78 + *(arg1 + 0x158)
sub_142429280(&var_98)
i = i_1
label_1424351ab:
__security_check_cookie(rax_1 ^ &var_b8)
return i
