// 函数: sub_1428edfd0
// 地址: 0x1428edfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int64_t rsi = sx.q(arg4)
int32_t rax = sub_1428ee2e0(arg2, arg3, rsi.d)

if (rax s>= 0)
    return sub_1428eded0(arg1, arg2, rax) __tailcall

int32_t* result = sub_1428db530(&data_143514eb0)

if (result == 0)
    return result

*result = 1
int64_t* rax_2 = sub_1428db530(&data_143514e40)
*(result + 8) = rax_2

if (rax_2 != 0)
    int64_t rax_3
    
    if (*rax_2 == 0)
        rax_3 = sub_1428c3490()
        **(result + 8) = rax_3
    
    if (*rax_2 != 0 || rax_3 != 0)
        int64_t rax_5
        
        if (*(*(result + 8) + 8) == 0)
            rax_5 = sub_1428c3490()
            *(*(result + 8) + 8) = rax_5
        
        if (*(*(result + 8) + 8) != 0 || rax_5 != 0)
            int32_t rbp_1 = rsi.d
            int64_t rbx_1 = rsi
            int64_t rax_6 = rsi
            
            if (rsi.d s> 0)
                while (*(arg2 + rax_6 - 1) == 0)
                    rbp_1 -= 1
                    rax_6 -= 1
                    
                    if (rax_6 s<= 0)
                        break
            
            if (sub_1428e61a0(**(result + 8), arg2, rbp_1) != 0)
                void* rcx_7 = **(result + 8)
                *(rcx_7 + 0x10) &= 0xfffffff8
                void* rcx_8 = **(result + 8)
                *(rcx_8 + 0x10) |= 8
                
                if (rbp_1 s> 0)
                    int32_t rdx_4 = 1
                    uint32_t r8_4 = zx.d(*(sx.q(rbp_1) + arg2 - 1))
                    
                    if ((r8_4.b & 0x7f) != 0)
                        do
                            rdx_4 += 1
                        while ((r8_4 & 0xff u>> rdx_4.b) != 0)
                    
                    void* rcx_10 = **(result + 8)
                    *(rcx_10 + 0x10) |= 8 - rdx_4
                
                if (rsi.d s> 0)
                    while (arg3[rbx_1 - 1] == 0xff)
                        rsi = zx.q(rsi.d - 1)
                        rbx_1 -= 1
                        
                        if (rbx_1 s<= 0)
                            break
                
                if (sub_1428e61a0(*(*(result + 8) + 8), arg3, rsi.d) != 0)
                    void* rcx_13 = *(*(result + 8) + 8)
                    *(rcx_13 + 0x10) &= 0xfffffff8
                    void* rcx_14 = *(*(result + 8) + 8)
                    *(rcx_14 + 0x10) |= 8
                    
                    if (rsi.d s> 0)
                        int32_t r8_6 = 1
                        uint32_t r9_1 = zx.d(arg3[sx.q(rsi.d) - 1])
                        
                        if ((r9_1.b & 0x7f) != 0x7f)
                            uint32_t i
                            
                            do
                                r8_6 += 1
                                i = 0xff u>> r8_6.b
                            while ((r9_1 & i) != i)
                        
                        void* rdx_6 = *(*(result + 8) + 8)
                        *(rdx_6 + 0x10) |= 8 - r8_6
                    
                    *arg1 = result
                    return 1

sub_1428c3d60(result, &data_143514eb0)
return 0
