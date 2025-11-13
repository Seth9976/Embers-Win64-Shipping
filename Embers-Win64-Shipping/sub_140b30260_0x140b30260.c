// 函数: sub_140b30260
// 地址: 0x140b30260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143de8178 = 0
*(arg1 + 0x50) += 1
int64_t* rcx = *(arg1 + 0x40)

if (rcx != 0)
    (*(*rcx + 0x28))(rcx, 1)
    *(arg1 + 0x40) = 0

int64_t* rcx_1 = *(arg1 + 0x48)

if (rcx_1 != 0)
    sub_140a4fc50(rcx_1)
    *(arg1 + 0x48) = 0

int64_t* rdi = data_143de8160

if (rdi != 0)
    int64_t rcx_2 = *rdi
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    j_sub_140a74f90(rdi)
    data_143de8160 = 0

int64_t* rdi_1 = data_143de8168

if (rdi_1 != 0)
    int64_t rcx_4 = *rdi_1
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    j_sub_140a74f90(rdi_1)
    data_143de8168 = 0

sub_140596eb0(arg1 + 0x128)
sub_140596eb0(arg1 + 0x110)
sub_140596eb0(arg1 + 0xf8)
DeleteCriticalSection(arg1 + 0xc0)
sub_140b2fad0(arg1 + 0xb0)
*(arg1 + 0xa0) = 0
int64_t rcx_11 = *(arg1 + 0x98)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* result = sub_1405e1b50(arg1 + 0x58, 0)
int64_t rcx_13 = *(arg1 + 0x78)

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = *(arg1 + 0x58)

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

for (void* i = *(arg1 + 0x38); i != 0; i = *(arg1 + 0x38))
    result = *(arg1 + 0x38)
    *(arg1 + 0x38) = *result
    
    if (i != 0)
        sub_140b301d0(i + 8)
        result = j_sub_140a74f90(i)

int64_t rcx_17 = *(arg1 + 0x20)

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
