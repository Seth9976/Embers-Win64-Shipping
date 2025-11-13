// 函数: sub_141946830
// 地址: 0x141946830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2

if (arg2 != 0)
    (*(*arg2 + 0x48))(rbx)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    int64_t* rax_3
    rax_3, arg2 = (*(*rbx + 0x48))(rbx)
    rbx = rax_3

if (*(arg1 + 0x15c00) != 0)
    void* rcx_2 = *(arg1 + 0x15c18)
    
    if (rcx_2 != 0)
        *(rcx_2 + 0x10) += 1

arg2.b = 1
void* rax_4 = sub_14190d690(arg1, arg2.b)
int32_t r9 = *(rbx + 0x14)
int32_t r8_1 = data_1439c7498 - 1
int32_t r10 = rbx[2].d
int64_t rdx = sx.q(r8_1) * 5
int64_t rcx_5 = *(rax_4 + 8)

if (*(rcx_5 + (rdx << 3) + 0x10) != r9 || *(rcx_5 + (rdx << 3) + 0x14) != r10)
    int32_t var_18_1 = 1
    sub_14190a090(arg1, rax_4, r8_1, r9, r10, 0xffffffff)
    *(rbx + 0x14)

jump(data_143f00148)
