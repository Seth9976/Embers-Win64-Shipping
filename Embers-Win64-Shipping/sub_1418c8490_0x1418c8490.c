// 函数: sub_1418c8490
// 地址: 0x1418c8490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    void* rsi_1 = *(arg1[1] + 0x1a50)
    void* rbx_1 = *(rsi_1 + 0x240)
    
    if (*(rbx_1 + 0x78) != 0)
        sub_1418c86c0(rbx_1, arg2, 0)
    
    void* rdx = *(rbx_1 + 0x70)
    
    if (rdx != 0)
        char rax_2 = *(rdx + 0x2c)
        
        if (rax_2 != 4)
            if (rax_2 == 2)
                sub_1418e06b0(rsi_1 + 0x248, rdx)
            
            sub_1418c8030(rbx_1, nullptr)

void* rbx_2 = *(arg1[2] + 0x240)

if (*(rbx_2 + 0x78) != 0)
    sub_1418c86c0(rbx_2, 0, 0)

sub_1418c8030(rbx_2, nullptr)
int64_t r15 = arg1[2]
void* rbx_3 = arg1[1]
EnterCriticalSection(&data_143efb170)
int64_t rsi_2 = sx.q(*(rbx_3 + 0x1a68))
int32_t rax_4 = (rsi_2 + 1).d
*(rbx_3 + 0x1a68) = rax_4

if (rax_4 s> *(rbx_3 + 0x1a6c))
    sub_1405a4d70(rbx_3 + 0x1a60)

*(*(rbx_3 + 0x1a60) + (rsi_2 << 3)) = r15
LeaveCriticalSection(&data_143efb170)

if (arg2 == arg3 - 1)
    int64_t* rbx_4 = *(*(arg1[1] + 0x1a50) + 0x240)
    
    if (rbx_4[0xf] != 0)
        sub_1418c86c0(rbx_4, 0, 0)
    
    void* rax_8 = rbx_4[0xe]
    
    if (rax_8 == 0 || *(rax_8 + 0x2c) == 4)
        sub_1418c2ee0(rbx_4)
        
        if (rbx_4[0xf] != 0)
            sub_1418c86c0(rbx_4, 0, 0)

jump(**arg1)
