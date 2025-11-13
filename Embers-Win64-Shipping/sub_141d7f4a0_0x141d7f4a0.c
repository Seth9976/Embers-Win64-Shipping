// 函数: sub_141d7f4a0
// 地址: 0x141d7f4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "ImageWriteQueue", 1)
j_sub_140b3db50()
int64_t* rax_1 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t rdx_1 = *rax_1
*(arg1 + 0xc0) = (*(rdx_1 + 0x40))(rax_1, rdx_1)
int64_t* var_10 = nullptr
int64_t var_18

if (arg1 + 0xc8 != &var_18)
    *(arg1 + 0xc8) = 0
    var_18 = 0
    sub_1405aeff0(arg1 + 0xd0, &var_10)
    int64_t* rcx_4 = var_10
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            int64_t* rbx_1 = var_10
            (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_6 = var_10
                (*(*rcx_6 + 8))(rcx_6, zx.q(rdi_1))

return sub_141d7f420(arg1) __tailcall
