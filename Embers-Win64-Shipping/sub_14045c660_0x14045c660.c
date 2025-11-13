// 函数: sub_14045c660
// 地址: 0x14045c660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143e20d30, 6)
int32_t rax = data_143e20d38 + 6
bool cond:0 = rax s<= data_143e20d3c
data_143e20d38 = rax

if (not(cond:0))
    sub_140594770(&data_143e20d30)

int64_t* rdx_1 = data_143e20d30
*rdx_1 = 0x740061006c0053
rdx_1[1].d = 0x65
rdx_1.b = 1
data_143e20d28 = sub_140b44ed0(&data_143e20d30, rdx_1.b, 0)
return atexit(sub_142cca390) __tailcall
