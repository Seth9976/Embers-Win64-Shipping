// 函数: sub_140861190
// 地址: 0x140861190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x28)

if (rcx != 0 && arg2 == 0)
    sub_14083ffd0(rcx + 0x418, arg1 + 0x150)

void* rdx_1 = *(arg1 + 0x18)

if (rdx_1 != 0 && ((*(rdx_1 + 0xd68) u>> 3).b & 1) != 0)
    void* rcx_2 = *(arg1 + 0x28)
    
    if (rcx_2 != 0)
        sub_14083ffd0(rcx_2 + 0x418, rdx_1 + 0x478)
        sub_14083ffd0(*(arg1 + 0x28) + 0x418, *(arg1 + 0x18) + 0x7e0)

int32_t rax_3 = *(arg1 + 0x6b8)
int32_t rcx_6

if (arg2 != 0)
    rcx_6 = 0x400

if (arg2 == 0 || (0x400 & rax_3) == 0)
    rcx_6 = 0

int32_t result = (rax_3 & 0xfffffbff) | rcx_6
*(arg1 + 0x6b8) = result
int64_t* i = *(arg1 + 0xa0)

for (void* rbp_2 = &i[sx.q(*(arg1 + 0xa8)) * 2]; i != rbp_2; i = &i[2])
    int64_t* rbx_1 = i[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result = sub_14080f4d0(*i, arg2)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        rbx_1[1].d -= 1
        
        if (result == 1)
            (**rbx_1)(rbx_1)
            result = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

return result
