// 函数: sub_140b79370
// 地址: 0x140b79370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_1 = sx.q(arg2[1].d)
sub_140b7c310(arg1, i_1.d)
int32_t rax = arg1[1].d + i_1.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4ec0(arg1)

void* rbp = &arg2[2]
void* rdi = &arg1[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
void* var_58 = rbp

if (rdi != rbp)
    sub_14059a8e0(rdi, *(rbp + 0x18))
    int32_t rax_3 = *(rbp + 0x18)
    *(rdi + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = *(rbp + 0x10)
        void* r10_1 = *(rdi + 0x10)
        void* rdx_3 = rbp
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rdi = r10_1
        
        memcpy(rdi, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rax_4 = *arg1
int32_t r15 = 0
int32_t arg_10 = 0
int64_t i_2 = i_1

if (i_1 s<= 0)
    return arg1

int32_t r13_1 = 1
int32_t* r14_1 = rax_4 + 0x18
int32_t* r12_2 = *arg2 - rax_4
int64_t i

do
    void* rax_5 = *(rbp + 0x10)
    int64_t* rdx_5 = &r12_2[-6] + r14_1
    void* r8_4 = rbp
    
    if (rax_5 != 0)
        r8_4 = rax_5
    
    int32_t rax_6 = r15
    
    if (r15 s< 0)
        rax_6 = r15 + 0x1f
    
    if ((*(r8_4 + (sx.q(rax_6 s>> 5) << 2)) & r13_1) == 0)
        r14_1[-6] = *rdx_5
        r14_1[-5] = *(r14_1 + r12_2 - 0x14)
    else
        sub_140596d10(&r14_1[-6], rdx_5)
        *(r14_1 - 8) = 0
        int32_t j_1 = *(r12_2 + r14_1)
        void* rdi_1 = *(r12_2 + r14_1 - 8)
        *r14_1 = j_1
        
        if (j_1 != 0)
            sub_1405a4be0(&r14_1[-2], j_1, 0)
            int64_t* rbx_1 = *(r14_1 - 8)
            int32_t j
            
            do
                *rbx_1 = 0
                int32_t rsi = *(rdi_1 + 8)
                int64_t r15_1 = *rdi_1
                rbx_1[1].d = rsi
                
                if (rsi != 0)
                    sub_1405a4c70(rbx_1, rsi, 0)
                    memcpy(*rbx_1, r15_1, rsi * 2)
                else
                    *(rbx_1 + 0xc) = 0
                
                rbx_1 = &rbx_1[2]
                rdi_1 += 0x10
                j = j_1
                j_1 -= 1
            while (j != 1)
            r15 = arg_10
            i_1 = i_2
        else
            r14_1[1] = 0
        
        rbp = var_58
        r14_1[2] = *(r12_2 + r14_1 + 8)
        r14_1[3] = *(r12_2 + r14_1 + 0xc)
    
    r15 += 1
    r13_1 = rol.d(r13_1, 1)
    r14_1 = &r14_1[0xa]
    arg_10 = r15
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return arg1
