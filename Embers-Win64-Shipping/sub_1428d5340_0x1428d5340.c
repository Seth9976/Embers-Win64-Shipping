// 函数: sub_1428d5340
// 地址: 0x1428d5340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(8)
void* i = nullptr
int128_t* rax

if (arg3 u>= 0x40)
    void* r11_2 = arg4 - 1 + arg3
    
    if ((arg4 u> arg2 - 1 + arg3 || r11_2 u< arg2) && (arg4 u> arg3 - 1 + arg1 || r11_2 u< arg1))
        int128_t* r11_4 = arg1 - arg2
        rax = arg2
        void* rbx_2 = arg4 - arg2
        
        do
            int128_t zmm0 = *rax
            i += 0x40
            int128_t zmm1 = *(r11_4 + rax)
            int128_t zmm2 = *(r11_4 + rax + 0x10)
            rax = &rax[4]
            zmm1 ^= zmm0
            zmm0 = rax[-3]
            *(rbx_2 + rax - 0x40) = zmm1
            zmm2 ^= zmm0
            zmm0 = rax[-2]
            zmm1 = *(r11_4 + rax - 0x20)
            *(rbx_2 + rax - 0x30) = zmm2
            zmm1 ^= zmm0
            zmm0 = rax[-1]
            zmm2 = *(r11_4 + rax - 0x10)
            *(rbx_2 + rax - 0x20) = zmm1
            *(rbx_2 + rax - 0x10) = zmm2 ^ zmm0
        while (i u< (arg3 & 0xffffffffffffffc0))

if (i u>= arg3)
    return 

rax = i + arg2
void* i_2 = arg3 - i
void* i_1

do
    *(rax + arg4 - arg2) = *(rax + arg1 - arg2) ^ *rax
    rax += 1
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
