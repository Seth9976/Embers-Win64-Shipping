// 函数: sub_141ea0640
// 地址: 0x141ea0640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint64_t* rbx_1 = arg1
int32_t rbp_1 = arg1[1].d
int32_t r13_1 = *(arg2 + 0x90)
int64_t* r14_1 = *(arg2 + 0x78)
int32_t i = rbp_1 - *(arg1 + 0x34)

if (rbp_1 == *(arg1 + 0x34))
    return 

int32_t rdi_1 = 0

if ((r14_1[8] & 0x1040000000) == 0)
    int32_t rsi_1 = 1
    uint64_t r12_1 = zx.q((*(arg2 + 0x80)).12:8.d)
    int64_t r15_1 = *arg1
    
    do
        if (rdi_1 s>= 0 && rdi_1 s< rbx_1[5].d)
            void* rax_1 = rbx_1[4]
            void* rcx = &rbx_1[2]
            
            if (rax_1 != 0)
                rcx = rax_1
            
            int32_t rax_2 = rdi_1
            
            if (rdi_1 s< 0)
                rax_2 = rdi_1 + 0x1f
            
            if ((*(rcx + (sx.q(rax_2 s>> 5) << 2)) & rsi_1) != 0)
                if ((not.b((r14_1[8] u>> 0x24).b) & 1) != 0)
                    (*(*r14_1 + 0xe8))(r14_1, sx.q(*(r14_1 + 0x4c)) + r15_1)
                
                i -= 1
        
        r15_1 += r12_1
        rsi_1 = rol.d(rsi_1, 1)
        rdi_1 += 1
    while (i != 0)

rbx_1[1].d = 0

if (*(rbx_1 + 0xc) != 0)
    sub_140ce4fc0(rbx_1, 0, r13_1)

rbx_1[6].d = 0xffffffff
*(rbx_1 + 0x34) = 0
rbx_1[5].d = 0

if (*(rbx_1 + 0x2c) != 0)
    *(rbx_1 + 0x2c) = 0
    sub_140d0bc80(&rbx_1[2], 0)

int64_t rcx_4 = sx.q(rbx_1[9].d)
void* rdi_2 = &rbx_1[7]
void* rax = *(rdi_2 + 8)

if (rcx_4 s<= 0)
    return 

if (rax != 0)
    rdi_2 = rax

__builtin_memset(rdi_2, 0xffffffff, rcx_4 << 2)
