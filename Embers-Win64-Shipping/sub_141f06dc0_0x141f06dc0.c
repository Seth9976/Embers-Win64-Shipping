// 函数: sub_141f06dc0
// 地址: 0x141f06dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2[8]
int32_t* rsi = arg1

if (i_2 != 0)
    int32_t rax_1 = arg1[8]
    int32_t rdx = rax_1 + i_2
    
    if (rdx s> arg1[9])
        sub_1405a5310(&arg1[6], rdx)
        rax_1 = arg1[8]
    
    int32_t* rdi_1 = *(arg2 + 0x18)
    int32_t i_1 = i_2
    int32_t* rsi_3 = sx.q(rax_1) * 0x50 + *(arg1 + 0x18)
    void* rbx = &rsi_3[0x11]
    int32_t i
    
    do
        *rsi_3 = *rdi_1
        *(rbx - 0x40) = rdi_1[1]
        *(rbx - 0x3c) = rdi_1[2]
        *(rbx - 0x38) = *(rdi_1 + 0xc)
        *(rbx - 0x30) = *(rdi_1 + 0x14)
        *(rbx - 0x28) = *(rdi_1 + 0x1c)
        *(rbx - 0x18) = *(rdi_1 + 0x2c)
        *(rbx - 0x10) = rdi_1[0xd]
        *(rbx - 0xc) = 0
        int64_t rbp_1 = sx.q(rdi_1[0x10])
        int64_t r13_1 = *(rdi_1 + 0x38)
        *(rbx - 4) = rbp_1.d
        
        if (rbp_1.d != 0)
            sub_1407c3650(rbx - 0xc, rbp_1.d, 0)
            memcpy(*(rbx - 0xc), r13_1, (rbp_1 * 0xc).d)
        else
            *rbx = 0
        
        rsi_3 = &rsi_3[0x14]
        *(rbx + 4) = rdi_1[0x12].b
        *(rbx + 5) = *(rdi_1 + 0x49)
        *(rbx + 6) ^= (*(rdi_1 + 0x4a) ^ *(rbx + 6)) & 1
        char rcx_3 = *(rdi_1 + 0x4a)
        rdi_1 = &rdi_1[0x14]
        *(rbx + 6) ^= (rcx_3 ^ *(rbx + 6)) & 2
        rbx += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)
    arg1[8] += i_2
    rsi = arg1

sub_141efff40(&rsi[0xa], &arg2[0xa])
int64_t rdi_2 = sx.q(arg2[0x10])

if (rdi_2.d != 0)
    int32_t rcx_6 = rsi[0x10]
    int32_t rdx_4 = rcx_6 + rdi_2.d
    
    if (rdx_4 s> rsi[0x11])
        sub_1405a5310(&rsi[0xe], rdx_4)
        rcx_6 = rsi[0x10]
    
    memcpy(sx.q(rcx_6) * 0x50 + *(rsi + 0x38), *(arg2 + 0x38), (rdi_2 * 0x50).d)
    rsi[0x10] += rdi_2.d

int32_t rcx_11 = rsi[0x12]
*rsi |= *arg2 & 1
int32_t rdx_11 = ((((zx.d((arg2[0x12] u>> 1).b) * 2) | rcx_11) ^ rcx_11) & 2) ^ rcx_11
rsi[0x12] = rdx_11
int32_t rdx_12 = rdx_11 ^ (((zx.d((arg2[0x12] u>> 2).b) << 2 | rdx_11) ^ rdx_11) & 4)
rsi[0x12] = rdx_12
uint8_t result = (arg2[0x12] u>> 4).b
rsi[0x12] = (((zx.d(result) << 4 | rdx_12) ^ rdx_12) & 0x10) ^ rdx_12
return result
