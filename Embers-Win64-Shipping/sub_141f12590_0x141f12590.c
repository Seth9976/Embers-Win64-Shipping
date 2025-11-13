// 函数: sub_141f12590
// 地址: 0x141f12590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t* i = data_143f3af10; i != &i[sx.q(data_143f3af18)]; i = &i[1])
    void* const rax_24 = *i
    
    if (*(rax_24 + 0x18) == arg1)
        return rax_24

if (arg2 == 0)
    return nullptr

int64_t arg_18

if (data_143f3af20 == 0)
    void*** rax_1 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_1 != 0)
        *rax_1 = &data_142ddc6a8
        rax_1[1] = sub_141f20cc0
        rax_1[3] = sub_140a387b0()
        *rax_1 = &data_142ddc700
    
    int64_t rbx_1 = 0
    
    if (rax_1 != 0)
        sub_140599630(&data_143a306c8, 1)
        int64_t* rax_4 = (*rax_1)[6](rax_1, &arg_18)
        int64_t rsi_1 = sx.q(data_143a306d0)
        rbx_1 = *rax_4
        int32_t rax_5 = (rsi_1 + 1).d
        bool cond:1_1 = rax_5 s<= data_143a306d4
        data_143a306d0 = rax_5
        
        if (not(cond:1_1))
            sub_1405a4f90(&data_143a306c8)
        
        void**** rax_8 = (rsi_1 << 4) + data_143a306c8
        *rax_8 = rax_1
        rax_8[1].d = 2
    
    data_143f3af20 = rbx_1

void*** rax_9 = j_sub_140a82f30(0x30)
void*** rdi_2 = rax_9

if (rax_9 == 0)
    rdi_2 = nullptr
else
    sub_1423ba590(rax_9)
    rdi_2[2].b = 0
    rdi_2[1] = &data_142d44d70
    
    if (data_143de5432 == 0)
        void* rcx_2 = data_143e1a338
        
        if (rcx_2 == 0)
            void* rax_10 = sub_140cde0b0()
            sub_140d19010(rax_10, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            arg_18 = 0
            void* rax_12 = sub_140d2dfc0(sub_140baa6d0(), rax_10, 0, 0, 0, 0, 0, 0, 0)
            data_143e1a338 = rax_12
            int32_t rax_13 = *(rax_12 + 0xc)
            void* const rax_20
            
            if (rax_13 s>= data_143e1d9b4)
                rax_20 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_13)
                uint32_t rdx_5 = zx.d(temp0_1)
                int32_t rax_15 = temp1_1 + rdx_5
                rax_20 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_15.w) - rdx_5) * 0x18
            
            *(rax_20 + 8) |= 0x40000000
            rcx_2 = data_143e1a338
        
        sub_140b9aa70(rcx_2, &rdi_2[1])
        rdi_2[2].b = 1
    
    rdi_2[3] = arg1
    *rdi_2 = &data_14326b620
    rdi_2[1] = &data_14326b660
    rdi_2[4] = 0
    rdi_2[5] = 0

int64_t rbx_3 = sx.q(data_143f3af18)
int32_t rax_21 = (rbx_3 + 1).d
bool cond:2 = rax_21 s<= data_143f3af1c
data_143f3af18 = rax_21

if (not(cond:2))
    sub_1405a4d70(&data_143f3af10)

*(data_143f3af10 + (rbx_3 << 3)) = rdi_2
return rdi_2
