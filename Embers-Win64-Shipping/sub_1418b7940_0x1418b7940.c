// 函数: sub_1418b7940
// 地址: 0x1418b7940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t i = 0
void* rbp_1 = arg1

if (*(arg2 + 0x188) s<= 0)
    return 

int64_t r13_1 = 0
char* r15_1 = nullptr
void* r14_1 = nullptr

do
    char rdx = *(r15_1 + *(arg2 + 0x180))
    
    if (rdx u< 0xff)
        void* rdi_1 = *(*(rbp_1 + 0x548) + (zx.q(rdx) << 3))
        *(r14_1 + *(arg2 + 0x58))
        
        if (rdi_1 != 0)
            void* r12_2 = *(arg2 + 0x58) + r14_1
            void* rbp_2 = *(*(rbp_1 + 0x458) + 0x20)
            int64_t* rax_3 = *(rbp_2 + 0xc8)
            
            if (sub_1418c9180(*(arg2 + 0xdc) != 0).b == 0)
                sub_1418c6000(rbp_2 + 0xd0, i, rdi_1 + 0x38, rbp_2 + 0x108)
            else if (*(r12_2 + 6) == 0)
                int64_t rcx_2 = data_143efb550
                char* rax_5 = *rax_3
                char rdx_1 = rax_5[r13_1]
                uint32_t rax_6 = zx.d(*(rax_5 + r13_1 + 2))
                int64_t rcx_3
                
                if (data_143de5480 == 0)
                    rcx_3 = 0
                else
                    rcx_3.b = GetCurrentThreadId() != data_143de5470
                
                if (*(rcx_2 + (rcx_3 << 2)) s<= 1)
                    sub_1418b8670(rbp_2, rdx_1, rax_6, rdi_1)
                else
                    sub_1418b8610(rbp_2, rdx_1, rax_6, rdi_1)
            
            rbp_1 = arg1
            
            if (*(r12_2 + 0x10) != 0)
                int64_t var_60_1 = rax_3[4] + 0x10
                void* var_68_1 = rdi_1
                sub_1418b8010(rbp_1, *(rbp_1 + 0x458), arg2 + 0x38, arg2 + 0x68, arg2 + 0x78, r12_2)
    
    i += 1
    r15_1 = &r15_1[1]
    r14_1 += 0x28
    r13_1 += 6
while (i s< *(arg2 + 0x188))
