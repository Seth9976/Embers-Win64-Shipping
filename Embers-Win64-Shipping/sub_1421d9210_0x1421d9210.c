// 函数: sub_1421d9210
// 地址: 0x1421d9210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432f7210
sub_1421f8fa0(arg1)
arg1[0x69][6](&arg1[0x69])
void* rdi = arg1[0x2f]

if (rdi != 0)
    int32_t i = 0
    
    if (*(rdi + 0x70) s> 0)
        int64_t rbp_1 = 0
        
        do
            void* rax_1 = *(rdi + 0x68)
            void* rcx_1 = rdi + 8
            
            if (rax_1 != 0)
                rcx_1 = rax_1
            
            int64_t* rcx_2 = *(rcx_1 + rbp_1)
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
            
            i += 1
            rbp_1 += 8
        while (i s< *(rdi + 0x70))
    
    *(rdi + 0x70) = 0
    
    if (*(rdi + 0x74) s<= 0xffffffff)
        sub_140809940(rdi + 8, 0)
    
    int64_t rcx_4 = *(rdi + 0x68)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    j_sub_140a74f90(rdi)

arg1[0x2f] = 0
sub_1421dfdc0(arg1)
int64_t rcx_7 = arg1[0x7c]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

void* rcx_9 = arg1[0x7a]
void* rbx_1 = &arg1[0x78]
int32_t i_2 = arg1[0x7b].d

if (rcx_9 != 0)
    rbx_1 = rcx_9

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_8 = *rbx_1
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx_1 += 0x10
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rcx_9 = arg1[0x7a]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_1421d9110(&arg1[0x6e])
int64_t rcx_11 = arg1[0x6d]
arg1[0x69] = &data_142d99570

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_1405d1550(&arg1[0x6c])
sub_1419948a0(&arg1[0x69])
sub_14211a390(&arg1[0x31])
int64_t rcx_15 = arg1[0x2a]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return sub_142289fd0(arg1) __tailcall
