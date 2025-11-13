// 函数: sub_141d7a3f0
// 地址: 0x141d7a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = data_143f38340

if (rax != 0)
    return rax

void*** rax_1 = j_sub_140a82f30(zx.q((&rax[5]).d))
void*** rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    rbx_1[1].b = 0
    *rbx_1 = &data_142d44d70
    
    if (data_143de5432 == 0)
        void* rcx_2 = data_143e1a338
        
        if (rcx_2 == 0)
            void* rax_2 = sub_140cde0b0()
            sub_140d19010(rax_2, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            int64_t arg_8 = 0
            void* rax_4 = sub_140d2dfc0(sub_140baa6d0(), rax_2, 0, 0, 0, 0, 0, 0, 0)
            data_143e1a338 = rax_4
            int32_t rax_5 = *(rax_4 + 0xc)
            void* const rax_12
            
            if (rax_5 s>= data_143e1d9b4)
                rax_12 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_5)
                uint32_t rdx_3 = zx.d(temp0_1)
                int32_t rax_7 = temp1_1 + rdx_3
                rax_12 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_7.w) - rdx_3) * 0x18
            
            *(rax_12 + 8) |= 0x40000000
            rcx_2 = data_143e1a338
        
        sub_140b9aa70(rcx_2, rbx_1)
        rbx_1[1].b = 1
    
    sub_1423ba590(&rbx_1[2])
    *rbx_1 = &data_143232030
    rbx_1[2] = &data_143232050
    rbx_1[3] = 0
    rbx_1[4] = 0

int64_t* rcx_10 = data_143f38340

if (rcx_10 == rbx_1)
    return rcx_10

data_143f38340 = rbx_1

if (rcx_10 == 0)
    return rbx_1

(**rcx_10)(rcx_10, 1)
return data_143f38340
