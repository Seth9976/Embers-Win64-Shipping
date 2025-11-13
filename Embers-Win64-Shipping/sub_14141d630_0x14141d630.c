// 函数: sub_14141d630
// 地址: 0x14141d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* r14 = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        void* rsi_1 = *r14
        
        if (rsi_1 != 0)
            int64_t j_1 = 0x78
            void* rbx_1 = rsi_1 + 0x3fc0
            int64_t j
            
            do
                rbx_1 -= 0x88
                sub_14125cf90(rbx_1)
                j = j_1
                j_1 -= 1
            while (j != 1)
            j_sub_140a74f90(rsi_1)
        
        r14 = &r14[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) == arg2)
    return 

return sub_140638c50(arg1, arg2) __tailcall
