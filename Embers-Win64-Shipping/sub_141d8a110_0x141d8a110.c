// 函数: sub_141d8a110
// 地址: 0x141d8a110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = data_143f5b298
void* rax_1
int64_t rax_2
void* rdx_1

if (rbx != 0)
    rax_1 = sub_1424ad0c0()
    rdx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

int64_t* result = *(arg1 + 0x38)

if (result != 0)
    int64_t* rcx_1 = *(arg1 + 0x40)
    
    if (rcx_1 != 0 && rcx_1[1].d s> 0 && rbx != 0)
        int64_t* result_1 = result
        
        if (rcx_1 != 0)
            *(rcx_1 + 0xc) += 1
        
        result = &result_1
        
        if (&result_1 != rbx + 0xdf0)
            result_1.o = *(rbx + 0xdf0)
            *(rbx + 0xdf0) = result_1.o
        
        if (rcx_1 != 0)
            int32_t temp0_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp0_1 == 1)
                return (*(*rcx_1 + 8))(rcx_1, 1)

return result
