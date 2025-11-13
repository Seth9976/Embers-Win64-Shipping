// 函数: sub_140587cf0
// 地址: 0x140587cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4].d == 0)
    return 

int64_t r13_1 = sx.q(((arg1[1] - *arg1) s>> 3).d)
int64_t rax_4 = 4 * r13_1

if (mulu.dp.q(4, r13_1) u>> 0x40 != zx.o(0))
    rax_4 = -1

int32_t* rax_5 = j_sub_140a82f30(rax_4)

if (r13_1 s> 0)
    int64_t r12_1 = 0
    int32_t* r15_1 = rax_5
    
    do
        *r15_1 = 0
        int64_t* rcx_1 = *(*arg1 + (r12_1 << 3))
        int64_t* rdx_1 = *rcx_1
        
        if (((rcx_1[1] - rdx_1) s>> 3).d s> 0)
            int32_t i = 1
            int32_t r8_1 = *(*rdx_1 + 0x18)
            *r15_1 = r8_1
            int64_t rdx_2 = *arg1
            int64_t* rax_11 = *(rdx_2 + (r12_1 << 3))
            
            if (((rax_11[1] - *rax_11) s>> 3).d s> 1)
                int64_t rdi_1 = 8
                int64_t* rax_21
                
                do
                    int32_t rsi_1 = *(*(**(rdx_2 + (r12_1 << 3)) + rdi_1) + 0x18)
                    int32_t rbx_2 = rsi_1 - r8_1
                    
                    if (rsi_1 - r8_1 s< 0)
                        std::ostream::operator<<(
                            sub_14058b120(
                                sub_14058b120(
                                    std::ostream::operator<<(
                                        std::ostream::operator<<(sub_14058b120(std::cerr, 
                                            "Error: negative delta tick value: ")), 
                                        sub_14058b4b0), 
                                    "Timestamps must be sorted first"), 
                                " (use MidiFile::sortTracks() before writing)."), 
                            sub_14058b4b0)
                        rdx_2 = *arg1
                    
                    i += 1
                    r8_1 = rsi_1
                    void* rax_20 = *(**(rdx_2 + (r12_1 << 3)) + rdi_1)
                    rdi_1 += 8
                    *(rax_20 + 0x18) = rbx_2
                    *r15_1 = rsi_1
                    rdx_2 = *arg1
                    rax_21 = *(rdx_2 + (r12_1 << 3))
                while (i s< ((rax_21[1] - *rax_21) s>> 3).d)
        
        r12_1 += 1
        r15_1 = &r15_1[1]
    while (r12_1 s< r13_1)

arg1[4].d = 0
j_sub_140a74f90(rax_5)
