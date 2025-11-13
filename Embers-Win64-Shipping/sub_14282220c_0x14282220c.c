// 函数: sub_14282220c
// 地址: 0x14282220c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 2
uint32_t rdi = arg2
wchar16 arg_10
void* const rdx_2

while (true)
    sub_14281f460(arg1, U"\", 1)
    
    if (rdi s< 0xff && arg3 != 2)
        rdx_2 = &data_142d77788
        break
    
    if (rdi s< 0xffff)
        rbx = 4
        rdx_2 = &data_142d94aa0
        break
    
    if (arg3 != 2)
        rbx = 8
        rdx_2 = &data_142d93ef0
        break
    
    sub_14281ff30(&arg_10, rdi)
    sub_14282220c(arg1, zx.q(arg_10), 2)
    rdi = zx.d(arg4)

sub_14281f460(arg1, rdx_2, 1)
int64_t rdi_2 = zx.q((rbx << 2).d) - 4
class std::wostream* result

do
    uint64_t rax_3
    rax_3.b = *((zx.q((sx.q(rdi) s>> rdi_2.b).d) & 0xf) + "0123456789abcdef")
    arg_10.b = rax_3.b
    result = sub_14281f460(arg1, &arg_10, 1)
    rbx = zx.q(rbx.d - 1)
    rdi_2 -= 4
while (rbx.d s> 0)

return result
