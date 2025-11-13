// 函数: sub_140916fa0
// 地址: 0x140916fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t* rdi = arg1[1]
arg2[1] = 0
arg2[2] = 0
*arg2 = &data_142e1f860
sub_140596d10(&arg2[3], rbx + 0x18)
arg2[5] = *(rbx + 0x28)
*arg2 = &data_142e1f860
arg2[6] = 0
int32_t i_1 = rdi[1].d
void* rdi_1 = *rdi
arg2[7].d = i_1

if (i_1 != 0)
    sub_140808f70(&arg2[6], i_1, 0)
    void* rbx_1 = arg2[6]
    int32_t i
    
    do
        sub_140596d10(rbx_1, rdi_1)
        int64_t rax_1 = *(rdi_1 + 0x10)
        rdi_1 += 0x18
        *(rbx_1 + 0x10) = rax_1
        rbx_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg2 + 0x3c) = 0

return arg2
