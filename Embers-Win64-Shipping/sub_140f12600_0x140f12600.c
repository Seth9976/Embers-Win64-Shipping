// 函数: sub_140f12600
// 地址: 0x140f12600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void* rdi = *arg4
int64_t r10 = arg2
int32_t rsi = arg9
void* rbp = rdi + sx.q(arg4[1].d) * 0x18

while (rdi != rbp)
    int64_t* rbx_1 = *(rdi + 0x10)
    int64_t* rcx_1 = *(rdi + 8)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (rcx_1 != 0)
        int32_t zmm0 = *(rdi + 4)
        int512_t zmm3
        zmm3.o = *rdi
        char var_40_1 = arg11
        int64_t var_48_1 = arg10
        int32_t var_50_1 = rsi
        int64_t var_58_1 = arg8
        int64_t var_60_1 = arg7
        int64_t var_68_1 = arg6
        int64_t var_70_1 = arg5
        int32_t var_78_1 = zmm0
        rsi = (*(*rcx_1 + 8))(zmm0, r10)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t rdx_3 = *rbx_1
            (*rdx_3)(rbx_1, rdx_3)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi += 0x18
    r10 = arg2

return zx.q(rsi)
