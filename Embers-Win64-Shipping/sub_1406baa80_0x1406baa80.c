// 函数: sub_1406baa80
// 地址: 0x1406baa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x8c) s> 0)
    void* r14_1 = arg1
    
    do
        int64_t* rbx_1 = *r14_1
        
        if (rbx_1 != 0)
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                av_frame_unref(rcx)
                avsubtitle_free(&rbx_1[1])
                av_frame_free(rbx_1)
            
            *rbx_1 = 0
            *(rbx_1 + 0x5c) = 0
        
        i += 1
        r14_1 += 8
    while (i s< *(arg1 + 0x8c))

__builtin_memset(arg1 + 0x80, 0, 0x18)
*(arg1 + 0xc8) = 0
