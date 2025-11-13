// 函数: sub_141eb6e10
// 地址: 0x141eb6e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2
uint64_t rax = sub_140d3c6e0(arg2)
uint64_t rdx = rax

if (rax == 0 && (rdi[6] | rdi[5] | rdi[4] | rdi[3]) != 0)
    if (rax.d == data_1439a9d84)
        data_1439a9d84 = 0
    else
        rax = zx.q(data_1439a9d84)
    
    if (rax.d != rdi[2] || *rdi != 0xffffffff)
        void* rax_1 = sub_140ccdeb0(&rdi[3])
        sub_140d3a3a0(rdi, rax_1)
        
        if (rax_1 != 0 || data_143e1d7b4 == 0)
            int32_t rax_2 = 0
            
            if (0 == data_1439a9d84)
                data_1439a9d84 = 0
            else
                rax_2 = data_1439a9d84
            
            rdi[2] = rax_2
        
        rdx = sub_140d3c6e0(rdi)

int64_t rax_4 = *arg1
uint64_t arg_8 = rdx
(*(rax_4 + 0x130))(arg1, &arg_8)
return arg1
