// 函数: sub_141e2a4a0
// 地址: 0x141e2a4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141df1e90(arg1)

if (result == 0 || *(arg1 + 0x88) == 0)
    return result

void* rdi_1 = *(result + 0x20)

if (rdi_1 != 0)
    void* rax = sub_142591550()
    void* rdx = *(rdi_1 + 0x10)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
        uint32_t rax_3
        void* r8_1
        
        if (data_143de5480 != 0)
            rax_3, r8_1 = GetCurrentThreadId()
            rax_3.b = rax_3 == data_143de5470
        
        if (data_143de5480 == 0 || rax_3.b != 0)
            r8_1.b = 1
            sub_141f3e990(*(result + 0x20), 1, r8_1.b)

int64_t* rdi_2 = *(result + 0x240)

if (rdi_2 == 0)
    int64_t* rax_5 = (*(*result + 0x300))(result)
    *(result + 0x240) = rax_5
    rdi_2 = rax_5

(*(*rdi_2 + 0x90))(rdi_2, result)
void* rdx_2 = *arg2
rdi_2[0x80].w = *(rdx_2 + 0x400)
rdi_2[0x7f] = *(rdx_2 + 0x3f8)
*(rdi_2 + 0x402) = *(rdx_2 + 0x402)
return sub_141e06200(rdi_2, *(arg1 + 0x88))
