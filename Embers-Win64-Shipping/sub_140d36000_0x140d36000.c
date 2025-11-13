// 函数: sub_140d36000
// 地址: 0x140d36000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
int64_t rcx = *(arg2 + 0x18)
void* rsi = *rax
*(arg2 + 0x20) = &rax[1]
void* arg_10 = nullptr
uint32_t r9 = zx.d(rax[1].b)
*(arg2 + 0x20) = rax + 9
int64_t rax_4 = (&data_143e1cd60)[zx.q(r9)](rcx, arg4, &arg_10, &data_143e1cd60)
void* rbx = arg_10

if (rbx != 0)
    void* rax_5 = sub_140bdf2e0()
    void* rdx = *(rbx + 0x10)
    rax_4 = sx.q(*(rax_5 + 0x38))
    
    if (rax_4.d s<= *(rdx + 0x38))
        int64_t rcx_1 = rax_4
        rax_4 = *(rdx + 0x30)
        
        if (*(rax_4 + (rcx_1 << 3)) == rax_5 + 0x30 && rsi != 0)
            rax_4 = sx.q(*(rsi + 0x38))
            
            if (rax_4.d s<= *(rbx + 0x38))
                int64_t rcx_2 = rax_4
                rax_4 = *(rbx + 0x30)
                
                if (*(rax_4 + (rcx_2 << 3)) == rsi + 0x30)
                    void* rax_6 = arg_10
                    *arg3 = rax_6
                    return rax_6

*arg3 = 0
return rax_4
