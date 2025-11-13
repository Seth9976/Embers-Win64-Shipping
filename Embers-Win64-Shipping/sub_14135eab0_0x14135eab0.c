// 函数: sub_14135eab0
// 地址: 0x14135eab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg2 + 0x40)
int64_t* i = arg1 + 0x10

if (i != arg1 + 0x60)
    int64_t rsi
    int64_t arg_18 = rsi
    
    do
        int64_t* rbx_1 = *i
        
        if (rbx_1 == 0 || *(rbx_1 + 0xa) == 0 || *(rbx_1 + 0xb) == 0 || data_143f0f1c5 == 0)
            rsi.b = 0
        else
            rsi.b = 1
        
        if (sub_1410f95e0(arg1) != rsi.b && rbx_1 != 0)
            int64_t rax_3 = (*(*rbx_1 + 0x90))(rbx_1)
            
            if (rax_3 != 0)
                void*** rcx_4 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx = &rcx_4[3]
                
                if (rdx u> *(rbp + 0x38))
                    sub_140b0e3d0(rbp + 0x30, 0x20)
                    rcx_4 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
                    rdx = &rcx_4[3]
                
                *(rbp + 0x30) = rdx
                int64_t* rax_4 = *(rbp + 8)
                *(rbp + 0x14) += 1
                *rax_4 = rcx_4
                *(rbp + 8) = &rcx_4[1]
                rcx_4[1] = 0
                *rcx_4 = &data_142f11608
                rcx_4[2] = rax_3
        
        i = &i[2]
    while (i != arg1 + 0x60)

void* rax_6 = *(arg1 + 0x110)
void* rcx_8 = arg1 + 0x120
void* arg_8 = arg1

if (rax_6 != 0)
    rcx_8 = rax_6

return (*(arg1 + 0x100))((*(*rcx_8 + 8))(rcx_8), &arg_8, arg2)
