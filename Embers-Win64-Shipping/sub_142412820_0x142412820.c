// 函数: sub_142412820
// 地址: 0x142412820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
int128_t zmm6 = zx.o(0)

if (rax_1 != 0)
    int32_t arg_8
    sub_14240da20(&arg1[0x4c], &arg_8, arg2)
    int64_t rcx_1 = sx.q(arg_8)
    void* const rcx_3
    
    if (rcx_1.d == 0xffffffff)
        rcx_3 = nullptr
    else
        rcx_3 = rcx_1 * 0xf0 + arg1[0x4c]
    
    void* rax_2 = rcx_3 + 0x18
    
    if (rcx_3 == 0)
        rax_2 = nullptr
    
    if (rax_2 != 0 && (*(rax_2 + 0x1c) & 1) != 0)
        zmm6.d = (*(rax_1 + 0x528)).d f- *(rax_2 + 0x18)

int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int512_t result
result.o = zmm6
return result
