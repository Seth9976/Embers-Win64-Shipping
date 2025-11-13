// 函数: sub_1422a2910
// 地址: 0x1422a2910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) == 0)
    return 

int32_t rax = *(arg1 + 0x34)

if (rax == 0)
    return 

int32_t rdx = arg2[1].d

if (rax s> rdx)
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_1406105e0(arg2)
else if (rax s< rdx && rax != rdx)
    arg2[1].d = rax
    sub_1405dac90(arg2)

int64_t* rcx_2 = *(arg1 + 0x18)
int64_t rdi_1 = *arg2
uint32_t count = (*(*rcx_2 + 0x20))(rcx_2) * *(arg1 + 0x34)
int64_t* rcx_3 = *(arg1 + 0x18)
memcpy(rdi_1, (*(*rcx_3 + 0x30))(rcx_3), count)
