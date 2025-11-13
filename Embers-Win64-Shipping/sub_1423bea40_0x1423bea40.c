// 函数: sub_1423bea40
// 地址: 0x1423bea40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)

if (arg1 s<= 0 || arg2 s<= 0)
    return 0

int64_t r12 = rsi * 0x28
*(r12 + 0x1439c85e8)

if (mods.dp.d(sx.q(arg1), *(r12 + 0x1439c85e8)) == 0)
    *(r12 + &data_1439c85ec)
    
    if (mods.dp.d(sx.q(arg2), *(r12 + &data_1439c85ec)) == 0)
        void* rax_6 = sub_140cde0b0()
        uint32_t rax_9
        rax_9.b = (arg4 u>> 0x20).d == 0
        
        if ((rax_9.b & sub_140b5b8a0(arg4.d, 0)) != 0)
            sub_140d19010(rax_6, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* result = sub_140d2dfc0(sub_1425b3af0(), rax_6, arg4, 0x40, 0, 0, 0, 0, 0)
        int32_t* rax_11 = j_sub_140a82f30(0x30)
        
        if (rax_11 == 0)
            rax_11 = nullptr
        else
            __builtin_memset(&rax_11[1], 0, 0x2c)
        
        *(result + 0xd0) = rax_11
        *rax_11 = arg1
        *(*(result + 0xd0) + 4) = arg2
        *(*(result + 0xd0) + 0xc) = rsi.d
        int32_t temp0_2 = divs.dp.d(sx.q(arg1), *(r12 + 0x1439c85e8))
        int32_t temp0_3 = divs.dp.d(sx.q(arg2), *(r12 + &data_1439c85ec))
        *(r12 + &data_1439c85ec)
        int64_t* rax_20 = j_sub_140a82f30(0x30)
        int64_t* rbx_1 = rax_20
        
        if (rax_20 == 0)
            rbx_1 = rax_20
        else
            *rbx_1 = 0
            rbx_1[1].d = 0
            rbx_1[4] = 0
            rbx_1[5].d = 0
            *(rbx_1 + 0x2c) = 0
            rbx_1[2] = 0
            rbx_1[3].d = 0xffffffff
        
        void* rdi_2 = *(result + 0xd0)
        int64_t rsi_1 = sx.q(*(rdi_2 + 0x20))
        int32_t rax_21 = (rsi_1 + 1).d
        *(rdi_2 + 0x20) = rax_21
        
        if (rax_21 s> *(rdi_2 + 0x24))
            sub_140638870(rdi_2 + 0x18)
        
        *(*(rdi_2 + 0x18) + (rsi_1 << 3)) = rbx_1
        *rbx_1 = arg1
        *(rbx_1 + 4) = arg2
        sub_140bcb6b0(&rbx_1[2], 2)
        sub_140bce470(&rbx_1[2], sx.q((&data_1439c85f4)[rsi * 0xa] * temp0_3 * temp0_2))
        sub_140bd1d40(&rbx_1[2])
        return result

return nullptr
