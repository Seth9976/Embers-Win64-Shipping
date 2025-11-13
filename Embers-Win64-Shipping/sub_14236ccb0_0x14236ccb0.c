// 函数: sub_14236ccb0
// 地址: 0x14236ccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 1)
    *(arg1 + 0x78) &= 0xfffffffe
    return 

uint64_t rax = sub_140d3c6e0(arg1 + 0x48)
void* rbp = nullptr
uint64_t rbx = rax

if (rax != 0)
label_14236cd42:
    void* rax_3 = sub_1425a4180()
    void* rdx_1 = *(rbx + 0x10)
    rax = sx.q(*(rax_3 + 0x38))
    
    if (rax.d s> *(rdx_1 + 0x38))
        rbx = 0
    else if (*(*(rdx_1 + 0x30) + (rax << 3)) != rax_3 + 0x30)
        rbx = 0
else if (*(arg1 + 0x58) == 0)
    rbx = 0
else
    if (rax.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax = zx.q(data_1439aaa30)
    
    if (rax.d != *(arg1 + 0x50) || *(arg1 + 0x48) != 0xffffffff)
        void* rax_1 = sub_140d2bce0(arg1 + 0x58)
        sub_140d3a3a0(arg1 + 0x48, rax_1)
        
        if (rax_1 != 0 || data_143e1d7b4 == 0)
            int32_t rax_2 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_2 = data_1439aaa30
            
            *(arg1 + 0x50) = rax_2
        
        rax = sub_140d3c6e0(arg1 + 0x48)
        rbx = rax
        
        if (rax != 0)
            goto label_14236cd42
        
        rbx = 0
    else
        rbx = 0

*(arg1 + 0x70) = rbx

if (rbx != 0)
    if (arg5 != 0)
        int32_t rax_4 = *(rbx + 0xc)
        
        if (rax_4 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_4)
            uint32_t rdx_3 = zx.d(temp0_1)
            int32_t rax_6 = temp1_1 + rdx_3
            rbp =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18
        
        *(rbp + 8) |= 0x40000000
        rbx = *(arg1 + 0x70)
    
    sub_140d18150(rbx, arg1, 0)

*(arg1 + 0x78) &= 0xfffffffe
