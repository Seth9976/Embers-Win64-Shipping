// 函数: sub_140db8590
// 地址: 0x140db8590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i_2 = *(arg1 + 0x190)
int32_t* i = arg1
int32_t* i_1 = arg1

if (i_2 != 0)
    i = i_2

for (; i != &i[sx.q(arg1[0x66])]; i = &i[1])
    if (*i == *(arg2 + 8))
        return i

*(arg2 + 0x1b) |= 2
int64_t rdi_1 = sx.q(i_1[0x66])
int32_t rax = (rdi_1 + 1).d
i_1[0x66] = rax

if (rax s> i_1[0x67])
    sub_140dbc540(i_1, rdi_1.d)

int32_t* i_4 = *(i_1 + 0x190)
int32_t* i_3 = i_1

if (i_4 != 0)
    i_3 = i_4

i_3[rdi_1] = *(arg2 + 8)
i = *(i_1 + 0x190)
int32_t r8_2 = i_1[0x66] - 1

if (i != 0)
    i_1 = i

if (r8_2 s> 0)
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r8_2 - 1)
        i = zx.q((temp1_1 - temp0_1) s>> 1)
        void* rdx_3 = &i_1[sx.q(i.d)]
        int64_t rcx_3 = sx.q(r8_2)
        int32_t r8_3 = *rdx_3
        int32_t r9_1 = i_1[rcx_3]
        
        if (r8_3 s>= r9_1)
            break
        
        i_1[rcx_3] = r8_3
        r8_2 = i.d
        *rdx_3 = r9_1
    while (i.d s> 0)

return i
