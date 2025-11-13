// 函数: sub_141a58630
// 地址: 0x141a58630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x38) != 0)
    sub_141a63040(arg1 + 0x40)
    int32_t i = 0
    int32_t i_4 = 0
    
    if (*(arg1 + 0x30) s> 0)
        do
            sub_141a28a60(arg1 + 0x40, *(arg1 + 0x28) + ((sx.q(i) * 9 + 2) << 2), &i_4)
            i = i_4 + 1
            i_4 = i
        while (i s< *(arg1 + 0x30))
    
    *(arg1 + 0x38) = 0

int32_t i_5 = -1
int64_t* var_50 = arg2
uint64_t r15
r15.b = 1
int32_t i_6 = 0xffffffff
int32_t var_44 = 0xffffffff
sub_141a407a0(arg1 + 0x40, *(arg1 + 0x48) - *(arg1 + 0x74), 0)

if (*(arg1 + 0x88) != 0)
    int32_t rax_4 = sub_140a6b260(arg2, 0x10)
    void* r8_1 = arg1 + 0x78
    void* rcx_6 = *(r8_1 + 8)
    
    if (rcx_6 != 0)
        r8_1 = rcx_6
    
    i_5 = *(r8_1 + (((sx.q(*(arg1 + 0x88)) - 1) & sx.q(rax_4)) << 2))
    int32_t i_7 = i_5
    i_6 = i_5
    
    if (i_5 != 0xffffffff)
        i_6 = i_5
        int32_t i_1
        
        do
            int32_t* rdx_7 = sx.q(i_5) * 0x1c + *(arg1 + 0x40)
            i_1 = rdx_7[5]
            int32_t i_3 = i_1
            
            if (((rdx_7[1] ^ *(arg2 + 4)) | (rdx_7[2] ^ arg2[1].d) | (rdx_7[3] ^ *(arg2 + 0xc))
                    | (*rdx_7 ^ *arg2)) == 0)
                break
            
            i_5 = i_1
            i_6 = i_5
        while (i_1 != 0xffffffff)

int64_t zmm1 = i_6.q
int128_t zmm0 = (arg1 + 0x40).o

if (i_5 == 0xffffffff)
    return 1

int32_t* r12_2 = zmm0:8.q
int32_t j = zmm1:4.d
int32_t i_2 = zmm1.d

do
    int64_t* r9_1 = zmm0.q
    int64_t rax_15 = *(arg1 + 0x28)
    int64_t rdx_8 = sx.q(*(sx.q(i_2) * 0x1c + *r9_1 + 0x10)) * 9
    void* rsi_2 = rax_15 + (rdx_8 << 2)
    
    if (*(rax_15 + (rdx_8 << 2)) == arg3)
        int64_t rax_16 = sub_140d3c6e0(rsi_2 + 0x18)
        char rcx_15 = 0
        
        if (*(rsi_2 + 0x20) == 0)
            rcx_15 = r15.b
        
        r15 = zx.q(rcx_15)
        
        if (rax_16 != 0)
            int64_t rsi_3 = sx.q(*(arg4 + 0x10))
            int32_t rax_18 = (rsi_3 + 1).d
            *(arg4 + 0x10) = rax_18
            
            if (rax_18 s> *(arg4 + 0x14))
                sub_140915c70(arg4, rsi_3.d)
            
            void* rax_19 = *(arg4 + 8)
            void* rcx_17 = arg4
            
            if (rax_19 != 0)
                rcx_17 = rax_19
            
            *(rcx_17 + (rsi_3 << 3)) = rax_16
        
        r9_1 = zmm0.q
    
    i_2 = j
    
    if (j == 0xffffffff)
        break
    
    int64_t r9_2 = *r9_1
    
    do
        int32_t* rcx_18 = sx.q(i_2) * 0x1c
        j = *(rcx_18 + r9_2 + 0x14)
        
        if (((*(rcx_18 + r9_2 + 4) ^ r12_2[1]) | (*(rcx_18 + r9_2 + 8) ^ r12_2[2])
                | (*(rcx_18 + r9_2 + 0xc) ^ r12_2[3]) | (*(rcx_18 + r9_2) ^ *r12_2)) == 0)
            break
        
        i_2 = j
    while (j != 0xffffffff)
while (i_2 != 0xffffffff)

return zx.q(r15.b)
