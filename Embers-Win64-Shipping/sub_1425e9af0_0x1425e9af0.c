// 函数: sub_1425e9af0
// 地址: 0x1425e9af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[9] == 0
*arg1 = &data_14344a3d8

if (not(cond:0))
    int64_t entry_r9
    sub_140af98a0("Unknown", 0x18a, FNvVideoEncoder Shutdown not called before destruction.", 
        entry_r9)
    sub_140afbb40()

while (arg1[0x2f7] != 0)
    int64_t* rcx = arg1[0x2f7]
    arg1[0x2f7] = *rcx
    j_sub_140a74f90(rcx)

int64_t* rdi = arg1[0x2f5]

if (rdi != 0)
    int64_t* rcx_1 = rdi[1]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)
    
    int64_t* rcx_2 = *rdi
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x10))(rcx_2)
    
    j_sub_140a74f90(rdi)

sub_140846380(&arg1[0x2f2])
void* rdi_1 = arg1[0x2ed]

if (rdi_1 != 0)
    sub_1405970a0(rdi_1)
    j_sub_140a74f90(rdi_1)

int64_t i = 3
void* rdi_2 = &arg1[0x2f7]

do
    rdi_2 -= 0x98
    i -= 1
    int64_t* rcx_7 = *(rdi_2 + 0x18)
    
    if (rcx_7 != 0)
        (**rcx_7)(rcx_7, 1)
    
    sub_14081c9d0(rdi_2)
    sub_1405d1550(rdi_2 - 0x28)
while (i != 0)

DeleteCriticalSection(&arg1[0xee])
j_sub_140a74f90(arg1[0xa])
*arg1 = &data_143449ea0
int64_t rcx_12 = arg1[6]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

DeleteCriticalSection(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
