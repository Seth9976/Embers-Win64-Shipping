// 函数: sub_142c528c0
// 地址: 0x142c528c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_14401af50 != 0)
    return &data_14401af60

int64_t rax_1 = -1
__builtin_strncpy(&data_14401af60, "libcurl/7.55.1-DEV", 0x13)

do
    rax_1 += 1
while (*(&data_14401af60 + rax_1) != 0)

void* rsi = rax_1 + &data_14401af60
int64_t rdi = 0xc8 - rax_1
int512_t entry_zmm2

if (rdi u> 1)
    int64_t rax_2
    rax_2, entry_zmm2 = j_sub_142c72290(rsi + 1, rdi - 1, entry_zmm2)
    
    if (rax_2 != 0)
        *rsi = 0x20
        rdi -= rax_2 + 1
        rsi += rax_2 + 1

int32_t rax_4
int64_t r9
int512_t zmm2
rax_4, r9, zmm2 = sub_142c564b0(rsi, rdi, " zlib/%s", "1.2.8", entry_zmm2)
int64_t rcx_3 = sx.q(rax_4)
sub_142c564b0(rcx_3 + rsi, rdi - rcx_3, " WinIDN", r9, zmm2)
data_14401af50 = 1
return &data_14401af60
