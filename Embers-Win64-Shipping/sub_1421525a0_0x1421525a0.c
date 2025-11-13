// 函数: sub_1421525a0
// 地址: 0x1421525a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cb1970(arg1, arg1[1].d - *(arg1 + 0x34), 0)

if (arg1[9].d == 0)
    return 0

int32_t rax = sub_140a6b260(arg2, 0x10)
void* rcx_1 = arg1[8]
void* r8 = &arg1[7]

if (rcx_1 != 0)
    r8 = rcx_1

int32_t i = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax)) << 2))
int32_t i_1 = i
int32_t i_2 = i

while (i != 0xffffffff)
    int32_t* r9_3 = (sx.q(i_1) << 5) + *arg1
    i = r9_3[6]
    i_2 = i
    
    if (((r9_3[1] ^ *(arg2 + 4)) | (r9_3[2] ^ arg2[1].d) | (r9_3[3] ^ *(arg2 + 0xc))
            | (*r9_3 ^ *arg2)) == 0)
        break
    
    i_1 = i

if (i_1 != 0xffffffff)
    int64_t r11_2 = *arg1
    
    do
        if (*((sx.q(i_1) << 5) + r11_2 + 0x10) == arg3)
            sub_1405c3390(arg1, i_1)
            return 1
        
        i_1 = i_2
        
        if (i == 0xffffffff)
            break
        
        do
            int32_t* r9_6 = (sx.q(i_1) << 5) + r11_2
            i = r9_6[6]
            i_2 = i
            
            if (((r9_6[1] ^ *(arg2 + 4)) | (r9_6[2] ^ arg2[1].d) | (r9_6[3] ^ *(arg2 + 0xc))
                    | (*r9_6 ^ *arg2)) == 0)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    while (i_1 != 0xffffffff)

return 0
