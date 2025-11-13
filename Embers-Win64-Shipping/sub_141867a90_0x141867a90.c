// 函数: sub_141867a90
// 地址: 0x141867a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7948
arg1[0x4e].d
arg1[0x4e].d = 1

if (arg1[0x4c] != 0)
    while (true)
        void* rcx = arg1[0x4c]
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x70)
            
            if ((*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0) != 0)
                break

int64_t* rbx = arg1[0x4d]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

sub_140b30ae0(&arg1[0x33])
arg1[0x32].d = 0
int64_t rcx_5 = arg1[0x31]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_14059ad90(&arg1[0x29], 0)
int64_t rcx_7 = arg1[0x2d]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x29]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int32_t i_1 = arg1[0x28].d
int64_t* rbx_1 = arg1[0x27]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *rbx_1
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = arg1[0x27]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

DeleteCriticalSection(&arg1[0x22])
arg1[0x21].d = 0
int64_t rcx_12 = arg1[0x20]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_141866870(&arg1[0x18])
DeleteCriticalSection(&arg1[0x13])
j_sub_140a74f90(arg1[0xf])
DeleteCriticalSection(&arg1[9])
int64_t rcx_17 = arg1[5]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[3]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = arg1[1]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

*arg1 = &data_142d56fa0
return &data_142d56fa0
