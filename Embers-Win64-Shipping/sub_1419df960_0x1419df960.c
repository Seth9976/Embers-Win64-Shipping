// 函数: sub_1419df960
// 地址: 0x1419df960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[3].d
int64_t* rbx = arg1[2]

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
    rbx = arg1[2]

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t rax_3 = arg1[1].d
int64_t* rcx_4
int64_t* r8

if (rax_3 == 0)
    r8 = *arg1
    rcx_4 = nullptr
else
    rcx_4 = *arg1
    r8 = rcx_4

int64_t rax_4

if (rcx_4 != 0)
    rax_4 = *rcx_4
label_1419dfa16:
    (*(rax_4 + 0x38))(rcx_4, 0)
    int64_t rcx_5 = *arg1
    
    if (rcx_5 != 0)
        *arg1 = sub_140a84c80(rcx_5, 0, 0)
    
    arg1[1].d = 0
else if (rax_3 != 0 && r8 != 0)
    rax_4 = *r8
    rcx_4 = r8
    goto label_1419dfa16
int64_t rcx_6 = *arg1

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
