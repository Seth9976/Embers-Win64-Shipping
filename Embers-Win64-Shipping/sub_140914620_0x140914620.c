// 函数: sub_140914620
// 地址: 0x140914620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[9].d
int64_t* rbx = arg1[8]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[8]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_2 = arg1[6]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
