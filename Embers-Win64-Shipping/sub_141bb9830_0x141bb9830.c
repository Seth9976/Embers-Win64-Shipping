// 函数: sub_141bb9830
// 地址: 0x141bb9830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rdi_1 = *(arg1 + 0x350)
void* i = rdi_1 + sx.q(*(arg1 + 0x358)) * 0x24

if (rdi_1 == i)
    return 

int32_t* rdi_2 = rdi_1 + 0x18

do
    int32_t rcx_5 = (rdi_2[-2] ^ *arg2) | (rdi_2[-1] ^ *(arg2 + 4)) | (rdi_2[1] ^ *(arg2 + 0xc))
        | (*rdi_2 ^ *(arg2 + 8))
    
    if (rcx_5 == 0)
        void* rsi_1 = *(arg3 + 0x1a8)
        void* rbx_1
        
        if (rdi_2[2].b == rcx_5.b)
            int64_t var_28
            int64_t* rax_7 = sub_140b63b70(&rdi_2[-6], &var_28)
            int16_t* rbx_2
            
            if (rax_7[1].d == 0)
                rbx_2 = &data_142d40450
            else
                rbx_2 = *rax_7
            
            void* rax_9 = sub_140d2ee50(sub_140d41340(), rsi_1, rbx_2, 0)
            int64_t rcx_8 = var_28
            rbx_1 = rax_9
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            if (rbx_1 != 0)
                int32_t rcx_9
                rcx_9.b = sub_140b5b8a0(rdi_2[-4], 0) == 0
                
                if ((rdi_2[-3] != 0 | rcx_9.b) != 0)
                    void* rax_11 = sub_141c18780()
                    void* rdx_2 = *(rbx_1 + 0x10)
                    int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                    void* const rax_14
                    
                    if (rax_12.d s> *(rdx_2 + 0x38)
                            || *(*(rdx_2 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                        rax_14 = nullptr
                    else
                        rax_14 = rbx_1
                    
                    void* rax_15 = *(rax_14 + 0x28)
                    
                    if (rax_15 != 0)
                        rbx_1 = rax_15
                
                goto label_141bb9966
        else
            rbx_1 = arg3
        label_141bb9966:
            
            if (rbx_1 != 0)
                int64_t rsi_2 = sx.q(*(arg4 + 0x10))
                int32_t rax_16 = (rsi_2 + 1).d
                *(arg4 + 0x10) = rax_16
                
                if (rax_16 s> *(arg4 + 0x14))
                    sub_140915c70(arg4, rsi_2.d)
                
                void* rax_17 = *(arg4 + 8)
                void* rcx_12 = arg4
                
                if (rax_17 != 0)
                    rcx_12 = rax_17
                
                *(rcx_12 + (rsi_2 << 3)) = rbx_1
    
    rdi_2 = &rdi_2[9]
while (&rdi_2[-6] != i)
