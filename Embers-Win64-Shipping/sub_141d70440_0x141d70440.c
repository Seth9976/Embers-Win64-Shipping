// 函数: sub_141d70440
// 地址: 0x141d70440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x48
    int32_t i
    
    do
        int64_t* rbp_1 = r14
        r14 = &r14[0x14]
        
        if (rbp_1 != &rbx_1[-0x12])
            int64_t rsi_1 = sx.q(*rbx_1)
            void* rdi_1 = &rbp_1[7]
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rax = *(rbx_1 - 8)
            void* rdx = &rbx_1[-4]
            void* r9 = *(rdi_1 + 8)
            
            if (rax != 0)
                rdx = rax
            
            if (r9 != 0)
                rdi_1 = r9
            
            memcpy(rdi_1, rdx, (rsi_1 << 2).d)
            rbp_1[9].d = rsi_1.d
            sub_141d6fd70(rbp_1, &rbx_1[-0x12])
        
        sub_1405af100(&rbp_1[0xa], &rbx_1[2])
        rbx_1 = &rbx_1[0x28]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
