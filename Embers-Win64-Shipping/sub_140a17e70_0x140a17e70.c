// 函数: sub_140a17e70
// 地址: 0x140a17e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d == 0)
    int64_t rax
    rax.b = 0
    return rax

*(arg1 + 0x34) = 0
*(arg1 + 0x30) = arg3

if (arg1 + 0x20 != arg2)
    int64_t* rbx_1 = *(arg1 + 0x20)
    int32_t i_3 = *(arg1 + 0x28)
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_1 = &rbx_1[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rdi_1 = *arg2
    int32_t r8 = *(arg1 + 0x2c)
    *(arg1 + 0x28) = i_2
    
    if (i_2 != 0 || r8 != 0)
        sub_1405a4be0(arg1 + 0x20, i_2, r8)
        int64_t* rbx_2 = *(arg1 + 0x20)
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                *rbx_2 = 0
                int32_t rsi_1 = *(rdi_1 + 8)
                int64_t r14_1 = *rdi_1
                rbx_2[1].d = rsi_1
                
                if (rsi_1 != 0)
                    sub_1405a4c70(rbx_2, rsi_1, 0)
                    memcpy(*rbx_2, r14_1, rsi_1 * 2)
                else
                    *(rbx_2 + 0xc) = 0
                
                rbx_2 = &rbx_2[2]
                rdi_1 += 0x10
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x2c) = 0

void* rcx_4 = *(arg1 + 0x48)
int128_t var_28 = zx.o(0)
sub_140a0e3b0(rcx_4, &var_28)
sub_140a183c0(arg1)
uint64_t rax_1
rax_1.b = 1
return rax_1
