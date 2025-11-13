// 函数: sub_140596eb0
// 地址: 0x140596eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        if (rbx[1].d != 0)
            int64_t* rcx = *rbx
            
            if (rcx != 0)
                (*(*rcx + 0x38))(rcx, 0)
                int64_t rcx_1 = *rbx
                
                if (rcx_1 != 0)
                    *rbx = sub_140a84c80(rcx_1, 0, 0)
                
                rbx[1].d = 0
        
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
