// 函数: sub_141b12940
// 地址: 0x141b12940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = &sub_141af0440(arg3)[1]
int64_t result = sub_140d3c6e0(r15)
void* result_1 = result

if (result == 0)
    if (*(arg1 + 0x20) == result)
        result.b = 0
        return result
    
    result = sub_142484770()
    
    if (result == 0)
        result.b = 0
        return result
    
    void* rdx = *(arg1 + 0x20)
    int64_t r8 = result + 0x30
    result = sx.q(*(result + 0x38))
    
    if (result.d s> *(rdx + 0x38))
        result.b = 0
        return result
    
    if (*(*(rdx + 0x30) + (result << 3)) != r8 || rdx == 0)
        result.b = 0
        return result
    
    void* rdi_1 = nullptr
    void** const var_48 = nullptr
    int64_t* rbp_1
    
    if (rdx == 0)
        rbp_1 = nullptr
    else
        void* rax_1 = sub_142484770()
        
        if (rax_1 == 0)
            rbp_1 = nullptr
        else
            rbp_1 = *(arg1 + 0x20)
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s> rbp_1[7].d || *(rbp_1[6] + (rax_2 << 3)) != rax_1 + 0x30)
                rbp_1 = nullptr
    
    void* rax_4 = sub_140cde0b0()
    char rax_5 = sub_140b5b8a0(0, 0)
    uint64_t rbx = var_48
    uint32_t rcx_5
    rcx_5.b = (rbx u>> 0x20).d == 0
    
    if ((rcx_5.b & rax_5) != 0)
        sub_140d19010(rax_4, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    int32_t var_78_1 = 0
    void* result_2 = sub_140d2dfc0(rbp_1, rax_4, rbx, 0, 0, 0, 0, 0, 0)
    result_1 = result_2
    
    if (result_2 != 0)
        int64_t rax_6 = data_143f2c6c0
        
        if (rax_6 == 0)
            rax_6 = sub_141a54240(&data_143f2c6c0, 0)
        
        int64_t zmm0_1 = *(arg3 + 0x24)
        var_48 = &data_1430533c0
        int32_t var_30_1 = *(arg3 + 0x2c)
        int64_t var_38 = zmm0_1
        var_78_1.b = 2
        sub_1405c5900(&arg4[0x1f], rax_6, &var_48, result_1, 2, &var_38)
        int64_t rax_8
        int512_t zmm2_1
        rax_8, zmm2_1 = sub_141b258c0(sub_141b20eb0(arg2, arg3), arg4)
        int32_t rax_9 = *(result_1 + 0xc)
        
        if (rax_9 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_9)
            uint32_t rdx_7 = zx.d(temp0_1)
            int32_t rax_11 = temp1_1 + rdx_7
            rdi_1 = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3))
                + sx.q(zx.d(rax_11.w) - rdx_7) * 0x18
        
        *(rdi_1 + 8) |= 0x40000000
        *(result_1 + 0x140) = rax_8
        uint64_t r9_1 = zx.q(*(arg1 + 0x2c))
        zmm2_1.o = *(arg1 + 0x28)
        int32_t var_30_2 = *(arg1 + 0x38)
        int64_t rax_17 = *result_1
        var_78_1.q = &var_38
        var_38 = *(arg1 + 0x30)
        (*(rax_17 + 0x270))(result_1, 0, zmm2_1, r9_1, var_78_1)
        void* rax_18 = *(result_1 + 0x150)
        
        if (rax_18 != 0)
            *(rax_18 + 0x3c) &= 0xfffffffd
    
    sub_140d3a3a0(r15, result_1)

result.b = result_1 != 0
return result
