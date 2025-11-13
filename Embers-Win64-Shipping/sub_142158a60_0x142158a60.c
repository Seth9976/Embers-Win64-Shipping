// 函数: sub_142158a60
// 地址: 0x142158a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(*(arg1 + 0x24e))
uint32_t rdx_1 = r9 - zx.d(*(arg1 + 0x250))
int64_t rcx

if ((rdx_1 & 0x3fff) u>= 0x2000)
    rcx = 0x100
else
    rcx = sx.q(rdx_1 << 0x12 s>> 0x12)

int64_t* i_1 = 8
uint64_t rcx_2 = (rcx + 0x1f) u>> 5
uint64_t rax_3

if (rcx_2 u>= 1)
    rax_3 = 8
    
    if (rcx_2 u< 8)
        rax_3 = rcx_2
else
    rax_3 = 1

uint64_t rdx_4

if (arg3 == 0)
    rdx_4 = rax_3
else
    rdx_4 = *(arg1 + 0x220)
    
    if (rax_3 u> rdx_4)
        rax_3.b = 0
        return rax_3

int32_t rcx_4 = zx.d(*(arg1 + 0x252)) & 0x3fff
*(arg1 + 0x228) = r9.w
*(arg1 + 0x220) = rdx_4
int32_t arg_18 = (rcx_4 << 0xe | (r9 & 0x3fff)) << 4 | ((rdx_4 - 1).d & 0xf)
int64_t* rcx_9 = arg2[1]
int32_t* rdx_5 = *rcx_9

if (&rdx_5[1] u> rcx_9[1])
    int32_t* rdx_6 = &arg_18
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_6, arg4)
    else
        (*(*arg2 + 0x150))(arg2, rdx_6, 4)
else
    arg_18 = *rdx_5
    *rcx_9 += 4

int64_t* i_2 = *(arg1 + 0x220)

if (i_2 u<= 8)
    i_1 = i_2

if (i_1 != 0)
    void* rdi_1 = arg1 + 0x22c
    int64_t* i
    
    do
        int64_t* rcx_11 = arg2[1]
        int32_t arg_8 = *rdi_1
        int32_t* rdx_7 = *rcx_11
        
        if (&rdx_7[1] u> rcx_11[1])
            int32_t* rdx_8 = &arg_8
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_8, arg4)
            else
                (*(*arg2 + 0x150))(arg2, rdx_8, 4)
        else
            arg_8 = *rdx_7
            *rcx_11 += 4
        
        rdi_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

i_2.b = 1
return i_2
