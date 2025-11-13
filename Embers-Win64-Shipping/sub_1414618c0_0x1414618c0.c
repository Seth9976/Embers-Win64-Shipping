// 函数: sub_1414618c0
// 地址: 0x1414618c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 0x15a8)
int64_t* rcx = *(arg1 + 0x4d48)
int64_t* rdi = *arg2
*arg2 = rcx

if (rcx != 0)
    (*(*rcx + 0x30))()

if (rdi != 0)
    (*(*rdi + 0x38))(rdi)

int64_t* rcx_2 = *(arg1 + 0x4d50)
int64_t* rdi_1 = arg2[1]
arg2[1] = rcx_2

if (rcx_2 != 0)
    (*(*rcx_2 + 0x30))()

if (rdi_1 != 0)
    (*(*rdi_1 + 0x38))(rdi_1)

int64_t* rcx_4 = *(arg1 + 0x4d58)
int64_t* rdi_2 = arg2[2]
arg2[2] = rcx_4

if (rcx_4 != 0)
    (*(*rcx_4 + 0x30))()

if (rdi_2 != 0)
    (*(*rdi_2 + 0x38))(rdi_2)

int64_t* rcx_6 = *(arg1 + 0x4d78)
int64_t* rdi_3 = arg2[3]
arg2[3] = rcx_6

if (rcx_6 != 0)
    (*(*rcx_6 + 0x30))()

if (rdi_3 != 0)
    (*(*rdi_3 + 0x38))(rdi_3)

arg2[4] = rbp + 0x888
arg2[5] = rbp + 0x890
arg2[6] = rbp + 0x898
arg2[7] = rbp + 0x8b8
return rbp + 0x8b8
