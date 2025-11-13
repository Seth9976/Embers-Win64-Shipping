// 函数: sub_1408553f0
// 地址: 0x1408553f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_14087a650()
void* rcx = rax[0x23]

if (rcx == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rcx = rax[0x23]

sub_140854a50(rcx)
int32_t* i = data_143ce4330
int64_t result = sx.q(data_143ce4338)

for (void* rdi = &i[result * 2]; i != rdi; i = &i[2])
    result = sub_140d3c6e0(i)
    
    if (result != 0)
        result = sub_140854a50(sub_140d3c6e0(i))

return result
