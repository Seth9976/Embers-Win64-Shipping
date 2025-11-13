// 函数: sub_141b00070
// 地址: 0x141b00070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = &arg1[0x6c]
int64_t i

for (i = 4; i != 0; )
    rbx = &rbx[-0x14]
    i -= 1
    sub_1405ae180(&rbx[9])
    int32_t j_1 = rbx[8].d
    void* rax_1 = rbx[7]
    
    if (j_1 != 0)
        char* rax_2 = rax_1 + 4
        int32_t j
        
        do
            if (*rax_2 != 0)
                *rax_2 = 0
            
            rax_2 = &rax_2[8]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rax_1 = rbx[7]
    
    if (rax_1 != 0)
        sub_140a74f90(rax_1)
    
    int64_t rcx_2 = rbx[4]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t rcx_3 = rbx[2]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *rbx = &data_142d4bb80

int64_t* rbx_1 = arg1[0x1b]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q((i + 1).d))

sub_1408ec310(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
