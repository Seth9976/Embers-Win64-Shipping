// 函数: sub_1424384c0
// 地址: 0x1424384c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int64_t rdx
result, rdx = sub_14221ecf0(arg1 + 0x5f0)
void* rcx_1 = *(arg1 + 0x30)

if (rcx_1 != 0)
    rdx.b = 1
    result = sub_1420e4e60(rcx_1)
    
    if (result != 0)
        int64_t rdi_1 = 0
        int64_t** var_18 = nullptr
        int32_t result_1 = 0
        void* rax = sub_14255cbc0()
        void* rbp_1
        
        if (rax == 0)
            rbp_1 = nullptr
        else
            void* rax_1 = sub_142459c10()
            
            if (rax_1 == 0)
                rbp_1 = nullptr
            else
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> *(rax + 0x38))
                    rbp_1 = nullptr
                else
                    rbp_1 = rax
                    
                    if (*(*(rax + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                        rbp_1 = nullptr
        
        int64_t* r8_1 = &var_18
        
        if (rbp_1 != sub_142459c10())
            sub_1417ea690(result, rax, r8_1)
        else
            sub_1417ea490(result, rax, r8_1)
        
        int64_t** rbx_2 = var_18
        result = sx.q(result_1)
        void* rcx_4 = &rbx_2[result]
        uint64_t rsi_5 = (rcx_4 - rbx_2 + 7) u>> 3
        
        if (rbx_2 u> rcx_4)
            rsi_5 = 0
        
        if (rsi_5 != 0)
            do
                result = sub_142188ca0(*rbx_2)
                rdi_1 += 1
                rbx_2 = &rbx_2[1]
            while (rdi_1 != rsi_5)
            
            rbx_2 = var_18
        
        if (rbx_2 != 0)
            return sub_140a74f90(rbx_2)

return result
