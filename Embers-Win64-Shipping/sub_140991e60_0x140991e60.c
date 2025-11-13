// 函数: sub_140991e60
// 地址: 0x140991e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_142798920()
    void* r8 = arg2[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(r8 + 0x38) && *(*(r8 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* rbx_1 = arg2[0xa4]
        
        if (rbx_1 != 0)
            void* rbx_2 = *(rbx_1 + 0x28)
            
            if (rbx_2 != 0)
                void* rax_4 = sub_1409e98f0()
                void* rcx = *(rbx_2 + 0x10)
                int64_t rdx_1 = sx.q(*(rax_4 + 0x38))
                
                if (rdx_1.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx_1 << 3)) == rax_4 + 0x30)
                    *(rbx_2 + 0x390) = *arg3
                    *(rbx_2 + 0x3a0) = arg3[1].q
                    return rbx_2

void* rax_7 = sub_140cde0b0()
sub_140d19010(rax_7, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
void* arg_10 = nullptr
void* rax_9 = sub_140d2dfc0(sub_1409e98f0(), rax_7, 0, 0, 0, 0, 0, 0, 0)
void* rbx_4 = *(rax_9 + 0x28)
sub_1409d6480(arg1, rbx_4)
int64_t rdx_4 = data_143cede10
arg_10 = nullptr
sub_14099cb60(rbx_4 + 0x308, rdx_4, 1, &arg_10, 0)
sub_140d19010(rax_9, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_10 = nullptr
void* rax_11 = sub_140d2dfc0(sub_1409e9590(), rax_9, 0, 0, 0, 0, 0, 0, 0)
int64_t r15 = sx.q(*(rax_9 + 0x3c0))
int32_t rcx_8 = (r15 + 1).d
*(rax_9 + 0x3c0) = rcx_8

if (rcx_8 s> *(rax_9 + 0x3c4))
    sub_1405a4d70(rax_9 + 0x3b8)

*(*(rax_9 + 0x3b8) + (r15 << 3)) = rax_11
*(rax_9 + 0x3c8) = rax_11
sub_1409c4a40(rax_11, rax_9, arg2, arg3)
void* rax_13 = *(rax_9 + 0x28)

if (*(rax_13 + 8) != *(rax_13 + 0x34))
    return rax_9

arg_10 = rax_11
sub_1409d7d20(rax_9 + 0x3b8, &arg_10)
int32_t rax_15 = *(rax_11 + 0xc)
void* const rax_22

if (rax_15 s>= data_143e1d9b4)
    rax_22 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_15)
    uint32_t rdx_11 = zx.d(temp0_1)
    int32_t rax_17 = temp1_1 + rdx_11
    rax_22 = *(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3)) + sx.q(zx.d(rax_17.w) - rdx_11) * 0x18

*(rax_22 + 8) |= 0x20000000
int32_t rax_23 = *(rax_9 + 0xc)
void* const rax_30

if (rax_23 s>= data_143e1d9b4)
    rax_30 = nullptr
else
    int16_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_23)
    uint32_t rdx_14 = zx.d(temp2_1)
    int32_t rax_25 = temp3_1 + rdx_14
    rax_30 = *(data_143e1d9a0 + (sx.q(rax_25 s>> 0x10) << 3)) + sx.q(zx.d(rax_25.w) - rdx_14) * 0x18

*(rax_30 + 8) |= 0x20000000
return nullptr
