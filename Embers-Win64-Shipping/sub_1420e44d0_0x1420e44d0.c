// 函数: sub_1420e44d0
// 地址: 0x1420e44d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xd0)
int32_t rax
uint64_t r8

if (rcx == 0)
    rax = 0
    r8 = 0
else
    rax = sub_1423c1990(rcx, 0)
    int32_t* rcx_1 = *(arg1 + 0xd0)
    
    if (rcx_1 == 0)
        r8 = 0
    else
        rcx_1[1]
        r8 = zx.q(*rcx_1)

int64_t var_18 = (&data_1439c85e0)[sx.q(rax) * 5]
sub_140a2e390(arg2, u"Lightmap: %dx%d [%s]", r8)
return arg2
