// 函数: sub_1419fd1b0
// 地址: 0x1419fd1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14301ee20
arg1[0x2a] = &data_14301efb0
arg1[0xc5][6](&arg1[0xc5])
int32_t i = 0

if (arg1[0xcb].d s> 0)
    int64_t rbx_1 = 0
    
    do
        int64_t* rcx_2 = arg1[0xca] + rbx_1
        (*(*rcx_2 + 0x30))(rcx_2)
        i += 1
        rbx_1 += 0x28
    while (i s< arg1[0xcb].d)

int64_t* rcx_3 = arg1[0xb3]

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 0)
        (**rcx_3)(rcx_3, 1)
        sub_140bb5c10(&data_1439cc080, *(arg1 + 0x594))
    
    arg1[0xb3] = 0

uint32_t rcx_4 = *(arg1 + 0x49c)
int32_t r14 = 0

if (rcx_4 s> 0)
    uint32_t rax_3
    
    do
        int32_t rbp_1 = 0
        rax_3 = rcx_4
        
        if (rcx_4 s> 0)
            do
                void* rcx_9 = &arg1[0x37 + zx.q(sx.d(r14.b * rcx_4.b + rbp_1.b)) * 0x15]
                (*(*rcx_9 + 0x30))(rcx_9)
                void* rdi_1 = &arg1[0x45 + zx.q(sx.d(r14.b * rcx_4.b + rbp_1.b)) * 0x15]
                void* rcx_10 = *rdi_1
                
                if (rcx_10 != 0)
                    int32_t rax_6 = 0
                    
                    if (0 == *(rcx_10 + 8))
                        *(rcx_10 + 8) = 0
                    else
                        rax_6 = *(rcx_10 + 8)
                    
                    if (rax_6 == 1)
                        void* rbx_3 = *rdi_1
                        
                        if (*(rbx_3 + 0x11) != 0)
                            if (data_143f0f1c7 != 0)
                                int64_t* rcx_11 = data_143f0f180
                                (*(*rcx_11 + 0x630))(rcx_11, rbx_3)
                            
                            *(rbx_3 + 0x11) = 0
                
                *(rdi_1 + 0x18) = 0
                sub_1405d16e0(rdi_1, nullptr)
                sub_1405d16e0(rdi_1 + 8, nullptr)
                sub_1405d16e0(rdi_1 + 0x10, nullptr)
                rax_3 = *(arg1 + 0x49c)
                rbp_1 += 1
                rcx_4 = zx.d(rax_3.b)
            while (rbp_1 s< rax_3)
        
        r14 += 1
        rcx_4 = rax_3
    while (r14 s< rax_3)

sub_1419fcf90(&arg1[0xca])
int64_t rcx_16 = arg1[0xc9]
arg1[0xc5] = &data_14301ede0

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

sub_1405d1550(&arg1[0xc8])
sub_1419948a0(&arg1[0xc5])
int64_t rcx_19 = arg1[0xc3]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[0xc1]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = arg1[0xbf]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = arg1[0xbd]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

void*** rbx_4 = arg1[0xbc]

if (rbx_4 != 0)
    int64_t rcx_23 = rbx_4[6]
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    *rbx_4 = &data_14301de90
    sub_1405d1550(&rbx_4[5])
    j_sub_140a74f90(rbx_4)

int64_t rcx_26 = arg1[0xba]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = arg1[0xb6]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t rcx_28 = arg1[0xa8]

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int32_t i_4 = arg1[0xa5].d
int64_t* rbx_5 = arg1[0xa4]

if (i_4 != 0)
    int32_t i_1
    
    do
        sub_1405d1550(rbx_5)
        rbx_5 = &rbx_5[4]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rbx_5 = arg1[0xa4]

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

int64_t rcx_31 = arg1[0xa2]

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int64_t rcx_32 = arg1[0x8a]

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int64_t i_3 = 4
void* rdi_2 = &arg1[0x89]
int64_t i_2

do
    rdi_2 -= 0xa8
    sub_1419fd730(rdi_2)
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
return sub_142289fd0(arg1) __tailcall
