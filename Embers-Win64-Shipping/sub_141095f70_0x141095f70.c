// 函数: sub_141095f70
// 地址: 0x141095f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* r14 = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        void* rsi_1 = *r14
        
        if (rsi_1 != 0)
            int64_t j = 0x46
            void* rbx_1 = rsi_1 + 0x3f70
            
            do
                int64_t rcx = *(rbx_1 - 0x40)
                rbx_1 -= 0xe8
                j -= 1
                
                if (rcx != 0)
                    sub_140a74f90(rcx)
                
                sub_14125cf90(rbx_1)
            while (j != 0)
            
            j_sub_140a74f90(rsi_1)
        
        r14 = &r14[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) == arg2)
    return 

return sub_140638c50(arg1, arg2) __tailcall
