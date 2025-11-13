// 函数: sub_141ad0020
// 地址: 0x141ad0020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x3a4)
void* rdi = *(arg1 + 0x398)
int32_t i_2 = *(arg1 + 0x3a0)

if (rax s< 0)
    if (i_2 != 0)
        void* rdi_2 = rdi + 0x1b8
        int32_t i
        
        do
            sub_14180c130(rdi_2)
            rdi_2 += 0x1f0
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax = *(arg1 + 0x3a4)
    
    *(arg1 + 0x3a0) = 0
    
    if (rax != 0)
        sub_141acb9d0(arg1 + 0x398, 0)
else
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 0x1b8
        int32_t i_1
        
        do
            sub_14180c130(rdi_1)
            rdi_1 = &rdi_1[0x3e]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x3a0) = 0

int32_t rax_1 = *(arg1 + 0x3d4)
*(arg1 + 0x3d0) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405fdf40(arg1 + 0x3c8, 0)

int32_t rax_2 = *(arg1 + 0x3e4)
*(arg1 + 0x3e0) = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405a5220(arg1 + 0x3d8, 0)

int32_t rax_3 = *(arg1 + 0x3f4)
*(arg1 + 0x3f0) = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_14090a730(arg1 + 0x3e8, 0)

int32_t rax_4 = *(arg1 + 0x424)
*(arg1 + 0x420) = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1405dadb0(arg1 + 0x418, 0)

int32_t rax_5 = *(arg1 + 0x414)
*(arg1 + 0x410) = 0

if (rax_5 s< 0 && rax_5 != 0)
    sub_1405a5410(arg1 + 0x408, 0)

int32_t rax_6 = *(arg1 + 0x404)
*(arg1 + 0x400) = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_140638cc0(arg1 + 0x3f8, 0)

int32_t result = *(arg1 + 0x3b4)
*(arg1 + 0x3b0) = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(arg1 + 0x3a8, 0)

return result
