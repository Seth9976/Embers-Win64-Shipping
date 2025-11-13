// 函数: sub_14240faf0
// 地址: 0x14240faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142403cf0(arg1)
int32_t arg_8
sub_140d446e0(arg1 + 0x170, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const result

if (rax.d == 0xffffffff)
    result = nullptr
else
    result = rax * 0x30 + *(arg1 + 0x170)

int128_t* rcx_1 = result + 0x18

if (result == 0)
    rcx_1 = nullptr

if (rcx_1 == 0)
    int64_t* rbx_2 = arg2[2]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    result.b = 0
    return result

*arg3 = *rcx_1
int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

result.b = 1
return result
