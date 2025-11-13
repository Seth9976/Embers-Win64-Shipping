// 函数: sub_140ddfa20
// 地址: 0x140ddfa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x3d]
int32_t i_2 = arg1[0x3e].d

if (i_2 != 0)
    int64_t* rdi_1 = rcx + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_3 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx = arg1[0x3d]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_3 = arg1[0x3b]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t i_3 = arg1[8].d
void* rcx_4 = arg1[7]

if (i_3 != 0)
    int64_t* rdi_2 = rcx_4 + 8
    int32_t i_1
    
    do
        int64_t* rbx_2 = *rdi_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_2 = &rdi_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_4 = arg1[7]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140888ba0(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_9 = arg1[4]

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = *arg1

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10) __tailcall
