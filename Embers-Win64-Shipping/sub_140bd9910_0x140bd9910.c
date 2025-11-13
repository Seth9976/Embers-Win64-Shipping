// 函数: sub_140bd9910
// 地址: 0x140bd9910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x5c)
uint64_t j_2 = zx.q(arg4)
int32_t r13_2 = (r10 - 1 + *(arg1 + 0x58)) & neg.d(r10)
char result

if ((*(arg1 + 0xb0) & 0x1000) != 0)
    int64_t* rcx = *(arg1 + 0xb8)
    result = (*(*rcx + 0xa8))(rcx, arg5, arg6, zx.q(j_2.d))

if ((*(arg1 + 0xb0) & 0x1000) == 0 || result == 0)
    if ((*(arg1 + 0xb0) & 0x2000) != 0)
        return memcpy(arg2, arg3, r13_2 * j_2.d) __tailcall
    
    int64_t* i_1 = *(arg1 + 0x50)
    void* var_48 = arg1
    int32_t var_38_1 = 0xffffffff
    int16_t var_34_1 = 0x101
    char var_32_1 = 0
    result = sub_1406328d0(&var_48)
    int64_t* i_2
    
    for (int64_t* i = i_1; i != 0; i = i_2)
        if (j_2.d s> 0)
            int64_t rbx_1 = 0
            uint64_t j_1 = j_2
            uint64_t j
            
            do
                int64_t rcx_5 = sx.q(*(i + 0x4c)) + rbx_1
                int64_t rdx_2 = rcx_5 + arg3
                int64_t r10_3 = rcx_5 + arg2
                
                if (r10_3 != rdx_2)
                    if (not(test_bit(zx.q(i[8].d), 0x1e)))
                        (*(*i + 0xb0))(i, r10_3, rdx_2, zx.q(i[7].d))
                    else
                        memcpy(r10_3, rdx_2, *(i + 0x3c) * i[7].d)
                
                rbx_1 += sx.q(r13_2)
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i_2 = i[4]
        result = sub_1406328d0(&var_48)

return result
