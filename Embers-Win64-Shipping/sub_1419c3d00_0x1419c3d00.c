// 函数: sub_1419c3d00
// 地址: 0x1419c3d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14300e498
void* rcx = arg1[0xd]

if (rcx != 0)
    *(rcx + 8) = arg1[0xe]

int64_t* rcx_1 = arg1[0xe]

if (rcx_1 != 0)
    *rcx_1 = arg1[0xd]

arg1[0xd] = 0
arg1[0xe] = 0
sub_1419cfef0()
sub_1419d6840(&data_1439c9740, &arg1[4])

if ((arg1[5].b & 1) != 0)
    sub_1419cf300()
    int32_t r9_1 = 0
    int32_t i_2 = data_143f21a88
    int32_t i = i_2
    int64_t r11_1 = data_143f21a80
    
    if (i_2 s> 0)
        do
            int32_t rcx_3 = i & 0x80000001
            
            if (rcx_3 s< 0)
                rcx_3 = ((rcx_3 - 1) | 0xfffffffe) + 1
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(i)
            int32_t i_1 = (temp2_1 - temp1_1) s>> 1
            i = i_1
            int32_t rax_6 = i_1 + r9_1
            
            if (*(*(r11_1 + (sx.q(rax_6) << 3)) + 0x20) u< arg1[4])
                r9_1 = rax_6 + rcx_3
        while (i s> 0)
    
    if (r9_1 s>= i_2 || arg1[4] u< *(*(r11_1 + (sx.q(r9_1) << 3)) + 0x20))
        r9_1 = -1
    
    int32_t rax_11 = i_2 - r9_1
    
    if (rax_11 != 1)
        memmove(r11_1 + (sx.q(r9_1) << 3), r11_1 + (sx.q(r9_1 + 1) << 3), (rax_11 - 1) << 3)
        i_2 = data_143f21a88
    
    data_143f21a88 = i_2 - 1
    sub_1405c53d0(&data_143f21a80)

data_143f1d980 -= 1
arg1[0x19].d = 0
int64_t rcx_9 = arg1[0x18]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t result = sub_1407ece30(&arg1[0x10], 0)
int64_t rcx_11 = arg1[0x14]

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x10]

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12) __tailcall
