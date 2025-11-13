// 函数: sub_141e0e680
// 地址: 0x141e0e680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = arg1[4]

if (r13 != 0)
    int32_t rbx_2 = arg1[0x2f].d - 1
    int64_t r15_1 = sx.q(rbx_2) * 0xb8
    
    while (true)
        int64_t rax_1
        
        if (rbx_2 s< 0 || rbx_2 s>= arg1[0x2f].d)
            rax_1.b = 0
        else
            rax_1.b = 1
        
        if (rax_1.b == 0)
            break
        
        int64_t rbp_1 = arg1[0x2e]
        void* rsi_1 = *(*(rbp_1 + r15_1 + 0x50) + 0x20)
        
        if (rsi_1 != 0)
            void* rax_2 = sub_1424641d0()
            void* rdx = *(rsi_1 + 0x10)
            rax_1 = sx.q(*(rax_2 + 0x38))
            
            if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax_2 + 0x30
                    && rsi_1 == *arg2)
                if ((*(*arg1 + 0x310))(arg1, *(rbp_1 + r15_1 + 0x50)) != 0)
                    int64_t* rcx_2 = *(rbp_1 + r15_1 + 0x50)
                    (*(*rcx_2 + 0x278))(rcx_2, r13, rsi_1)
                
                char result
                
                if (rbx_2 s< 0 || rbx_2 s>= arg1[0x2f].d)
                    result = 0
                else
                    result = 1
                
                if (result == 0)
                    return result
                
                void*** r10_1 = sx.q(rbx_2) * 0xb8
                int64_t rax_6 = arg1[0x2e]
                *(r10_1 + rax_6 + 0x60) = &data_142e0b890
                *(r10_1 + rax_6) = &data_142e0b890
                int32_t rdx_3 = arg1[0x2f].d
                int32_t rcx_5 = rdx_3 - rbx_2 - 1
                
                if (rcx_5 s>= 1)
                    rcx_5 = 1
                
                if (rcx_5 != 0)
                    void* r9_1 = arg1[0x2e]
                    memcpy(r9_1 + r10_1, sx.q(rdx_3 - rcx_5) * 0xb8 + r9_1, rcx_5 * 0xb8)
                    rdx_3 = arg1[0x2f].d
                
                arg1[0x2f].d = rdx_3 - 1
                sub_140aff040(&arg1[0x2e])
        
        rbx_2 -= 1
        r15_1 -= 0xb8

sub_140926490(&arg2[2], *arg2, zx.q(arg2[1].b))
bool var_30_1 = arg2[1].b != 0
int64_t var_38 = *arg2
return sub_1405a9f90(&arg1[0xb], &var_38)
