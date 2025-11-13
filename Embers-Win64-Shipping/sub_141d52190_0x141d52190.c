// 函数: sub_141d52190
// 地址: 0x141d52190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143227ed0
arg1[1] = *(arg2 + 8)
arg1[2].d = *arg2
sub_140d3a3a0(arg1 + 0x14, *(arg2 + 0x10))
sub_140d3a3a0(arg1 + 0x1c, arg3)
int64_t arg_30
int64_t rax_2 = arg_30
*(arg1 + 0x24) = 0x41200000
arg1[5] = rax_2
arg1[6].d = 0
*(arg1 + 0x38) = *arg5
*(arg1 + 0x48) = arg5[1]
*(arg1 + 0x58) = arg5[2]
arg1[0xd] = 0
arg1[0xe] = 0
void*** result

if (arg4 == 0)
    result = arg1
    arg1[6].b = 1
else
    int64_t var_28
    int64_t* rax_4 = (*(*arg4 + 0x260))(arg4, &var_28)
    
    if (&arg1[0xd] != rax_4)
        int64_t rcx_3 = arg1[0xd]
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        arg1[0xd] = *rax_4
        *rax_4 = 0
        arg1[0xe].d = rax_4[1].d
        *(arg1 + 0x74) = *(rax_4 + 0xc)
        rax_4[1] = 0
    
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t* rax_7 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_7 != 0)
        rax_7[1] = arg1
        *rax_7 = &data_142d3fe58
        rax_7[2] = sub_141d58f30
        rax_7[4] = sub_140a387b0()
        *rax_7 = &data_142d3feb0
    
    if (rax_7 != 0)
        sub_140599630(arg3 + 0xf8, 1)
        (*(*rax_7 + 0x30))(rax_7, &arg_30)
        int64_t rbp_1 = sx.q(*(arg3 + 0x100))
        int32_t rax_10 = (rbp_1 + 1).d
        *(arg3 + 0x100) = rax_10
        
        if (rax_10 s> *(arg3 + 0x104))
            sub_1405a4f90(arg3 + 0xf8)
        
        void** rax_13 = (rbp_1 << 4) + *(arg3 + 0xf8)
        *rax_13 = rax_7
        rax_13[1].d = 3
    
    result = arg1
    
    if (sub_141d5a150(arg3, arg4, arg5) == 0)
        arg1[6].b = 1

return result
