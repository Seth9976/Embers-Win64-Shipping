// 函数: sub_1408963f0
// 地址: 0x1408963f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e90810(arg1, arg2)
*arg1 = &data_142d67b80
void* rcx = data_143cea5b8
int16_t var_24 = 0x8120
int16_t var_20 = 0x200
int64_t (* var_18)(int64_t arg1, int64_t arg2, int32_t arg3) = sub_1408964e0
int32_t var_28 = 0xac44
char var_22 = 2
sub_142832a8c(rcx, 0x3f800000)
sub_14089acd0(0x10)
int32_t rax
int64_t r9
rax, r9 = sub_14089a4d0(nullptr)

if (rax s< 0)
    sub_140af98a0("Unknown", 0x7c, u"Could not initialize audio hardware or driver", r9)
    sub_140afbb40()

data_143cea5c8 = sub_14089a920()
int32_t rax_2
int64_t r9_1
rax_2, r9_1 = sub_14089adb0(&var_28, nullptr)

if (rax_2 s< 0)
    sub_140af98a0("Unknown", 0x8e, 
        Could not open the audio hardware or the desired audio output format", r9_1)
    sub_140afbb40()

sub_14089ae20(0)
return arg1
