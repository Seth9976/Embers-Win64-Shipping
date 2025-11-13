// 函数: sub_1418f4af0
// 地址: 0x1418f4af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff1d08
void* rcx = arg1[0x29]
arg1[0x29] = 0

if (rcx != 0)
    sub_1419028c0(rcx + 0x68)

void* rax = arg1[0x28]

if (rax != 0)
    *(rax + 0x110) = 0
    *(rax + 0xe8) = 0
    *(rax + 0xf8) = 0
    *(rax + 0x80) = 0
    void* rcx_2 = arg1[0x28]
    arg1[0x28] = 0
    
    if (rcx_2 != 0)
        sub_1419028c0(rcx_2 + 0x68)

int64_t r12 = sx.q(arg1[0x13].d)

if (r12 s> 0)
    int64_t rdi_1 = 0
    int64_t r15_1 = 0
    
    do
        void* rcx_4 = arg1[0x12]
        void* rax_1 = &arg1[0xc]
        
        if (rcx_4 != 0)
            rax_1 = rcx_4
        
        int64_t* rcx_5 = *(rax_1 + (rdi_1 << 3))
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1 && rcx_5 != 0)
            (**rcx_5)(rcx_5, 1)
        
        void* rax_4 = arg1[0x26]
        void* rbx_1 = &arg1[0x14]
        
        if (rax_4 != 0)
            rbx_1 = rax_4
        
        void* rbx_2 = rbx_1 + r15_1
        int64_t r8_1 = *rbx_2
        
        if (r8_1 != 0)
            sub_1418be030(&arg1[3][0x76], 4, r8_1)
            __builtin_memset(rbx_2, 0, 0x14)
        
        void* rax_5 = arg1[0xa]
        void* rdx_1 = &arg1[4]
        
        if (rax_5 != 0)
            rdx_1 = rax_5
        
        sub_1418c2cb0(arg1[3], *(rdx_1 + (rdi_1 << 3)))
        void* rax_6 = arg1[0xa]
        void* rdx_3 = &arg1[4]
        
        if (rax_6 != 0)
            rdx_3 = rax_6
        
        sub_1418c2cd0(arg1[3], *(rdx_3 + (rdi_1 << 3)))
        void* rax_7 = arg1[0xa]
        void* rcx_10 = &arg1[4]
        
        if (rax_7 != 0)
            rcx_10 = rax_7
        
        r15_1 += 0x18
        *(rcx_10 + (rdi_1 << 3)) = 0
        rdi_1 += 1
    while (rdi_1 s< r12)

sub_1418debb0(arg1[0x33], nullptr)
void* rbx_3 = arg1[0x33]

if (rbx_3 != 0)
    int64_t rcx_12 = *(rbx_3 + 0x68)
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = *(rbx_3 + 0x58)
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    j_sub_140a74f90(rbx_3)

void* r13 = arg1[0x2f]
arg1[0x33] = 0
int64_t rcx_15 = sx.q(*(r13 + 0x68))

if (rcx_15.d != 0)
    int32_t r15_2 = 0
    int32_t rdi_2 = 0
    int64_t rbx_4 = 0
    r12.b = **(r13 + 0x60) != arg1
    
    do
        int64_t r9_1 = sx.q(rdi_2)
        rbx_4 += 1
        rdi_2 += 1
        
        if (rbx_4 s< rcx_15)
            int64_t rcx_16 = *(r13 + 0x60) + (rbx_4 << 3)
            
            do
                int32_t rax_10
                rax_10.b = *rcx_16 != arg1
                
                if (zx.d(r12.b) != rax_10)
                    break
                
                rdi_2 += 1
                rbx_4 += 1
                rcx_16 += 8
            while (rbx_4 s< rcx_15)
        
        int32_t r14_2 = rdi_2 - r9_1.d
        
        if (r12.b != 0)
            if (r15_2 != r9_1.d)
                int64_t rcx_17 = *(r13 + 0x60)
                memmove(rcx_17 + (sx.q(r15_2) << 3), rcx_17 + (r9_1 << 3), r14_2 << 3)
            
            r15_2 += r14_2
        
        r12.b ^= 1
    while (rbx_4 s< rcx_15)
    
    *(r13 + 0x68) = r15_2

sub_14081c9d0(&arg1[0x37])
DeleteCriticalSection(&arg1[0x2a])
void* rcx_21 = arg1[0x29]

if (rcx_21 != 0)
    sub_1419028c0(rcx_21 + 0x68)

void* rcx_23 = arg1[0x28]

if (rcx_23 != 0)
    sub_1419028c0(rcx_23 + 0x68)

int64_t rcx_25 = arg1[0x26]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t rcx_26 = arg1[0x12]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = arg1[0xa]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

*arg1 = &data_142d3ff08
return &data_142d3ff08
