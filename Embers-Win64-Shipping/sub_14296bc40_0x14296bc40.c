// 函数: sub_14296bc40
// 地址: 0x14296bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = nullptr
void* arg_10
sub_1428daf50(&arg_10, nullptr, nullptr, arg1)
int64_t rax_2 = sub_14289b970(sub_1428a9620(sub_1428a96d0(arg_10)))
int32_t rax_3
int32_t r8

if (rax_2 != 0)
    int64_t* result_1 = sub_14289a500(&data_14354ac40)
    result = result_1
    
    if (result_1 != 0 && sub_142899cf0(result_1, 0x6f, 0, rax_2) != 0)
        return result
    
    rax_3 = 0x12c
    r8 = 0x77
else
    rax_3 = 0x127
    r8 = 0x95

sub_1428a5670(0x2e, 0x74, r8, "crypto\cms\cms_lib.c", rax_3)
sub_142899e70(result)
return 0
