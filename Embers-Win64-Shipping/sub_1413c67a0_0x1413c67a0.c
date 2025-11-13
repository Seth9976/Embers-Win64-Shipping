// 函数: sub_1413c67a0
// 地址: 0x1413c67a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int32_t* rdi = arg1[1]
void* r11 = rdx + 0x62f0
int64_t r8 = sx.q(*rdi)

if (*(rdx + 0x6314) != 0)
    *(*(rdx + 0x62e0) + (sx.q(*(rdx + 0x6310)) << 3)) = r8.d

int32_t* rcx_2 = *(rdx + 0x62e0) + (r8 << 3)
int32_t rax_3 = -1
*rcx_2 = 0xffffffff

if (*(rdx + 0x6314) s> 0)
    rax_3 = *(rdx + 0x6310)

rcx_2[1] = rax_3
*(rdx + 0x6314) += 1
*(rdx + 0x6310) = r8.d
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r8.d)
void* rcx_3 = *(r11 + 0x10)

if (rcx_3 != 0)
    r11 = rcx_3

int64_t rdx_3 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r11 + (rdx_3 << 2)) &= not.d(rol.d(1, r8.b))
sub_1414fb910(rdi)
j_sub_140a74f90(rdi)
return sub_1414047a0(*arg1) __tailcall
