// 函数: sub_142432970
// 地址: 0x142432970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[8].d
int64_t* rsi = arg1

if (i_1 != 0)
    int32_t i
    
    do
        int32_t j_1 = rsi[1].d
        void* rcx = *rsi
        
        if (j_1 != 0)
            int64_t* rbx_1 = rcx + 0x10
            int32_t j
            
            do
                int64_t rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                rbx_1 = &rbx_1[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx = *rsi
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rsi = &rsi[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[8].d = 0

if (*(arg1 + 0x44) == arg2)
    return 

return sub_1422cfab0(arg1, arg2) __tailcall
