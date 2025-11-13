// 函数: sub_1422ab580
// 地址: 0x1422ab580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = arg3
int64_t* r9 = arg2[1]
int32_t* rcx = *r9

if (&rcx[1] u<= r9[1])
    *(arg1 + 0x30) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x30, arg4)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x30, 4)

int64_t* rcx_2 = arg2[1]
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u<= rcx_2[1])
    *(arg1 + 0x34) = *rdx_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x34, arg4)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x34, 4)

if ((arg2[5].b & 1) != 0)
    sub_14228fdd0(arg1, arg3)

void* rcx_6 = *(arg1 + 0x20)
int64_t result = rcx_6 s>> 1
void* r8 = result + arg1 + 0x20
char rdx_4 = *(arg1 + 0x20) & 1

if (rdx_4 == 0)
    r8 = rcx_6

if (r8 != 0)
    if (rdx_4 != 0)
        rcx_6 = arg1 + 0x20 + result
    
    (*(*rcx_6 + 0x40))(rcx_6, arg2, 0)
    
    if (*(arg1 + 0x34) == 0)
        result = 0
    else
        void* rcx_7 = *(arg1 + 0x20)
        
        if ((rcx_7.b & 1) != 0)
            rcx_7 = (rcx_7 s>> 1) + arg1 + 0x20
        
        result = (*(*rcx_7 + 0x30))(rcx_7)
    
    *(arg1 + 0x28) = result

return result
