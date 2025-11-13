// 函数: sub_140d39e20
// 地址: 0x140d39e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *arg1

if (rdi == 0)
    return 

int32_t temp0_1 = *rdi
*rdi -= 1

if (temp0_1 != 1)
    return 

rdi[0x1e] = 0
int64_t rcx = *(rdi + 0x70)

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = rdi[0xf] == 0
rdi[0xe] = 0

if (not(cond:0))
    sub_1405a5410(&rdi[0xc], 0)

rdi[0x18] = 0xffffffff
rdi[0x19] = 0
sub_14059a8e0(&rdi[0x10], 0)
int64_t rcx_3 = *(rdi + 0x50)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(rdi + 0x30)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(rdi + 0x20)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = *(rdi + 0x10)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return j_sub_140a74f90(rdi) __tailcall
