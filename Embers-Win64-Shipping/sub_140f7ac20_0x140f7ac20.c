// 函数: sub_140f7ac20
// 地址: 0x140f7ac20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx

if (arg1[4] == 0)
    rbx.b = 0
else
    int64_t* rcx = *(arg1 + 8)
    
    if (rcx == 0)
        rbx.b = 0
    else if ((*(*rcx + 0x28))(rcx).b == 0)
        rbx.b = 0
    else
        rbx.b = 1

uint64_t result

if (arg2[4] == 0)
    result.b = 0
else
    int64_t* rcx_1 = *(arg2 + 8)
    
    if (rcx_1 == 0)
        result.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1).b == 0)
        result.b = 0
    else
        result.b = 1

if (rbx.b == result.b)
    if (rbx.b != 0)
        int64_t rbx_1 = 0
        int64_t rdi = 0
        
        if (arg2[4] != 0)
            int64_t* rcx_2 = *(arg2 + 8)
            void arg_8
            
            if (rcx_2 != 0)
                rdi = *(*(*rcx_2 + 0x30))(rcx_2, &arg_8)
        
        if (arg1[4] != 0)
            int64_t* rcx_3 = *(arg1 + 8)
            void arg_10
            
            if (rcx_3 != 0)
                rbx_1 = *(*(*rcx_3 + 0x30))(rcx_3, &arg_10)
        
        result.b = rbx_1 == rdi
        return result
    
    if (arg1[1].b == arg2[1].b && *arg1 == *arg2)
        result.b = 1
        return result

result.b = 0
return result
