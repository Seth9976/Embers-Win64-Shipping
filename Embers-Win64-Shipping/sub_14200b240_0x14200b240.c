// 函数: sub_14200b240
// 地址: 0x14200b240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t i_1 = 0
arg1[0x24].d = arg1[8].d
arg1[0x26].d = 0

if (*(arg1 + 0x134) s<= 0xffffffff)
    sub_1405dadb0(&arg1[0x25], 0)

int32_t i_3 = arg1[0x24].d
int32_t rbx = 1

if (i_3 s> 0)
    uint64_t i_2 = zx.q(i_3)
    int32_t* rcx_2 = arg1[7] + 0xc
    uint64_t i
    
    do
        int32_t rax_1 = *rcx_2
        rcx_2 = &rcx_2[6]
        
        if (rbx s>= rax_1)
            rax_1 = rbx
        
        rbx = rax_1
        i = i_2
        i_2 -= 1
    while (i != 1)

int64_t r14 = sx.q(arg1[0x26].d)
int32_t rax_2 = (r14 + 1).d
arg1[0x26].d = rax_2

if (rax_2 s> *(arg1 + 0x134))
    sub_1405a4cf0(&arg1[0x25])

int64_t result = arg1[0x25]
*(result + (r14 << 2)) = rbx

if (arg1[0xa].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rbx_2 = *(rsi_1 + arg1[9])
        
        if (rbx_2 != 0)
            rbx_2[1].d |= 1
            *(rbx_2 + 0x5f) = 0x10
            result = sub_140cd85e0(rbx_2)
            
            if (*(rbx_2 + 0x5c) == 4 && (rbx_2[0xc].b & 1) == 0)
                int64_t rax_3 = *rbx_2
                *(rbx_2 + 0x5c) = 9
                result = (*(rax_3 + 0x2f8))(rbx_2)
        
        i_1 += 1
        rsi_1 = &rsi_1[1]
    while (i_1 s< arg1[0xa].d)

return result
