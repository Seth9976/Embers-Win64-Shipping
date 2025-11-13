// 函数: sub_141cf8ad0
// 地址: 0x141cf8ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14321cc00
sub_140af4dc0()

if (data_143de5cd0 != 0)
    int64_t* rcx = data_143de5cc8
    
    if (rcx != 0)
        int64_t r8_1 = *rcx
        (*(r8_1 + 0x38))(rcx, 0, r8_1)
        int64_t rcx_1 = data_143de5cc8
        
        if (rcx_1 != 0)
            data_143de5cc8 = sub_140a84c80(rcx_1, 0, 0)
        
        data_143de5cd0 = 0

sub_1405a46b0(&data_14399fcb8, arg1)

if (data_143de5670 != 0)
    int64_t* rcx_2 = data_143de5668
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        int64_t rcx_3 = data_143de5668
        
        if (rcx_3 != 0)
            data_143de5668 = sub_140a84c80(rcx_3, 0, 0)
        
        data_143de5670 = 0

if (data_143de5680 != 0)
    int64_t* rcx_4 = data_143de5678
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4, 0)
        int64_t rcx_5 = data_143de5678
        
        if (rcx_5 != 0)
            data_143de5678 = sub_140a84c80(rcx_5, 0, 0)
        
        data_143de5680 = 0

if (data_143de5690 != 0)
    int64_t* rcx_6 = data_143de5688
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x38))(rcx_6, 0)
        int64_t rcx_7 = data_143de5688
        
        if (rcx_7 != 0)
            data_143de5688 = sub_140a84c80(rcx_7, 0, 0)
        
        data_143de5690 = 0

if (data_143de56a0 != 0)
    int64_t* rcx_8 = data_143de5698
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x38))(rcx_8, 0)
        int64_t rcx_9 = data_143de5698
        
        if (rcx_9 != 0)
            data_143de5698 = sub_140a84c80(rcx_9, 0, 0)
        
        data_143de56a0 = 0

sub_141d11880()
EnterCriticalSection(&arg1[7])
int32_t i = 0

if (arg1[3].d s> 0)
    int64_t r14_1 = 0
    
    do
        char** rdi_1 = *(arg1[2] + r14_1 + 8)
        
        if (rdi_1 != 0)
            int64_t* rcx_11 = rdi_1[0x2b]
            
            if (rcx_11 != 0)
                (**rcx_11)(rcx_11, 1)
            
            j_sub_140a74f90(rdi_1[0x25])
            j_sub_140a74f90(rdi_1[0x24])
            j_sub_140a74f90(rdi_1[0x23])
            j_sub_140a74f90(rdi_1[0x22])
            j_sub_140a74f90(rdi_1[0x21])
            DeleteCriticalSection(&rdi_1[0x2c])
            int64_t rcx_18 = rdi_1[0x1e]
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            int64_t rcx_19 = rdi_1[0x1c]
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            DeleteCriticalSection(&rdi_1[0xf])
            rdi_1[0xe].d = 0
            int64_t rcx_21 = rdi_1[0xd]
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            sub_1409aaf90(&rdi_1[5])
            int64_t* rcx_23 = rdi_1[4]
            
            if (rcx_23 != 0)
                (*(*rcx_23 + 0x28))(rcx_23, 1)
            
            int64_t rcx_24 = rdi_1[1]
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            sub_141cf9ee0(rdi_1, *rdi_1)
            j_sub_140a74f90(rdi_1)
        
        i += 1
        *(arg1[2] + r14_1 + 8) = 0
        r14_1 += 0x10
    while (i s< arg1[3].d)

if (arg1 != -0x38)
    LeaveCriticalSection(&arg1[7])

int64_t rcx_28 = arg1[0x18]

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t rcx_29 = arg1[0x16]

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

arg1[0x15].d = 0
int64_t rcx_30 = arg1[0x14]

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

arg1[0xd].d = 0

if (*(arg1 + 0x6c) != 0)
    sub_1405a5410(&arg1[0xc], 0)

arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
sub_14059a8e0(&arg1[0xe], 0)
int64_t rcx_33 = arg1[0x10]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int64_t rcx_34 = arg1[0xc]

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

DeleteCriticalSection(&arg1[7])
sub_141a906a0(&arg1[4])
int64_t rcx_37 = arg1[2]

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

*arg1 = &data_142e61298
return &data_142e61298
