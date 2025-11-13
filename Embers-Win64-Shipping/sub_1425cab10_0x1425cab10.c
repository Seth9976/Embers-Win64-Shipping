// 函数: sub_1425cab10
// 地址: 0x1425cab10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b214c0(arg1)
__builtin_memset(&arg1[2], 0, 0x18)
sub_1405947f0(&arg1[3], 0xc)
int32_t rax = arg1[4].d + 0xc
arg1[4].d = rax

if (rax s> *(arg1 + 0x24))
    sub_140594770(&arg1[3])

sub_1405a7220(arg1[3], 0xc, "Test String", 0xc, 0x3f)
int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 0xa)
int32_t rax_1 = var_10 + 0xa
var_10 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_18)

sub_1405a7220(var_18, 0xa, "Test Text", 0xa, 0x3f)
sub_140aae2f0(&arg1[5], &var_18)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

arg1[8].d = 0x3f800000
*(arg1 + 0x44) = 0x40000000
arg1[9].d = 0x40400000
__builtin_memcpy(&arg1[0xa], 
    "\x00\x00\x80\x40\x00\x00\xa0\x40\x00\x00\xc0\x40\x00\x00\xe0\x40\x00\x00\x80\x45\x00\x00\x00\x46\x"
"00\x00\x80\x46", 
    0x1c)
__builtin_memcpy(&arg1[0xe], 
    "\x00\x00\x80\x3f\x00\x00\x00\x40\x00\x00\x40\x40\x1f\x85\xeb\x3e\x3c\xff\x03\xff", 0x14)
return arg1
