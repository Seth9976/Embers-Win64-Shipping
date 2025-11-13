// 函数: sub_1423570c0
// 地址: 0x1423570c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x10]

if (rdi != 0)
    sub_1422dbf10(&rdi[5])
    int64_t rcx_1 = *rdi
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    j_sub_140a74f90(rdi)

int64_t rcx_3 = arg1[0xe]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[5]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
