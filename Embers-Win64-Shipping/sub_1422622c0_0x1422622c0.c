// 函数: sub_1422622c0
// 地址: 0x1422622c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg1[0x49]

if (arg2 == rdi)
    return 

int32_t rcx
rcx.b = (rdi u>> 0x20).d == 0

if ((rcx.b & sub_140b5b8a0(rdi.d, 0x142)) == 0)
    int32_t rcx_2
    rcx_2.b = *(arg1 + 0x24c) == 0
    
    if ((rcx_2.b & sub_140b5b8a0(arg1[0x49].d, 0x140)) != 0)
        (*(*arg1 + 0xad0))(arg1)
else
    (*(*arg1 + 0xd48))(arg1)

sub_141f82fb0(arg1, arg2)
int32_t rcx_5
rcx_5.b = *(arg1 + 0x24c) == 0

if ((rcx_5.b & sub_140b5b8a0(arg1[0x49].d, 0x140)) == 0)
    int32_t rcx_7
    rcx_7.b = *(arg1 + 0x24c) == 0
    
    if ((rcx_7.b & sub_140b5b8a0(arg1[0x49].d, 0x142)) != 0)
        (*(*arg1 + 0xd40))(arg1)
else
    (*(*arg1 + 0xac8))(arg1)

(*(*arg1 + 0xbd0))(arg1)
