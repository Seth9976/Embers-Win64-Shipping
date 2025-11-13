// 函数: sub_142945ea0
// 地址: 0x142945ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x210)
void var_238
int64_t rax_1 = __security_cookie ^ &var_238
uint8_t rcx = *arg2
uint8_t var_77 = rcx u>> 4
uint8_t rcx_1 = arg2[1]
uint8_t var_78 = rcx & 0xf
uint8_t var_75 = rcx_1 u>> 4
uint8_t rcx_2 = arg2[2]
uint8_t var_76 = rcx_1 & 0xf
uint8_t var_73 = rcx_2 u>> 4
uint8_t rcx_3 = arg2[3]
uint8_t var_74 = rcx_2 & 0xf
uint8_t var_71 = rcx_3 u>> 4
uint8_t rcx_4 = arg2[4]
uint8_t var_72 = rcx_3 & 0xf
uint8_t var_6f = rcx_4 u>> 4
uint8_t rcx_5 = arg2[5]
uint8_t var_70 = rcx_4 & 0xf
uint8_t var_6d = rcx_5 u>> 4
uint8_t rcx_6 = arg2[6]
uint8_t var_6e = rcx_5 & 0xf
uint8_t var_6b = rcx_6 u>> 4
uint8_t rcx_7 = arg2[7]
uint8_t var_6c = rcx_6 & 0xf
uint8_t var_69 = rcx_7 u>> 4
uint8_t rcx_8 = arg2[8]
uint8_t var_6a = rcx_7 & 0xf
uint8_t var_67 = rcx_8 u>> 4
uint8_t rcx_9 = arg2[9]
uint8_t var_68 = rcx_8 & 0xf
uint8_t var_65 = rcx_9 u>> 4
uint8_t rcx_10 = arg2[0xa]
uint8_t var_66 = rcx_9 & 0xf
uint8_t var_63 = rcx_10 u>> 4
uint8_t rcx_11 = arg2[0xb]
uint8_t var_64 = rcx_10 & 0xf
uint8_t var_61 = rcx_11 u>> 4
uint8_t rcx_12 = arg2[0xc]
uint8_t var_62 = rcx_11 & 0xf
uint8_t var_5f = rcx_12 u>> 4
uint8_t rcx_13 = arg2[0xd]
uint8_t var_60 = rcx_12 & 0xf
uint8_t var_5d = rcx_13 u>> 4
uint8_t rcx_14 = arg2[0xe]
uint8_t var_5e = rcx_13 & 0xf
uint8_t var_5b = rcx_14 u>> 4
uint8_t rcx_15 = arg2[0xf]
uint8_t var_5c = rcx_14 & 0xf
uint8_t var_59 = rcx_15 u>> 4
uint8_t rcx_16 = arg2[0x10]
uint8_t var_5a = rcx_15 & 0xf
uint8_t var_57 = rcx_16 u>> 4
uint8_t rcx_17 = arg2[0x11]
uint8_t var_58 = rcx_16 & 0xf
uint8_t var_55 = rcx_17 u>> 4
uint8_t rcx_18 = arg2[0x12]
uint8_t var_56 = rcx_17 & 0xf
uint8_t var_53 = rcx_18 u>> 4
uint8_t rcx_19 = arg2[0x13]
uint8_t var_54 = rcx_18 & 0xf
uint8_t var_51 = rcx_19 u>> 4
uint8_t rcx_20 = arg2[0x14]
uint8_t var_52 = rcx_19 & 0xf
uint8_t var_4f = rcx_20 u>> 4
uint8_t rcx_21 = arg2[0x15]
uint8_t var_50 = rcx_20 & 0xf
uint8_t var_4d = rcx_21 u>> 4
uint8_t rcx_22 = arg2[0x16]
uint8_t var_4e = rcx_21 & 0xf
uint8_t var_4b = rcx_22 u>> 4
uint8_t rcx_23 = arg2[0x17]
uint8_t var_4c = rcx_22 & 0xf
uint8_t var_49 = rcx_23 u>> 4
uint8_t rcx_24 = arg2[0x18]
uint8_t var_4a = rcx_23 & 0xf
uint8_t var_47 = rcx_24 u>> 4
uint8_t rcx_25 = arg2[0x19]
uint8_t var_48 = rcx_24 & 0xf
uint8_t var_45 = rcx_25 u>> 4
uint8_t rcx_26 = arg2[0x1a]
uint8_t var_46 = rcx_25 & 0xf
uint8_t var_44 = rcx_26 & 0xf
uint8_t var_43 = rcx_26 u>> 4
uint8_t rcx_27 = arg2[0x1b]
uint8_t var_41 = rcx_27 u>> 4
uint8_t rcx_28 = arg2[0x1c]
uint8_t var_42 = rcx_27 & 0xf
uint8_t var_3f = rcx_28 u>> 4
uint8_t rcx_29 = arg2[0x1d]
uint8_t var_40 = rcx_28 & 0xf
uint8_t var_3d = rcx_29 u>> 4
uint8_t rcx_30 = arg2[0x1e]
uint8_t var_3e = rcx_29 & 0xf
uint8_t var_3b = rcx_30 u>> 4
uint8_t rcx_31 = arg2[0x1f]
arg2.b = 0
uint8_t var_3c = rcx_30 & 0xf
int32_t i_2 = 0
uint8_t var_3a = rcx_31 & 0xf

