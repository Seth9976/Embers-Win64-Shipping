// 函数: sub_140ec0a30
// 地址: 0x140ec0a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
int64_t* rcx = *(arg1 + 8)
int64_t* r14 = arg2

if (rcx != 0 && *(arg1 + 0x20) != 0)
    arg2.b = 8
    sub_140e19ef0(rcx, arg2.b)

int32_t rbp = *(arg1 + 0x18)
*(arg1 + 0x18) = rbp + 1

if (rbp + 1 s> *(arg1 + 0x1c))
    sub_1405a4f90(arg1 + 0x10)

int64_t rdx_2 = *(arg1 + 0x10) + (r15 << 4)
memmove(rdx_2 + 0x10, rdx_2, (rbp - r15.d) << 4)
int64_t* rcx_3 = *(arg1 + 0x10)
rcx_3[r15 * 2] = *r14
void* result = r14[1]
rcx_3[r15 * 2 + 1] = result

if (result != 0)
    *(result + 8) += 1

void* rcx_4 = *(arg1 + 8)

if (rcx_4 != 0)
    result = data_143e244b0
    
    if (*r14 != result)
        int64_t* rbx_2 = *(rcx_4 + 0x10)
        int64_t rdx_3 = 0
        
        if (rbx_2 != 0)
            int32_t rax_2 = rbx_2[1].d
            
            if (rax_2 != 0)
                rbx_2[1].d = rax_2 + 1
                rax_2.b = 1
            
            if (rax_2.b == 0)
                rbx_2 = nullptr
            
            if (rbx_2 != 0)
                rdx_3 = *(rcx_4 + 8)
        
        int64_t var_28 = rdx_3
        int64_t* var_20_1 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        result = sub_140de86e0(*r14, &var_28)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*rbx_2 + 8))(rbx_2, 1)

return result
