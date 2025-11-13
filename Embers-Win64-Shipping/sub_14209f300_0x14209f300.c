// 函数: sub_14209f300
// 地址: 0x14209f300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t r9_1 = sx.q(arg2)

if (r9_1.d s>= *(arg1 + 0x78))
    return 

int32_t rcx = *(arg1 + 0x78)
int32_t rax_2 = rcx - r9_1.d

if (rax_2 != 1)
    int64_t r10_1 = *(arg1 + 0x70)
    memmove(r10_1 + r9_1 * 0xc, r10_1 + sx.q((r9_1 + 1).d) * 0xc, (rax_2 - 1) * 0xc)
    rcx = *(arg1 + 0x78)

*(arg1 + 0x78) = rcx - 1
sub_140775970(arg1 + 0x70)
void* rbx_1 = *(arg1 + 0x20)

if (rbx_1 == 0)
    return 

void* rax_8 = sub_1424cce00()
void* rdx_2 = *(rbx_1 + 0x10)
int64_t rax = sx.q(*(rax_8 + 0x38))

if (rax.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax << 3)) != rax_8 + 0x30)
    return 

void* rbx_2 = *(rbx_1 + 0x20)
bool cond:0_1 = *(rbx_2 + 0x6c) == 0
void* rax_9 = rbx_2 + 0x60
void* arg_20 = rbx_2
*(rax_9 + 8) = 0

if (not(cond:0_1))
    sub_140638c50(rax_9, 0)

int64_t* r12_1 = nullptr
uint64_t i_2 = 0
int64_t* var_48 = nullptr
int32_t var_3c_1 = 0
void* rax_10 = sub_1424cd480()
void* r9_3 = rax_10
rax = 0
int32_t arg_10 = 0

if (*(rbx_2 + 0x38) s<= 0)
    return 

int64_t* r8_4 = nullptr
int32_t rdx_3 = 0
int64_t* arg_18 = nullptr

do
    int32_t i = 0
    void* rbp_1 = *(r8_4 + *(rbx_2 + 0x30))
    
    if (*(rbp_1 + 0x38) s> 0)
        int64_t* r14_1 = nullptr
        
        do
            int64_t rcx_6 = sx.q(*(r9_3 + 0x38))
            void* r15_1 = *(r14_1 + *(rbp_1 + 0x30))
            void* rax_12 = *(r15_1 + 0x10)
            
            if (rcx_6.d s<= *(rax_12 + 0x38) && *(*(rax_12 + 0x30) + (rcx_6 << 3)) == r9_3 + 0x30)
                int64_t rbx_3 = sx.q(i_2.d)
                i_2 = zx.q((rbx_3 + 1).d)
                int32_t i_3 = i_2.d
                
                if (i_2.d s> rdx_3)
                    sub_1405a4d70(&var_48)
                    rdx_3 = var_3c_1
                    i_2 = zx.q(i_3)
                    r12_1 = var_48
                
                r12_1[rbx_3] = r15_1
            
            i += 1
            r14_1 = &r14_1[1]
        while (i s< *(rbp_1 + 0x38))
        
        rax = zx.q(arg_10)
        r8_4 = arg_18
        rbx_2 = arg_20
        r9_3 = rax_10
    
    rax = zx.q(rax.d + 1)
    r8_4 = &r8_4[1]
    arg_10 = rax.d
    arg_18 = r8_4
while (rax.d s< *(rbx_2 + 0x38))

if (i_2.d s> 0)
    int64_t* r14_2 = r12_1
    uint64_t i_1
    
    do
        void* rdi_2 = *r14_2
        int32_t j = 0
        
        if (*(rdi_2 + 0x78) s> 0)
            do
                sub_140664c50(rax_9, *(rdi_2 + 0x70) + ((sx.q(j) * 3 + 1) << 2))
                j += 1
            while (j s< *(rdi_2 + 0x78))
        
        r14_2 = &r14_2[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r12_1 != 0)
    sub_140a74f90(r12_1)
