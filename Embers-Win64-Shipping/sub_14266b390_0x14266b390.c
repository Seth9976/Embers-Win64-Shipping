// 函数: sub_14266b390
// 地址: 0x14266b390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[0x7f].d

if ((result.b & 1) == 0)
    return result

arg1[0x7f].d = result & 0xfffffffe
void* rax_2 = (*(*arg1 + 0x150))()

if (rax_2 != 0)
    int64_t* rdi_1 = *(rax_2 + 0x120)
    
    if (rdi_1 != 0)
        void* rax_3 = sub_14269bba0()
        void* rcx = rdi_1[2]
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
            (*(*rdi_1 + 0x300))(rdi_1, arg1)

jump(*(*arg1 + 0x628))
