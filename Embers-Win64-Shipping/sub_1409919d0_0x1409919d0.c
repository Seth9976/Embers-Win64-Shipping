// 函数: sub_1409919d0
// 地址: 0x1409919d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_1425b0750()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* rbx_1 = *(arg2 + 0x440)
        
        if (rbx_1 != 0)
            void* rbx_2 = *(rbx_1 + 0x128)
            
            if (rbx_2 != 0)
                void* rax_4 = sub_1409e98f0()
                void* rcx_1 = *(rbx_2 + 0x10)
                int64_t rdx_1 = sx.q(*(rax_4 + 0x38))
                
                if (rdx_1.d s<= *(rcx_1 + 0x38)
                        && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == rax_4 + 0x30)
                    *(rbx_2 + 0x390) = *arg3
                    *(rbx_2 + 0x3a0) = arg3[1].q
                    return rbx_2

void* rax_7 = sub_140cde0b0()
sub_140d19010(rax_7, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
void* arg_10 = nullptr
void* rax_9 = sub_140d2dfc0(sub_1409e98f0(), rax_7, 0, 0, 0, 0, 0, 0, 0)
void* rdi = *(rax_9 + 0x28)
void** const var_38 = &data_142e3fa48
void* var_30 = rdi
sub_141cef460(&var_38)
sub_14099c9d0(rdi + 0x2b0, data_143f36130, 1, &data_143dbb1f8, 8)
sub_14099c9d0(rdi + 0x2b0, data_143f36138, 1, &data_143dbb1f8, 8)
sub_14099c9d0(rdi + 0x2b0, data_143f36140, 1, &data_143dbb1f8, 8)
sub_14099c9d0(rdi + 0x2b0, data_143f36148, 1, &data_143dbb1f8, 8)
int64_t rdx_7 = data_143cede10
arg_10 = nullptr
sub_14099cb60(rdi + 0x308, rdx_7, 1, &arg_10, 0)
arg_10.b = 0
sub_14099ccf0(rdi + 0x308, data_143f36158, 1, &arg_10, 0)
arg_10.b = 0
sub_14099ccf0(rdi + 0x308, data_143f36160, 1, &arg_10, 0)
sub_140d19010(rax_9, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_10 = nullptr
void* rax_11 = sub_140d2dfc0(sub_1409f10a0(), rax_9, 0, 0, 0, 0, 0, 0, 0)
int64_t r15 = sx.q(*(rax_9 + 0x3c0))
int32_t rcx_15 = (r15 + 1).d
*(rax_9 + 0x3c0) = rcx_15

if (rcx_15 s> *(rax_9 + 0x3c4))
    sub_1405a4d70(rax_9 + 0x3b8)

*(*(rax_9 + 0x3b8) + (r15 << 3)) = rax_11
*(rax_9 + 0x3c8) = rax_11
sub_1409c59f0(rax_11, rax_9, arg2, arg3)
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
    uint32_t rdx_16 = zx.d(temp0_1)
    int32_t rax_17 = temp1_1 + rdx_16
    rax_22 = *(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3)) + sx.q(zx.d(rax_17.w) - rdx_16) * 0x18

*(rax_22 + 8) |= 0x20000000
int32_t rax_23 = *(rax_9 + 0xc)
void* const rax_30

if (rax_23 s>= data_143e1d9b4)
    rax_30 = nullptr
else
    int16_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_23)
    uint32_t rdx_19 = zx.d(temp2_1)
    int32_t rax_25 = temp3_1 + rdx_19
    rax_30 = *(data_143e1d9a0 + (sx.q(rax_25 s>> 0x10) << 3)) + sx.q(zx.d(rax_25.w) - rdx_19) * 0x18

*(rax_30 + 8) |= 0x20000000
return nullptr
