// 函数: sub_142c2af20
// 地址: 0x142c2af20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rax
void** rax_1

if (arg2 == 0x47504f53)
    rax_1 = sub_142c1f7b0(arg1 + 0xc8)
label_142c2af66:
    int128_t* rcx_2 = *rax_1
    rax = &data_14369a5d0
    int128_t* const rdx = &data_14369a5d0
    
    if (rcx_2 != 0)
        rdx = rcx_2
    
    if (*(rdx + 0x18) u>= 0xa)
        rax = rdx[1].q
else
    if (arg2 == 0x47535542)
        rax_1 = sub_142c1f860(arg1 + 0xc0)
        goto label_142c2af66
    
    rax = &data_14369a5d0
void* rax_2 = sub_142c1f570(rax, arg3)
int32_t rbx_1 = 0

if (arg4 != 0)
    int32_t* rdi_1 = arg5
    
    do
        if (sub_142c1dd70(rax_2 + 2, *rdi_1, arg6) != 0)
            return 1
        
        rbx_1 += 1
        rdi_1 = &rdi_1[1]
    while (rbx_1 u< arg4)

if (sub_142c1dd70(rax_2 + 2, 0x64666c74, arg6) == 0 && arg6 != 0)
    *arg6 = 0xffff

return 0
