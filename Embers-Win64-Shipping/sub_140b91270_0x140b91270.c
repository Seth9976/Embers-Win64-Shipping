// 函数: sub_140b91270
// 地址: 0x140b91270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int64_t rsi = 0
int32_t* result = &rdi[arg1[1]]
uint64_t r14_1 = sx.q(arg1[1].d) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            sub_140b9bd00(rbx_1, 0x83400)
            int32_t rax_1 = *(rbx_1 + 0xc)
            
            if (rax_1 s>= data_143e1d9b4)
                result = nullptr
            else
                uint32_t rdx_1 = zx.d(rax_1.w)
                
                if (rax_1 s< 0)
                    rax_1 += 0xffff
                    rdx_1 -= 0x10000
                
                result = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
            
            if ((*(result + 0xb) & 1) != 0)
                result = sub_140d1e720(&data_143e1d678, rbx_1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return result
