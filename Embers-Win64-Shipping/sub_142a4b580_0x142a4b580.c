// 函数: sub_142a4b580
// 地址: 0x142a4b580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a7db20(0x13, sub_142a4b610)
int64_t* result = j_sub_142a7dd00(0x40)
int64_t* result_1 = result

if (result != 0)
    result[1].d = 0x28
    *result = result + 0xd
    *(result + 0xc) = 0
    result[7].d = 0
    *(result + 0xd) = 0

data_144015480 = result

if (result == 0)
    *arg1 = 7
    return result

char* rax = getenv("ICU_TIMEZONE_FILES_DIR")
char* rcx = &data_1434cce10

if (rax != 0)
    rcx = rax

return sub_142a4b6b0(rcx, arg1) __tailcall
