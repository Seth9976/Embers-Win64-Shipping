// 函数: sub_142c09ea0
// 地址: 0x142c09ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d u> 0)
    do
        int64_t rbx_1 = arg1[2]
        uint64_t rdi_2 = zx.q(i) << 5
        int64_t rcx = *(rdi_2 + rbx_1 + 0x18)
        
        if (rcx != 0)
            j_sub_140a74f90(rcx)
        
        i += 1
        *(rdi_2 + rbx_1 + 0x10) = 0
        *(rdi_2 + rbx_1 + 0x18) = 0
    while (i u< arg1[1].d)

j_sub_140a74f90(arg1[2])
int128_t* rax = *arg1
int128_t* const rcx_2 = &data_14369a5d0

if (rax != 0)
    rcx_2 = rax

int64_t result = sub_142c09b70(rcx_2)
*arg1 = 0
return result
