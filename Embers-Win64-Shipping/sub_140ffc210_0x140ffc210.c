// 函数: sub_140ffc210
// 地址: 0x140ffc210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f224 != 0)
    EnterCriticalSection(arg1 + 0x13898)

void* rdi = arg1 + 0x10
int64_t i_1 = 0x2710
int64_t i

do
    int64_t* rbx_1 = *rdi
    *rdi = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_1
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_1 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_1)
    
    rdi += 8
    i = i_1
    i_1 -= 1
while (i != 1)

if (data_143f0f224 != 0)
    LeaveCriticalSection(arg1 + 0x13898)