for (int64_t i = 0; i s< 0x3f; i += 0x15)
    arg2.b += (&var_78)[i]
    char rcx_32 = (&arg2[8]).b s>> 4
    arg2.b -= rcx_32 << 4
    (&var_78)[i] = arg2.b
    char rdx = (&var_77)[i] + rcx_32
    char rcx_33 = (rdx + 8) s>> 4
    (&var_77)[i] = rdx - (rcx_33 << 4)
    char rdx_1 = (&var_76)[i] + rcx_33
    char r8_1 = (rdx_1 + 8) s>> 4
    char rax_36 = r8_1
    r8_1 += (&var_75)[i]
    (&var_76)[i] = rdx_1 - (rax_36 << 4)
    char rcx_34 = (r8_1 + 8) s>> 4
    char rdx_2 = (&var_74)[i] + rcx_34
    (&var_75)[i] = r8_1 - (rcx_34 << 4)
    char r8_2 = (rdx_2 + 8) s>> 4
    char rax_38 = r8_2
    r8_2 += (&var_73)[i]
    (&var_74)[i] = rdx_2 - (rax_38 << 4)
    char rcx_35 = (r8_2 + 8) s>> 4
    char rdx_3 = (&var_72)[i] + rcx_35
    (&var_73)[i] = r8_2 - (rcx_35 << 4)
    char r8_3 = (rdx_3 + 8) s>> 4
    char rax_40 = r8_3
    r8_3 += (&var_71)[i]
    (&var_72)[i] = rdx_3 - (rax_40 << 4)
    char rcx_36 = (r8_3 + 8) s>> 4
    char rdx_4 = (&var_70)[i] + rcx_36
    (&var_71)[i] = r8_3 - (rcx_36 << 4)
    char r8_4 = (rdx_4 + 8) s>> 4
    char rax_42 = r8_4
    r8_4 += (&var_6f)[i]
    (&var_70)[i] = rdx_4 - (rax_42 << 4)
    char rcx_37 = (r8_4 + 8) s>> 4
    char rdx_5 = (&var_6e)[i] + rcx_37
    (&var_6f)[i] = r8_4 - (rcx_37 << 4)
    char r8_5 = (rdx_5 + 8) s>> 4
    char rax_44 = r8_5 << 4
    r8_5 += (&var_6d)[i]
    (&var_6e)[i] = rdx_5 - rax_44
    char rcx_38 = (r8_5 + 8) s>> 4
    char rdx_6 = (&var_6c)[i] + rcx_38
    (&var_6d)[i] = r8_5 - (rcx_38 << 4)
    char r8_6 = (rdx_6 + 8) s>> 4
    char rax_46 = r8_6
    r8_6 += (&var_6b)[i]
    (&var_6c)[i] = rdx_6 - (rax_46 << 4)
    char rcx_39 = (r8_6 + 8) s>> 4
    char rdx_7 = (&var_6a)[i] + rcx_39
    (&var_6b)[i] = r8_6 - (rcx_39 << 4)
    char r8_7 = (rdx_7 + 8) s>> 4
    char rax_48 = r8_7
    r8_7 += (&var_69)[i]
    (&var_6a)[i] = rdx_7 - (rax_48 << 4)
    char rcx_40 = (r8_7 + 8) s>> 4
    char rdx_8 = (&var_68)[i] + rcx_40
    (&var_69)[i] = r8_7 - (rcx_40 << 4)
    char r8_8 = (rdx_8 + 8) s>> 4
    char rax_50 = r8_8
    r8_8 += (&var_67)[i]
    (&var_68)[i] = rdx_8 - (rax_50 << 4)
    char rcx_41 = (r8_8 + 8) s>> 4
    char rdx_9 = (&var_66)[i] + rcx_41
    (&var_67)[i] = r8_8 - (rcx_41 << 4)
    char rcx_42 = (rdx_9 + 8) s>> 4
    (&var_65)[i] += rcx_42
    char rcx_43 = ((&var_65)[i] + 8) s>> 4
    (&var_64)[i] += rcx_43
    (&var_66)[i] = rdx_9 - (rcx_42 << 4)
    arg2.b = (&var_64)[i] + 8
    (&var_65)[i] -= rcx_43 << 4
    arg2.b s>>= 4
    (&var_64)[i] -= arg2.b << 4

