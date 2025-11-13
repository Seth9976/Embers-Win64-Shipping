// 函数: sub_142a575b0
// 地址: 0x142a575b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const (** i)[0x6] = &data_143cc83e0
int32_t rdi = 0

do
    int32_t rax = sub_142a862b0(arg1, *i, rax)
    
    if (rax == 0)
        return zx.q(rdi + 0x1000)
    
    rdi += 1
    i = &i[1]
while (i s< &data_143cc8408)

return 0xffffffff
