// 函数: sub_1419c3b60
// 地址: 0x1419c3b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d54980
void* rcx = arg1[0x11]

if (rcx != 0)
    *(rcx + 8) = arg1[0x12]

int64_t* rcx_1 = arg1[0x12]

if (rcx_1 != 0)
    *rcx_1 = arg1[0x11]

arg1[0x11] = 0
arg1[0x12] = 0
sub_1419ce870()
sub_1419d6840(&data_1439c94a0, &arg1[5])
void* rax_3 = sub_1419cf430(arg1[1].d)
int32_t r9 = 0
int32_t i_2 = *(rax_3 + 8)
int32_t i = i_2
int64_t r11 = *rax_3

if (i_2 s> 0)
    do
        int32_t rcx_4 = i & 0x80000001
        
        if (rcx_4 s< 0)
            rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(i)
        int32_t i_1 = (temp2_1 - temp1_1) s>> 1
        i = i_1
        int32_t rax_7 = i_1 + r9
        
        if (*(*(r11 + (sx.q(rax_7) << 3)) + 0x28) u< arg1[5])
            r9 = rax_7 + rcx_4
    while (i s> 0)

if (r9 s>= i_2 || arg1[5] u< *(*(r11 + (sx.q(r9) << 3)) + 0x28))
    r9 = -1

int32_t rax_12 = i_2 - r9

if (rax_12 != 1)
    memmove(r11 + (sx.q(r9) << 3), r11 + (sx.q(r9 + 1) << 3), (rax_12 - 1) << 3)
    i_2 = *(rax_3 + 8)

*(rax_3 + 8) = i_2 - 1
sub_1405c53d0(rax_3)
arg1[0x1e].d = 0
int64_t rcx_11 = arg1[0x1d]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t result = sub_1407ece30(&arg1[0x15], 0)
int64_t rcx_13 = arg1[0x19]

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0x15]

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14) __tailcall
