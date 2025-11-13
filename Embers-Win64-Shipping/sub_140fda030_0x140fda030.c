// 函数: sub_140fda030
// 地址: 0x140fda030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        void* rcx = *rbx
        
        if (rcx != 0)
            int32_t temp1_1 = *(rcx + 0x18)
            *(rcx + 0x18) -= 1
            
            if (temp1_1 == 1)
                (**(rcx + 0x10))(rcx + 0x10, 1)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx != 0)
    sub_140a74f90(rbx)
