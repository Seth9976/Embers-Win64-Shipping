// 函数: sub_140d78c30
// 地址: 0x140d78c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de548e != 0 && arg1[0x20].d != 0)
    void* rbx = arg2[1]
    int64_t r15 = *arg2
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    int64_t rsi = sx.q(arg1[0x14].d)
    int32_t rax = (rsi + 1).d
    arg1[0x14].d = rax
    
    if (rax s> *(arg1 + 0xa4))
        sub_1405c4fe0(&arg1[0x13])
    
    int64_t* rcx_3 = (rsi << 6) + arg1[0x13]
    *rcx_3 = r15
    rcx_3[1] = rbx
    rcx_3[4] = arg5
    rcx_3[5] = arg6
    rcx_3[6].d = arg7
    *(rcx_3 + 0x34) = arg8
    rcx_3[7].d = arg9
    rcx_3[2] = arg3
    rcx_3[3].d = arg4
    return arg9

int64_t var_58 = *arg2
int64_t* rax_7 = arg2[1]

if (rax_7 != 0)
    *(rax_7 + 0xc) += 1

int64_t var_38 = arg5
int64_t var_30 = arg6
int32_t var_28 = arg7
int32_t var_24 = arg8
int32_t var_20 = arg9
int64_t var_48 = arg3
int32_t var_40 = arg4
uint64_t rax_13 = sub_140d81300(arg1, &var_58)

if (rax_7 != 0)
    int32_t temp0_1 = *(rax_7 + 0xc)
    *(rax_7 + 0xc) -= 1
    
    if (temp0_1 == 1)
        return (*(*rax_7 + 8))(rax_7, 1)

return rax_13
