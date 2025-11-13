// 函数: sub_1405dfa20
// 地址: 0x1405dfa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x3b0)

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1405ded70(arg1 + 0x398)
int64_t* rcx_2 = *(arg1 + 0x390)

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        (**rcx_2)(rcx_2, 1)

int64_t result = sub_1405df7f0(arg1 + 0x98)
int64_t rcx_4 = *(arg1 + 0x88)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x78)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 0x68)

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0x58)

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int32_t i_1 = *(arg1 + 0x50)
int64_t* rdi = *(arg1 + 0x48)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_8 = *rdi
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        rdi = &rdi[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = *(arg1 + 0x48)

if (rdi != 0)
    result = sub_140a74f90(rdi)

int64_t rcx_10 = *(arg1 + 0x30)

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = *(arg1 + 0x20)

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = *(arg1 + 0x10)

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
