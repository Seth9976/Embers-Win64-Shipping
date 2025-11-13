// 函数: sub_1425e9950
// 地址: 0x1425e9950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[9] == 0
*arg1 = &data_143449fe8

if (not(cond:0))
    int64_t entry_r9
    sub_140af98a0("Unknown", 0x104, FAmfVideoEncoder Shutdown not called before destruction.", 
        entry_r9)
    sub_140afbb40()

while (arg1[0x39] != 0)
    int64_t* rcx = arg1[0x39]
    arg1[0x39] = *rcx
    j_sub_140a74f90(rcx)

int64_t i = 3
void* rdi = &arg1[0x3d]

do
    int64_t* rcx_1 = *(rdi - 0x58)
    rdi -= 0x60
    i -= 1
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
    
    int64_t* rcx_2 = *rdi
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 8))(rcx_2)
    
    sub_1405d1550(rdi - 0x20)
while (i != 0)

sub_140846380(&arg1[0x10])
int64_t* rcx_5 = arg1[0xc]

if (rcx_5 != 0)
    (*(*rcx_5 + 8))(rcx_5)

int64_t* rcx_6 = arg1[0xb]

if (rcx_6 != 0)
    (*(*rcx_6 + 8))(rcx_6)

*arg1 = &data_143449ea0
int64_t rcx_7 = arg1[6]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

DeleteCriticalSection(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
