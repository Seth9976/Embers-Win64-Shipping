// 函数: sub_141821690
// 地址: 0x141821690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rsi + 0x48)
        
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
        
        int64_t rcx_3 = *(rsi + 0x10)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *rsi
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rsi += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)
    rsi = *arg1

if (rsi == 0)
    return 

return sub_140a74f90(rsi) __tailcall
