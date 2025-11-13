// 函数: sub_141c953a0
// 地址: 0x141c953a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1

if (arg1 == arg2)
    return result

int64_t i_2 = sx.q(arg2[1].d)
sub_140cb92f0(arg1, i_2.d)
int32_t rax = result[1].d + i_2.d
result[1].d = rax

if (rax s> *(result + 0xc))
    sub_1405c4e40(result)

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
int32_t rbp = 0
int64_t i_1 = i_2

if (i_2.d s<= 0)
    return result

void* rdx_5 = *arg2 - rax_4
void* arg_10 = rdx_5
int32_t rsi_1 = 1
int32_t* rbx_1 = rax_4 + 0x10
int64_t i

do
    void* rax_5 = arg2[4]
    void* rcx_3 = &arg2[2]
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    int32_t rax_6 = rbp
    
    if (rbp s< 0)
        rax_6 = rbp + 0x1f
    
    bool cond:0_1 = (*(rcx_3 + (sx.q(rax_6 s>> 5) << 2)) & rsi_1) == 0
    rbx_1[-4] = *(rdx_5 + rbx_1 - 0x10)
    
    if (cond:0_1)
        rbx_1[-3] = *(rdx_5 + rbx_1 - 0xc)
    else
        *(rbx_1 - 8) = 0
        int64_t r14 = sx.q(*(rdx_5 + rbx_1))
        int64_t rax_10 = *(rdx_5 + rbx_1 - 8)
        *rbx_1 = r14.d
        
        if (r14.d != 0)
            sub_1405c4a00(&rbx_1[-2], r14.d, 0)
            memcpy(*(rbx_1 - 8), rax_10, (r14 << 3).d)
            rdx_5 = arg_10
            rbx_1[2] = *(rdx_5 + rbx_1 + 8)
            rbx_1[3] = *(rdx_5 + rbx_1 + 0xc)
        else
            rbx_1[1] = 0
            rbx_1[2] = *(rdx_5 + rbx_1 + 8)
            rbx_1[3] = *(rdx_5 + rbx_1 + 0xc)
    
    rbp += 1
    rsi_1 = rol.d(rsi_1, 1)
    rbx_1 = &rbx_1[8]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
