// 函数: sub_1418e5fb0
// 地址: 0x1418e5fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* arg_10 = arg2

if (arg3 == 0)
    return 

sub_1418eae00(arg1, 0, &arg_10, 1)
int64_t* rbx_1 = arg_10
void* rax_2 = (*(*rbx_1 + 8))(rbx_1)
int64_t rdx = *rbx_1
void* rax_3 = (*(rdx + 0x10))(rbx_1, rdx)
int64_t rdx_1 = *rbx_1
void* rax_4 = (*(rdx_1 + 0x18))(rbx_1, rdx_1)
int64_t rdx_2 = *rbx_1
int64_t* rax_5 = (*(rdx_2 + 0x20))(rbx_1, rdx_2)
int64_t rdx_3 = *arg3
arg_10 = rax_5
void* rax_6 = (*(rdx_3 + 8))(arg3, rdx_3)
int64_t rdx_4 = *arg3
void* rax_7 = (*(rdx_4 + 0x10))(arg3, rdx_4)
int64_t rdx_5 = *arg3
void* rax_8 = (*(rdx_5 + 0x18))(arg3, rdx_5)
int64_t rdx_6 = *arg3
void* const* rax = (*(rdx_6 + 0x20))(arg3, rdx_6)
void* r12_2 = *(arg1 + 0x240)

if (*(r12_2 + 0x78) != 0)
    sub_1418c86c0(r12_2, 0, 0)

void* rax_9
void* r9

if (rax_2 == 0 || rax_6 == 0)
    int64_t* rcx_9 = arg_10
    
    if (rcx_9 == 0 || rax == 0)
        if (rax_2 == 0 || rax == 0)
            if (rax_4 == 0 || rax_8 == 0)
                if (rax_3 != 0 && rax_7 != 0 && *(rax_3 + 0x88) != *(rax_7 + 0x88))
                    sub_1418d7520(&arg_10, arg1 + 0x248, *(r12_2 + 0x70), rax_3 + 0x78, 
                        rax_7 + 0x78, *(rax_7 + 0x68), *(rax_3 + 0x68), arg4)
            else if (*(rax_4 + 0x88) != *(rax_8 + 0x88))
                rax_9 = rax_8 + 0x78
                r9 = rax_4 + 0x78
                goto label_1418e60bb
        else if (*(rax_2 + 0x80) != rax[0x10])
            sub_1418d7520(&arg_10, arg1 + 0x248, *(r12_2 + 0x70), rax_2 + 0x70, &rax[0xe], 1, 6, 
                arg4)
    else if (rcx_9[0x10] != rax[0x10])
        sub_1418d7520(&arg_10, arg1 + 0x248, *(r12_2 + 0x70), &rcx_9[0xe], &rax[0xe], 6, 6, arg4)
else if (*(rax_2 + 0x80) != *(rax_6 + 0x80))
    rax_9 = rax_6 + 0x70
    r9 = rax_2 + 0x70
label_1418e60bb:
    sub_1418d7520(&arg_10, arg1 + 0x248, *(r12_2 + 0x70), r9, rax_9, 1, 1, arg4)
