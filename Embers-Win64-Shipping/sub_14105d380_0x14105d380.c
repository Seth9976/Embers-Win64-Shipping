// 函数: sub_14105d380
// 地址: 0x14105d380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f02a68
int64_t* rcx = arg1[0xc]

if (rcx != 0)
    (*(*rcx + 0x50))(rcx, 0, 0)

void* r13 = arg1[3]
int64_t rcx_1 = sx.q(*(r13 + 0x4c8))

if (rcx_1.d != 0)
    int32_t rdi_1 = 0
    int32_t r12_1 = 0
    int64_t r15
    r15.b = **(r13 + 0x4c0) != arg1
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rcx_1)
            int64_t* rcx_2 = *(r13 + 0x4c0) + (rbx_1 << 3)
            
            do
                int32_t rax_4
                rax_4.b = *rcx_2 != arg1
                
                if (zx.d(r15.b) != rax_4)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_2 = &rcx_2[1]
            while (rbx_1 s< rcx_1)
        
        int32_t r14_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rcx_3 = *(r13 + 0x4c0)
                memmove(rcx_3 + (sx.q(r12_1) << 3), rcx_3 + (r9_1 << 3), r14_2 << 3)
            
            r12_1 += r14_2
        
        r15.b ^= 1
    while (rbx_1 s< rcx_1)
    
    *(r13 + 0x4c8) = r12_1

int64_t* rcx_5 = arg1[0x37]

if (rcx_5 != 0)
    (*(*rcx_5 + 0x28))(rcx_5, 1)
    arg1[0x37] = 0

sub_14081c9d0(&arg1[0x36])
sub_14100f100(&arg1[0x1e])
int32_t i_2 = arg1[0x1a].d
int64_t* rbx_2 = arg1[0x19]

if (i_2 != 0)
    int32_t i
    
    do
        void* rcx_8 = *rbx_2
        
        if (rcx_8 != 0)
            (*(*(rcx_8 + 0x68) + 0x10))(rcx_8 + 0x68)
        
        rbx_2 = &rbx_2[1]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_2 = arg1[0x19]

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int64_t rcx_11 = arg1[0x12]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int32_t i_3 = arg1[0x11].d
int64_t* rbx_3 = arg1[0x10]

if (i_3 != 0)
    int32_t i_1
    
    do
        void* rcx_12 = *rbx_3
        
        if (rcx_12 != 0)
            (*(*(rcx_12 + 0x68) + 0x10))(rcx_12 + 0x68)
        
        rbx_3 = &rbx_3[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_3 = arg1[0x10]

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t* rcx_15 = arg1[0xf]

if (rcx_15 != 0)
    (*(*rcx_15 + 0x10))(rcx_15)

int64_t* rcx_16 = arg1[0xe]

if (rcx_16 != 0)
    (*(*rcx_16 + 0x10))(rcx_16)

int64_t* rcx_17 = arg1[0xc]

if (rcx_17 != 0)
    (*(*rcx_17 + 0x10))(rcx_17)

*arg1 = &data_142d3ff08
return &data_142d3ff08
