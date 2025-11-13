// 函数: sub_141d6b040
// 地址: 0x141d6b040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_140910250(arg1, &result_1, arg2)
int64_t result = sx.q(result_1)
int64_t rcx

if (result.d == 0xffffffff)
    rcx = 0
else
    int64_t r9_1 = result * 5
    result = *arg1
    rcx = result + (r9_1 << 3)

int64_t* rdi = rcx + 0x10

if (rcx == 0)
    rdi = nullptr

if (rdi != 0)
    int32_t i = 0
    
    if (rdi[1].d s> 0)
        result_1.q = 0
        
        do
            int64_t r15_1 = sx.q(i) * 0x38
            void* rax_1 = sub_141d6b920(*rdi + r15_1, arg3, 0)
            
            if (rax_1 != 0)
                int32_t rax_2 = *(rax_1 + 0xc)
                void* const rax_6
                
                if (rax_2 s>= data_143e1d9b4)
                    rax_6 = nullptr
                else
                    uint32_t rdx_2 = zx.d(rax_2.w)
                    
                    if (rax_2 s< 0)
                        rax_2 += 0xffff
                        rdx_2 -= 0x10000
                    
                    rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(rdx_2) * 0x18
                
                result = zx.q(*(rax_6 + 8) u>> 0x1d)
            
            if (rax_1 == 0 || (result.b & 1) != 0)
                int64_t* r14_1 = *rdi
                int64_t rcx_5 = r14_1[sx.q(i) * 7 + 5]
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                int64_t rcx_6 = r14_1[sx.q(i) * 7 + 3]
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                int64_t rcx_7 = r14_1[sx.q(i) * 7]
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                int32_t rcx_10 = rdi[1].d
                int32_t rax_9 = rcx_10 - i
                
                if (rax_9 != 1)
                    int64_t r9_2 = *rdi
                    memmove(r9_2 + r15_1, sx.q(i + 1) * 0x38 + r9_2, (rax_9 - 1) * 0x38)
                    rcx_10 = rdi[1].d
                
                rdi[1].d = rcx_10 - 1
                result = sub_1407c4070(rdi)
            else
                i += 1
        while (i s< rdi[1].d)

return result
