// 函数: sub_142c714a0
// 地址: 0x142c714a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = data_143ccb898(0x40)

if (rax != 0)
    int64_t rax_1 = data_143ccb8b0(arg3)
    
    if (rax_1 != 0)
        int128_t* rcx_3
        int16_t rdx
        
        if (arg1 == 2)
            rcx_3 = &rax[4]
            *rcx_3 = *arg2
            rdx = 4
        label_142c71529:
            *(rax + 0x12) = rdx
            rax[3] = &rax[6]
            rax[1] = 0
            *rax = rax_1
            rax[2].w = arg1.w
            rax[6] = rcx_3
            *(rax[3] + 8) = 0
            void* result = sub_142c71300(rax, arg4)
            data_143ccb8a0(rax_1)
            data_143ccb8a0(rax)
            return result
        
        if (arg1 == 0x17)
            rcx_3 = &rax[4]
            rdx = 0x10
            *rcx_3 = *arg2
            goto label_142c71529
        
        data_143ccb8a0(rax_1)
    
    data_143ccb8a0(rax)

return nullptr
