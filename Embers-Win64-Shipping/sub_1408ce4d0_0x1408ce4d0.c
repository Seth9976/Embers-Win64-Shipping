// 函数: sub_1408ce4d0
// 地址: 0x1408ce4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x28)

if (rdi == 0)
    return 

int32_t i = 0
int128_t zmm6 = *((*(*rdi + 0x150))(rdi) + 0x520)

if (rdi[8].d s<= 0)
    return 

int64_t** r14_1 = nullptr

do
    int64_t* rbx_1 = *(r14_1 + rdi[7])
    rbx_1[0x26].d = zmm6.d
    sub_1408d2b00(rbx_1)
    sub_1408d30d0(rbx_1)
    sub_1408d23d0(rbx_1)
    sub_1408d1db0(rbx_1)
    zmm6 = sub_1408ceab0(rbx_1)
    sub_1408d27b0(rbx_1)
    i += 1
    r14_1 = &r14_1[1]
while (i s< rdi[8].d)
