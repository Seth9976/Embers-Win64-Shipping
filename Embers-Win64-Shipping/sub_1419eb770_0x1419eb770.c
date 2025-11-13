// 函数: sub_1419eb770
// 地址: 0x1419eb770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = &data_143017530

if (arg1[0x6f].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rbx_2 = *(rsi_1 + arg1[0x6e])
        int64_t* rcx = rbx_2[0xa]
        
        if (rcx == 0)
            bool z_1
            
            if (0 == rbx_2[8].d)
                rbx_2[8].d = 0
                z_1 = true
            else
                rbx_2[8].d
                z_1 = false
            
            if (not(z_1))
                sub_141a082d0(&rbx_2[1])
                rbx_2[8].d -= 1
            
            goto label_1419eb809
        
        if ((*(*rcx + 0x18))(rcx, rbx_2) == 0)
        label_1419eb809:
            
            if (rbx_2[0xa] != 0)
                int64_t* rcx_4 = rbx_2[9]
                (*(*rcx_4 + 0x20))(rcx_4, 0xffffffff, 0)
                rbx_2[0xa] = 0
        else
            sub_141a082d0(&rbx_2[1])
            rbx_2[8].d -= 1
            int64_t* rcx_2 = rbx_2[9]
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x10))(rcx_2)
            
            rbx_2[0xa] = 0
        
        (*(*rbx_2 + 0x10))(rbx_2, 1)
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[0x6f].d)

arg1[0x6f].d = 0

if (*(arg1 + 0x37c) != 0)
    sub_1405c5570(&arg1[0x6e], 0)

sub_1405ae080(&arg1[0xa2])
sub_1417ce5b0(&arg1[0x79])
int64_t rcx_9 = arg1[0x6e]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[0x6d].d = 0
int64_t rcx_10 = arg1[0x6c]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_1419ed710(&arg1[0x64], 0)
int64_t rcx_12 = arg1[0x68]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x64]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0x62]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x60]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x5e]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x59]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[0x56]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = arg1[0x52]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

return sub_1405ae4b0(arg1) __tailcall
