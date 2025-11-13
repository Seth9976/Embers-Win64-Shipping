// 函数: sub_14141dda0
// 地址: 0x14141dda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r9_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &r9_2[3]

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    r9_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r9_2[3]

*(arg1 + 0x30) = rax
*(arg1 + 0x14) += 1
**(arg1 + 8) = r9_2
*(arg1 + 8) = &r9_2[1]
r9_2[1] = 0
*r9_2 = &data_142f7e230
r9_2[2] = arg3
int64_t rbp = data_1439c9150
int32_t r15 = *arg2

if (rbp == 0)
    sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
        r9_2)
    sub_140afbb40()

void*** rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_3[6]

if (rax_3 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_3[6]

*(arg1 + 0x30) = rax_3
int64_t* rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_3
*(arg1 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142f11598
rcx_3[2] = rbp
rcx_3[3].d = r15
*(rcx_3 + 0x1c) = 0
rcx_3[4] = 8
rcx_3[5].d = 0xc
*(rcx_3 + 0x2c) = 1
*arg2 += 8
void*** rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_9[3]

if (rax_6 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_9[3]

*(arg1 + 0x30) = rax_6
int64_t* rax_7 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_7 = rcx_9
*(arg1 + 8) = &rcx_9[1]
rcx_9[1] = 0
rcx_9[2] = arg3
*rcx_9 = &data_142f284f8
return &data_142f284f8
