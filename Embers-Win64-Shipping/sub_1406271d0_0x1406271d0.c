// 函数: sub_1406271d0
// 地址: 0x1406271d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x9d]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rcx_2 = arg1[0x98]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t i_1 = arg1[0x89].d
void* rcx_3 = arg1[0x88]

if (i_1 != 0)
    int64_t* rsi_1 = rcx_3 + 0x10
    int32_t i
    
    do
        int64_t* rbx_1 = *rsi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi_1 = &rsi_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_3 = arg1[0x88]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140627040(&arg1[0x7f])
sub_140627040(&arg1[0x7d])
sub_140627040(&arg1[0x7b])
int64_t rcx_9 = arg1[0x78]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* rbx_2 = arg1[0x75]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp7_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg1[0x73]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp9_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = arg1[0x71]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp10_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t rcx_16 = arg1[0x6e]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x6c]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[0x6a]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = arg1[0x60]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[0x5e]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

sub_140596eb0(&arg1[0x4e])
int64_t rcx_22 = arg1[0x47]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

arg1[0x44] = &data_142d6b458
return sub_1405ae4b0(arg1) __tailcall
