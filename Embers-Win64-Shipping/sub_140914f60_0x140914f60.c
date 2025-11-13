// 函数: sub_140914f60
// 地址: 0x140914f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140914ad0(&arg1[0xa])
int32_t i_1 = arg1[8].d
int64_t* rbx = arg1[7]

if (i_1 != 0)
    int32_t i
    
    do
        if (rbx[1].d != 0)
            int64_t* rcx_1 = *rbx
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x38))(rcx_1, 0)
                int64_t rcx_2 = *rbx
                
                if (rcx_2 != 0)
                    *rbx = sub_140a84c80(rcx_2, 0, 0)
                
                rbx[1].d = 0
        
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[7]

if (rbx != 0)
    sub_140a74f90(rbx)

return sub_140d163b0(arg1) __tailcall
