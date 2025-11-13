// 函数: sub_140b39010
// 地址: 0x140b39010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
uint64_t rdx = zx.q(arg1[6])
uint64_t rcx = zx.q(arg1[5])
uint8_t var_18 = (rdx.d u>> 0x18).b
uint8_t var_17 = (rdx.d u>> 0x10).b
uint8_t var_16 = (rdx.d u>> 8).b
uint8_t var_14 = (rcx.d u>> 0x18).b
char var_15 = rdx.b
uint8_t var_13 = (rcx.d u>> 0x10).b
arg1[5] = ((rdx << 0x20 | rcx) + 8).d
uint64_t r9_2 = zx.q(rcx.d u>> 3) & 0x3f
uint8_t var_12 = (rcx.d u>> 8).b
char var_11 = rcx.b
arg1[6] = (((rdx << 0x20 | rcx) + 8) u>> 0x20).d
int64_t rsi

if (r9_2 + 1 u<= 0x3f)
    rsi = 0
else
    rsi = 0x40 - r9_2
    memcpy(&arg1[8] + r9_2, &data_142e77ca0, rsi.d)
    sub_140b49300(arg1, arg1, &arg1[8])
    
    for (int64_t i = rsi + 0x3f; i u< 1; i += 0x40)
        sub_140b49300(arg1, arg1, &(*u"%s/%s/%s/%s/%s.ini")[0]:1 + i)
        rsi += 0x40
    
    r9_2 = 0

memcpy(&arg1[8] + r9_2, rsi + &data_142e77ca0, 1 - rsi.d)

while ((arg1[5] & 0x1f8) != 0x1c0)
    sub_140b4ad80(arg1, &data_142e77ca4, 1)

sub_140b4ad80(arg1, &var_18, 8)
arg1[0x18].b = *(arg1 + 3)
*(arg1 + 0x61) = *(arg1 + 2)
*(arg1 + 0x62) = (*arg1 u>> 8).b
*(arg1 + 0x63) = *arg1
arg1[0x19].b = *(arg1 + 7)
*(arg1 + 0x65) = *(arg1 + 6)
*(arg1 + 0x66) = (arg1[1] u>> 8).b
*(arg1 + 0x67) = arg1[1].b
arg1[0x1a].b = *(arg1 + 0xb)
*(arg1 + 0x69) = *(arg1 + 0xa)
*(arg1 + 0x6a) = (arg1[2] u>> 8).b
*(arg1 + 0x6b) = arg1[2].b
arg1[0x1b].b = *(arg1 + 0xf)
*(arg1 + 0x6d) = *(arg1 + 0xe)
*(arg1 + 0x6e) = (arg1[3] u>> 8).b
*(arg1 + 0x6f) = arg1[3].b
arg1[0x1c].b = *(arg1 + 0x13)
*(arg1 + 0x71) = *(arg1 + 0x12)
*(arg1 + 0x72) = (arg1[4] u>> 8).b
char result = arg1[4].b
*(arg1 + 0x73) = result
__security_check_cookie(rax_1 ^ &var_38)
return result
