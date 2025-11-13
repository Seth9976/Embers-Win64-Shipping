// 函数: sub_1424c8890
// 地址: 0x1424c8890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_3 = sx.q(arg2[1].d)
sub_141f10e50(arg1, i_3.d)
int32_t rax = arg1[1].d + i_3.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4f50(arg1)

void* rdi = &arg1[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)

if (rdi != &arg2[2])
    sub_14059a8e0(rdi, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rdi + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rdi + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rdi = r10_1
        
        memcpy(rdi, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rax_4 = *arg2
int32_t r12 = 0
int64_t i_2 = i_3
int64_t i_1 = i_3

if (i_3.d s<= 0)
    return arg1

int64_t* rbx_1 = rax_4 + 0x10
int64_t* rdx_5 = *arg1 - rax_4
int64_t* arg_10 = rdx_5
int32_t rbp_1 = 1
int64_t i

do
    void* rax_5 = arg2[4]
    void* rcx_3 = &arg2[2]
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    int32_t rax_6 = r12
    
    if (r12 s< 0)
        rax_6 = r12 + 0x1f
    
    if ((*(rcx_3 + (sx.q(rax_6 s>> 5) << 2)) & rbp_1) == 0)
        *(rbx_1 + rdx_5 - 0x10) = rbx_1[-2].d
        *(rbx_1 + rdx_5 - 0xc) = *(rbx_1 - 0xc)
    else
        *(rbx_1 + rdx_5 - 0x10) = rbx_1[-2]
        *(rbx_1 + rdx_5 - 8) = rbx_1[-1]
        void* rax_11 = *rbx_1
        *(rdx_5 + rbx_1) = rax_11
        
        if (rax_11 != 0)
            *(rax_11 + 8) += 1
        
        *(rbx_1 + rdx_5 + 8) = 0
        void* r14_1 = rbx_1 + rdx_5
        int32_t j_1 = rbx_1[2].d
        int64_t* rdi_1 = rbx_1[1]
        *(rdx_5 + rbx_1 + 0x10) = j_1
        
        if (j_1 != 0)
            sub_1405a4be0(r14_1 + 8, j_1, 0)
            int64_t* rcx_5 = *(r14_1 + 8)
            int32_t j
            
            do
                *rcx_5 = *rdi_1
                void* rax_15 = rdi_1[1]
                rcx_5[1] = rax_15
                
                if (rax_15 != 0)
                    *(rax_15 + 8) += 1
                
                rcx_5 = &rcx_5[2]
                rdi_1 = &rdi_1[2]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rdx_5 = arg_10
            i_1 = i_2
            *(rbx_1 + rdx_5 + 0x18) = rbx_1[3].d
            *(rbx_1 + rdx_5 + 0x1c) = *(rbx_1 + 0x1c)
        else
            *(rdx_5 + rbx_1 + 0x14) = 0
            *(rbx_1 + rdx_5 + 0x18) = rbx_1[3].d
            *(rbx_1 + rdx_5 + 0x1c) = *(rbx_1 + 0x1c)
    
    r12 += 1
    rbp_1 = rol.d(rbp_1, 1)
    rbx_1 = &rbx_1[6]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return arg1
