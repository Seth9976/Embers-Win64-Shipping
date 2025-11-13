// 函数: sub_140d315a0
// 地址: 0x140d315a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d21a40()
int32_t arg_18
sub_1405ba560(&data_143e1d840, &arg_18, arg1)
int64_t rdx_1 = sx.q(arg_18)
void* const r8_3

if (rdx_1.d == 0xffffffff)
    r8_3 = nullptr
else
    r8_3 = (rdx_1 << 5) + data_143e1d840

int64_t* rbx = r8_3 + 8

if (r8_3 == 0)
    rbx = nullptr

if (rbx == 0)
    return 0

int64_t rdi_1 = rbx[1]
int64_t rbx_1 = *rbx
sub_1405c3040(&data_143e1d840, arg1)
return (*(*arg1 + 0x10))(arg1, sub_140bdf2e0(), rdi_1, rbx_1)
