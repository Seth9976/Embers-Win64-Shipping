// 函数: sub_140a398f0
// 地址: 0x140a398f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t rsi = arg4
void* rdi = arg2
int64_t i_3 = sx.q(arg3)
sub_140a38850()
EnterCriticalSection(&data_143cf8d78)
int32_t rbp = 0
int64_t i_2 = i_3
int64_t i_1 = i_3

if (i_3.d s> 0)
    int64_t i
    
    do
        int64_t rsi_1 = rsi + *rdi
        int64_t r8 = *(rdi + 8)
        int64_t rax_2
        int32_t rdx
        rdx:rax_2 = sx.o(rsi_1)
        int64_t r13_1 = r8 + rsi_1
        int32_t rdi_2 = (((zx.q(rdx) & 0x3fff) + rax_2) s>> 0xe).d
        int64_t rax_4
        int32_t rdx_2
        rdx_2:rax_4 = sx.o(r13_1 - 1)
        int64_t r10_2 = rsi_1 - sx.q(rdi_2 << 0xe)
        int32_t rax_6 = ((rax_4 + (zx.q(rdx_2) & 0x3fff)) s>> 0xe).d
        int64_t rbx = 0x4000 - r10_2
        
        if (r8 s<= rbx)
            rbx = r8
        
        if (rdi_2 s<= rax_6)
            do
                int64_t rax_7 = *(arg1 + 8)
                int64_t rcx_2 = sx.q(rdi_2)
                
                if (*(rax_7 + (rcx_2 << 2)) != 0xffffffff)
                    sub_140a37f40(&data_143cf8d78, *(rax_7 + (rcx_2 << 2)), r10_2.d, rbx.d)
                    rbp += 1
                
                rsi_1 += rbx
                rdi_2 += 1
                r10_2 = 0
                rbx = 0x4000
                int64_t rax_9 = r13_1 - rsi_1
                
                if (rax_9 s<= 0x4000)
                    rbx = rax_9
            while (rdi_2 s<= rax_6)
            
            i_1 = i_2
        
        rsi = arg4
        rdi = arg_10 + 0x10
        i = i_1
        i_1 -= 1
        arg_10 = rdi
        i_2 = i_1
    while (i != 1)

sub_140a39760(&data_143cf8d78, rbp)
return LeaveCriticalSection(&data_143cf8d78) __tailcall
