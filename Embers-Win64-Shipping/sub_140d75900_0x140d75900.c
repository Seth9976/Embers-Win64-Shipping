// 函数: sub_140d75900
// 地址: 0x140d75900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ebfdf0
arg1[1] = &data_142ebfee0
int64_t* rcx = arg1[0xe]

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)

int64_t* rcx_1 = arg1[0xd]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t* rcx_2 = arg1[0xc]

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)

int64_t* rcx_3 = arg1[0xb]

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)

int64_t* rcx_4 = arg1[9]

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

int64_t* rcx_5 = arg1[8]

if (rcx_5 != 0)
    (*(*rcx_5 + 0x10))(rcx_5)

int64_t rcx_6 = arg1[5]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rdi = arg1[4]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
