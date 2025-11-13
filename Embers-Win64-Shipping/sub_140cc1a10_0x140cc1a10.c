// 函数: sub_140cc1a10
// 地址: 0x140cc1a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = 1

if ((*(arg1 + 0x290) & 1) == 0)
    r14 = arg2

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t rbp

if (data_143de5480 == 0)
    rbp.b = 1
else
    rbp.b = GetCurrentThreadId() == data_143de5470

int32_t i = 0

if (*(arg1 + 0x20) s> 0)
    do
        if (i != 0xffffffff && sub_140baca10(arg1, i) == 0)
            uint64_t rax_3
            rax_3, arg3 = sub_140cb4600(arg1, i, arg3)
            
            if (rax_3 != 0)
                if (r14 != 0)
                    arg3 = sub_140cc45a0(arg1 + 0x200, rax_3)
                else
                    void* rax_4
                    rax_4, arg3 = sub_140bdf2e0()
                    void* rdx_2 = *(rax_3 + 0x10)
                    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                    
                    if (rax_5.d s> *(rdx_2 + 0x38)
                            || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                        if (sub_140d23dc0(rax_3, 0x30) != 0)
                            arg3 = sub_140cc45a0(arg1 + 0x200, rax_3)
                        else
                            void* rax_8 = sub_140cdddf0()
                            void* rdx_3 = *(rax_3 + 0x10)
                            int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                            
                            if (rax_9.d s<= *(rdx_3 + 0x38)
                                    && *(*(rdx_3 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                                arg3 = sub_140cc45a0(arg1 + 0x200, rax_3)
                    else
                        arg3 = sub_140cc45a0(arg1 + 0x200, rax_3)
            
            if (data_143de5452 == 0 && rax_3 != 0)
                void* rax_11 = sub_140bdf670()
                void* rdx_5 = *(rax_3 + 0x10)
                int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                
                if (rax_12.d s<= *(rdx_5 + 0x38)
                        && *(*(rdx_5 + 0x30) + (rax_12 << 3)) == rax_11 + 0x30)
                    int32_t j = 0
                    
                    if (*(arg1 + 0x10) s> 0)
                        do
                            arg3 = sub_140cb5e90(arg1, j)
                            j += 1
                        while (j s< *(arg1 + 0x10))
            
            if (rbp.b != 0 && i == i s/ 0xa * 0xa)
                arg3 = sub_140a7ddb0(sub_140a753a0(), 0)
        
        i += 1
    while (i s< *(arg1 + 0x20))

void* result = *(arg1 + 0xa0)

if (result != 0)
    *(result + 0x28) |= 2

return result
