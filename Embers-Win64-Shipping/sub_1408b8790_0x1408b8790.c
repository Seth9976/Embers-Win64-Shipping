// 函数: sub_1408b8790
// 地址: 0x1408b8790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 8)
int64_t rax
int64_t r8

if (rdx != 0)
    int64_t* rcx = data_143db18d0
    
    if (rcx == 0)
        sub_140a53c40()
        rdx = *(arg1 + 8)
        rcx = data_143db18d0
    
    r8.b = 1
    rax, r8 = (*(*rcx + 0xa8))(rcx, rdx, r8)
    *(arg1 + 8) = 0

int64_t rdx_1 = *(arg1 + 0x10)

if (rdx_1 != 0)
    int64_t* rcx_1 = data_143db18d0
    
    if (rcx_1 == 0)
        sub_140a53c40()
        rdx_1 = *(arg1 + 0x10)
        rcx_1 = data_143db18d0
    
    r8.b = 1
    rax, r8 = (*(*rcx_1 + 0xa8))(rcx_1, rdx_1, r8)
    *(arg1 + 0x10) = 0

int64_t rdx_2 = *(arg1 + 0x18)

if (rdx_2 != 0)
    int64_t* rcx_2 = data_143db18d0
    
    if (rcx_2 == 0)
        sub_140a53c40()
        rdx_2 = *(arg1 + 0x18)
        rcx_2 = data_143db18d0
    
    r8.b = 1
    rax, r8 = (*(*rcx_2 + 0xa8))(rcx_2, rdx_2, r8)
    *(arg1 + 0x18) = 0

int64_t rdx_3 = *(arg1 + 0x20)

if (rdx_3 == 0)
    return 

int64_t* rcx_3 = data_143db18d0

if (rcx_3 == 0)
    sub_140a53c40()
    rdx_3 = *(arg1 + 0x20)
    rcx_3 = data_143db18d0

r8.b = 1
(*(*rcx_3 + 0xa8))(rcx_3, rdx_3, r8)
*(arg1 + 0x20) = 0
