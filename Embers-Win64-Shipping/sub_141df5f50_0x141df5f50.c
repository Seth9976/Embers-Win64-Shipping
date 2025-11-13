// 函数: sub_141df5f50
// 地址: 0x141df5f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[4]

if (rsi != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rsi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        void* r8_1
        
        if (data_143de5480 != 0)
            rax_4, r8_1 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)

void* rbp = arg1[0x48]

if (rbp == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rbp = rax_6

void* rbx_1 = arg2[4]

if (rbx_1 != 0)
    void* rax_7 = sub_142591550()
    void* rdx_1 = *(rbx_1 + 0x10)
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rax_8.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
        uint32_t rax_10
        void* r8_2
        
        if (data_143de5480 != 0)
            rax_10, r8_2 = GetCurrentThreadId()
            rax_10.b = rax_10 == data_143de5470
        
        if (data_143de5480 == 0 || rax_10.b != 0)
            r8_2.b = 1
            sub_141f3e990(arg2[4], 1, r8_2.b)

int64_t rsi_1 = arg2[0x48]

if (rsi_1 == 0)
    int64_t rax_12 = (*(*arg2 + 0x300))(arg2)
    arg2[0x48] = rax_12
    rsi_1 = rax_12

int64_t* rbx_2 = rbp + 0x2f8
int64_t i_1 = 3
int64_t* result
int64_t i

do
    result = sub_1405cd980(rbx_2, rsi_1 - rbp + rbx_2)
    rbx_2 = &rbx_2[0xa]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
