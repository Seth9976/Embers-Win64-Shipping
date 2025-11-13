// 函数: sub_1407469d0
// 地址: 0x1407469d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d99c60
arg1[0x17].d = 0
int64_t rcx = arg1[0x16]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0xf].d = 0

if (*(arg1 + 0x7c) != 0)
    sub_140638cc0(&arg1[0xe], 0)

*(arg1 + 0xa4) = 0
arg1[0x14].d = 0xffffffff
sub_14059a8e0(&arg1[0x10], 0)
int64_t rcx_3 = arg1[0x12]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xe]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[0xd].d = 0
int64_t rcx_5 = arg1[0xc]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[5].d = 0

if (*(arg1 + 0x2c) != 0)
    sub_140638cc0(&arg1[4], 0)

arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
void* result = sub_14059a8e0(&arg1[6], 0)
int64_t rcx_8 = arg1[8]

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[4]

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t* rcx_10 = arg1[2]

if (rcx_10 != 0)
    int32_t rdi_1 = *(rcx_10 + 0xc)
    *(rcx_10 + 0xc) -= 1
    
    if (rdi_1 == 1 && rcx_10 != 0)
        return (*(*rcx_10 + 8))(rcx_10, zx.q(rdi_1))

return result
