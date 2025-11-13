// 函数: sub_14215dfd0
// 地址: 0x14215dfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
bool arg_8 = *(arg2 + 0x10) != 0
bool* rdx = *rcx

if (&rdx[1] u> rcx[1])
    (*(*arg1 + 0x150))(arg1, &arg_8, 1)
else
    arg_8 = *rdx
    *rcx += 1

bool rax_1

if ((arg1[5].b & 1) == 0)
    rax_1 = *(arg2 + 0x10)
else
    rax_1 = arg_8 == 1
    *(arg2 + 0x10) = rax_1

if (rax_1 != 0)
    (*(*arg1 + 0x168))(arg1, arg2)
    int64_t* rcx_3 = arg1[1]
    int32_t* r8_1 = *rcx_3
    
    if (&r8_1[1] u<= rcx_3[1])
        *(arg2 + 4) = *r8_1
        int64_t* rax_6 = arg1[1]
        *rax_6 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, arg2 + 4, arg4)
    else
        (*(*arg1 + 0x150))(arg1, arg2 + 4, 4)
    
    if ((arg1[5].b & 1) == 0)
        sub_140ca89d0(arg1, arg2 + 8, arg3, arg4)
    else
        int32_t rax_8 = *(arg1 + 0x54)
        
        if (rax_8 u>= 9)
            if (rax_8 u< 0xa)
                (*(*arg1 + 0x140))(arg1, arg2 + 8)
                return arg1
            
            sub_140ca89d0(arg1, arg2 + 8, arg3, arg4)
        else
            int64_t arg_10 = 0
            uint64_t var_18 = 0
            int64_t var_10_1 = 0
            (*(*arg1 + 0x140))(arg1, &arg_10)
            sub_140a1d9d0(arg1, &var_18, arg4)
            uint64_t rcx_7 = var_18
            *(arg2 + 8) = arg_10
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)

return arg1
