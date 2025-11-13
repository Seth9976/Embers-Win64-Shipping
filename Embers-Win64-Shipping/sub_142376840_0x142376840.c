// 函数: sub_142376840
// 地址: 0x142376840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = arg1[1]
int64_t* rdi = nullptr
int64_t r8 = *r9
int64_t result
bool cond:1

if (r8 + 4 u> r9[1])
    int32_t rax_1
    rax_1.b = arg5 != 0
    arg5.d = rax_1
    result = (*(*arg1 + 0x150))(arg3, &arg5, 4)
    cond:1 = arg5.d != 0
else
    cond:1 = *r8 != 0
    result = r8 + 4
    *r9 = result

if (cond:1 == 0)
    return result

int64_t* rax_3 = j_sub_140a82f30(0x20)

if (rax_3 != 0)
    rdi = sub_1423501a0(rax_3)

void arg_18

if (arg2 + 0x58 != &arg_18)
    void* rdx_1 = *(arg2 + 0x58)
    *(arg2 + 0x58) = rdi
    arg4 = sub_142355710(arg2 + 0x58, rdx_1)
else if (rdi != 0)
    int64_t* rbx_1 = rdi[3]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_7 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = rdi[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rsi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))
    
    arg4 = j_sub_140a74f90(rdi)

sub_1409b1e20(**(arg2 + 0x58), arg1, 0, arg4)
return sub_141a045d0(*(*(arg2 + 0x58) + 0x10), arg1, 0, arg4) __tailcall
