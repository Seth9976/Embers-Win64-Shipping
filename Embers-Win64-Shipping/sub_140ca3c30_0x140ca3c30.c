// 函数: sub_140ca3c30
// 地址: 0x140ca3c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ca4120(arg1, arg2)
int64_t* r8 = arg2[1]
*(arg2 + 0x29) |= 4
int32_t* rcx = *r8
int64_t* result

if (&rcx[1] u<= r8[1])
    arg1[0x16].d = *rcx
    result = arg2[1]
    *result += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    result = sub_140b54070(arg2, &arg1[0x16], zmm1)
else
    result = (*(*arg2 + 0x150))(arg2, &arg1[0x16], 4)

if ((arg1[0x16].b & 0x40) != 0)
    int64_t* rcx_2 = arg2[1]
    int16_t arg_8 = 0
    int16_t* rdx_1 = *rcx_2
    
    if (&rdx_1[1] u> rcx_2[1])
        int16_t* rdx_2 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54000(arg2, rdx_2, zmm1)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_2, 2)
    else
        result = zx.q(*rdx_1)
        arg_8 = result.w
        *rcx_2 += 2

if (arg2[8].d s>= 0x1c3)
    (*(*arg2 + 0x130))(arg2, &arg1[0x19])
    int64_t* rcx_5 = arg2[1]
    int32_t* r8_1 = *rcx_5
    
    if (&r8_1[1] u<= rcx_5[1])
        arg1[0x1a].d = *r8_1
        result = arg2[1]
        *result += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, &arg1[0x1a], zmm1)
    else
        result = (*(*arg2 + 0x150))(arg2, &arg1[0x1a], 4)

if ((arg2[6].d & 0x1000) == 0)
    if ((arg2[5].b & 1) == 0)
        return result
    
    return sub_140be17b0(arg1)

int64_t* rcx_7 = arg2[1]
char* rdx_5 = *rcx_7

if (&rdx_5[1] u> rcx_7[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0xb4, 1)
else
    *(arg1 + 0xb4) = *rdx_5
    int64_t* rax_11 = arg2[1]
    *rax_11 += 1

int64_t* rcx_9 = arg2[1]
int16_t* r8_2 = *rcx_9

if (&r8_2[1] u<= rcx_9[1])
    *(arg1 + 0xb6) = *r8_2
    int64_t* rax_15 = arg2[1]
    *rax_15 += 2
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54000(arg2, arg1 + 0xb6, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xb6, 2)

int64_t* rcx_11 = arg2[1]
int16_t* r8_3 = *rcx_11

if (&r8_3[1] u<= rcx_11[1])
    arg1[0x17].w = *r8_3
    int64_t* rax_19 = arg2[1]
    *rax_19 += 2
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54000(arg2, &arg1[0x17], zmm1)
else
    (*(*arg2 + 0x150))(arg2, &arg1[0x17], 2)

jump(*(*arg2 + 0x128))
