// 函数: sub_14048f0f0
// 地址: 0x14048f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405dadb0(&data_143e8eb10, 1)
int32_t rax = data_143e8eb18 + 1
bool cond:0 = rax s<= data_143e8eb1c
data_143e8eb18 = rax

if (not(cond:0))
    sub_1405a4cf0(&data_143e8eb10)

int32_t rcx = data_143e8eb2c

if (rcx s< 1)
    sub_1405dadb0(&data_143e8eb20, 1)
    rcx = data_143e8eb2c

int64_t rbx = sx.q(data_143e8eb28)
int32_t rax_1 = (rbx + 1).d
data_143e8eb28 = rax_1

if (rax_1 s> rcx)
    sub_1405a4cf0(&data_143e8eb20)

*(data_143e8eb20 + (rbx << 2)) = 0x80000000
return atexit(sub_142cd8b10) __tailcall
