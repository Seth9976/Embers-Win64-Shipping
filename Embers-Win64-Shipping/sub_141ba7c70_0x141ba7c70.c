// 函数: sub_141ba7c70
// 地址: 0x141ba7c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void var_1b8
sub_140d921c0(&var_1b8)
char var_176 = 0
int32_t var_174
__builtin_memset(&var_174, 0, 0x24)
int16_t var_178
int16_t var_178_1 = var_178 & 0xfe00
void** var_180 = &data_142ecfd88
int64_t var_148
__builtin_memset(&var_148, 0, 0x20)
int16_t var_124 = 0
int64_t var_120 = 0
int16_t var_118 = 0
char var_116 = 0
int64_t* var_150 = &data_143e20e70
int32_t var_128 = 0x3f800000
void var_110
sub_141b7b0e0(&var_110, 0)
sub_140d96150(&var_1b8, arg3)
int64_t* r14 = *(arg4 + 0x30)
int16_t var_178_2 = *(arg4 + 8)
char var_176_1 = *(arg4 + 0xa)
int32_t var_174_1 = *(arg4 + 0xc)
int128_t var_168 = *(arg4 + 0x18)
int64_t var_170 = *(arg4 + 0x10)
int64_t var_158
var_158.d = (*(arg4 + 0x28)).d
var_158:4.d = *(arg4 + 0x2c)

if (var_150 != r14)
    void* rbx_1 = &var_150[7]
    int64_t rdi_1 = sx.q(r14[9].d)
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rdx_1 = *(rbx_1 + 8)
    void* r9 = &r14[7]
    void* rax_6 = *(r9 + 8)
    
    if (rax_6 != 0)
        r9 = rax_6
    
    if (rdx_1 != 0)
        rbx_1 = rdx_1
    
    memcpy(rbx_1, r9, (rdi_1 << 2).d)
    var_150[9].d = rdi_1.d
    sub_140e29380(var_150, r14)

sub_140627710(&var_148, arg4 + 0x38)
int32_t var_174_2 = *(arg4 + 0xc)
int64_t var_130
var_130.d = *(arg4 + 0x50)
var_130:4.d = *(arg4 + 0x54)
var_124.b = *(arg4 + 0x5c)
var_124:1.b = *(arg4 + 0x5d)
var_118.b = *(arg4 + 0x68)
var_118:1.b = *(arg4 + 0x69)
int32_t var_128_1 = *(arg4 + 0x58)
char var_116_1 = *(arg4 + 0x6a)
var_120.d = *(arg4 + 0x60)
var_120:4.d = *(arg4 + 0x64)
int64_t* rax_15 = sub_140d3c6e0(arg2)
int64_t rax_16 = sub_140d1fd30(rax_15, *(arg2 + 8))
int64_t r9_1 = *rax_15
(*(r9_1 + 0x210))(rax_15, rax_16, &var_1b8, r9_1)
sub_140596b00(arg1, &var_110)
sub_140597700(&var_110)
sub_140e29130(&var_180)
__security_check_cookie(rax_1 ^ &var_1d8)
return arg1
