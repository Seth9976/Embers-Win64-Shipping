// 函数: sub_1428fecc0
// 地址: 0x1428fecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t* r10 = &arg2[2]
uint32_t r8_1 = zx.d(*arg1) << 8
*arg2 = r8_1
*arg2 = zx.d(arg1[1]) | r8_1
uint32_t r8_3 = zx.d(arg1[2]) << 8
arg2[1] = r8_3
arg2[1] = zx.d(arg1[3]) | r8_3
uint32_t rcx_1 = zx.d(arg1[4]) << 8
*r10 = rcx_1
*r10 = zx.d(arg1[5]) | rcx_1
uint32_t rcx_3 = zx.d(arg1[6]) << 8
arg2[3] = rcx_3
arg2[3] = zx.d(arg1[7]) | rcx_3
uint32_t rcx_5 = zx.d(arg1[8]) << 8
arg2[4] = rcx_5
arg2[4] = zx.d(arg1[9]) | rcx_5
uint32_t rcx_7 = zx.d(arg1[0xa]) << 8
arg2[5] = rcx_7
arg2[5] = zx.d(arg1[0xb]) | rcx_7
uint32_t rcx_9 = zx.d(arg1[0xc]) << 8
arg2[6] = rcx_9
arg2[6] = zx.d(arg1[0xd]) | rcx_9
uint32_t rcx_11 = zx.d(arg1[0xe]) << 8
arg2[7] = rcx_11
arg2[7] = zx.d(arg1[0xf]) | rcx_11
int32_t i = 0
void* result = &arg2[8]

do
    uint32_t r8_4 = *r10
    int32_t r11_1 = r10[-1]
    *result = zx.d((r8_4 u>> 7).w) | zx.d((r11_1 << 9).w)
    int32_t r9_1 = r10[1]
    *(result + 4) = zx.d((r9_1 u>> 7).w) | zx.d((r8_4 << 9).w)
    int32_t rdx_3 = r10[2]
    *(result + 8) = zx.d((r9_1 << 9).w) | zx.d((rdx_3 u>> 7).w)
    int32_t r8_6 = r10[3]
    *(result + 0xc) = zx.d((r8_6 u>> 7).w) | zx.d((rdx_3 << 9).w)
    int32_t rdx_5 = r10[4]
    *(result + 0x10) = zx.d((r8_6 << 9).w) | zx.d((rdx_5 u>> 7).w)
    int32_t r8_9 = r10[5]
    *(result + 0x14) = zx.d((r8_9 u>> 7).w) | zx.d((rdx_5 << 9).w)
    
    if (i s>= 5)
        break
    
    int32_t rdx_7 = r10[-2]
    i += 1
    r10 = &r10[8]
    *(result + 0x18) = zx.d((r8_9 << 9).w) | zx.d((rdx_7 u>> 7).w)
    *(result + 0x1c) = zx.d((rdx_7 << 9).w) | zx.d((r11_1 u>> 7).w)
    result += 0x20
while (i s< 6)

return result
