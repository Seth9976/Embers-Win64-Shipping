// 函数: sub_140855480
// 地址: 0x140855480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_14087dc80()
void* rcx = rax[0x23]

if (rcx == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rcx = rax[0x23]

sub_140854eb0(rcx)
int32_t* i = data_143ce43c0
int64_t result = sx.q(data_143ce43c8)

for (void* rdi = &i[result * 2]; i != rdi; i = &i[2])
    result = sub_140d3c6e0(i)
    
    if (result != 0)
        result = sub_140854eb0(sub_140d3c6e0(i))

return result
