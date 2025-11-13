// 函数: sub_1419d64e0
// 地址: 0x1419d64e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x28)
int64_t rbp = 0
void* result = &rbx[sx.q(*(arg1 + 0x30))]
uint64_t r14_1 = sx.q(*(arg1 + 0x30)) << 2 u>> 2

if (rbx u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t rsi_1 = sx.q(*rbx)
        
        if (rsi_1.d != 0xffffffff)
            EnterCriticalSection(&data_143f203f8)
            int64_t rdi_1 = sx.q(data_143f203e0)
            int32_t rax_1 = (rdi_1 + 1).d
            bool cond:0_1 = rax_1 s<= data_143f203e4
            data_143f203e0 = rax_1
            
            if (not(cond:0_1))
                sub_1405a4cf0(&data_143f203d8)
            
            *(data_143f203d8 + (rdi_1 << 2)) = rsi_1.d
            *(data_143f203e8 + (rsi_1 << 3)) = 0
            result = LeaveCriticalSection(&data_143f203f8)
        
        rbx = &rbx[1]
        rbp += 1
    while (rbp != r14_1)

*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) != 0)
    result = sub_1405dadb0(arg1 + 0x28, 0)

int32_t i_1 = *(arg1 + 0x20)
int64_t** rdi_2 = *(arg1 + 0x18)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_2
        
        if (rbx_1 != 0)
            result = zx.q(rbx_1[1].d)
            rbx_1[1].d -= 1
            
            if (result.d == 1)
                char rax_4
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_4 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
                    result = (**rbx_1)(rbx_1, 1)
                else
                    result = nullptr
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        result = zx.q(*(rbx_1 + 0xc))
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_5 = sub_140a20af0()
                        uint64_t rdx_2 = zx.q(rax_5)
                        void* const rax_6
                        
                        if (rax_5 != 0)
                            rax_6 = *(&data_143cf0bf8 + (rdx_2 u>> 0xe << 3))
                                + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                        else
                            rax_6 = nullptr
                        
                        *(rax_6 + 8) = rbx_1
                        result = sub_1405a42f0(&data_143f02390, rdx_2.d)
        
        rdi_2 = &rdi_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x20) = 0

if (*(arg1 + 0x24) == 0)
    return result

return sub_1405c5570(arg1 + 0x18, 0)
