// 函数: sub_141c95570
// 地址: 0x141c95570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[5].b & 2) == 0
char arg_8 = 0
int64_t arg_18

if (not(cond:0))
    bool cond:1_1 = sub_140b5b8a0(*arg2, 0) == 0
    char rbx_1 = 0
    bool cond:2_1 = *(arg2 + 8) != 0
    char rcx_1 = 0
    arg_18 = 0
    
    if (cond:2_1)
        rcx_1 = 2
    
    arg_8 |= rcx_1 | arg2[1] != 0 | cond:1_1
    char rcx_4 = 0
    
    if (sub_140b5b8a0(arg2[4], 0) == 0)
        rcx_4 = 4
    
    int32_t rcx_5 = arg2[6]
    arg_8 |= (sbb.b(&data_143e155c0, &data_143e155c0, arg2[5] != 0) & 4) | rcx_4
    
    if (sub_140b5b8a0(rcx_5, 0) == 0)
        rbx_1 = 8
    
    arg_8 |= (sbb.b(&data_143e155c0, &data_143e155c0, arg2[7] != 0) & 8) | rbx_1

int64_t* rcx_7 = arg1[1]
char* rdx_3 = *rcx_7

if (&rdx_3[1] u> rcx_7[1])
    (*(*arg1 + 0x150))(arg1, &arg_8, 1)
else
    arg_8 = *rdx_3
    *rcx_7 += 1

if ((arg_8 & 1) != 0)
    (*(*arg1 + 0x140))(arg1, arg2)

if ((arg_8 & 2) != 0)
    arg_18 = *(arg2 + 8)
    (*(*arg1 + 0x140))(arg1, &arg_18)
    
    if ((arg1[5].b & 1) != 0)
        *(arg2 + 8) = arg_18

if ((arg_8 & 4) != 0)
    (*(*arg1 + 0x140))(arg1, &arg2[4])

if ((arg_8 & 8) != 0)
    (*(*arg1 + 0x140))(arg1, &arg2[6])

return arg1
