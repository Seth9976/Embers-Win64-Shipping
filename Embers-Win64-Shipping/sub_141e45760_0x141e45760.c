// 函数: sub_141e45760
// 地址: 0x141e45760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6_1 = sub_141e498b0(arg1, 1)
void* const rdi_1

if (arg1 == 0)
    rdi_1 = nullptr
else
    void* rdi = arg1[4]
    
    if (rdi != 0)
        void* rax_1 = sub_142591550()
        void* rdx = *(rdi + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8
            r8.b = 1
            zmm6_1 = sub_141f3e990(arg1[4], 1, r8.b)
    
    rdi_1 = arg1[0x48]
    
    if (rdi_1 == 0)
        void* rax_5 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_5
        rdi_1 = rax_5

*(rdi_1 + 0x824) = arg2
void* rsi_1 = arg1[0x4d]

if (rsi_1 != 0)
    void* rax_6 = sub_1424641d0()
    void* rdx_1 = *(rsi_1 + 0x10)
    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
    
    if (rax_7.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
        zmm6_1 = sub_141e49710(arg1, rsi_1, *(rdi_1 + 0x824), 0)

void* rdi_2 = arg1[4]

if (rdi_2 != 0)
    void* rax_9 = sub_142591550()
    void* rdx_3 = *(rdi_2 + 0x10)
    int64_t rax_10 = sx.q(*(rax_9 + 0x38))
    
    if (rax_10.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
        void* r8_3
        r8_3.b = 1
        zmm6_1 = sub_141f3e990(arg1[4], 1, r8_3.b)

void* rax_13 = arg1[0x48]

if (rax_13 == 0)
    rax_13 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_13

*(rax_13 + 0x820) = zmm6_1
int64_t* rax_14 = sub_141df83c0(arg1)

if (rax_14 != 0)
    *(rax_14 + 0x12c) = zmm6_1

return sub_141e499c0(arg1, arg4, 1) __tailcall
