// 函数: sub_142182e70
// 地址: 0x142182e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1

if (arg1 == arg2)
    return result

int64_t i_3 = sx.q(arg2[1].d)
sub_14218cad0(arg1, i_3.d)
int32_t rax = result[1].d + i_3.d
result[1].d = rax

if (rax s> *(result + 0xc))
    sub_1405c4fe0(result)

void* rsi = &result[2]
result[6].d = arg2[6].d
*(result + 0x34) = *(arg2 + 0x34)

if (rsi != &arg2[2])
    sub_14059a8e0(rsi, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rsi + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rsi + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rsi = r10_1
        
        memcpy(rsi, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rax_4 = *result
int64_t i_1 = i_3
int64_t i_2 = i_1
int32_t r14 = 0

if (i_3.d s<= 0)
    return result

int32_t rsi_1 = 1
int32_t* rbx_1 = rax_4 + 0x10
void* r12_1 = *arg2 - rax_4
int64_t i

do
    void* rax_5 = arg2[4]
    void* rcx_3 = &arg2[2]
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    int32_t rax_6 = r14
    
    if (r14 s< 0)
        rax_6 = r14 + 0x1f
    
    if ((*(rcx_3 + (sx.q(rax_6 s>> 5) << 2)) & rsi_1) == 0)
        rbx_1[-4] = *(rbx_1 + r12_1 - 0x10)
        rbx_1[-3] = *(r12_1 + rbx_1 - 0xc)
    else
        *(rbx_1 - 0x10) = *(rbx_1 + r12_1 - 0x10)
        *(rbx_1 - 8) = 0
        int64_t rbp = sx.q(*(r12_1 + rbx_1))
        int64_t rax_10 = *(r12_1 + rbx_1 - 8)
        *rbx_1 = rbp.d
        
        if (rbp.d != 0)
            sub_142199950(&rbx_1[-2], rbp.d, 0)
            memcpy(*(rbx_1 - 8), rax_10, (rbp << 4).d)
            i_1 = i_2
        else
            rbx_1[1] = 0
        
        rbx_1[2] = *(r12_1 + rbx_1 + 8)
        rbx_1[3] = *(r12_1 + rbx_1 + 0xc)
        rbx_1[4] = *(r12_1 + rbx_1 + 0x10)
        rbx_1[5] = *(r12_1 + rbx_1 + 0x14)
        rbx_1[6] = *(r12_1 + rbx_1 + 0x18)
        rbx_1[7] = *(r12_1 + rbx_1 + 0x1c)
        rbx_1[8] = *(r12_1 + rbx_1 + 0x20)
        rbx_1[9] = *(r12_1 + rbx_1 + 0x24)
        rbx_1[0xa] = *(r12_1 + rbx_1 + 0x28)
        rbx_1[0xb] = *(r12_1 + rbx_1 + 0x2c)
    
    r14 += 1
    rsi_1 = rol.d(rsi_1, 1)
    rbx_1 = &rbx_1[0x10]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return result
