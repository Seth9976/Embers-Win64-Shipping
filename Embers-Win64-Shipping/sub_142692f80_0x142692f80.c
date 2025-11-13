// 函数: sub_142692f80
// 地址: 0x142692f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = j_sub_140ce8e10(arg1, arg2)
int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    arg1[0x94].d = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[0x94], zmm1)
else
    (*(*arg2 + 0x150))(arg2, &arg1[0x94], 4)

int64_t rax_4 = *arg2
int32_t arg_8 = 0
int64_t rax_5 = (*(rax_4 + 0x20))(arg2)
int64_t* rdx_1 = arg2[1]
int32_t* rax_6 = *rdx_1

if (&rax_6[1] u> rdx_1[1])
    int32_t* rdx_2 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_2, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_2, 4)
else
    arg_8 = *rax_6
    *rdx_1 += 4

int64_t* result = zx.q(arg2[5].b)

if ((result.b & 1) == 0)
    int64_t* rcx_13 = arg1[0x95]
    
    if (rcx_13 != 0)
        zmm1 = sub_1426931b0(rcx_13, arg2, arg1[0x94].d, zmm1)
        result = zx.q(arg2[5].b)
    
    if ((result.b & 2) != 0)
        int64_t rax_12 = (*(*arg2 + 0x20))(arg2)
        int64_t r8_3 = *arg2
        arg_8 = rax_12.d - rax_5.d
        (*(r8_3 + 0x178))(arg2, rax_5, r8_3)
        int64_t* rdx_10 = arg2[1]
        int32_t* r8_4 = *rdx_10
        
        if (&r8_4[1] u> rdx_10[1])
            int32_t* rdx_11 = &arg_8
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_11, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_11, 4)
        else
            arg_8 = *r8_4
            *rdx_10 += 4
        
        return (*(*arg2 + 0x178))(arg2, rax_12)
else
    int32_t rsi_1 = arg1[0x94].d
    
    if (rsi_1 u< 0xd)
        (*(*arg2 + 0x178))(arg2, zx.q(arg_8) + rax_5)
        return (*(*arg1 + 0x630))(arg1)
    
    uint64_t rcx_8 = zx.q(arg_8)
    
    if (rcx_8.d u<= 4)
        result = (*(*arg2 + 0x178))(arg2, rcx_8 + rax_5)
        void* rcx_12 = arg1[0x95]
        
        if (rcx_12 != 0)
            return sub_142691f30(rcx_12)
    else
        result = arg1[0x95]
        
        if (result != 0)
            return sub_1426931b0(result, arg2, rsi_1, zmm1)
        
        result = j_sub_140a82f30(0xe0)
        
        if (result != 0)
            result = sub_142670630(result, arg1)
        
        arg1[0x95] = result
        
        if (result != 0)
            return sub_1426931b0(result, arg2, rsi_1, zmm1)

return result
