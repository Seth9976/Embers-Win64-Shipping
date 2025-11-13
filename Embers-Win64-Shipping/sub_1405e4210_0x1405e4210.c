// 函数: sub_1405e4210
// 地址: 0x1405e4210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[5].b)
int32_t arg_10
int64_t arg_18

if ((result.b & 2) != 0)
    void* rax = *(arg1 + 0x50)
    int32_t rdi_1 = 0
    int64_t rax_1
    
    if (rax == 0)
        rax_1 = 0
    else
        rax_1 = *(rax + 0x10)
    
    arg_18 = rax_1
    arg_10 = 0
    
    if (arg2[0xe] != 0)
        if (rax_1 != 0)
            rdi_1 = 1
        
        arg_10 = rdi_1
    
    int64_t* rcx = arg2[1]
    int32_t* rdx = *rcx
    
    if (&rdx[1] u> rcx[1])
        int32_t* rdx_1 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_1, arg3)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_1, 4)
    else
        result = zx.q(*rdx)
        arg_10 = result.d
        *rcx += 4
    
    if (arg_10 s> 0)
        return (*(*arg2 + 0x130))(arg2, &arg_18)
else if ((result.b & 1) != 0)
    int64_t* rcx_3 = arg2[1]
    void*** rdi_2 = nullptr
    arg_10 = 0
    int32_t* rdx_3 = *rcx_3
    
    if (&rdx_3[1] u> rcx_3[1])
        int32_t* rdx_4 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_4, arg3)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_4, 4)
    else
        result = zx.q(*rdx_3)
        arg_10 = result.d
        *rcx_3 += 4
    
    if (arg_10 s> 0)
        int64_t rax_8 = *arg2
        arg_18 = 0
        (*(rax_8 + 0x130))(arg2, &arg_18)
        result = *(arg1 + 0x50)
        int64_t rsi_1 = arg_18
        
        if (result != 0)
            *(result + 0x10) = rsi_1
            return result
        
        if (rsi_1 != 0)
            void*** rax_9 = j_sub_140a82f30(0x18)
            
            if (rax_9 != 0)
                rdi_2 = sub_1405de320(rax_9, rsi_1)
            
            void arg_20
            result = &arg_20
            
            if (arg1 + 0x50 != &arg_20)
                void*** rcx_7 = *(arg1 + 0x50)
                *(arg1 + 0x50) = rdi_2
                
                if (rcx_7 != 0)
                    return (**rcx_7)(rcx_7, 1)
            else if (rdi_2 != 0)
                return (**rdi_2)(rdi_2, 1)
return result
