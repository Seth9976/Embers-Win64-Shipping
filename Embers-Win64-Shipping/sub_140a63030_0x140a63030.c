// 函数: sub_140a63030
// 地址: 0x140a63030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg1[4]

if (rdi != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    (*(*rcx + 0x30))(rcx, rdi)

int64_t rdi_1 = arg1[2]

if (rdi_1 != 0)
    int64_t* rcx_1 = data_143ddb3f0
    
    if (rcx_1 == 0)
        sub_140a750a0()
        rcx_1 = data_143ddb3f0
    
    (*(*rcx_1 + 0x30))(rcx_1, rdi_1)

int64_t rbx_1 = *arg1

if (rbx_1 == 0)
    return 

int64_t* rcx_2 = data_143ddb3f0

if (rcx_2 == 0)
    sub_140a750a0()
    rcx_2 = data_143ddb3f0

(*(*rcx_2 + 0x30))(rcx_2, rbx_1)
