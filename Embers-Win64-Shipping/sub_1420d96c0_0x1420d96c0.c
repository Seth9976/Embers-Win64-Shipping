// 函数: sub_1420d96c0
// 地址: 0x1420d96c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[5].b & 2) == 0
int32_t arg_8 = 0

if (not(cond:0))
    int64_t* rcx = *arg2
    
    if (rcx != 0)
        int64_t rax_2 = (*(*rcx + 0x38))(rcx)
        int32_t rcx_1 = arg_8
        
        if (rax_2 != 0)
            rcx_1 = 2
        
        arg_8 = rcx_1

int64_t* rcx_2 = arg1[1]
int32_t* rdx = *rcx_2

if (&rdx[1] u> rcx_2[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    arg_8 = *rdx
    *rcx_2 += 4

if ((arg1[5].b & 1) == 0)
label_1420d98ba:
    int64_t* rcx_6 = *arg2
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x18))(rcx_6, arg1)
        
        if ((arg1[5].b & 1) != 0)
            if (arg_8 == 1)
                int64_t* rcx_7 = *arg2
                
                if (rcx_7 != 0)
                    (**rcx_7)(rcx_7, 1)
                
                *arg2 = 0
            
            if (arg1[8].d s< 0x131)
                int64_t* rcx_8 = *arg2
                
                if (rcx_8 != 0)
                    (**rcx_8)(rcx_8, 1)
                
                *arg2 = 0
else
    int32_t rax_6 = arg_8
    
    if (rax_6 != 0)
        if (rax_6 == 1)
            void*** rax_10 = j_sub_140a82f30(0x20)
            
            if (rax_10 == 0)
                *arg2 = nullptr
            else
                *rax_10 = &data_14301e9c8
                rax_10[1] = 0
                rax_10[2] = 0
                rax_10[3].b = 1
                *(rax_10 + 0x1c) = 0
                sub_1423d2320(data_1439c7a08)
                rax_10[3].b = 0
                *rax_10 = &data_1432c17d0
                *arg2 = rax_10
        else if (rax_6 == 2)
            void*** rax_8 = j_sub_140a82f30(0x100)
            
            if (rax_8 == 0)
                *arg2 = nullptr
            else
                *rax_8 = &data_14301e9c8
                rax_8[1] = 0
                rax_8[2] = 0
                rax_8[3].b = 1
                *(rax_8 + 0x1c) = 0
                rax_8[3].b = sub_1423d2320(data_1439c7a08)
                *rax_8 = &data_14301ea10
                *(rax_8 + 0x5c) = 0x3f800000
                *(rax_8 + 0x64) = 0
                *(rax_8 + 0x6c) = 0x3f800000
                *(rax_8 + 0x74) = 0
                *(rax_8 + 0x7c) = 0x3f800000
                *(rax_8 + 0x84) = 0
                *(rax_8 + 0x8c) = 0x3f800000
                *(rax_8 + 0x94) = 0
                *(rax_8 + 0x9c) = 0x3f800000
                *(rax_8 + 0xa4) = 0
                *(rax_8 + 0xac) = 0x3f800000
                *(rax_8 + 0xb4) = 0
                *(rax_8 + 0xbc) = 0x3f800000
                *(rax_8 + 0xc4) = 0
                *(rax_8 + 0xcc) = 0x3f800000
                rax_8[0x1c] = 0
                rax_8[0x1d].d = 0
                *(rax_8 + 0xec) = 0x3f800000
                __builtin_memset(&rax_8[4], 0, 0x3c)
                *arg2 = rax_8
        
        goto label_1420d98ba
    
    *arg2 = 0

return arg1
