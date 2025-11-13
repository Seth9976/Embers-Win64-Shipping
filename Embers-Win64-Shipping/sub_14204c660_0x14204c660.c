// 函数: sub_14204c660
// 地址: 0x14204c660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143a2ecd8 == 0)
    int64_t rax
    rax.b = 0
    return rax

void* i_2 = arg1 + 0x10
void* i_1 = *(i_2 + 0xa0)
void* i = i_2

if (i_1 != 0)
    i = i_1

void* r8

for (r8 = i + sx.q(*(i_2 + 0xa8)) * 0x28; i != r8; i += 0x28)
    bool rax_3 = (*(i + 8)).b & arg4.b
    int64_t rdx
    rdx.b = (rax_3 & 0x30) != 0
    
    if (((rax_3 & 3) != 0 & rdx.b) != 0)
        *(arg2 + 0xc) = *i
        arg2[2].d = *(i + 4)
        int32_t rdx_7 = ((arg4 & 0x33) | 0xc) & *(i + 8)
        *(i + 4) += 1
        *(i + 8) = rdx_7 | (arg4 & 0xc)
        sub_14204cf30(*(i + 0x10), arg2, arg1 + 0xc0, arg3, arg4)
        int64_t* rax_13
        rax_13.b = 1
        return rax_13

int32_t rbp = *(arg1 + 0xb8)
*(arg2 + 0xc) = rbp
arg2[2].d = 0
int64_t rsi = sx.q(*(i_2 + 0xa8))
int32_t rax_4 = (rsi + 1).d
*(i_2 + 0xa8) = rax_4

if (rax_4 s> *(i_2 + 0xac))
    sub_142066630(i_2, rsi.d)

void* i_3 = *(i_2 + 0xa0)
void* rsi_1 = arg1 + 0xd0

if (i_3 != 0)
    i_2 = i_3

void* r12 = i_2 + rsi * 0x28
*(r12 + 0x10) = 0
*(r12 + 8) = arg4 & 0x3f
void* rax_7 = rsi_1
*(r12 + 0x18) = 0
*(r12 + 0x20) = 0
*r12 = rbp
*(r12 + 4) = 1
void* rcx_2 = *(rsi_1 + 0x20)

if (rcx_2 != 0)
    rax_7 = rcx_2

void* rcx_4 = rax_7 + (sx.q(*(rsi_1 + 0x28)) << 3)
int64_t* rbx

if (rax_7 == rcx_4)
label_14204c7b4:
    int64_t* rax_8 = j_sub_140a82f30(0x40)
    rbx = rax_8
    
    if (rax_8 == 0)
        rbx = rax_8
    else
        rbx[4] = 0
        rbx[5].d = 0
        *(rbx + 0x2c) = 4
        *(rbx + 0x34) = 0
    
    rbx[7].d = rbp
    int64_t rbp_1 = sx.q(*(rsi_1 + 0x28))
    int32_t rax_14 = (rbp_1 + 1).d
    *(rsi_1 + 0x28) = rax_14
    
    if (rax_14 s> *(rsi_1 + 0x2c))
        sub_14083a490(rsi_1, rbp_1.d)
    
    void* rax_15 = *(rsi_1 + 0x20)
    
    if (rax_15 != 0)
        rsi_1 = rax_15
    
    *(rsi_1 + (rbp_1 << 3)) = rbx
else
    while (true)
        rbx = *rax_7
        
        if (rbx[7].d == 0xffffffff)
            bool rdx_3 = (*(rbx + 0x34)).b & arg4.b
            r8.b = (rdx_3 & 0x30) != 0
            
            if (((rdx_3 & 3) != 0 & r8.b) != 0)
                rbx[7].d = rbp
                break
        
        rax_7 += 8
        
        if (rax_7 == rcx_4)
            goto label_14204c7b4

*(r12 + 0x10) = rbx
sub_14204cf30(rbx, arg2, arg1 + 0xc0, arg3, arg4)
int64_t* rax_17
rax_17.b = 1
return rax_17
