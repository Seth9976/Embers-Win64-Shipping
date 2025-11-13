// 函数: sub_141025310
// 地址: 0x141025310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = arg2[5] + 0x20
arg1[0xe] = rax_1
int32_t rbx_2 = ((rax_1 - 1) & 0xffffffe0) + 0x20
arg1[0xf] = rbx_2
int32_t rdx = arg2[3]

if ((arg2[4] + rdx + arg2[2]) * arg2[5] != 0)
    int32_t rbx_3 = 0xf4240
    int32_t rax_3 = arg2[6] * rdx
    
    if (rax_3 u<= 0xf4240)
        rbx_3 = rax_3
    
    if (rbx_3 u<= 0x400)
        rbx_3 = 0x400
    
    int64_t* rax_4 = j_sub_140a82f30(0xf8)
    int64_t* rbp_1
    
    if (rax_4 == 0)
        rbp_1 = nullptr
    else
        rbp_1 = sub_14100b550(rax_4, arg3)
    
    *(arg1 + 0x70) = rbp_1
    sub_141025280(&rbp_1[1], rbx_3, 0)
    sub_141025280(&rbp_1[0xa], 0x800, 1)
    rbx_2 = arg1[0xf]

int32_t rcx_7 = *arg2
arg1[1] = rcx_7
arg1[4] = arg2[2]
*arg1 = arg2[3]
arg1[3] = arg2[4]
arg1[6] = 0
arg1[8] = (((rcx_7 << 6) - 1) & 0xffffffc0) + 0x40
arg1[9] = (((rcx_7 << 6) - 1) & 0xffffffc0) + 0x80
int32_t r9_3 = (((((rcx_7 << 6) - 1) & 0xffffffc0) + 0x7f + arg2[3] * rbx_2) & 0xffffffc0) + 0x40
arg1[0xa] = r9_3
int32_t r8_5 = ((arg2[4] * rbx_2 - 1 + r9_3) & 0xffffffc0) + 0x40
arg1[7] = r8_5
int32_t r10_1 = rbx_2 * arg2[2]
arg1[0xc] = divu.dp.d(0:(r9_3 - ((((rcx_7 << 6) - 1) & 0xffffffc0) + 0x80)), rbx_2)
arg1[0xb] = (((rcx_7 << 6) - 1) & 0xffffffc0) + 0x80
int32_t r10_4 = (r10_1 - 1 + r8_5) & 0xffffffc0
int32_t r8_6
r8_6.b = 1
arg1[0xd] = divu.dp.d(0:(r8_5 - ((((rcx_7 << 6) - 1) & 0xffffffc0) + 0x80)), rbx_2)
arg1[5] = divu.dp.d(0:(r10_4 + 0x40 - ((((rcx_7 << 6) - 1) & 0xffffffc0) + 0x80)), rbx_2)
sub_1410354b0(&arg1[0x12], r10_4 + 0x40, r8_6.b)
int64_t rdx_4
rdx_4.b = 1
jump(*(*(arg1 + 0x40) + 0x38))
