// 函数: sub_141c26130
// 地址: 0x141c26130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0xf4]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x4b]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int32_t i_2 = arg1[0x4a].d
void* rcx_2 = arg1[0x49]

if (i_2 != 0)
    int64_t* rbx_1 = rcx_2 + 0x530
    int32_t i
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[0xa8]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx_2 = arg1[0x49]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_4 = arg1[0x2e]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t i_3 = arg1[0x2c].d
int64_t* rbx_2 = arg1[0x2b]

if (i_3 != 0)
    int32_t i_1
    
    do
        if (rbx_2[1].d != 0)
            int64_t* rcx_5 = *rbx_2
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x38))(rcx_5, 0)
                int64_t rcx_6 = *rbx_2
                
                if (rcx_6 != 0)
                    *rbx_2 = sub_140a84c80(rcx_6, 0, 0)
                
                rbx_2[1].d = 0
        
        int64_t rcx_7 = *rbx_2
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = arg1[0x2b]

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int64_t rcx_9 = arg1[0x1c]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x1a]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x12]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0xe]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0xc]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_1423baf20(&arg1[6])
arg1[5] = &data_142d44da8
return sub_140d163b0(arg1) __tailcall
