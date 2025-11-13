// 函数: sub_141a97580
// 地址: 0x141a97580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DBIQueryItsmForTi(arg1)
arg1[0xe].d = 0

if (*(arg1 + 0x74) s<= 0xffffffff)
    sub_1405dadb0(&arg1[0xd], 0)

int32_t result

if (sub_140d3e110(&arg1[7]) == 0)
    result = *(arg1 + 0x54)
    arg1[0xa].d = 0
    
    if (result s< 0 && result != 0)
        return sub_14083ad30(&arg1[9], 0)
else
    void* rax_1 = sub_140d3c6e0(&arg1[7])
    int32_t* i_1
    sub_141e433e0(rax_1, &i_1)
    void* rsi_1 = *arg2
    int64_t rbx_1 = sx.q(arg1[0xe].d)
    int64_t rbp_1 = sx.q(*(rsi_1 + 0x4a8))
    int32_t rcx_4 = (rbx_1 + rbp_1).d
    arg1[0xe].d = rcx_4
    
    if (rcx_4 s> *(arg1 + 0x74))
        sub_1406105e0(&arg1[0xd])
    
    memset(arg1[0xd] + (rbx_1 << 2), 0, rbp_1 << 2)
    int32_t var_20
    
    for (int32_t* i = i_1; i != &i[sx.q(var_20) * 2]; i = &i[2])
        int32_t rax_4 = sub_141ea40e0(rsi_1 + 0x4a0, i)
        int16_t* r9_1 = *(rsi_1 + 0x4a0)
        int16_t* rdx_3 = r9_1
        void* r8_3 = &r9_1[sx.q(*(rsi_1 + 0x4a8))]
        
        if (r9_1 != r8_3)
            do
                if (zx.d(*rdx_3) == rax_4)
                    int32_t rdx_5 = ((rdx_3 - r9_1) s>> 1).d
                    
                    if (rdx_5 != 0xffffffff)
                        *(arg1[0xd] + (sx.q(rdx_5) << 2)) = 0x3f800000
                    
                    break
                
                rdx_3 = &rdx_3[1]
            while (rdx_3 != r8_3)
    
    result = (*(*arg1 + 0x118))(arg1, rsi_1 + 0x4a0, rax_1)
    int32_t* i_2 = i_1
    
    if (i_2 != 0)
        return sub_140a74f90(i_2)

return result
