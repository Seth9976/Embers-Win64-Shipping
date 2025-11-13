// 函数: sub_14075d440
// 地址: 0x14075d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x528)
int64_t r12 = 0
int64_t var_48 = 0
int32_t rbx = 0
int32_t var_40 = 0
int32_t var_3c = 0

if (rax != 0)
    int32_t i = 0
    
    if (*(rax + 0xa8) s> 0)
        int64_t* r15_1 = nullptr
        
        do
            void* rbp_1 = *(r15_1 + *(rax + 0xa0))
            void* rcx = *(rbp_1 + 0x788)
            
            if (rcx != 0)
                int64_t* var_38
                sub_1407efa00(rcx, &var_38)
                int64_t* rbx_1 = var_38
                int64_t rdi_1 = 0
                int32_t var_30
                void* rcx_1 = &rbx_1[sx.q(var_30)]
                uint64_t rsi_4 = (rcx_1 - rbx_1 + 7) u>> 3
                
                if (rbx_1 u> rcx_1)
                    rsi_4 = 0
                
                if (rsi_4 != 0)
                    do
                        int64_t* rcx_2 = *rbx_1
                        (*(*rcx_2 + 0x270))(rcx_2, rbp_1, &var_48)
                        rdi_1 += 1
                        rbx_1 = &rbx_1[1]
                    while (rdi_1 != rsi_4)
                    
                    rbx_1 = var_38
                
                if (rbx_1 != 0)
                    sub_140a74f90(rbx_1)
            
            rax = *(arg1 + 0x528)
            i += 1
            r15_1 = &r15_1[2]
        while (i s< *(rax + 0xa8))
        
        rbx = var_40
        r12 = var_48

if (r12 != 0)
    sub_140a74f90(r12)

return zx.q(rbx)
