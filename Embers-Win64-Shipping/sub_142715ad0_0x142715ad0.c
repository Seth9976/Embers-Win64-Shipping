// 函数: sub_142715ad0
// 地址: 0x142715ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140ba6bd0(arg1 + 0x78, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x38 + *(arg1 + 0x78)

int32_t* rcx_1 = *(arg1 + 0xd8)
int64_t* rdi = rax_2 + 8

if (rax_2 == 0)
    rdi = nullptr

if (rcx_1 != 0 && rdi != 0)
    sub_142615c00(rcx_1, rdi[3].d)
    void var_28
    
    if (rdi != &var_28)
        *rdi = 0
        int64_t* rbx_1 = rdi[1]
        
        if (rbx_1 != 0)
            rdi[1] = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

return sub_14270ad30(arg1 + 0x78, arg2) __tailcall
