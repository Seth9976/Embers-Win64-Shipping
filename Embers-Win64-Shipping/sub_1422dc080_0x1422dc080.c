// 函数: sub_1422dc080
// 地址: 0x1422dc080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1

if (arg1 == arg2)
    return result

int64_t i_3 = sx.q(arg2[1].d)
sub_14059abb0(arg1, i_3.d)
int32_t rax = result[1].d + i_3.d
result[1].d = rax

if (rax s> *(result + 0xc))
    sub_1405c4fe0(result)

void* rsi = &arg2[2]
void* rbx = &result[2]
result[6].d = arg2[6].d
*(result + 0x34) = *(arg2 + 0x34)
void* arg_10 = rsi

if (rbx != rsi)
    sub_14059a8e0(rbx, *(rsi + 0x18))
    int32_t rax_3 = *(rsi + 0x18)
    *(rbx + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = *(rsi + 0x10)
        void* r10_1 = *(rbx + 0x10)
        void* rdx_3 = rsi
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rbx = r10_1
        
        memcpy(rbx, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rax_4 = *result
int32_t r13 = 0
int64_t i_2 = i_3
int64_t i_1 = i_3

if (i_3.d s<= 0)
    return result

int32_t* rbx_1 = rax_4 + 0x20
int32_t* r14_2 = *arg2 - rax_4
int32_t r12_1 = 1
int64_t i

do
    void* rax_5 = *(rsi + 0x10)
    int64_t* rdx_5 = &r14_2[-8] + rbx_1
    void* r8_4 = rsi
    
    if (rax_5 != 0)
        r8_4 = rax_5
    
    int32_t rax_6 = r13
    
    if (r13 s< 0)
        rax_6 = r13 + 0x1f
    
    if ((*(r8_4 + (sx.q(rax_6 s>> 5) << 2)) & r12_1) == 0)
        rbx_1[-8] = *rdx_5
        rbx_1[-7] = *(r14_2 + rbx_1 - 0x1c)
    else
        sub_140596d10(&rbx_1[-8], rdx_5)
        *(rbx_1 - 0x10) = 0
        int32_t j_1 = *(r14_2 + rbx_1 - 8)
        void* rsi_1 = *(r14_2 + rbx_1 - 0x10)
        rbx_1[-2] = j_1
        
        if (j_1 != 0)
            sub_14083a1f0(&rbx_1[-4], j_1, 0)
            void* rdi = *(rbx_1 - 0x10)
            void* rsi_2 = rsi_1 + 0x14
            int32_t j
            
            do
                sub_140596d10(rdi, rsi_2 - 0x14)
                int32_t rax_9 = *(rsi_2 - 4)
                rsi_2 += 0x20
                *(rdi + 0x10) = rax_9
                *(rdi + 0x14) = *(rsi_2 - 0x20)
                *(rdi + 0x18) = *(rsi_2 - 0x1c)
                *(rdi + 0x1c) = *(rsi_2 - 0x18)
                rdi += 0x20
                j = j_1
                j_1 -= 1
            while (j != 1)
        else
            rbx_1[-1] = 0
        
        rsi = arg_10
        i_1 = i_2
        *rbx_1 = *(r14_2 + rbx_1)
        rbx_1[1] = *(r14_2 + rbx_1 + 4)
        rbx_1[2] = *(r14_2 + rbx_1 + 8)
        rbx_1[3] = *(r14_2 + rbx_1 + 0xc)
        rbx_1[4] = *(r14_2 + rbx_1 + 0x10)
        rbx_1[6] = *(r14_2 + rbx_1 + 0x18)
        rbx_1[7] = *(r14_2 + rbx_1 + 0x1c)
    
    r13 += 1
    r12_1 = rol.d(r12_1, 1)
    rbx_1 = &rbx_1[0x10]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return result