char var_39_1 = (rcx_31 u>> 4) + arg2.b
uint8_t* r13 = &var_77
int32_t i_1 = 1
__builtin_memset(arg1, 0, 0x50)
arg1[0xa] = 1
__builtin_memset(&arg1[0x14], 0, 0x28)
arg1[0x14] = 1
__builtin_memset(&arg1[0x1e], 0, 0x28)
void var_218
void var_1f0
void var_1c8
void var_1a0
void var_f8

do
    sub_142948900(&var_f8, i_1 u>> 1, *r13)
    sub_142945520(&var_218, arg1, &var_f8)
    sub_142942bd0(arg1, &var_218, &var_1a0)
    sub_142942bd0(&arg1[0xa], &var_1f0, &var_1c8)
    sub_142942bd0(&arg1[0x14], &var_1c8, &var_1a0)
    sub_142942bd0(&arg1[0x1e], &var_218, &var_1f0)
    i_1 += 2
    r13 = &r13[2]
while (i_1 s< 0x40)

void var_178
memmove(&var_178, arg1, 0x28)
void var_150
memmove(&var_150, &arg1[0xa], 0x28)
void var_128
memmove(&var_128, &arg1[0x14], 0x28)
sub_142945b10(&var_218, &var_178)
sub_142942bd0(&var_178, &var_218, &var_1a0)
sub_142942bd0(&var_150, &var_1f0, &var_1c8)
sub_142942bd0(&var_128, &var_1c8, &var_1a0)
sub_142945b10(&var_218, &var_178)
sub_142942bd0(&var_178, &var_218, &var_1a0)
sub_142942bd0(&var_150, &var_1f0, &var_1c8)
sub_142942bd0(&var_128, &var_1c8, &var_1a0)
sub_142945b10(&var_218, &var_178)
sub_142942bd0(&var_178, &var_218, &var_1a0)
sub_142942bd0(&var_150, &var_1f0, &var_1c8)
sub_142942bd0(&var_128, &var_1c8, &var_1a0)
sub_142945b10(&var_218, &var_178)
sub_142942bd0(arg1, &var_218, &var_1a0)
sub_142942bd0(&arg1[0xa], &var_1f0, &var_1c8)
sub_142942bd0(&arg1[0x14], &var_1c8, &var_1a0)
sub_142942bd0(&arg1[0x1e], &var_218, &var_1f0)
char* rdi = &var_78

do
    sub_142948900(&var_f8, i_2 u>> 1, *rdi)
    sub_142945520(&var_218, arg1, &var_f8)
    sub_142942bd0(arg1, &var_218, &var_1a0)
    sub_142942bd0(&arg1[0xa], &var_1f0, &var_1c8)
    sub_142942bd0(&arg1[0x14], &var_1c8, &var_1a0)
    sub_142942bd0(&arg1[0x1e], &var_218, &var_1f0)
    i_2 += 2
    rdi = &rdi[2]
while (i_2 s< 0x40)

int64_t result = sub_1428b8960(&var_78, 0x40)
__security_check_cookie(rax_1 ^ &var_238)
return result
