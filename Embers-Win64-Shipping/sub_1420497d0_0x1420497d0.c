// 函数: sub_1420497d0
// 地址: 0x1420497d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[0x14].d s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rdi_2 = arg1[0x13] + r14_1
        void* rcx = *rdi_2
        
        if (rcx != 0)
            int32_t rax_1 = 0
            
            if (0 == *(rcx + 8))
                *(rcx + 8) = 0
            else
                rax_1 = *(rcx + 8)
            
            if (rax_1 == 1)
                void* rsi_1 = *rdi_2
                
                if (*(rsi_1 + 0x11) != 0)
                    if (data_143f0f1c7 != 0)
                        int64_t* rcx_1 = data_143f0f180
                        (*(*rcx_1 + 0x630))(rcx_1, rsi_1)
                    
                    *(rsi_1 + 0x11) = 0
        
        rdi_2[3].d = 0
        sub_1405d16e0(rdi_2, nullptr)
        sub_1405d16e0(&rdi_2[1], nullptr)
        sub_1405d16e0(&rdi_2[2], nullptr)
        i += 1
        r14_1 += 0x20
    while (i s< arg1[0x14].d)

while (arg1[0xf].d s> 0)
    sub_142065460(*(arg1[0xe] + (sx.q(arg1[0xf].d) << 3) - 8))

sub_14117b490(&arg1[0x13])
int64_t rcx_8 = arg1[0xe]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0xc]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[0xb].d = 0
int64_t rcx_10 = arg1[0xa]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405a5410(&arg1[2], 0)

arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
void* result = sub_14059a8e0(&arg1[4], 0)
int64_t rcx_13 = arg1[6]

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[2]

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = *arg1

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15) __tailcall
