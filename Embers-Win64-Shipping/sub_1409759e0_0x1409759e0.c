// 函数: sub_1409759e0
// 地址: 0x1409759e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x2b8))()

if (rax_1 == 0xffffffff)
    rax_1.b = 0
    return rax_1

int64_t rdx_1 = arg1[0xb]
int64_t r8_1 = sx.q(rax_1) * 0xa
arg1[6].d -= *(rdx_1 + (r8_1 << 3) + 0x38)
void* i = *(rdx_1 + (r8_1 << 3) + 0x30)

for (void* r13_2 = sx.q(*(rdx_1 + (r8_1 << 3) + 0x38)) * 0x50 + i; i != r13_2; i += 0x50)
    int64_t* r14_1 = arg1[0xd]
    int64_t* rbx_1 = r14_1
    void* rdi_3 = &r14_1[sx.q(arg1[0xe].d) * 2]
    
    if (r14_1 != rdi_3)
        int64_t* rsi_1 = *(i + 8)
        
        do
            if ((**rsi_1)(rsi_1, *rbx_1) != 0)
                int32_t rbx_3 = ((rbx_1 - r14_1) s>> 4).d
                
                if (rbx_3 != 0xffffffff)
                    sub_140911e80(&arg1[0xd], rbx_3, 1, 1)
                
                break
            
            rbx_1 = &rbx_1[2]
        while (rbx_1 != rdi_3)

sub_140974980(&arg1[0xb], rax_1, 1, 1)
(*(*arg1 + 0x378))(arg1)
int64_t rax_6
rax_6.b = 1
return rax_6
