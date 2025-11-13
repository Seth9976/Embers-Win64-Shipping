// 函数: sub_140ccdf20
// 地址: 0x140ccdf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax
int64_t r8
rax, r8 = GetCurrentThreadId()
*(arg1 + 0x10) = rax
bool z

if (0 == *(arg1 + 0x14))
    *(arg1 + 0x14) = 0
    z = true
else
    *(arg1 + 0x14)
    z = false

if (z)
    bool z_1
    
    do
        int64_t* rcx = *(arg1 + 0x18)
        r8.b = 1
        char rax_3
        rax_3, r8 = (*(*rcx + 0x20))(rcx, 0xf, r8)
        
        if (rax_3 != 0)
            int64_t* rcx_1 = *(arg1 + 0x18)
            (*(*rcx_1 + 0x18))(rcx_1)
            
            for (int32_t i = *(arg1 + 0x28); i s< data_143e1ae18; i = *(arg1 + 0x28))
                int64_t* rdi_1 = **(data_143e1ae10 + (sx.q(i) << 3))
                char rax_7
                
                if (*(arg1 + 8) != 0)
                    rax_7 = (*(*rdi_1 + 0x100))(rdi_1)
                
                if (*(arg1 + 8) == 0 || rax_7 != 0)
                    (**rdi_1)(rdi_1, 0)
                    sub_140d203e0(&data_143e1d658, rdi_1)
                else
                    int32_t rax_8 = sub_140a20af0()
                    uint64_t rdx_1 = zx.q(rax_8)
                    
                    if (rax_8 != 0)
                        *(*(&data_143cf0bf8 + (rdx_1 u>> 0xe << 3))
                            + (zx.q(rdx_1.d) & 0x3fff) * 0x18 + 8) = rdi_1
                        sub_1405a42f0(arg1 + 0x30, rdx_1.d)
                    else
                        *8 = rdi_1
                        sub_1405a42f0(arg1 + 0x30, rdx_1.d)
                
                *(arg1 + 0x28) += 1
                *(arg1 + 0xb8) += 1
            
            int64_t* rcx_11 = *(arg1 + 0x20)
            (*(*rcx_11 + 0x10))(rcx_11)
        
        if (0 == *(arg1 + 0x14))
            *(arg1 + 0x14) = 0
            z_1 = true
        else
            *(arg1 + 0x14)
            z_1 = false
    while (z_1)

int64_t* rcx_12 = *(arg1 + 0x20)
(*(*rcx_12 + 0x10))(rcx_12)
return 0
