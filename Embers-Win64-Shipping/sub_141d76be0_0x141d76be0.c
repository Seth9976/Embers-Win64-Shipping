// 函数: sub_141d76be0
// 地址: 0x141d76be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
label_141d76c6c:
    int32_t rax
    rax.b = 1
    return rax

int64_t* i = *(arg1 + 0x70)

for (void* rdi_1 = &i[sx.q(*(arg1 + 0x78))]; i != rdi_1; i = &i[1])
    void* rax_2 = *i
    int16_t* const rcx
    
    if (*(rax_2 + 0x20) == 0)
        rcx = &data_142d40450
    else
        rcx = *(rax_2 + 0x18)
    
    if (sub_140a54510(rcx, arg2) == 0)
        goto label_141d76c6c

sub_140a464c0()
char const (* r8)[0x4] = data_14399ea08
int64_t rax_3
rax_3.b = (*(r8 + 0x108))(&data_14399ea08, arg2, r8) == -1
return rax_3
