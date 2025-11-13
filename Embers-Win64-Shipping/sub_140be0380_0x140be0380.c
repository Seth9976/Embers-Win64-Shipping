// 函数: sub_140be0380
// 地址: 0x140be0380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg5
int64_t r12 = arg4
void*** rdi
void arg_18

if (arg16 != 0)
    void*** rax_3 = sub_140d18db0(&data_143e1d658, 0x2b0, 8, data_14399fa4c)
    rdi = rax_3
    *arg3 = rax_3
    sub_140bd6090(rdi, 0, *sub_140b58260(&arg_18, arg2, 1), arg6, arg7, arg8 | 0x40000, arg9, 
        arg10, (sbb.d(arg5.d, arg5.d, data_14399fa4c != 0) & 0x80) | 0x4000043, arg11, arg12, arg13)
    *rdi = &data_142e88748
    __builtin_memset(&rdi[0x46], 0, 0x78)
    rdi[0x55] = arg17
else
    arg4.b = 1
    void*** rax = sub_140d18db0(&data_143e1d658, 0x230, 8, arg4.b)
    *arg3 = rax
    rdi = sub_140bd6090(rax, 0, *sub_140b58260(&arg_18, arg2, 1), arg6, arg7, arg8, arg9, arg10, 
        0xc7, arg11, arg12, arg13)
*arg3 = rdi
int64_t rax_7 = arg15()
int64_t* rdi_1 = *arg3
arg14()
sub_140bcc090(arg1, arg2, 0, 1, 0, 0)
(*(*rdi_1 + 0x2c8))()
int64_t rax_9 = *rdi_1
rdi_1[0x1b] = rax_7
(*(rax_9 + 8))(rdi_1)

if (((rdi_1[1].d u>> 0x1a).b & 1) != 0)
    (*(*rdi_1 + 0x10))(rdi_1, sub_140bdf670(), arg1, arg2)
else
    sub_140d29a60(rdi_1, arg1, arg2)

sub_140bcc090(arg1, arg2, 0, 2, 0, 0)
jump(r12)
