// 函数: sub_140a63910
// 地址: 0x140a63910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xa8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

*(arg1 + 0x90) = 0
int64_t rsi_2 = *(arg1 + 0x88)

if (rsi_2 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, rsi_2)

void* result = sub_140681eb0(arg1 + 0x48)
int64_t rbx_1 = *(arg1 + 0x38)

if (rbx_1 != 0)
    int64_t* rcx_4 = data_143ddb3f0
    
    if (rcx_4 == 0)
        sub_140a750a0()
        rcx_4 = data_143ddb3f0
    
    result = (*(*rcx_4 + 0x30))(rcx_4, rbx_1)

int64_t rbx_2 = *(arg1 + 0x28)

if (rbx_2 != 0)
    int64_t* rcx_5 = data_143ddb3f0
    
    if (rcx_5 == 0)
        sub_140a750a0()
        rcx_5 = data_143ddb3f0
    
    result = (*(*rcx_5 + 0x30))(rcx_5, rbx_2)

int64_t rbx_3 = *(arg1 + 0x18)

if (rbx_3 != 0)
    int64_t* rcx_6 = data_143ddb3f0
    
    if (rcx_6 == 0)
        sub_140a750a0()
        rcx_6 = data_143ddb3f0
    
    result = (*(*rcx_6 + 0x30))(rcx_6, rbx_3)

int64_t rbx_4 = *(arg1 + 8)

if (rbx_4 == 0)
    return result

int64_t* rcx_7 = data_143ddb3f0

if (rcx_7 == 0)
    sub_140a750a0()
    rcx_7 = data_143ddb3f0

return (*(*rcx_7 + 0x30))(rcx_7, rbx_4)
