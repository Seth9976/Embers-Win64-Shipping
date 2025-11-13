// 函数: sub_141bafd30
// 地址: 0x141bafd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xa0)
void** rbx = nullptr
int64_t* rsi = arg2
int32_t result_1 = 0
void** var_18 = nullptr
int32_t var_10 = 0

if (rcx != 0)
    void* rcx_1 = *(rcx + 0x130)
    
    if (rcx_1 != 0)
        void* rax = sub_141f3ba10(rcx_1)
        arg2.b = 1
        sub_141f3bc80(rax, arg2.b, &var_18)
        int64_t rbx_1 = sx.q(var_10)
        int32_t result_3 = (rbx_1 + 1).d
        
        if (result_3 s> 0)
            sub_1405a4d70(&var_18)
        
        var_18[rbx_1] = rax
        result_1 = result_3
        rbx = var_18

int64_t result = sx.q(result_1)
void* r14 = &rbx[result]

if (rbx != r14)
    do
        void* rdi_2 = *rbx
        
        if (rdi_2 != 0)
            void* rax_2 = sub_142577430()
            void* rdx_1 = *(rdi_2 + 0x10)
            result = sx.q(*(rax_2 + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38))
                int64_t result_2 = result
                result = *(rdx_1 + 0x30)
                
                if (*(result + (result_2 << 3)) == rax_2 + 0x30)
                    void* rax_3 = sub_141c20480()
                    void* rdx_2 = *(rdi_2 + 0x10)
                    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_4.d s<= *(rdx_2 + 0x38))
                        result = *(rdx_2 + 0x30)
                    
                    if (rax_4.d s> *(rdx_2 + 0x38) || *(result + (rax_4 << 3)) != rax_3 + 0x30)
                        int64_t rbp_1 = sx.q(rsi[1].d)
                        int32_t rax_5 = (rbp_1 + 1).d
                        rsi[1].d = rax_5
                        
                        if (rax_5 s> *(rsi + 0xc))
                            sub_1405a4d70(rsi)
                        
                        result = *rsi
                        *(result + (rbp_1 << 3)) = rdi_2
        
        rbx = &rbx[1]
    while (rbx != r14)
    
    rbx = var_18

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
