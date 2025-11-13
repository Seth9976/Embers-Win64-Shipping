// 函数: sub_14216bec0
// 地址: 0x14216bec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void var_148
int64_t rbx = *sub_140b58260(&var_148, u"AssetRegistry", 1)
j_sub_140b3db50()
int64_t* rax_3 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t rdx_1 = *rax_3
int64_t* rax_4 = (*(rdx_1 + 0x48))(rax_3, rdx_1)
void* rbx_1 = *(arg1 + 0x28)
int32_t i = 0
int64_t var_138
__builtin_memset(&var_138, 0, 0x6c)
int32_t var_cc = 0x80
int32_t var_c8 = 0xffffffff
int32_t var_c4 = 0
int64_t var_b8 = 0
int32_t var_b0 = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int16_t var_58 = 0
char var_56 = 0

if (rbx_1 != 0)
    int64_t rbx_2 = *(rbx_1 + 0x18)
    int64_t var_100
    var_100.d = 1
    int64_t* var_108
    sub_1405a4d70(&var_108)
    *var_108 = rbx_2
    var_58:1.b = 1

if (arg2[1].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t rax_6 = *arg2
        int16_t* rdx_3
        
        if (*(rsi_1 + rax_6 + 8) == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *(rsi_1 + rax_6)
        
        int64_t* rax_7 = sub_140b58260(&var_148, rdx_3, 1)
        int64_t var_120_1
        int64_t rbx_3 = sx.q(var_120_1.d)
        int32_t rcx_4 = (rbx_3 + 1).d
        var_120_1.d = rcx_4
        int64_t var_128
        
        if (rcx_4 s> var_120_1:4.d)
            sub_1405a4d70(&var_128)
        
        i += 1
        rsi_1 = &rsi_1[2]
        *(var_128 + (rbx_3 << 3)) = *rax_7
    while (i s< arg2[1].d)

var_58.b = *(arg1 + 0x71)
char var_56_1 = *(arg1 + 0x70)
sub_142165cf0(arg1 + 0x60, 0)
(*(*rax_4 + 0x40))(rax_4, &var_138, arg1 + 0x60)
int32_t rbx_4 = *(arg1 + 0x68)
sub_141c941c0(&var_138)
__security_check_cookie(rax_1 ^ &var_168)
return zx.q(rbx_4)
