// 函数: sub_140747130
// 地址: 0x140747130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x7e]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

int64_t* rdi = arg1[0x7a]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_1407481d0(&arg1[0x76], arg1[0x76])
int32_t i_2 = arg1[0x72].d
void* rcx_4 = arg1[0x71]

if (i_2 != 0)
    void* rdi_1 = rcx_4 + 0x50
    int32_t i
    
    do
        int64_t rcx_5 = *(rdi_1 + 0x10)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *rdi_1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rdi_1 += 0x70
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx_4 = arg1[0x71]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t i_3 = arg1[0x70].d
void* rcx_7 = arg1[0x6f]

if (i_3 != 0)
    void* rdi_2 = rcx_7 + 0x50
    int32_t i_1
    
    do
        int64_t rcx_8 = *(rdi_2 + 0x10)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *rdi_2
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rdi_2 += 0x70
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_7 = arg1[0x6f]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_10 = arg1[0x5e]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x53]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x51]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x4f]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0x48]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x45]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x43]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

arg1[0x3e] = &data_142d995f8
int64_t rcx_17 = arg1[0x2e]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

sub_140596eb0(&arg1[0x2b])
int64_t rcx_19 = arg1[0x1c]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[0x1a]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = arg1[0x12]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = arg1[0xe]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = arg1[0xc]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

sub_1423baf20(&arg1[6])
arg1[5] = &data_142d44da8
return sub_140d163b0(arg1) __tailcall
