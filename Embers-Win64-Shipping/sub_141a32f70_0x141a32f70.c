// 函数: sub_141a32f70
// 地址: 0x141a32f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x2f8)

if (rcx != 0)
    sub_140a74f90(rcx)

sub_141a32c50(arg1 + 0x1e8)
*(arg1 + 0x1e0) = 0
int64_t rcx_2 = *(arg1 + 0x1d8)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_141a32930(arg1 + 0x198)
sub_141a31fc0(arg1 + 0x188)
int64_t rcx_5 = *(arg1 + 0x178)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* rdi_1 = *(arg1 + 0x150)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_1405ae180(arg1 + 0xf8)
int64_t rcx_9 = *(arg1 + 0xe8)

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = *(arg1 + 0xd8)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_1405ae180(arg1 + 0x88)
int64_t rcx_12 = *(arg1 + 0x78)

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = *(arg1 + 0x68)

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return sub_1405ae080(arg1 + 0x18) __tailcall
