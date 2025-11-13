// 函数: sub_141d83300
// 地址: 0x141d83300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0xb]

if (rcx != 0)
    sub_140a74f90(rcx)

if (arg1[8].b != 0)
    arg1[8].b = 0
    int64_t* rdi_1 = arg1[6]
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
