// 函数: sub_14187f750
// 地址: 0x14187f750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
void* rsi = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rsi + 0x50)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int32_t j_1 = *(rsi + 0x40)
        int64_t* rbx_1 = *(rsi + 0x38)
        
        if (j_1 != 0)
            int32_t j
            
            do
                int64_t rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                rbx_1 = &rbx_1[2]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rbx_1 = *(rsi + 0x38)
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        int64_t rcx_3 = *(rsi + 0x28)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *rsi
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rsi += 0x68
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) == arg2)
    return 

return sub_1405fdf40(arg1, arg2) __tailcall
