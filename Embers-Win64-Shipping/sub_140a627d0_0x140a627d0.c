// 函数: sub_140a627d0
// 地址: 0x140a627d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405a5410(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rdi = arg1[4]

if (rdi != 0)
    int64_t* rcx_1 = data_143ddb3f0
    
    if (rcx_1 == 0)
        sub_140a750a0()
        rcx_1 = data_143ddb3f0
    
    result = (*(*rcx_1 + 0x30))(rcx_1, rdi)

uint64_t rbx_1 = *arg1

if (rbx_1 == 0)
    return result

int64_t* rcx_2 = data_143ddb3f0

if (rcx_2 == 0)
    sub_140a750a0()
    rcx_2 = data_143ddb3f0

return (*(*rcx_2 + 0x30))(rcx_2, rbx_1)
