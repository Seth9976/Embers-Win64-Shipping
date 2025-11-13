// 函数: sub_140588b40
// 地址: 0x140588b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2 = ((arg1[1] - *arg1) s>> 3).d

if (rax_2 s> 0)
    int64_t i = 0
    
    do
        int64_t rax_7 = *arg1
        int64_t* rbx_1 = *(rax_7 + (i << 3))
        
        if (rbx_1 != 0)
            sub_14058caa0(rbx_1)
            void* rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                if ((rbx_1[2] - rcx_1) s>> 3 << 3 u>= 0x1000)
                    void* r8_1 = *(rcx_1 - 8)
                    
                    if (rcx_1 - r8_1 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                    
                    rcx_1 = r8_1
                
                j_sub_140a74f90(rcx_1)
                __builtin_memset(rbx_1, 0, 0x18)
            
            j_sub_140a74f90(rbx_1)
            rax_7 = *arg1
        
        *(rax_7 + (i << 3)) = 0
        i += 1
    while (i s< sx.q(rax_2))

sub_14058a280(arg1, 1)
int64_t* rax_8 = j_sub_140a82f30(0x18)
int64_t* rbx_2 = rax_8
int64_t* arg_8 = rax_8

if (rax_8 == 0)
    rbx_2 = nullptr
else
    __builtin_memset(rax_8, 0, 0x18)
    sub_14058d720(rax_8, 0x3e8)

**arg1 = rbx_2
arg1[9].b = 0
int64_t result = arg1[0xa]
arg1[0xb] = result
*(arg1 + 0x1c) = 0
arg1[4].d = 1
return result
