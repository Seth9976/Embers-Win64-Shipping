// 函数: sub_142b34330
// 地址: 0x142b34330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = -1
int64_t rdi_1 = 0
void** const rax_1 = &data_14366c070

do
    int16_t rax_3 = *(arg1 + 0x18)
    int32_t r9_2
    
    if (rax_3 s< 0)
        r9_2 = *(arg1 + 0x1c)
    else
        r9_2 = sx.d(rax_3) s>> 5
    
    int32_t rax_4 = sub_142a491f0(arg1 + 0x10, **rax_1, 0, r9_2)
    
    if (rax_4 != 0xffffffff && (rbx == 0xffffffff || rax_4 s< rbx))
        rbx = rax_4
    
    rdi_1 += 1
    rax_1 = &(&data_14366c070)[rdi_1]
while ((&data_14366c070)[rdi_1] != 0)

return zx.q(rbx)
