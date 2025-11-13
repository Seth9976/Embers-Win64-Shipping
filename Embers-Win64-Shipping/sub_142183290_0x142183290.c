// 函数: sub_142183290
// 地址: 0x142183290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[5].b & 1) != 0)
    *arg2 = 0
    arg2[1] = 0

int64_t* rdx = arg1[1]
int32_t* rcx = *rdx

if (&rcx[1] u> rdx[1])
    int32_t* rdx_1 = arg2
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4

int64_t* rcx_2 = arg1[1]
int32_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    *(arg2 + 4) = *r8
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 4, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 4, 4)

if ((arg1[5].b & 1) != 0)
    int32_t rcx_4 = *arg2
    
    if (rcx_4 == 1)
        void*** rax_15 = j_sub_140a82f30(0xd0)
        
        if (rax_15 == 0)
            arg2[1] = nullptr
        else
            sub_1421a88d0(rax_15)
            *rax_15 = &data_1432e4298
            arg2[1] = rax_15
    else if (rcx_4 == 2)
        void*** rax_14 = j_sub_140a82f30(0x100)
        
        if (rax_14 == 0)
            arg2[1] = nullptr
        else
            sub_1421a88d0(rax_14)
            *rax_14 = &data_1432e4328
            __builtin_memset(&rax_14[0x1a], 0, 0x11)
            *(rax_14 + 0xe4) = 0
            *(rax_14 + 0xec) = 0
            rax_14[0x1e] = 0x3f800000
            rax_14[0x1f].d = 0
            arg2[1] = rax_14
    else if (rcx_4 == 3)
        void*** rax_12 = j_sub_140a82f30(0x160)
        
        if (rax_12 == 0)
            arg2[1] = 0
        else
            arg2[1] = sub_142180a80(rax_12)
    else if (rcx_4 == 4)
        void*** rax_10 = j_sub_140a82f30(0xf8)
        
        if (rax_10 == 0)
            arg2[1] = 0
        else
            arg2[1] = sub_142180b60(rax_10)
    else if (rcx_4 == 5)
        void*** rax_8 = j_sub_140a82f30(0xf0)
        
        if (rax_8 == 0)
            arg2[1] = 0
        else
            arg2[1] = sub_142180bc0(rax_8)
    else
        arg2[1] = 0

int64_t* rcx_14 = arg2[1]

if (rcx_14 != 0)
    (*(*rcx_14 + 8))(rcx_14, arg1)

return arg1
