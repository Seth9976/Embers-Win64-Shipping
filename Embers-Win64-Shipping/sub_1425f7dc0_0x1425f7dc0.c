// 函数: sub_1425f7dc0
// 地址: 0x1425f7dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

int64_t* rcx = rbx[0xc]
*rbx = &data_14344b868

if (rcx != 0)
    (*(*rcx + 0x38))(rcx, rbx)
    int64_t* rcx_1 = rbx[0xc]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)
        rbx[0xc] = 0

if (rbx[0xd].b != 0)
    CoUninitialize()

rbx[0xb].d = 0
int64_t rcx_2 = rbx[0xa]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1425f77b0(&rbx[2])
j_sub_140a74f90(rbx)
