// 函数: sub_140780610
// 地址: 0x140780610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1 + 0x48
int64_t rcx = *rsi

if (rcx != 0)
    sub_140a74f90(rcx)

for (int64_t i = 2; i != 0; )
    int32_t j_1 = rsi[-1].d
    rsi = &rsi[-2]
    void* rcx_1 = *rsi
    i -= 1
    
    if (j_1 != 0)
        void* rbx_1 = rcx_1 + 0x50
        int32_t j
        
        do
            int64_t rcx_2 = *(rbx_1 + 0x20)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_1 += 0xa0
            j = j_1
            j_1 -= 1
        while (j != 1)
        rcx_1 = *rsi
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

int64_t rcx_4 = *(arg1 + 8)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)
