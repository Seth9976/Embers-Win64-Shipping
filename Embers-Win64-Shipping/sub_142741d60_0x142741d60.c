// 函数: sub_142741d60
// 地址: 0x142741d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
int32_t* rbx = *(*arg2 + 8)
void* const rbx_1

if (rbx == 0 || *rbx != 5)
    rbx_1 = nullptr
else
    rbx_1 = *(rbx + 8)
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_1 = sub_142748e90()
        void* rdx = *(rbx_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr

int32_t rax_4 = *(rbx_1 + 0xc)
void* const rax_11

if (rax_4 s>= data_143e1d9b4)
    rax_11 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_4)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_6 = temp1_1 + rdx_2
    rax_11 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18

int32_t* result = zx.q(*(rax_11 + 8) u>> 0x1d)

if ((result.b & 1) == 0)
    void* rsi_1 = data_143f74108
    
    if (*(rbx_1 + 0xa8) == 0)
        result = sub_141ee69e0(rbx_1)
    
    if (*(rbx_1 + 0xa8) != 0 || result != 0)
        void* rax_14 = *(rbx_1 + 0xa8)
        
        if (rax_14 == 0)
            rax_14 = sub_141ee69e0(rbx_1)
        
        int32_t arg_10
        sub_1405ba560(rsi_1 + 0x18, &arg_10, *(rax_14 + 0x1f8))
        int64_t rax_15 = sx.q(arg_10)
        
        if (rax_15.d != 0xffffffff)
            rdi = (rax_15 << 5) + *(rsi_1 + 0x18)
        
        int64_t rsi_2 = sx.q(*(rdi + 0x10))
        int32_t rax_16 = (rsi_2 + 1).d
        *(rdi + 0x10) = rax_16
        
        if (rax_16 s> *(rdi + 0x14))
            sub_1408888d0(rdi + 8)
        
        return sub_142742be0((rsi_2 << 7) + *(rdi + 8), rbx_1, arg2)

return result
