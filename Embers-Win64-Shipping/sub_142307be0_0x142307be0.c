// 函数: sub_142307be0
// 地址: 0x142307be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[5].b & 2) == 0
int32_t arg_8 = 0

if (not(cond:0))
    int64_t* rcx = *arg2
    
    if (rcx != 0)
        int64_t rax_2 = (*(*rcx + 0x30))(rcx)
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
label_142307cd7:
    int64_t* rcx_5 = *arg2
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x18))(rcx_5, arg1)
        
        if ((arg1[5].b & 1) != 0 && arg1[8].d s< 0x131)
            int64_t* rcx_6 = *arg2
            
            if (rcx_6 != 0)
                (**rcx_6)(rcx_6, 1)
            
            *arg2 = 0
else
    int32_t rax_6 = arg_8
    
    if (rax_6 != 0)
        if (rax_6 == 2)
            void*** rax_7 = j_sub_140a82f30(zx.q(rax_6 + 0x4e))
            void*** rdx_2 = rax_7
            
            if (rax_7 == 0)
                rdx_2 = nullptr
            else
                __builtin_memset(&rax_7[1], 0, 0x14)
                int32_t i = 0
                *rdx_2 = &data_1430200d0
                void* rax_8 = rdx_2 + 0x39
                __builtin_memset(&rdx_2[4], 0, 0x18)
                rdx_2[8] = 0
                rdx_2[9].d = 0
                *(rdx_2 + 0x4c) = 0x3f800000
                
                do
                    i += 4
                    *(rax_8 - 1) = 0
                    rax_8 += 4
                while (i u< 4)
            
            *arg2 = rdx_2
        
        goto label_142307cd7
    
    *arg2 = 0

return arg1
