// 函数: sub_140a63ca0
// 地址: 0x140a63ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a6b780(arg1, 0)
DeleteCriticalSection(arg1 + 0x148)
*(arg1 + 0x140) = 0
int64_t rdi = *(arg1 + 0x138)

if (rdi != 0)
    int64_t* rcx_1 = data_143ddb3f0
    
    if (rcx_1 == 0)
        sub_140a750a0()
        rcx_1 = data_143ddb3f0
    
    (*(*rcx_1 + 0x30))(rcx_1, rdi)

sub_140a62410(arg1 + 0xf8)
DeleteCriticalSection(arg1 + 0xd0)
*(arg1 + 0xc8) = 0
int64_t rsi = *(arg1 + 0xc0)

if (rsi != 0)
    int64_t* rcx_4 = data_143ddb3f0
    
    if (rcx_4 == 0)
        sub_140a750a0()
        rcx_4 = data_143ddb3f0
    
    (*(*rcx_4 + 0x30))(rcx_4, rsi)

sub_140a62030(arg1 + 0x80)
*(arg1 + 0x78) = 0
int64_t rsi_1 = *(arg1 + 0x70)

if (rsi_1 != 0)
    int64_t* rcx_6 = data_143ddb3f0
    
    if (rcx_6 == 0)
        sub_140a750a0()
        rcx_6 = data_143ddb3f0
    
    (*(*rcx_6 + 0x30))(rcx_6, rsi_1)

int32_t result = sub_140a626d0(arg1 + 0x30)
int64_t rdi_1 = *(arg1 + 0x20)

if (rdi_1 != 0)
    int64_t* rcx_8 = data_143ddb3f0
    
    if (rcx_8 == 0)
        sub_140a750a0()
        rcx_8 = data_143ddb3f0
    
    result = (*(*rcx_8 + 0x30))(rcx_8, rdi_1)

int64_t* rcx_9 = *(arg1 + 8)

if (rcx_9 != 0)
    result = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (result == 1 && rcx_9 != 0)
        return (*(*rcx_9 + 8))(rcx_9, 1)

return result
