// 函数: sub_141ef0050
// 地址: 0x141ef0050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg2

if (arg2 == *(arg1 + 0x20))
    *(arg1 + 0x89) |= 1
    return 

*(arg1 + 0xa0) = sub_140d226f0(arg1, sub_142452380())
void* rax_2 = sub_142452380()
void* rdx_1 = *(rsi + 0x10)
int64_t rax_3 = sx.q(*(rax_2 + 0x38))

if (rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rsi = sub_140d226f0(rsi, sub_142452380())

void* rcx_4 = *(arg1 + 0xa0)

if (rcx_4 != rsi)
    if (rsi != 0)
        sub_141dd4a70(rsi, arg1)
        rcx_4 = *(arg1 + 0xa0)
    
    if (rcx_4 != 0)
        sub_141dba110(rcx_4, arg1)
    
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_140d3ccc0(arg1, &var_28, 0, 0, 0)
    int32_t rbp_1 = 0
    
    if (var_20_1 s> 0)
        int64_t* r14_1 = nullptr
        
        do
            uint64_t rdi_1 = *(r14_1 + var_28)
            void* rax_7 = sub_142452380()
            void* rdx_6 = *(rdi_1 + 0x10)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                void* rax_9 = sub_142459c10()
                void* rdx_7 = *(rdi_1 + 0x10)
                int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                
                if (rax_10.d s<= *(rdx_7 + 0x38)
                        && *(*(rdx_7 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                    *(rdi_1 + 0xa0) = *(arg1 + 0xa0)
                    
                    if (rsi != 0)
                        sub_141dd4a70(rsi, rdi_1)
                    
                    void* rcx_9 = *(arg1 + 0xa0)
                    
                    if (rcx_9 != 0)
                        sub_141dba110(rcx_9, rdi_1)
                
                sub_140d3ccc0(rdi_1, &var_28, 0, 0, 0)
            
            rbp_1 += 1
            r14_1 = &r14_1[1]
        while (rbp_1 s< var_20_1)
    
    int64_t rcx_11 = var_28
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

*(arg1 + 0x89) |= 1
