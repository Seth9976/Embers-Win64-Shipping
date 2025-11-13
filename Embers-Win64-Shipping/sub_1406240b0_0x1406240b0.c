// 函数: sub_1406240b0
// 地址: 0x1406240b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_5 = arg1[0x5f].d
int64_t* rbx = arg1[0x5e]

if (i_5 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[3]
        i = i_5
        i_5 -= 1
    while (i != 1)
    rbx = arg1[0x5e]

if (rbx != 0)
    sub_140a74f90(rbx)

void* i_1 = arg1[0x5a]

for (void* rbp_2 = (sx.q(arg1[0x5b].d) << 4) + i_1; i_1 != rbp_2; i_1 += 0x10)
    void* rsi = *(i_1 + 8)
    
    if (rsi != 0)
        sub_140bc0410(rsi)
        j_sub_140a74f90(rsi)

arg1[0x5b].d = 0

if (*(arg1 + 0x2dc) != 0)
    sub_14061cd70(&arg1[0x5a], 0)

int64_t rcx_5 = arg1[0x5a]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140bc0410(&arg1[0x54])
int64_t rcx_7 = arg1[0x52]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_141f7baf0(&arg1[0x47])
int32_t i_4 = arg1[0x44].d
void* rcx_9 = arg1[0x43]

if (i_4 != 0)
    int64_t* rsi_1 = rcx_9 + 8
    int32_t i_2
    
    do
        int64_t* rbx_1 = *rsi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_3 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi_1 = &rsi_1[4]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rcx_9 = arg1[0x43]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_12 = arg1[0x3d]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x3a]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

DeleteCriticalSection(&arg1[0x35])
int64_t rcx_15 = arg1[0x32]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int32_t i_6 = arg1[0x31].d
int64_t* rbx_2 = arg1[0x30]

if (i_6 != 0)
    int32_t i_3
    
    do
        int64_t rcx_16 = *rbx_2
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        rbx_2 = &rbx_2[3]
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)
    rbx_2 = arg1[0x30]

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int64_t rcx_18 = arg1[0x2e]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

return sub_140623f60(arg1) __tailcall
