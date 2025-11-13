// 函数: sub_141ebfa20
// 地址: 0x141ebfa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
void var_28
sub_140acc970(&var_38, (*(*arg1 + 0xb0))(arg1, &var_28))
char rax_2 = sub_14222bc40(arg4, &var_38, 0)
int32_t* rcx_2 = *(arg2 + 0x10)
int64_t rbp
rbp.b = rax_2 == 2
void* rcx_3

if (rcx_2 != 0 && *rcx_2 == 1)
    rcx_3 = *(rcx_2 + 8)

if (rcx_2 == 0 || *rcx_2 != 1 || rcx_3 == 0)
    int32_t* rbx_2 = arg1[2]
    
    if (rbx_2 != 0 && *rbx_2 == 7)
        int64_t* rbx_3 = *(rbx_2 + 8)
        
        if (rbx_3 != 0)
            int64_t arg_8
            (*(*rbx_3 + 8))(rbx_3, &arg_8)
            void* rax_7 = sub_140d3c6e0(&arg_8)
            
            if (rax_7 != 0)
                sub_140d3a3a0(arg3, *(rax_7 + 0xa0))
                *(arg3 + 8) = arg_8
                
                if ((*(sub_140d3c6e0(&arg_8) + 0x209) & 2) == 0)
                    arg3[4] = -1
                else
                    arg3[4] = (*(*rbx_3 + 0x10))(rbx_3)
else
    int32_t* rax_3 = sub_14227b210(rcx_3, arg1)
    void* rax_4 = sub_140d3c6e0(&rax_3[0x3e])
    
    if (rax_4 != 0)
        sub_140d3a3a0(arg3, *(rax_4 + 0xa0))
        *(arg3 + 8) = *(rax_3 + 0xf8)
        
        if ((*(rax_4 + 0x209) & 2) == 0)
            arg3[4] = -1
        else
            arg3[4] = *rax_3

arg3[5] &= 0xfffffffe
uint32_t result = zx.d(rbp.b)
arg3[5] |= result
return result
