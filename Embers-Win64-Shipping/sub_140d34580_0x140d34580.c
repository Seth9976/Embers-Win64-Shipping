// 函数: sub_140d34580
// 地址: 0x140d34580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
int64_t rcx = *(arg2 + 0x18)
void* rdi = *rax
*(arg2 + 0x20) = &rax[1]
void* arg_10 = nullptr
uint32_t r9 = zx.d(rax[1].b)
*(arg2 + 0x20) = rax + 9
uint64_t rax_4 = (&data_143e1cd60)[zx.q(r9)](rcx, arg4, &arg_10, &data_143e1cd60)
*arg3 = 0

if (rdi != 0)
    void* r8_1 = arg_10
    rax_4.b = (*(rdi + 0xcc) u>> 0xe).b & 1
    
    if (r8_1 != 0)
        if (rax_4.b == 0)
            rax_4 = *(r8_1 + 0x10)
            int64_t rcx_3 = sx.q(*(rdi + 0x38))
            
            if (rcx_3.d s<= *(rax_4 + 0x38))
                rax_4 = *(rax_4 + 0x30)
                void* const rdx_2 = nullptr
                
                if (*(rax_4 + (rcx_3 << 3)) == rdi + 0x30)
                    rdx_2 = r8_1
                
                *arg3 = rdx_2
        else
            rax_4 = sub_140be1130(*(r8_1 + 0x10), rdi)
            
            if (rax_4.b != 0)
                void* rcx_2 = arg_10
                *arg3 = rcx_2
                
                if (rcx_2 == 0)
                    arg3[1] = 0
                
                void* rax_6 = sub_140d21950(rcx_2, rdi)
                arg3[1] = rax_6
                return rax_6
    else if (rax_4.b != 0)
        arg3[1] = 0

return rax_4
